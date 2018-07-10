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
        LOG_INFO("controlMethodCallbackDigital | context unset");
        return UA_STATUSCODE_BADWAITINGFORINITIALDATA;
    }

    /// get manual override value
    UA_Variant manualOverrideVariant;
    UA_Server_readValue(server, UA_NODEID_NUMERIC(context->NameSpaceIndex, ManualOverrideState_ID), &manualOverrideVariant);
    UA_Byte *manualOverrideVal = (UA_Byte*)manualOverrideVariant.data;
    
    if(*manualOverrideVal != 2) { /// first check if manual override is on
        LOG_INFO("controlMethodCallbackDigital | manual override is not active (2), man override ns: %d id: %d val: %d", 
                                                            context->NameSpaceIndex, ManualOverrideState_ID, *manualOverrideVal);
        return UA_STATUSCODE_BADUSERACCESSDENIED;
    } else if(*inputByte < 1 || *inputByte > 2) { /// check input value
        LOG_INFO("controlMethodCallbackDigital | input invalid, must be 1 or 2, val: %d", *inputByte);
        return UA_STATUSCODE_BADOUTOFRANGE;
    } else { /// all ok
        UA_NodeId stateVarNodeId = UA_NODEID_NUMERIC(context->NameSpaceIndex, context->StateVarNodeId);
        UA_Byte stateNum = *inputByte;
        
        // check statenum for boundaries and set flags
        UA_NodeId stateVarFlagsNodeId;
        UA_NodeId stateVarAlarmLowNodeId;
        UA_NodeId stateVarAlarmHighNodeId;
        UA_StatusCode ret = TranslateBrowsePathToNodeIds(server, &stateVarAlarmLowNodeId, UA_NS0ID_HASPROPERTY, LCBC1_NAMESPACE, "AlarmLow", stateVarNodeId);
        if(ret != UA_STATUSCODE_GOOD) {
            LOG_ERROR("Unable to get AlarmLow Property for Variable ID %d", stateVarNodeId.identifier.numeric);
            goto write_value;
        } 

        ret = TranslateBrowsePathToNodeIds(server, &stateVarAlarmHighNodeId, UA_NS0ID_HASPROPERTY, LCBC1_NAMESPACE, "AlarmHigh", stateVarNodeId);
        if(ret != UA_STATUSCODE_GOOD) {
            LOG_ERROR("Unable to get AlarmHigh Property for Variable ID %d", stateVarNodeId.identifier.numeric);
            goto write_value;
        } 

        ret = TranslateBrowsePathToNodeIds(server, &stateVarFlagsNodeId, UA_NS0ID_HASPROPERTY, LCBC1_NAMESPACE, "Flags", stateVarNodeId);

        if(ret != UA_STATUSCODE_GOOD) {
            LOG_ERROR("Unable to get Flags Property for Variable ID %d", stateVarNodeId.identifier.numeric);
        } else {
            UA_Variant flagsValue;
            UA_Variant alarmLowValue;
            UA_Variant alarmHighValue;
            // UA_Variant stateVarValue;

            ret = UA_Server_readValue(server, stateVarFlagsNodeId, &flagsValue);
            ret |= UA_Server_readValue(server, stateVarAlarmLowNodeId, &alarmLowValue);
            ret |= UA_Server_readValue(server, stateVarAlarmHighNodeId, &alarmHighValue);
            // ret |= UA_Server_readValue(server, stateVarNodeId, &stateVarValue);


            if(ret != UA_STATUSCODE_GOOD) {
                LOG_ERROR("Unable to read Property values");
                goto write_value;
            }

            UA_UInt32 flags = *(UA_Byte*)(flagsValue.data);
            UA_Double aLoDbl = *(UA_Double*)(alarmLowValue.data); int aLo = (int) aLoDbl;
            UA_Double aHiDbl = *(UA_Double*)(alarmHighValue.data); int aHi = (int) aHiDbl;
            UA_Byte value = stateNum;

            UA_Byte boolSetFlags = 0;
            UA_UInt32 flagsToSet = flags;

            if(aLo != 0) {
                LOG_INFO("Alarm low set to %d", aLo);
                if(aLo >= value) {
                    LOG_INFO("Value hit AlarmLow %d %d", aLo, value);
                    if(flags & FLAG_ALO) {
                        LOG_INFO("Flag is up for AlarmLow already");
                    } else {
                        LOG_INFO("Set flag for AlarmLow");
                        boolSetFlags = 1;
                        flagsToSet |= FLAG_ALO;
                    }
                } else {
                    LOG_INFO("Value lower that AlarmLow threshold %d %d", aLo, value);
                    if(flags & FLAG_ALO) {
                        boolSetFlags = 1;
                        flagsToSet = (flagsToSet & ~(1<<FLAG_ALO_BIT));
                        LOG_INFO("Remove flag for AlarmLow. flags now %d", (int)flagsToSet);
                    } else {
                        LOG_INFO("AlarmLow not set already");
                    }
                }
            }

            if(aHi != 0) {
                LOG_INFO("Alarm high set to %d", aHi);
                if(aHi <= value) {
                    LOG_INFO("Value hit AlarmHigh %d %d", aHi, value);
                    if(flags & FLAG_AHI) {
                        LOG_INFO("Flag is up for AlarmHigh already");
                    } else {
                        LOG_INFO("Set flag for AlarmHigh");
                        boolSetFlags = 1;
                        flagsToSet |= FLAG_AHI;
                    }
                } else {
                    LOG_INFO("Value lower that AlarmHigh threshold %d %d", aHi, value);
                    if(flags & FLAG_AHI) {
                        boolSetFlags = 1;
                        flagsToSet = (flagsToSet & ~(1<<FLAG_AHI_BIT));
                        LOG_INFO("Remove flag for AlarmHigh. flags now %d", (int)flagsToSet);
                    } else {
                        LOG_INFO("AlarmHigh not set already");
                    }
                }
            }  

            if(boolSetFlags) {
                UA_Variant flagsToSetVariant;
                UA_Variant_init(&flagsToSetVariant);
                UA_Variant_setScalar(&flagsToSetVariant, &flagsToSet, &UA_TYPES[UA_TYPES_UINT32]);
                UA_Server_writeValue(server, stateVarFlagsNodeId, flagsToSetVariant);
            }
        }

write_value: ;

        UA_Variant stateVal;
        UA_Variant_init(&stateVal);
        UA_Variant_setScalar(&stateVal, &stateNum, &UA_TYPES[UA_TYPES_BYTE]);
        UA_Server_writeValue(server, stateVarNodeId, stateVal);

        LOG_INFO("controlMethodCallbackDigital | was called %d, ctx: %d, manual override: %d, manual override type: %d", 
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
        LOG_INFO("controlMethodCallbackManual | input invalid, must be 1 or 2, val: %d", *inputByte);
        return UA_STATUSCODE_BADOUTOFRANGE;
    } else { /// all ok
        UA_NodeId stateVarNodeId = UA_NODEID_NUMERIC(context->NameSpaceIndex, context->StateVarNodeId);
        UA_Byte stateNum = *inputByte;

        // check statenum for boundaries and set flags

        UA_Variant stateVal;
        UA_Variant_init(&stateVal);
        UA_Variant_setScalar(&stateVal, &stateNum, &UA_TYPES[UA_TYPES_BYTE]);
        UA_Server_writeValue(server, stateVarNodeId, stateVal);

        LOG_INFO("controlMethodCallbackManual | was called %d, ctx: %d", 
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
        LOG_INFO("RuleMethodCallbackDigital | Expected %d nr of args, got %lu", argCnt, input->arrayLength);
        return input->arrayLength < argCnt ? UA_STATUSCODE_BADTOOMANYARGUMENTS : UA_STATUSCODE_BADARGUMENTSMISSING ; 
    }

    if( UA_NodeId_isNull(&(context->DiagnosticsNodeId)) ) {
        LOG_INFO("RuleMethodCallbackDigital | context not set");
        return UA_STATUSCODE_BADWAITINGFORINITIALDATA;
    }

    UA_Double* inputArgs = input->data;

    UA_Int32 ruleId = (UA_Int32)inputArgs[0];
    // UA_Int32 ctrlId = (UA_Int32)inputArgs[1];
    // UA_Int32 startTime = (UA_Int32)inputArgs[2];
    // UA_Int32 endTime = (UA_Int32)inputArgs[3];
    /// Success: all arguments checks are correct



    /// Create an entry in RuleDiagnostics
    UA_StatusCode addNode_Status = UA_STATUSCODE_GOOD;

    /// First find RuleDiagnosticsEntry TypeDef NodeId
    UA_NodeId ObjectType_NodeId;
    addNode_Status |= TranslateBrowsePathToNodeIds(server, &ObjectType_NodeId, UA_NS0ID_HASSUBTYPE, LCBC1_NAMESPACE, "MartemRuleDiagnosticsEntryType", UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE));

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
        LOG_INFO("RuleMethodCallbackDigital | addNode_Status failed: %s", UA_StatusCode_name(addNode_Status));
        return addNode_Status;
    }

    /// find InpoutArguments Property NodeId in newly created Rule entry
    UA_NodeId InputArgumentsNodeId;
    addNode_Status |= TranslateBrowsePathToNodeIds(server, &InputArgumentsNodeId, UA_NS0ID_HASPROPERTY, LCBC1_NAMESPACE, "InputArguments", entryId);

    if(addNode_Status != UA_STATUSCODE_GOOD) {
        LOG_INFO("RuleMethodCallbackDigital | TranslateBrowsePathToNodeIds failed: %s", UA_StatusCode_name(addNode_Status));
        return addNode_Status;
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
        LOG_INFO("RuleMethodCallbackDigital | addInputArgsRetVal failed: %s", UA_StatusCode_name(addInputArgsRetVal));
        return addInputArgsRetVal;
    }

    /// output
    UA_Boolean out = true;
    UA_Variant_setScalarCopy(output, &out, &UA_TYPES[UA_TYPES_BOOLEAN]);

    return UA_STATUSCODE_GOOD;
}

// Rules
UA_StatusCode RuleRemoveMethodCallbackDigital(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output) 
{
    /// get ctx to local
    lcbc_ctrl_ctx* context = (lcbc_ctrl_ctx*) methodContext;
    int argCnt = context->ArgumentCount;
    UA_NodeId diagnosticsNodeId = context->DiagnosticsNodeId;

    /// invariants
    if(input->arrayLength != argCnt) {
        LOG_INFO("RuleRemoveMethodCallbackDigital | Expected %d nr of args, got %lu", argCnt, input->arrayLength);
        return input->arrayLength < argCnt ? UA_STATUSCODE_BADTOOMANYARGUMENTS : UA_STATUSCODE_BADARGUMENTSMISSING ; 
    }

    if( UA_NodeId_isNull(&diagnosticsNodeId) ) {
        LOG_INFO("RuleRemoveMethodCallbackDigital | context not set");
        return UA_STATUSCODE_BADWAITINGFORINITIALDATA;
    }
    /// invariants

    /// get input
    UA_Double* inputArgs = input->data;
    UA_Int32 ruleId = (UA_Int32)inputArgs[0];

    /// Remove entry in RuleDiagnostics
    UA_StatusCode remNode_Status = UA_STATUSCODE_GOOD;

    /// Find Rule to remove
    char ruleEntryString[100];
    snprintf(ruleEntryString, 100, "Rule_%d", ruleId);

    UA_NodeId ruleEntry_NodeId;
    remNode_Status |= TranslateBrowsePathToNodeIds(server, &ruleEntry_NodeId, UA_NS0ID_HASCOMPONENT, LCBC1_NAMESPACE, ruleEntryString, diagnosticsNodeId);
    if(remNode_Status != UA_STATUSCODE_GOOD) {
        LOG_INFO("RuleRemoveMethodCallbackDigital | unable to find: %s, status: %s", ruleEntryString, UA_StatusCode_name(remNode_Status));
        return remNode_Status;
    }

    remNode_Status |= UA_Server_deleteNode(server, ruleEntry_NodeId, true);

    if(remNode_Status != UA_STATUSCODE_GOOD) {
        LOG_INFO("RuleRemoveMethodCallbackDigital | UA_Server_deleteNode failed: %s", UA_StatusCode_name(remNode_Status));
        return remNode_Status;
    }

    /// output
    UA_Boolean out = true;
    UA_Variant_setScalarCopy(output, &out, &UA_TYPES[UA_TYPES_BOOLEAN]);

    return UA_STATUSCODE_GOOD;
}