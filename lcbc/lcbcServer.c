#include "gen/lcbc_single.h"

#include <signal.h>
#include <stdio.h>

#include "callbacks.h"
#include "add.h"
#include "xtors.h"

/// Node Context Globals
nodeContextContainer* ctx;
nodeContextContainer* tctx;

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
#endif
     
    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
