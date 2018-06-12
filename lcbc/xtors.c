#include "xtors.h"

extern nodeContextContainer* ctx;
extern nodeContextContainer* tctx;

UA_StatusCode LCBC_globalConstructor(UA_Server *server,
                                 const UA_NodeId *sessionId, void *sessionContext,
                                 const UA_NodeId *nodeId, void **nodeCtx)
{
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;

    LOG_INFO("LCBC_globalConstructor | ns: %d, id: %d", nodeId->namespaceIndex, nodeId->identifier.numeric);
    LOG_INFO("LCBC_globalConstructor | node ptrptr: %p, ptr: %p", nodeCtx, *nodeCtx);

    /// must be set @ conf stage or error
    if(!ctx) {
        return UA_STATUSCODE_BADCONFIGURATIONERROR;
    }

    /// process our node context
    nodeContext* nctx = NULL;
    if(!(nctx = xtor_getNodeContext(ctx, nodeId))) {
        LOG_INFO("LCBC_globalConstructor | no node context. Create");
        assertStatus(xtor_addNodeContext(ctx, *nodeId, "Global ctor Entry"));
    } else {
        LOG_INFO("LCBC_globalConstructor | Have entry for node NodeId: %d. Size: %lu, first string: %s", nctx->nodeId.identifier.numeric, nctx->entryCount, nctx->entries[0].data);
    }

    nctx = xtor_getNodeContext(ctx, nodeId);
    if(*nodeCtx) {
        nodeContext* xtorEntry = *nodeCtx;
        LOG_INFO("LCBC_globalConstructor | Have nodeContext ptr: %p. Size: %lu, first string: %s", *nodeCtx, xtorEntry->entryCount, xtorEntry->entries[0].data);
    } else {
        LOG_INFO("LCBC_globalConstructor | Set nodeContext");
        xtor_setNodeContext(nodeCtx, nctx);
    }

    LOG_INFO("LCBC_globalConstructor | return node ptrptr: %p, ptr: %p", nodeCtx, *nodeCtx);
    
    return retVal;
}

void LCBC_globalDestructor(UA_Server *server,
                       const UA_NodeId *sessionId, void *sessionContext,
                       const UA_NodeId *nodeId, void *nodeCtx)
{
    LOG_INFO("LCBC_globalDestructor | ns: %d, id: %d", nodeId->namespaceIndex, nodeId->identifier.numeric);
    LOG_INFO("LCBC_globalDestructor | node ptr: %p", nodeCtx);
}

UA_StatusCode LCBC_ctor_RuleEntryType(UA_Server *server,
                                const UA_NodeId *sessionId, void *sessionContext,
                                const UA_NodeId *typeNodeId, void *typeNodeContext,
                                const UA_NodeId *nodeId, void **nodeCtx)
{
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;

    LOG_INFO("LCBC_ctor_RuleEntryType | ns: %d, id: %d", nodeId->namespaceIndex, nodeId->identifier.numeric);
    LOG_INFO("LCBC_ctor_RuleEntryType | node ptrptr: %p, ptr: %p", nodeCtx, *nodeCtx);
    
    /// must be set @ conf stage or error
    if(!tctx) {
        return UA_STATUSCODE_BADCONFIGURATIONERROR;
    }

    /// process our TypeDef context
    nodeContext* nctx = NULL;
    if(!(nctx = xtor_getNodeContext(tctx, nodeId))) {
        /// this NodeId does not have a TypeDef context set. This is apparently OK, since this is the typeDefs ctor
        LOG_INFO("LCBC_ctor_RuleEntryType | no TypeDef context. Create");
        assertStatus(xtor_addNodeContext(tctx, *nodeId, "Type ctor Entry"));
    } else {
        LOG_INFO("LCBC_ctor_RuleEntryType | Have entry for TypeDef NodeId: %d. Size: %lu, first string: %s", nctx->nodeId.identifier.numeric, nctx->entryCount, nctx->entries[0].data);
    }

    /// process typeNodeContext
    if(!typeNodeContext) {
        LOG_INFO("LCBC_ctor_RuleEntryType | set typeNodeContext");
        xtor_setNodeContext(&typeNodeContext, nctx);
    } else {
        LOG_INFO("LCBC_ctor_RuleEntryType | typeNodeContext not empty");
        nodeContext* xtorEntry = typeNodeContext;
        LOG_INFO("LCBC_ctor_RuleEntryType | Have typeNodeContext ptr: %p. Size: %lu, first string: %s", *nodeCtx, xtorEntry->entryCount, xtorEntry->entries[0].data);
    }

    /// process nodeContext
    nctx = xtor_getNodeContext(ctx, nodeId);    
    if(*nodeCtx) {
        nodeContext* xtorEntry = *nodeCtx;
        LOG_INFO("LCBC_ctor_RuleEntryType | nodeContext ptr: %p. Size: %lu, first string: %s", *nodeCtx, xtorEntry->entryCount, xtorEntry->entries[0].data);
        assertStatus(xtor_addEntry(xtorEntry, "Type ctor Entry"));
    } else {
        /// i assume it is set in global ctor
        LOG_ERROR("LCBC_ctor_RuleEntryType | nodeCtx empty after set");
        retVal = UA_STATUSCODE_BADDATAUNAVAILABLE;
    }

    return retVal;
}

void LCBC_dtor_RuleEntryType(UA_Server *server,
                    const UA_NodeId *sessionId, void *sessionContext,
                    const UA_NodeId *typeNodeId, void *typeNodeContext,
                    const UA_NodeId *nodeId, void **nodeCtx)
{
    LOG_INFO("LCBC_dtor_RuleEntryType | ns: %d, id: %d", nodeId->namespaceIndex, nodeId->identifier.numeric);
    LOG_INFO("LCBC_dtor_RuleEntryType | node ptrptr: %p, ptr: %p", nodeCtx, *nodeCtx);
    LOG_INFO("LCBC_dtor_RuleEntryType | Type node ptr: %p", typeNodeContext);
}