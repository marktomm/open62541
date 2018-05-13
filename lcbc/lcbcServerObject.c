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

// DI,DO callback fns
#define DI_FxS_ID 101
#define DO_FxC_ID 102
#define DI_FxD_ID 103
#define DO_FxD_ID 104
#define DI_FxM_ID 105
#define DO_FxM_ID 106

static void afterWrite(UA_Server *server,
               const UA_NodeId *sessionId, void *sessionContext,
               const UA_NodeId *nodeId, void *nodeContext,
               const UA_NumericRange *range, const UA_DataValue *data) 
{
    UA_Int32 id = *(UA_Int32 *)nodeContext;
    UA_Boolean cmdval = *(UA_Boolean *) data->value.data;
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "F1 write id: %d val: %s", id, cmdval ? "true" : "false");

    UA_NodeId stateVarNodeId = UA_NODEID_NUMERIC(MARTEM_NS, id);
    UA_Byte stateNum = cmdval ? 2 : 1;

    UA_Variant stateVal;
    UA_Variant_init(&stateVal);
    UA_Variant_setScalar(&stateVal, &stateNum, &UA_TYPES[UA_TYPES_BYTE]);
    UA_Server_writeValue(server, stateVarNodeId, stateVal);
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

    // // mocks for feeder 1 ctrl logic
    // UA_NodeId ctrlNodeId = UA_NODEID_NUMERIC(MARTEM_NS, DO_FxC_ID);
    // UA_ValueCallback callback;
    // callback.onRead = NULL;
    // callback.onWrite = afterWrite;
    // UA_Int32 fxsid = DI_FxS_ID;
    // UA_Server_setNodeContext(server, ctrlNodeId, (void *)&fxsid);
    // UA_Server_setVariableNode_valueCallback(server, ctrlNodeId, callback);

    // // mocks for feeder 1 dimming logic
    // UA_NodeId dimmNodeId = UA_NODEID_NUMERIC(MARTEM_NS, DO_FxD_ID);
    // UA_Int32 fxdid = DI_FxD_ID;
    // UA_Server_setNodeContext(server, dimmNodeId, (void *)&fxdid);
    // UA_Server_setVariableNode_valueCallback(server, dimmNodeId, callback);

    // // mocks for feeder 1 manual override logic
    // UA_NodeId manNodeId = UA_NODEID_NUMERIC(MARTEM_NS, DO_FxM_ID);
    // UA_Int32 fxmid = DI_FxM_ID;
    // UA_Server_setNodeContext(server, manNodeId, (void *)&fxmid);
    // UA_Server_setVariableNode_valueCallback(server, manNodeId, callback);

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
