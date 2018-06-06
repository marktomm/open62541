#include "gen/lcbc_single.h"

#include <signal.h>
#include <stdio.h>

#include "callbacks.h"
#include "add.h"

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

    // generated info model
    assertStatus(lcbc_single(server));
    assertStatus(Add_RulesObject_TypeDef(server, LCBC1_NAMESPACE)); 
    assertStatus(Add_RuleDiagnostisEntry_TypeDef(server, LCBC1_NAMESPACE));

    const UA_NodeId Lcbc1FolderNodeId = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, LcbcFolderNumericId);
    assertStatus(Add_RulesObject_ToFolder(server, &Lcbc1FolderNodeId));

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
