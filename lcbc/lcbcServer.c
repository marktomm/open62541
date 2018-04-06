#include "gen/lcbc_feeder1.h"

#include <signal.h>

#define MARTEM_NS 2
#define DI_FxS_ID 6021
#define DO_FxC_ID 6031
#define DI_FxD_ID 6041
#define DO_FxD_ID 6051

static void
afterWriteF1Ctrl(UA_Server *server,
               const UA_NodeId *sessionId, void *sessionContext,
               const UA_NodeId *nodeId, void *nodeContext,
               const UA_NumericRange *range, const UA_DataValue *data) 
{
    UA_Boolean cmdval = *(UA_Boolean *) data->value.data;
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "F1 Ctrl val: %s", cmdval ? "true" : "false");

    UA_NodeId stateVarNodeId = UA_NODEID_NUMERIC(MARTEM_NS, DI_FxS_ID);
    UA_Byte stateNum = cmdval ? 2 : 1;

    UA_Variant stateVal;
    UA_Variant_init(&stateVal);
    UA_Variant_setScalar(&stateVal, &stateNum, &UA_TYPES[UA_TYPES_BYTE]);
    UA_Server_writeValue(server, stateVarNodeId, stateVal);
}

static void
afterWriteF1Dimm(UA_Server *server,
               const UA_NodeId *sessionId, void *sessionContext,
               const UA_NodeId *nodeId, void *nodeContext,
               const UA_NumericRange *range, const UA_DataValue *data) 
{
    UA_Boolean cmdval = *(UA_Boolean *) data->value.data;
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "F1 Dimm val: %s", cmdval ? "true" : "false");

    UA_NodeId stateVarNodeId = UA_NODEID_NUMERIC(MARTEM_NS, DI_FxD_ID);
    UA_Byte stateNum = cmdval ? 2 : 1;

    UA_Variant stateVal;
    UA_Variant_init(&stateVal);
    UA_Variant_setScalar(&stateVal, &stateNum, &UA_TYPES[UA_TYPES_BYTE]);
    UA_Server_writeValue(server, stateVarNodeId, stateVal);
}

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
    UA_StatusCode lcbcConfRet = lcbc_feeder1(server);

    // mocks for feeder ctrl logic
    UA_NodeId ctrlNodeId = UA_NODEID_NUMERIC(MARTEM_NS, DO_FxC_ID);
    UA_ValueCallback callbackCtrl;
    callbackCtrl.onRead = NULL;
    callbackCtrl.onWrite = afterWriteF1Ctrl;
    UA_Server_setVariableNode_valueCallback(server, ctrlNodeId, callbackCtrl);

    // mocks for feeder dimming logic
    UA_NodeId dimmNodeId = UA_NODEID_NUMERIC(MARTEM_NS, DO_FxD_ID);
    UA_ValueCallback callbackDimm;
    callbackDimm.onRead = NULL;
    callbackDimm.onWrite = afterWriteF1Dimm;
    UA_Server_setVariableNode_valueCallback(server, dimmNodeId, callbackDimm);

    if(UA_STATUSCODE_GOOD != lcbcConfRet) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "LCBC conf failed");
        return (int)lcbcConfRet;
    }

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
