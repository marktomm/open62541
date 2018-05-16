#include "gen/lcbc_object_feeder1.h"

#include <signal.h>
#include <stdio.h>

#define MARTEM_NS 2

/* ID was arbitrarily set by GUI modeler */
static const UA_UInt32 LcbcFolderNumericId = 5002;
static const UA_NodeId LcbcFolderNodeId = {MARTEM_NS, UA_NODEIDTYPE_NUMERIC, {5002}};

static UA_NodeId RulesObjectInLcbcFolderNodeId;
static UA_NodeId RuleDiagnosticsInLcbcFolderNodeId;

static const UA_UInt32 ruleDiagnosticsEntryTypeNumericId = 30003;
static const UA_NodeId ruleDiagnosticsEntryTypeNodeId = {MARTEM_NS, UA_NODEIDTYPE_NUMERIC, {30003}};

// static const UA_UInt32 inputArgumentsNumericId = 30004;
// static const UA_NodeId inputArgumentsNodeId = {MARTEM_NS, UA_NODEIDTYPE_NUMERIC, {30004}};

// Rules
static UA_StatusCode RuleMethodCallbackDigital(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output) 
{
    int* argCnt = (int*)methodContext;

    if(input->arrayLength != *argCnt) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital: Expected %d nr of args, got %lu", *argCnt, input->arrayLength);
    }

    /// Success: all arguments checks are correct

    UA_Double* inputArgs = input->data;

    UA_Int32 ruleId = (UA_Int32)inputArgs[0];
    // UA_Int32 ctrlId = (UA_Int32)inputArgs[1];
    // UA_Int32 startTime = (UA_Int32)inputArgs[2];
    // UA_Int32 endTime = (UA_Int32)inputArgs[3];

    /// Create an entry in RuleDiagnostics

    UA_StatusCode addNodeRetVal = UA_STATUSCODE_GOOD;
    UA_NodeId entryId;

    char ruleEntryString[100];
    snprintf(ruleEntryString, 100, "Rule_%d", ruleId);

    UA_VariableAttributes ruleDiagnosticsEntryAttr = UA_VariableAttributes_default;
    ruleDiagnosticsEntryAttr.displayName = UA_LOCALIZEDTEXT("en-US", ruleEntryString);
    ruleDiagnosticsEntryAttr.valueRank = -1;
    addNodeRetVal |= UA_Server_addVariableNode(server, 
                            UA_NODEID_NULL, 
                            RuleDiagnosticsInLcbcFolderNodeId,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                            UA_QUALIFIEDNAME(MARTEM_NS, ruleEntryString),
                            ruleDiagnosticsEntryTypeNodeId, 
                            ruleDiagnosticsEntryAttr, 
                            NULL, &entryId);

    if(addNodeRetVal != UA_STATUSCODE_GOOD) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital: addNodeRetVal failed: %s", UA_StatusCode_name(addNodeRetVal));
        return addNodeRetVal;
    }

    /// find InpoutArguments Property NodeId in newly created Rule entry

    UA_RelativePathElement rpe;
    UA_RelativePathElement_init(&rpe);
    rpe.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY);
    rpe.isInverse = false;
    rpe.includeSubtypes = false;
    rpe.targetName = UA_QUALIFIEDNAME(MARTEM_NS, "InputArguments");

    UA_BrowsePath bp;
    UA_BrowsePath_init(&bp);
    bp.startingNode = entryId;
    bp.relativePath.elementsSize = 1;
    bp.relativePath.elements = &rpe;

    UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);

    if(bpr.statusCode != UA_STATUSCODE_GOOD || bpr.targetsSize < 1) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital: UA_Server_translateBrowsePathToNodeIds failed: %s", UA_StatusCode_name(bpr.statusCode));
        UA_BrowsePathResult_deleteMembers(&bpr);
        return (int)bpr.statusCode;
    }

    UA_NodeId InputArgumentsNodeId;
    UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, &InputArgumentsNodeId);
    UA_BrowsePathResult_deleteMembers(&bpr);

    /// add input arguments to InputArguments in new Rule entry

    UA_StatusCode addInputArgsRetVal = UA_STATUSCODE_GOOD;
    UA_Double args[*argCnt];

    for(int i = 0; i< *argCnt; ++i) {
        args[i] = inputArgs[i];
    }

    UA_Variant argVar;
    UA_Variant_init(&argVar);
    UA_Variant_setArray(&argVar, args, *argCnt, &UA_TYPES[UA_TYPES_DOUBLE]);    
    addInputArgsRetVal = UA_Server_writeValue(server, InputArgumentsNodeId, argVar);

    if(addInputArgsRetVal != UA_STATUSCODE_GOOD) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "RuleMethodCallbackDigital: addInputArgsRetVal failed: %s", UA_StatusCode_name(addInputArgsRetVal));
        return addInputArgsRetVal;
    }

    return UA_STATUSCODE_GOOD;
}

// main
UA_Boolean running = true;
static void stopHandler(int sign) 
{
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

int main(void) 
{
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    // defaults
    UA_ServerConfig *config = UA_ServerConfig_new_minimal(48020, NULL);
    UA_Server *server = UA_Server_new(config);

    // generated info model
    UA_StatusCode lcbcConfRet = lcbc_object_feeder1(server);
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "LCBC Feeders as Objects");

    if(UA_STATUSCODE_GOOD != lcbcConfRet) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "LCBC conf failed");
        return (int)lcbcConfRet;
    }

    /** Create MartemRulesType TypeDefinitionNode START **/

    UA_StatusCode rulesTypeDefRetVal = UA_STATUSCODE_GOOD;
    const UA_UInt32 MartemRulesObjectTypeNumericId = 30000;
    UA_NodeId MartemRulesObjectTypeNodeId = UA_NODEID_NUMERIC(MARTEM_NS, MartemRulesObjectTypeNumericId);

    const UA_UInt32 MartemRulesCtrlDimmingDoMethodNumericId = 30001;
    UA_NodeId MartemRulesCtrlDimmingDoMethodNodeId = UA_NODEID_NUMERIC(MARTEM_NS, MartemRulesCtrlDimmingDoMethodNumericId);

    const UA_UInt32 MartemRulesRuleDiagnosticsVariableNumericId = 30002;
    UA_NodeId MartemRulesRuleDiagnosticsVariableNodeId = UA_NODEID_NUMERIC(MARTEM_NS, MartemRulesRuleDiagnosticsVariableNumericId);

    /* Add MartesRules ObjetType Node to BaseObjectType with hasSubType Reference */
    UA_ObjectTypeAttributes MartemRulesObjectTypeAttr = UA_ObjectTypeAttributes_default;
    MartemRulesObjectTypeAttr.displayName = UA_LOCALIZEDTEXT("en-US", "MartemRulesType");
    rulesTypeDefRetVal |= UA_Server_addObjectTypeNode(server, MartemRulesObjectTypeNodeId,
                                UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
                                UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                                UA_QUALIFIEDNAME(MARTEM_NS, "MartemRulesType"), 
                                MartemRulesObjectTypeAttr,
                                NULL, NULL);

    /* Add example Rule Method to MartemRulesType */

    UA_MethodAttributes attr = UA_MethodAttributes_default;
    attr.executable = true;
    attr.userExecutable = true;
    attr.displayName = UA_LOCALIZEDTEXT("", "CtrlDimmingDO");
    attr.description = UA_LOCALIZEDTEXT("", "");
    attr.writeMask = 0;
    attr.userWriteMask = 0;
    rulesTypeDefRetVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
        MartemRulesCtrlDimmingDoMethodNodeId,
        MartemRulesObjectTypeNodeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(MARTEM_NS, "CtrlDimmingDO"),
        UA_NODEID_NULL,
        (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES], NULL, NULL);

    /// Make the Rule Method mandatory
    rulesTypeDefRetVal |= UA_Server_addReference(server, MartemRulesCtrlDimmingDoMethodNodeId, 
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE), 
                            UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    /// input args
    UA_Argument inputArgument;
    UA_Argument_init(&inputArgument);
    inputArgument.description = UA_LOCALIZEDTEXT("en-US", "Array of Double");
    inputArgument.name = UA_STRING("CmdControlDoubleArray");
    inputArgument.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    inputArgument.valueRank = 1; /* array */
    // UA_UInt32 arrayDims[1] = {2};
    // inputArgument.arrayDimensions = arrayDims;
    // inputArgument.arrayDimensionsSize = 1;
    

    /// output args
    // UA_Argument outputArgument;
    // UA_Argument_init(&outputArgument);
    // outputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    // outputArgument.name = UA_STRING("CmdResultByte");
    // outputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    // outputArgument.valueRank = -1; /* scalar */

    /// pass required argument count as context
    int argCnt = 4;

    UA_Server_setNodeContext(server, 
        MartemRulesCtrlDimmingDoMethodNodeId,
        &argCnt);

    rulesTypeDefRetVal |= UA_Server_addMethodNode_finish(server, 
        MartemRulesCtrlDimmingDoMethodNodeId,
        RuleMethodCallbackDigital, 1, &inputArgument, 0, NULL);

    /* Add RuleDiagnostics Variable to MartemRulesType to record enabled Rules*/

    UA_VariableAttributes ruleDiagnosticsAttr = UA_VariableAttributes_default;
    ruleDiagnosticsAttr.displayName = UA_LOCALIZEDTEXT("en-US", "RuleDiagnostics");
    ruleDiagnosticsAttr.valueRank = -1;
    rulesTypeDefRetVal |= UA_Server_addVariableNode(server, MartemRulesRuleDiagnosticsVariableNodeId, 
                            MartemRulesObjectTypeNodeId,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                            UA_QUALIFIEDNAME(MARTEM_NS, "RuleDiagnostics"),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), 
                            ruleDiagnosticsAttr, 
                            NULL, NULL);

    /// Make the RuleDiagnostics Variable mandatory
    rulesTypeDefRetVal |= UA_Server_addReference(server, MartemRulesRuleDiagnosticsVariableNodeId, 
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE), 
                            UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    if(UA_STATUSCODE_GOOD != rulesTypeDefRetVal) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "rulesTypeDef conf failed: %s", UA_StatusCode_name(rulesTypeDefRetVal));
        return (int)rulesTypeDefRetVal;
    }

    /** Create MartemRulesType TypeDefinitionNode END **/



    /** Create RuleDiagnostics Entry TypeDefinitionNode START **/

    UA_StatusCode ruleDiagnosticsEntryTypeDefRetVal = UA_STATUSCODE_GOOD;
    const UA_UInt32 ruleDiagnosticsEntryTypeNumericId = 30003;
    UA_NodeId ruleDiagnosticsEntryTypeNodeId = UA_NODEID_NUMERIC(MARTEM_NS, ruleDiagnosticsEntryTypeNumericId);

    const UA_UInt32 inputArgumentsNumericId = 30004;
    UA_NodeId inputArgumentsNodeId = UA_NODEID_NUMERIC(MARTEM_NS, inputArgumentsNumericId);

    UA_VariableTypeAttributes ruleDiagnosticsEntryTypeDefAttr = UA_VariableTypeAttributes_default;
    ruleDiagnosticsEntryTypeDefAttr.displayName = UA_LOCALIZEDTEXT("en-US", "MartemRuleDiagnosticsEntryType");
    ruleDiagnosticsEntryTypeDefAttr.valueRank = -1;
    ruleDiagnosticsEntryTypeDefRetVal |= UA_Server_addVariableTypeNode(server, ruleDiagnosticsEntryTypeNodeId, 
                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                            UA_QUALIFIEDNAME(MARTEM_NS, "MartemRuleDiagnosticsEntryType"),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), 
                            ruleDiagnosticsEntryTypeDefAttr, 
                            NULL, NULL);

    UA_VariableAttributes inputArgumentsAttr = UA_VariableAttributes_default;
    inputArgumentsAttr.displayName = UA_LOCALIZEDTEXT("en-US", "InputArguments");
    inputArgumentsAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    inputArgumentsAttr.valueRank = 1;

    UA_Double zero[1] = {0.0};
    UA_Variant_setArray(&inputArgumentsAttr.value, zero, 1, &UA_TYPES[UA_TYPES_DOUBLE]);

    ruleDiagnosticsEntryTypeDefRetVal |= UA_Server_addVariableNode(server, inputArgumentsNodeId, 
                            ruleDiagnosticsEntryTypeNodeId,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                            UA_QUALIFIEDNAME(MARTEM_NS, "InputArguments"),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE), 
                            inputArgumentsAttr, 
                            NULL, NULL);

    /// Make the InputArguments Property mandatory
    ruleDiagnosticsEntryTypeDefRetVal |= UA_Server_addReference(server, inputArgumentsNodeId, 
                                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE), 
                                            UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    if(UA_STATUSCODE_GOOD != ruleDiagnosticsEntryTypeDefRetVal) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "ruleDiagnosticsEntryTypeDef conf failed: %s", UA_StatusCode_name(ruleDiagnosticsEntryTypeDefRetVal));
        return (int)ruleDiagnosticsEntryTypeDefRetVal;
    }

    /** Create RuleDiagnostics Entry TypeDefinitionNode END **/



    /** Add MartemRules Object to LCBC Folder START **/

    UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
    oAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Rules");
    UA_Server_addObjectNode(server, UA_NODEID_NULL,
                            LcbcFolderNodeId,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                            UA_QUALIFIEDNAME(MARTEM_NS, "Rules"),
                            MartemRulesObjectTypeNodeId, /// this refers to the object type identifier
                            oAttr, NULL, &RulesObjectInLcbcFolderNodeId);

    /// find RuleDiagnostics Variable NodeId in newly added Rules Object in LCBC
    UA_RelativePathElement rpe;
    UA_RelativePathElement_init(&rpe);
    rpe.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
    rpe.isInverse = false;
    rpe.includeSubtypes = false;
    rpe.targetName = UA_QUALIFIEDNAME(MARTEM_NS, "RuleDiagnostics");

    UA_BrowsePath bp;
    UA_BrowsePath_init(&bp);
    bp.startingNode = RulesObjectInLcbcFolderNodeId;
    bp.relativePath.elementsSize = 1;
    bp.relativePath.elements = &rpe;

    UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);

    if(bpr.statusCode != UA_STATUSCODE_GOOD || bpr.targetsSize < 1) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "UA_Server_translateBrowsePathToNodeIds failed: %s", UA_StatusCode_name(bpr.statusCode));
        return (int)bpr.statusCode;
    }

    UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, &RuleDiagnosticsInLcbcFolderNodeId);
    UA_BrowsePathResult_deleteMembers(&bpr);

    /** Add MartemRules Object to LCBC Folder END **/

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
