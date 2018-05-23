#include "gen/lcbc_ns1.h"
#include "gen/lcbc_ns2.h"

#include "callbacks.h"
#include "add.h"

#include <signal.h>

#define LcbcFolderNumericId 50000

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

    assertStatus(lcbc_ns1(server));
    assertStatus(lcbc_ns2(server));

    assertStatus(Add_RulesObject_TypeDef(server, LCBC1_NAMESPACE)); 
    assertStatus(Add_RuleDiagnostisEntry_TypeDef(server, LCBC1_NAMESPACE));

    const UA_NodeId Lcbc1FolderNodeId = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, LcbcFolderNumericId);
    const UA_NodeId Lcbc2FolderNodeId = UA_NODEID_NUMERIC(LCBC2_NAMESPACE, LcbcFolderNumericId);

    /// change Cabinet DisplayName of LCBC2 to Sillamae
    UA_NodeId lcbc2Cabinet;
    assertStatus(TranslateBrowsePathToNodeIds(server, &lcbc2Cabinet, UA_NS0ID_HASCOMPONENT, LCBC1_NAMESPACE, "Cabinet", Lcbc2FolderNodeId));
    assertStatus(UA_Server_writeDisplayName(server, lcbc2Cabinet, UA_LOCALIZEDTEXT("en-US", "Sillamae")));

    assertStatus(Add_RulesObject_ToFolder(server, &Lcbc1FolderNodeId));
    assertStatus(Add_RulesObject_ToFolder(server, &Lcbc2FolderNodeId));

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
