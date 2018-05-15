#include "gen/lcbc_only_rules1.h"

#include <signal.h>

#define MARTEM_NS 2

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
    UA_StatusCode lcbcConfRet = lcbc_only_rules1(server);

    if(UA_STATUSCODE_GOOD != lcbcConfRet) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "LCBC conf failed");
        return (int)lcbcConfRet;
    }

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
