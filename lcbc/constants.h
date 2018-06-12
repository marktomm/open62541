#ifndef _LCBC_CONSTANTS_
#define _LCBC_CONSTANTS_

#include  "open62541/open62541.h"

#define NODECTX 1
#define PTRCTX 1

#define STATIC_ENTRIES 100
#define STATIC_CTX 25000

/// Node IDs
#define LCBC1_NAMESPACE 1
// #define LCBC2_NAMESPACE 3

#define ManualOverrideState_ID 3
#define ManualOverrideControl_ID 4

#define F1_State_ID 101
#define F1_Control_ID 102
#define F1_DimmState_ID 103
#define F1_DimmControl_ID 104

#define F2_State_ID 201
#define F2_Control_ID 202
#define F2_DimmState_ID 203
#define F2_DimmControl_ID 204

#define F3_State_ID 301
#define F3_Control_ID 302
#define F3_DimmState_ID 303
#define F3_DimmControl_ID 304

#define LcbcFolderNumericId 50000
#define RuleDiagnosticsEntry_Type_NumericId 100000
#define RULEDIAGNOSTICSENTRY_TYPE_NODEID(ns) UA_NODEID_NUMERIC(ns, RuleDiagnosticsEntry_Type_NumericId)

#define SERVER_NODEID UA_NODEID_NUMERIC(0, UA_NS0ID_SERVER)

#define LOG_INFO(...) UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, __VA_ARGS__)
#define LOG_WARN(...) UA_LOG_WARNING(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, __VA_ARGS__)
#define LOG_ERROR(...) UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, __VA_ARGS__)

/// Node Context
typedef struct LCBC_nodeContext{
    UA_NodeId nodeId;
    size_t entryCount;
    UA_String entries[STATIC_ENTRIES];
} nodeContext;

#ifdef PTRCTX
typedef struct LCBC_ptrContext{
    unsigned long long ptrAddress;
    size_t entryCount;
    UA_String entries[STATIC_ENTRIES];
} ptrContext;
#endif

typedef struct LCBC_nodeContextContainer {
    size_t contextCount;
    nodeContext contexts[STATIC_CTX];
#ifdef PTRCTX
    ptrContext ptrContexts[STATIC_CTX];
#endif
} nodeContextContainer;

nodeContextContainer* xtor_malloc();
void xtor_free(nodeContextContainer* p);
UA_StatusCode xtor_addEntry(nodeContext* p, char* string);
UA_String* xtor_getEntry(nodeContext* p, size_t i);
#ifdef PTRCTX
UA_StatusCode ptr_xtor_addEntry(ptrContext* p, char* string);
UA_String* ptr_xtor_getEntry(ptrContext* p, size_t i);
#endif
UA_StatusCode xtor_addNodeContext(nodeContextContainer* p, UA_NodeId nodeId, char* string);
nodeContext* xtor_getNodeContext(nodeContextContainer* p, const UA_NodeId *nodeId);

void xtor_setNodeContext(void** nodeCtx, nodeContext* p);

/// Various

void assertStatus(UA_StatusCode st);
void createDigitalMethodArguments(UA_Argument *inputArgument, UA_Argument *outputArgument) ;
UA_StatusCode TranslateBrowsePathToNodeIds(UA_Server* server, UA_NodeId* result, const unsigned long referenceTypeId, const UA_UInt16 target_qualifiedName_Ns, char * const target_qualifiedName, const UA_NodeId source_node);

#endif