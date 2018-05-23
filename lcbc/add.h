#include "constants.h"

UA_StatusCode Add_RulesObject_TypeDef(UA_Server *server, UA_UInt32 nameSpace);
UA_StatusCode Add_RuleDiagnostisEntry_TypeDef(UA_Server *server, UA_UInt32 nameSpace);
UA_StatusCode Add_RulesObject_ToFolder(UA_Server *server, const UA_NodeId *folderId);