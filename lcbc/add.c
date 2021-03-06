#include "add.h"
#include "callbacks.h"

UA_StatusCode Add_RulesObject_TypeDef(UA_Server *server, UA_UInt32 nameSpace)
{
    UA_StatusCode addStatus = UA_STATUSCODE_GOOD;
    UA_NodeId ObjectType_NodeId = UA_NODEID_NUMERIC(nameSpace, MartemRules_Type_NumericId);

    
    /// Add MartesRules ObjetType Node to BaseObjectType with hasSubType Reference
    UA_ObjectTypeAttributes typeAttr = UA_ObjectTypeAttributes_default;
    typeAttr.displayName = UA_LOCALIZEDTEXT("en-US", "MartemRulesType");
    addStatus |= UA_Server_addObjectTypeNode(server, ObjectType_NodeId,
                                UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
                                UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                                UA_QUALIFIEDNAME(nameSpace, "MartemRulesType"), 
                                typeAttr,
                                NULL, NULL);

    {
        /// Add example Rule Method to MartemRulesType
        const UA_UInt32 methodId = 30001;
        UA_NodeId methodNodeId = UA_NODEID_NUMERIC(nameSpace, methodId);

        UA_MethodAttributes attr = UA_MethodAttributes_default;
        attr.executable = true;
        attr.userExecutable = true;
        attr.displayName = UA_LOCALIZEDTEXT("", "CtrlDimmingDO");
        attr.description = UA_LOCALIZEDTEXT("", "");
        attr.writeMask = 0;
        attr.userWriteMask = 0;
        /// addNode_begin
        addStatus |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
            methodNodeId,
            ObjectType_NodeId,
            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
            UA_QUALIFIEDNAME(nameSpace, "CtrlDimmingDO"),
            UA_NODEID_NULL,
            (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES], NULL, NULL);

        /// Make the Rule Method mandatory
        /*
        UA_StatusCode
        UA_Server_addReference(UA_Server *server, const UA_NodeId sourceId,
                            const UA_NodeId refTypeId,
                            const UA_ExpandedNodeId targetId, UA_Boolean isForward);
        */
        addStatus |= UA_Server_addReference(server, methodNodeId, 
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
        UA_Argument outputArgument;
        UA_Argument_init(&outputArgument);
        outputArgument.description = UA_LOCALIZEDTEXT("en-US", "Boolean");
        outputArgument.name = UA_STRING("CmdResultBool");
        outputArgument.dataType = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
        outputArgument.valueRank = -1; /* scalar */

        /// pass required argument count as context
        lcbc_ctrl_ctx *context = (lcbc_ctrl_ctx*) malloc(sizeof(lcbc_ctrl_ctx));
        context->ArgumentCount = 6;
        context->DiagnosticsNodeId = UA_NODEID_NULL; /// a real NodeId must be set in the context, after Diagnostics Instance has been added | E_ADD_DIAGNOSTICS
        UA_Server_setNodeContext(server, 
            methodNodeId,
            context);

        addStatus |= UA_Server_addMethodNode_finish(server, 
            methodNodeId,
            RuleMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
        /// add method finish
    }

    {
        /// Add Rule Remove Method to MartemRulesType
        const UA_UInt32 methodId = 30003;
        UA_NodeId methodNodeId = UA_NODEID_NUMERIC(nameSpace, methodId);

        UA_MethodAttributes attr = UA_MethodAttributes_default;
        attr.executable = true;
        attr.userExecutable = true;
        attr.displayName = UA_LOCALIZEDTEXT("", "RuleRemove");
        attr.description = UA_LOCALIZEDTEXT("", "");
        attr.writeMask = 0;
        attr.userWriteMask = 0;
        /// addNode_begin
        addStatus |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
            methodNodeId,
            ObjectType_NodeId,
            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
            UA_QUALIFIEDNAME(nameSpace, "RuleRemove"),
            UA_NODEID_NULL,
            (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES], NULL, NULL);

        /// Make the Rule Method mandatory
        addStatus |= UA_Server_addReference(server, methodNodeId, 
                                UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE), 
                                UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

        /// input args
        UA_Argument inputArgument;
        UA_Argument_init(&inputArgument);
        inputArgument.description = UA_LOCALIZEDTEXT("en-US", "Array of Double");
        inputArgument.name = UA_STRING("CmdControlDoubleArray");
        inputArgument.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
        inputArgument.valueRank = 1; /* array */

        /// output args
        UA_Argument outputArgument;
        UA_Argument_init(&outputArgument);
        outputArgument.description = UA_LOCALIZEDTEXT("en-US", "Boolean");
        outputArgument.name = UA_STRING("CmdResultBool");
        outputArgument.dataType = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
        outputArgument.valueRank = -1; /* scalar */

        /// pass required argument count as context
        lcbc_ctrl_ctx *context = (lcbc_ctrl_ctx*) malloc(sizeof(lcbc_ctrl_ctx));
        context->ArgumentCount = 1; /// RuleId
        context->DiagnosticsNodeId = UA_NODEID_NULL; /// a real NodeId must be set in the context, after Diagnostics Instance has been added | E_ADD2_DIAGNOSTICS
        UA_Server_setNodeContext(server, 
            methodNodeId,
            context);

        addStatus |= UA_Server_addMethodNode_finish(server, 
            methodNodeId,
            RuleRemoveMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
        /// add method finish
    }

    /// Add RuleDiagnostics Variable to MartemRulesType to record enabled Rules
    const UA_UInt32 RuleDiagnostics_Variable_NumericId = 30002;
    UA_NodeId RuleDiagnostics_Variable_NodeId = UA_NODEID_NUMERIC(nameSpace, RuleDiagnostics_Variable_NumericId);

    UA_VariableAttributes ruleDiagnosticsAttr = UA_VariableAttributes_default;
    ruleDiagnosticsAttr.displayName = UA_LOCALIZEDTEXT("en-US", "RuleDiagnostics");
    ruleDiagnosticsAttr.valueRank = -1;
    addStatus |= UA_Server_addVariableNode(server, RuleDiagnostics_Variable_NodeId, 
                            ObjectType_NodeId,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                            UA_QUALIFIEDNAME(nameSpace, "RuleDiagnostics"),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), 
                            ruleDiagnosticsAttr, 
                            NULL, NULL);

    /// Make the RuleDiagnostics Variable mandatory
    addStatus |= UA_Server_addReference(server, RuleDiagnostics_Variable_NodeId, 
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE), 
                            UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    if(UA_STATUSCODE_GOOD != addStatus) {
        LOG_INFO("rulesTypeDef conf failed: %s", UA_StatusCode_name(addStatus));
    }
    return (int)addStatus;
}

UA_StatusCode Add_RuleDiagnostisEntry_TypeDef(UA_Server *server, UA_UInt32 nameSpace)
{
    UA_StatusCode addStatus = UA_STATUSCODE_GOOD;
    UA_NodeId ruleDiagnosticsEntry_Type_NodeId = RULEDIAGNOSTICSENTRY_TYPE_NODEID(nameSpace);

    const UA_UInt32 inputArgumentsNumericId = 30004;
    UA_NodeId inputArguments_NodeId = UA_NODEID_NUMERIC(nameSpace, inputArgumentsNumericId);

    UA_VariableTypeAttributes ruleDiagnosticsEntryTypeDefAttr = UA_VariableTypeAttributes_default;
    ruleDiagnosticsEntryTypeDefAttr.displayName = UA_LOCALIZEDTEXT("en-US", "MartemRuleDiagnosticsEntryType");
    ruleDiagnosticsEntryTypeDefAttr.valueRank = -1;
    addStatus |= UA_Server_addVariableTypeNode(server, ruleDiagnosticsEntry_Type_NodeId, 
                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                            UA_QUALIFIEDNAME(nameSpace, "MartemRuleDiagnosticsEntryType"),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), 
                            ruleDiagnosticsEntryTypeDefAttr, 
                            NULL, NULL);

    UA_VariableAttributes inputArgumentsAttr = UA_VariableAttributes_default;
    inputArgumentsAttr.displayName = UA_LOCALIZEDTEXT("en-US", "InputArguments");
    inputArgumentsAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    inputArgumentsAttr.valueRank = 1;

    UA_Double zero[1] = {0.0};
    UA_Variant_setArray(&inputArgumentsAttr.value, zero, 1, &UA_TYPES[UA_TYPES_DOUBLE]);

    addStatus |= UA_Server_addVariableNode(server, inputArguments_NodeId, 
                            ruleDiagnosticsEntry_Type_NodeId,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                            UA_QUALIFIEDNAME(nameSpace, "InputArguments"),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE), 
                            inputArgumentsAttr, 
                            NULL, NULL);

    /// Make the InputArguments Property mandatory
    addStatus |= UA_Server_addReference(server, inputArguments_NodeId, 
                                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE), 
                                            UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    if(UA_STATUSCODE_GOOD != addStatus) {
        LOG_INFO("ruleDiagnosticsEntryTypeDef conf failed: %s", UA_StatusCode_name(addStatus));
    }
    return (int)addStatus;
}


UA_StatusCode Add_RulesObject_ToFolder(UA_Server *server, const UA_NodeId *folderId)
{
    UA_StatusCode ret = UA_STATUSCODE_GOOD;
    const UA_UInt16 typeDefNameSpace = LCBC1_NAMESPACE;
    const UA_UInt16 addToNameSpace = folderId->namespaceIndex;
    LOG_INFO("target ns: %d typedefns: %d", addToNameSpace, typeDefNameSpace);
    

    /// Find the right TypeDefNode
    UA_NodeId ObjectType_NodeId;
    ret |= TranslateBrowsePathToNodeIds(server, &ObjectType_NodeId, UA_NS0ID_HASSUBTYPE, typeDefNameSpace, "MartemRulesType", UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE));

    /// add specified Object to Folder 
    UA_NodeId instanceId;
    UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
    oAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Rules");
    ret |= UA_Server_addObjectNode(server, 
                            UA_NODEID_NULL,
                            *folderId,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                            UA_QUALIFIEDNAME(0, "Rules"),
                            ObjectType_NodeId, /// this refers to the Object TypeDefinitionNode
                            oAttr, 
                            NULL, 
                            &instanceId /// acquire new Rules Object Instance NodeId
                            );

    if(UA_STATUSCODE_GOOD != ret) {
        UA_LOG_FATAL(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "AddRulesObject_ToFolder | addObjectNode failed: %s", UA_StatusCode_name(ret));
        return ret;
    }
    LOG_INFO("source ns: %d id: %d, target ns: %d %d", instanceId.namespaceIndex, instanceId.identifier.numeric, addToNameSpace, folderId->namespaceIndex);

    /// find RuleDiagnostics Variable NodeId in newly added Rules Object in LCBC
    UA_NodeId browseResult_RuleDiagnostics_Instance;
    ret |= TranslateBrowsePathToNodeIds(server, &browseResult_RuleDiagnostics_Instance, UA_NS0ID_HASCOMPONENT, typeDefNameSpace, "RuleDiagnostics", instanceId);

    {
        /// E_ADD_DIAGNOSTICS 
        /// find CtrlDimmingDO Method NodeId in newly added Rules Object in LCBC
        UA_NodeId browseResult_Rule_Method;
        ret |= TranslateBrowsePathToNodeIds(server, &browseResult_Rule_Method, UA_NS0ID_HASCOMPONENT, typeDefNameSpace, "CtrlDimmingDO", instanceId);
        
        /// set RuleDiagNostics_Instance as Context to Rule_Method; E_ADD_DIAGNOSTICS
        lcbc_ctrl_ctx* context;
        ret |= UA_Server_getNodeContext(server, browseResult_Rule_Method, (void**) &context);
        if(UA_STATUSCODE_GOOD != ret) {
            return ret;
        } 

        ret |= UA_NodeId_copy(&browseResult_RuleDiagnostics_Instance, &(context->DiagnosticsNodeId) );
        context->NameSpaceIndex = folderId->namespaceIndex;
        /// E_ADD_DIAGNOSTICS x
    }

    {
        /// E_ADD2_DIAGNOSTICS
        /// find RuleRemove Method NodeId in newly added Rules Object in LCBC
        UA_NodeId browseResult_Rule_Method;
        ret |= TranslateBrowsePathToNodeIds(server, &browseResult_Rule_Method, UA_NS0ID_HASCOMPONENT, typeDefNameSpace, "RuleRemove", instanceId);
        
        /// set RuleDiagNostics_Instance as Context to Rule_Method; E_ADD_DIAGNOSTICS
        lcbc_ctrl_ctx* context;
        assertStatus(UA_Server_getNodeContext(server, browseResult_Rule_Method, (void**) &context));
        if(UA_STATUSCODE_GOOD != ret) {
            return ret;
        } 

        ret |= UA_NodeId_copy(&browseResult_RuleDiagnostics_Instance, &(context->DiagnosticsNodeId) );
        context->NameSpaceIndex = folderId->namespaceIndex;
        /// E_ADD2_DIAGNOSTICS x
    }

    return ret;
}

UA_StatusCode Add_Variable_ToServer(UA_Server *server, const UA_NodeId *typeDefNodeId, char* fqdn, char* displayName, UA_NodeId* ownId) 
{
    UA_StatusCode ret = UA_STATUSCODE_GOOD;
    UA_NodeId serverNodeId = SERVER_NODEID;

    LOG_INFO("Add_Variable_ToServer | typedefns: %d, typedefid: %d", typeDefNodeId->namespaceIndex, typeDefNodeId->identifier.numeric);

    UA_NodeId nodeIdToSet = UA_NODEID_NULL;
    if(ownId) {
        nodeIdToSet = *ownId;
    }

    /// add specified Variable to Server Object 
    UA_NodeId instanceId;
    UA_VariableAttributes oAttr = UA_VariableAttributes_default;
    oAttr.displayName = UA_LOCALIZEDTEXT("en-US", displayName);
    ret |= UA_Server_addVariableNode(server, 
                            nodeIdToSet, /// own NodeId
                            serverNodeId, /// parent NodeId
                            UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), /// reference type; Organizes type for Folder type
                            UA_QUALIFIEDNAME(0, displayName), /// BrowseName attr
                            *typeDefNodeId, /// this refers to the Object TypeDefinitionNode
                            oAttr,  /// attrs 
                            NULL, /// context unset, but could be set here
                            &instanceId /// acquire new Variable instance NodeId
                            );

    return ret;
}