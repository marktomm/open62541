#include "callbacks.h"
#include <stdio.h>

// DO control callback
UA_StatusCode controlMethodCallbackDigital(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output) 
{
    UA_Byte *inputByte = (UA_Byte*)input->data;
    lcbc_ctrl_ctx *context = (lcbc_ctrl_ctx*)methodContext;

    if(context == NULL) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackDigital | context unset");
        return UA_STATUSCODE_BADWAITINGFORINITIALDATA;
    }

    /// get manual override value
    UA_Variant manualOverrideVariant;
    UA_Server_readValue(server, UA_NODEID_NUMERIC(context->NameSpaceIndex, ManualOverrideState_ID), &manualOverrideVariant);
    UA_Byte *manualOverrideVal = (UA_Byte*)manualOverrideVariant.data;
    
    if(*manualOverrideVal != 2) { /// first check if manual override is on
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackDigital | manual override is not active (2), man override ns: %d id: %d val: %d", 
                                                            context->NameSpaceIndex, ManualOverrideState_ID, *manualOverrideVal);
        return UA_STATUSCODE_BADUSERACCESSDENIED;
    } else if(*inputByte < 1 || *inputByte > 2) { /// check input value
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackDigital | input invalid, must be 1 or 2, val: %d", *inputByte);
        return UA_STATUSCODE_BADOUTOFRANGE;
    } else { /// all ok
        UA_NodeId stateVarNodeId = UA_NODEID_NUMERIC(context->NameSpaceIndex, context->StateVarNodeId);
        UA_Byte stateNum = *inputByte;

        UA_Variant stateVal;
        UA_Variant_init(&stateVal);
        UA_Variant_setScalar(&stateVal, &stateNum, &UA_TYPES[UA_TYPES_BYTE]);
        UA_Server_writeValue(server, stateVarNodeId, stateVal);

        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackDigital | was called %d, ctx: %d, manual override: %d, manual override type: %d", 
            *inputByte, 
            context->StateVarNodeId, 
            *manualOverrideVal, 
            manualOverrideVariant.type->typeId.identifier.numeric);

        return UA_STATUSCODE_GOOD;
    }
}

// ManualOverrideControl callback
UA_StatusCode controlMethodCallbackManual(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output) 
{
    UA_Byte *inputByte = (UA_Byte*)input->data;
    lcbc_ctrl_ctx *context = (lcbc_ctrl_ctx*)methodContext;

    if(*inputByte < 1 || *inputByte > 2) { /// check input value
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackManual | input invalid, must be 1 or 2, val: %d", *inputByte);
        return UA_STATUSCODE_BADOUTOFRANGE;
    } else { /// all ok
        UA_NodeId stateVarNodeId = UA_NODEID_NUMERIC(context->NameSpaceIndex, context->StateVarNodeId);
        UA_Byte stateNum = *inputByte;

        UA_Variant stateVal;
        UA_Variant_init(&stateVal);
        UA_Variant_setScalar(&stateVal, &stateNum, &UA_TYPES[UA_TYPES_BYTE]);
        UA_Server_writeValue(server, stateVarNodeId, stateVal);

        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackManual | was called %d, ctx: %d", 
            *inputByte, 
            context->StateVarNodeId);

        return UA_STATUSCODE_GOOD;
    }
}

// Rules
UA_StatusCode RuleMethodCallbackDigital(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output) 
{
    lcbc_ctrl_ctx* context = (lcbc_ctrl_ctx*) methodContext;
    int argCnt = context->ArgumentCount;

    if(input->arrayLength != argCnt) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital | Expected %d nr of args, got %lu", argCnt, input->arrayLength);
        return input->arrayLength < argCnt ? UA_STATUSCODE_BADTOOMANYARGUMENTS : UA_STATUSCODE_BADARGUMENTSMISSING ; 
    }

    if( UA_NodeId_isNull(&(context->DiagnosticsNodeId)) ) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital | context not set");
        return UA_STATUSCODE_BADWAITINGFORINITIALDATA;
    }

    UA_Double* inputArgs = input->data;

    UA_Int32 ruleId = (UA_Int32)inputArgs[0];
    // UA_Int32 ctrlId = (UA_Int32)inputArgs[1];
    // UA_Int32 startTime = (UA_Int32)inputArgs[2];
    // UA_Int32 endTime = (UA_Int32)inputArgs[3];
    /// Success: all arguments checks are correct



    /// Create an entry in RuleDiagnostics

    /// First find RuleDiagnosticsEntry TypeDef NodeId
    UA_NodeId ObjectType_NodeId;
    {
        UA_RelativePathElement rpe;
        UA_RelativePathElement_init(&rpe);
        rpe.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE);
        rpe.isInverse = false;
        rpe.includeSubtypes = false;
        rpe.targetName = UA_QUALIFIEDNAME(LCBC1_NAMESPACE, "MartemRuleDiagnosticsEntryType");

        UA_BrowsePath bp;
        UA_BrowsePath_init(&bp);
        bp.startingNode = UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE); /// Start @ Root->Types->VariableTypes->BaseVariableType->BaseDataVariableType
        bp.relativePath.elementsSize = 1;
        bp.relativePath.elements = &rpe;

        UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);

        if(bpr.statusCode != UA_STATUSCODE_GOOD || bpr.targetsSize < 1) {
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital | Find the right TypeDefNode (MartemRuleDiagnosticsEntryType) failed: %s", UA_StatusCode_name(bpr.statusCode));
            return (int)bpr.statusCode;
        } 

        /// get what is found
        UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, &ObjectType_NodeId);

        UA_BrowsePathResult_deleteMembers(&bpr);
    }

    UA_StatusCode addNode_Status = UA_STATUSCODE_GOOD;
    UA_NodeId entryId;

    char ruleEntryString[100];
    snprintf(ruleEntryString, 100, "Rule_%d", ruleId);

    UA_VariableAttributes ruleDiagnosticsEntryAttr = UA_VariableAttributes_default;
    ruleDiagnosticsEntryAttr.displayName = UA_LOCALIZEDTEXT("en-US", ruleEntryString);
    ruleDiagnosticsEntryAttr.valueRank = -1;
    addNode_Status |= UA_Server_addVariableNode(server, 
                            UA_NODEID_NULL, /// new NodeId in
                            context->DiagnosticsNodeId, /// Parent NodeId
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT), /// ReferenceType
                            UA_QUALIFIEDNAME(LCBC1_NAMESPACE, ruleEntryString), /// BrowseName
                            ObjectType_NodeId, /// TypeDef
                            ruleDiagnosticsEntryAttr,  /// Attr
                            NULL, /// NodeCtx
                            &entryId /// new NodeId out
                            );

    if(addNode_Status != UA_STATUSCODE_GOOD) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital | addNode_Status failed: %s", UA_StatusCode_name(addNode_Status));
        return addNode_Status;
    }

    /// find InpoutArguments Property NodeId in newly created Rule entry
    UA_NodeId InputArgumentsNodeId;
    {
        UA_RelativePathElement rpe;
        UA_RelativePathElement_init(&rpe);
        rpe.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY);
        rpe.isInverse = false;
        rpe.includeSubtypes = false;
        rpe.targetName = UA_QUALIFIEDNAME(LCBC1_NAMESPACE, "InputArguments");

        UA_BrowsePath bp;
        UA_BrowsePath_init(&bp);
        bp.startingNode = entryId;
        bp.relativePath.elementsSize = 1;
        bp.relativePath.elements = &rpe;

        UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);

        if(bpr.statusCode != UA_STATUSCODE_GOOD || bpr.targetsSize < 1) {
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital | UA_Server_translateBrowsePathToNodeIds failed: %s", UA_StatusCode_name(bpr.statusCode));
            UA_BrowsePathResult_deleteMembers(&bpr);
            return (int)bpr.statusCode;
        }

        
        UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, &InputArgumentsNodeId);
        UA_BrowsePathResult_deleteMembers(&bpr);
    }

    /// add input arguments to InputArguments in new Rule entry
    UA_StatusCode addInputArgsRetVal = UA_STATUSCODE_GOOD;
    UA_Double args[argCnt];

    for(int i = 0; i< argCnt; ++i) {
        args[i] = inputArgs[i];
    }

    UA_Variant argVar;
    UA_Variant_init(&argVar);
    UA_Variant_setArray(&argVar, args, argCnt, &UA_TYPES[UA_TYPES_DOUBLE]);    
    addInputArgsRetVal = UA_Server_writeValue(server, InputArgumentsNodeId, argVar);

    if(addInputArgsRetVal != UA_STATUSCODE_GOOD) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital | addInputArgsRetVal failed: %s", UA_StatusCode_name(addInputArgsRetVal));
        return addInputArgsRetVal;
    }

    return UA_STATUSCODE_GOOD;
}