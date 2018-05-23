#include  "open62541/open62541.h"

#define LCBC1_NAMESPACE 2
#define LCBC2_NAMESPACE 3

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

/// Various
void assertStatus(UA_StatusCode st);
void createDigitalMethodArguments(UA_Argument *inputArgument, UA_Argument *outputArgument) ;
UA_StatusCode TranslateBrowsePathToNodeIds(UA_Server* server, UA_NodeId* result, const unsigned long referenceTypeId, const UA_UInt16 target_qualifiedName_Ns, char * const target_qualifiedName, const UA_NodeId source_node);