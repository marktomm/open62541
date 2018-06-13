#include "gen/lcbc_single.h"

#include <signal.h>
#include <stdio.h>

#include "callbacks.h"
#include "add.h"
#include "xtors.h"

/// Node Context Globals
nodeContextContainer* ctx;
nodeContextContainer* tctx;

/// need to manually set method props for mock server
#define MANOVERRIDE_METHOD_NODEID UA_NODEID_NUMERIC(LCBC1_NAMESPACE, ManualOverrideControl_ID)
#define SIREN_METHOD_NODEID UA_NODEID_NUMERIC(LCBC1_NAMESPACE, 10)
#define AO_METHOD_NODEID UA_NODEID_NUMERIC(LCBC1_NAMESPACE, 28)

#define F1_DIMM_METHOD_NODEID UA_NODEID_NUMERIC(LCBC1_NAMESPACE, F1_DimmControl_ID)
#define F2_DIMM_METHOD_NODEID UA_NODEID_NUMERIC(LCBC1_NAMESPACE, F2_DimmControl_ID)
#define F3_DIMM_METHOD_NODEID UA_NODEID_NUMERIC(LCBC1_NAMESPACE, F3_DimmControl_ID)

#define F1_STATE_METHOD_NODEID UA_NODEID_NUMERIC(LCBC1_NAMESPACE, F1_Control_ID)
#define F2_STATE_METHOD_NODEID UA_NODEID_NUMERIC(LCBC1_NAMESPACE, F2_Control_ID)
#define F3_STATE_METHOD_NODEID UA_NODEID_NUMERIC(LCBC1_NAMESPACE, F3_Control_ID)

#define METHOD_COUNT 9

#define METHOD_TYPE "DO"

#define GETMETHODSTART UA_NodeId n1 = MANOVERRIDE_METHOD_NODEID; \
UA_NodeId n2 = SIREN_METHOD_NODEID; \
UA_NodeId n3 = AO_METHOD_NODEID; \
UA_NodeId n4 = F1_DIMM_METHOD_NODEID; \
UA_NodeId n5 = F2_DIMM_METHOD_NODEID; \
UA_NodeId n6 = F3_DIMM_METHOD_NODEID; \
UA_NodeId n7 = F1_STATE_METHOD_NODEID; \
UA_NodeId n8 = F2_STATE_METHOD_NODEID; \
UA_NodeId n9 = F3_STATE_METHOD_NODEID; \

#define GETMETHODSTART_ARRAY GETMETHODSTART \
UA_NodeId n_array[METHOD_COUNT] = {n1, n2, n3, n4, n5, n6, n7, n8, n9};

static char* getMethodFeederCtx(UA_NodeId id)
{   
    GETMETHODSTART
    
    if(UA_NodeId_equal(&id, &n1)) {
        return "DO_MAN";
    } else if(UA_NodeId_equal(&id, &n2)) {
        return "DO_GRD";
    } else if(UA_NodeId_equal(&id, &n3)) {
        return "";
    } else if(UA_NodeId_equal(&id, &n4) || UA_NodeId_equal(&id, &n5) || UA_NodeId_equal(&id, &n6)) {
        return "DO_FxD";
    } else if(UA_NodeId_equal(&id, &n7) || UA_NodeId_equal(&id, &n8) || UA_NodeId_equal(&id, &n9)) {
        return "DO_FxC";
    }

    return "ERR";
}

static UA_UInt16 getMethodFeederIdx(UA_NodeId id)
{
    GETMETHODSTART

    if(UA_NodeId_equal(&id, &n1) || UA_NodeId_equal(&id, &n2) || UA_NodeId_equal(&id, &n3)) {
        return 0;
    } else if(UA_NodeId_equal(&id, &n4) || UA_NodeId_equal(&id, &n7)) {
        return 1;
    } else if(UA_NodeId_equal(&id, &n5) || UA_NodeId_equal(&id, &n8)) {
        return 2;
    } else if(UA_NodeId_equal(&id, &n5) || UA_NodeId_equal(&id, &n9)) {
        return 3;
    }

    return 0;
}

static UA_Int16 getMethodPos(UA_NodeId id)
{
    GETMETHODSTART
    
    if(UA_NodeId_equal(&id, &n1)) {
        return 2;
    } else if(UA_NodeId_equal(&id, &n2)) {
        return 4;
    } else if(UA_NodeId_equal(&id, &n3)) {
        return 0;
    } else if(UA_NodeId_equal(&id, &n4)) {
        return 0;
    } else if(UA_NodeId_equal(&id, &n5)) {
        return 0;
    } else if(UA_NodeId_equal(&id, &n6)) {
        return 0;
    } else if(UA_NodeId_equal(&id, &n7)) {
        return 0;
    } else if(UA_NodeId_equal(&id, &n8)) {
        return 0;
    } else if(UA_NodeId_equal(&id, &n9)) {
        return 0;
    } 

    return 0;
}

static UA_StatusCode addMethodProps(UA_Server *server, UA_UInt16 ns, UA_NodeId* parentNodeId) 
{
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;

    {
        /// add FeederCtx
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.minimumSamplingInterval = 0.000000;
        attr.userAccessLevel = 3;
        attr.accessLevel = 3;
        attr.valueRank = -1;
        attr.dataType = UA_NODEID_NUMERIC(0, 12); /// String
        UA_String feederCtxStr = UA_STRING(getMethodFeederCtx(*parentNodeId));
        retVal |= UA_Variant_setScalarCopy(&attr.value, &feederCtxStr, &UA_TYPES[UA_TYPES_STRING]);
        attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
        attr.description = UA_LOCALIZEDTEXT("", "");
        attr.writeMask = 0;
        attr.userWriteMask = 0;
        retVal |= UA_Server_addVariableNode(server, UA_NODEID_NULL,
                                        *parentNodeId,
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),                                
                                        UA_QUALIFIEDNAME(ns, "FeederCtx"),
                                        UA_NODEID_NUMERIC(0, 68), /// 68 must be variable typedef for prop
                                        (const UA_VariableAttributes)attr, NULL, NULL);
        /// add FeederCtx x
    }

    {
        /// add FeederIdx
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.minimumSamplingInterval = 0.000000;
        attr.userAccessLevel = 3;
        attr.accessLevel = 3;
        attr.valueRank = -1;
        attr.dataType = UA_NODEID_NUMERIC(0, 5); /// UInt16
        UA_UInt16 feederIdx = getMethodFeederIdx(*parentNodeId);
        UA_Variant_setScalar(&attr.value, &feederIdx, &UA_TYPES[UA_TYPES_UINT16]);
        attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
        attr.description = UA_LOCALIZEDTEXT("", "");
        attr.writeMask = 0;
        attr.userWriteMask = 0;
        retVal |= UA_Server_addVariableNode(server, UA_NODEID_NULL,
                                        *parentNodeId,
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),                                
                                        UA_QUALIFIEDNAME(ns, "FeederIdx"),
                                        UA_NODEID_NUMERIC(0, 68), /// 68 must be variable typedef for prop
                                        (const UA_VariableAttributes)attr, NULL, NULL);
        /// add FeederIdx x
    }

    {
        /// add Pos
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.minimumSamplingInterval = 0.000000;
        attr.userAccessLevel = 3;
        attr.accessLevel = 3;
        attr.valueRank = -1;
        attr.dataType = UA_NODEID_NUMERIC(0, 4); /// Int16
        UA_UInt16 pos = getMethodPos(*parentNodeId);
        UA_Variant_setScalar(&attr.value, &pos, &UA_TYPES[UA_TYPES_INT16]);
        attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
        attr.description = UA_LOCALIZEDTEXT("", "");
        attr.writeMask = 0;
        attr.userWriteMask = 0;
        retVal |= UA_Server_addVariableNode(server, UA_NODEID_NULL,
                                        *parentNodeId,
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),                                
                                        UA_QUALIFIEDNAME(ns, "Pos"),
                                        UA_NODEID_NUMERIC(0, 68), /// 68 must be variable typedef for prop
                                        (const UA_VariableAttributes)attr, NULL, NULL);
        /// add Pos x
    }

    {
        /// add Type
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.minimumSamplingInterval = 0.000000;
        attr.userAccessLevel = 3;
        attr.accessLevel = 3;
        attr.valueRank = -1;
        attr.dataType = UA_NODEID_NUMERIC(0, 12); /// String
        UA_String type = UA_STRING(METHOD_TYPE);
        retVal |=  UA_Variant_setScalarCopy(&attr.value, &type, &UA_TYPES[UA_TYPES_STRING]);
        attr.displayName = UA_LOCALIZEDTEXT("", "Type");
        attr.description = UA_LOCALIZEDTEXT("", "");
        attr.writeMask = 0;
        attr.userWriteMask = 0;
        retVal |= UA_Server_addVariableNode(server, UA_NODEID_NULL,
                                        *parentNodeId,
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),                                
                                        UA_QUALIFIEDNAME(ns, "Type"),
                                        UA_NODEID_NUMERIC(0, 68), /// 68 must be variable typedef for prop
                                        (const UA_VariableAttributes)attr, NULL, NULL);
        /// add Type x
    }

    if(retVal != UA_STATUSCODE_GOOD) {
        LOG_ERROR("addMethodProps | fail: %s", UA_StatusCode_name(retVal));
    }

    return retVal;
}
/// manual method props x

// main
UA_Boolean running = true;
static void stopHandler(int sign) 
{
    LOG_INFO("received ctrl-c");
    running = false;
}

int main(void) 
{
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_ServerConfig *config = UA_ServerConfig_new_minimal(48020, NULL);

#ifdef NODECTX
    /// alloc contexts
    ctx = xtor_malloc();
    tctx = xtor_malloc();

    /// set global xtors and get server
    config->nodeLifecycle.constructor = LCBC_globalConstructor;
    config->nodeLifecycle.destructor = LCBC_globalDestructor;
    UA_Server *server = UA_Server_new(config);

    /// set xtors for RuleDiagnostics TypeDef
    UA_NodeTypeLifecycle nodelc;
    nodelc.constructor = LCBC_ctor_RuleEntryType;
    nodelc.destructor = LCBC_dtor_RuleEntryType;

    UA_NodeId ruleDiagnosticsEntry_Type_NodeId = RULEDIAGNOSTICSENTRY_TYPE_NODEID(LCBC1_NAMESPACE); /// Own typedefs should be defined as constants and be globaly accessible
    assertStatus(Add_RuleDiagnostisEntry_TypeDef(server, LCBC1_NAMESPACE)); /// call own method to create a TypeDef Variable
    assertStatus(UA_Server_setNodeTypeLifecycle(server, ruleDiagnosticsEntry_Type_NodeId, nodelc)); /// call UA lib to set xtors for TypeDef Variable
    assertStatus(Add_Variable_ToServer(server, &ruleDiagnosticsEntry_Type_NodeId, "fqdn", "browsename")); /// call own method to add Variable to Server Object

#else
    UA_Server *server = UA_Server_new(config);

    assertStatus(lcbc_single(server));
    assertStatus(Add_RulesObject_TypeDef(server, LCBC1_NAMESPACE)); 
    assertStatus(Add_RuleDiagnostisEntry_TypeDef(server, LCBC1_NAMESPACE));

    const UA_NodeId Lcbc1FolderNodeId = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, Lcbc_Folder_NumericId);
    assertStatus(Add_RulesObject_ToFolder(server, &Lcbc1FolderNodeId));

    /// need to manually set method props for mock server
    GETMETHODSTART_ARRAY
    for(int i = 0; i < METHOD_COUNT; i++) {
        addMethodProps(server, LCBC1_NAMESPACE, &(n_array[i]));
    }
    /// manual method props x
#endif
     
    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
