#ifndef _LCBC_XTROS_
#define _LCBC_XTROS_

#include "constants.h"

UA_StatusCode LCBC_globalConstructor(UA_Server *server,
                                 const UA_NodeId *sessionId, void *sessionContext,
                                 const UA_NodeId *nodeId, void **nodeContext);

void LCBC_globalDestructor(UA_Server *server,
                       const UA_NodeId *sessionId, void *sessionContext,
                       const UA_NodeId *nodeId, void *nodeContext);

UA_StatusCode LCBC_ctor_RuleEntryType(UA_Server *server,
                                const UA_NodeId *sessionId, void *sessionContext,
                                const UA_NodeId *typeNodeId, void *typeNodeContext,
                                const UA_NodeId *nodeId, void **nodeContext);

void LCBC_dtor_RuleEntryType(UA_Server *server,
                    const UA_NodeId *sessionId, void *sessionContext,
                    const UA_NodeId *typeNodeId, void *typeNodeContext,
                    const UA_NodeId *nodeId, void **nodeContext);

#endif