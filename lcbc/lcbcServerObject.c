#include "gen/lcbc_object_feeder1.h"

#include <signal.h>

#define MARTEM_NS 2

// Rules

// EXAMPLES OF METHOD DEFS FROM lcbc_feeder1.c
/* Rule1 - ns=1;i=7001 */
static UA_StatusCode EXAMPLE_function_lcbc_feeder1_2_begin(UA_Server *server, UA_UInt16* ns) 
{

    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_MethodAttributes attr = UA_MethodAttributes_default;
    attr.executable = true;
    attr.userExecutable = true;
    attr.displayName = UA_LOCALIZEDTEXT("", "Rule1");
    attr.description = UA_LOCALIZEDTEXT("", "");
    attr.writeMask = 0;
    attr.userWriteMask = 0;

    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
                UA_NODEID_NUMERIC(ns[1], 7001),
                UA_NODEID_NUMERIC(ns[1], 5003),
                UA_NODEID_NUMERIC(ns[0], 47),
                UA_QUALIFIEDNAME(ns[1], "Rule1"),
                UA_NODEID_NULL,
                (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES], NULL, NULL);

    return retVal;
}

static UA_StatusCode EXAMPLE_function_lcbc_feeder1_2_finish(UA_Server *server, UA_UInt16* ns) 
{

    return UA_Server_addMethodNode_finish(server, 
                                            UA_NODEID_NUMERIC(ns[1], 7001), 
                                            NULL, 0, NULL, 0, NULL);
}
// EXAMPLES OF METHOD DEFS FROM lcbc_feeder1.c END

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

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
