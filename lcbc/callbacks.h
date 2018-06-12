#ifndef _LCBC_CALLBACKS_
#define _LCBC_CALLBACKS_
#include  "open62541/open62541.h"
#include "constants.h"

typedef struct lcbc_ctrl_ctx {
    /// Control Specific
    UA_Int32    NameSpaceIndex;
    UA_Int32    StateVarNodeId;

    /// Rule Specific
    UA_NodeId   DiagnosticsNodeId;
    UA_Int32    ArgumentCount;
} lcbc_ctrl_ctx;

/// DO control callback
UA_StatusCode controlMethodCallbackDigital(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output);

/// ManualOverrideControl callback
UA_StatusCode controlMethodCallbackManual(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output);

/// Rules
UA_StatusCode RuleMethodCallbackDigital(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output);
#endif