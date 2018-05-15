#include "gen/example.h"

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
static UA_Int32 DI_FxS_ID = 101;
static UA_Int32 DO_FxC_ID = 102;
static UA_Int32 DI_FxD_ID = 103;
static UA_Int32 DO_FxD_ID = 104;

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

static UA_StatusCode controlMethodCallbackDigital(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output) 
{
    UA_Byte *inputByte = (UA_Byte*)input->data;
    // UA_String tmp = UA_STRING_ALLOC("Hello ");
    // if(inputStr->length > 0) {
    //     tmp.data = (UA_Byte *)UA_realloc(tmp.data, tmp.length + inputStr->length);
    //     memcpy(&tmp.data[tmp.length], inputStr->data, inputStr->length);
    //     tmp.length += inputStr->length;
    // }
    // UA_Variant_setScalarCopy(output, &tmp, &UA_TYPES[UA_TYPES_STRING]);
    // UA_String_deleteMembers(&tmp);
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackDigital was called %d", *inputByte);
    return UA_STATUSCODE_GOOD;
}

// main
UA_Boolean running = true;

static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

int main(int argc, char **argv) {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_ServerConfig *config = UA_ServerConfig_new_default();
    UA_Server *server = UA_Server_new(config);

    UA_StatusCode retval;
    /* create nodes from nodeset */
    if (example(server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the example nodeset. "
            "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {


        UA_NodeId createdNodeId;
        UA_ObjectAttributes object_attr = UA_ObjectAttributes_default;

        object_attr.description = UA_LOCALIZEDTEXT("en-US", "A pump!");
        object_attr.displayName = UA_LOCALIZEDTEXT("en-US", "Pump1");

        // we assume that the myNS nodeset was added in namespace 2.
        // You should always use UA_Server_addNamespace to check what the
        // namespace index is for a given namespace URI. UA_Server_addNamespace
        // will just return the index if it is already added.
        UA_Server_addObjectNode(server, UA_NODEID_NUMERIC(1, 0),
                                UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                                UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                                UA_QUALIFIEDNAME(1, "Pump1"),
                                UA_NODEID_NUMERIC(2, 1002),
                                object_attr, NULL, &createdNodeId);


        retval = UA_Server_run(server, &running);
    }
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int) retval;
}
