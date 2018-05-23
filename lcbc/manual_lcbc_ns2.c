/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "gen/lcbc_ns2.h"

#include "callbacks.h"

/* LCBC2 - ns=2;i=50000 */

static UA_StatusCode function_lcbc_ns2_0_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LCBC2");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 50000),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "LCBC2"),
UA_NODEID_NUMERIC(ns[1], 1004),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_0_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 50000)
);
}


/* Feeder1 - ns=2;i=100 */

static UA_StatusCode function_lcbc_ns2_1_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Feeder1");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[2], 50000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Feeder1"),
UA_NODEID_NUMERIC(ns[1], 1002),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_1_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 100)
);
}


/* Pos - ns=2;i=6037 */

static UA_StatusCode function_lcbc_ns2_2_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6037_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6037_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6037_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6037),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6037_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_2_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6037)
);
}


/* FeederIdx - ns=2;i=6022 */

static UA_StatusCode function_lcbc_ns2_3_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6022_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6022_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6022_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6022),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6022_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_3_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6022)
);
}


/* Type - ns=2;i=6038 */

static UA_StatusCode function_lcbc_ns2_4_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6038_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6038_variant_DataContents = UA_STRING_ALLOC("TX");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6038_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6038),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6038_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_4_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6038)
);
}


/* Vool 3 f. - ns=2;i=109 */

static UA_StatusCode function_lcbc_ns2_5_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_109_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_109_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_109_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Vool 3 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 3 f"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_109_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_5_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 109)
);
}


/* Type - ns=2;i=6078 */

static UA_StatusCode function_lcbc_ns2_6_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6078_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6078_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6078_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6078),
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6078_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_6_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6078)
);
}


/* OnTxt - ns=2;i=6076 */

static UA_StatusCode function_lcbc_ns2_7_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6076_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6076_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6076_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6076),
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_7_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6076)
);
}


/* Pos - ns=2;i=6077 */

static UA_StatusCode function_lcbc_ns2_8_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6077_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6077_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6077_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6077),
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6077_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_8_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6077)
);
}


/* InUse - ns=2;i=6074 */

static UA_StatusCode function_lcbc_ns2_9_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6074_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6074_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6074_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6074),
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6074_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_9_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6074)
);
}


/* OffTxt - ns=2;i=6075 */

static UA_StatusCode function_lcbc_ns2_10_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6075_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6075_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6075_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6075),
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_10_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6075)
);
}


/* FeederCtx - ns=2;i=6072 */

static UA_StatusCode function_lcbc_ns2_11_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6072_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6072_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6072_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6072),
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_11_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6072)
);
}


/* FeederIdx - ns=2;i=6073 */

static UA_StatusCode function_lcbc_ns2_12_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6073_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6073_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6073_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6073),
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6073_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_12_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6073)
);
}


/* AlarmHigh - ns=2;i=6070 */

static UA_StatusCode function_lcbc_ns2_13_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6070_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6070_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6070_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6070),
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6070_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_13_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6070)
);
}


/* AlarmLow - ns=2;i=6071 */

static UA_StatusCode function_lcbc_ns2_14_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6071_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6071_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6071_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6071),
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_14_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6071)
);
}


/* Vool 2 f. - ns=2;i=108 */

static UA_StatusCode function_lcbc_ns2_15_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_108_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_108_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_108_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Vool 2 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 2 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_108_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_15_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 108)
);
}


/* Type - ns=2;i=6068 */

static UA_StatusCode function_lcbc_ns2_16_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6068_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6068_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6068_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6068),
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6068_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_16_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6068)
);
}


/* FeederCtx - ns=2;i=6062 */

static UA_StatusCode function_lcbc_ns2_17_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6062_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6062_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6062_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6062),
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_17_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6062)
);
}


/* FeederIdx - ns=2;i=6063 */

static UA_StatusCode function_lcbc_ns2_18_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6063_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6063_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6063_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6063),
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6063_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_18_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6063)
);
}


/* AlarmHigh - ns=2;i=6060 */

static UA_StatusCode function_lcbc_ns2_19_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6060_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6060_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6060_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6060),
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6060_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_19_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6060)
);
}


/* AlarmLow - ns=2;i=6061 */

static UA_StatusCode function_lcbc_ns2_20_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6061_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6061_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6061_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6061),
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_20_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6061)
);
}


/* OnTxt - ns=2;i=6066 */

static UA_StatusCode function_lcbc_ns2_21_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6066_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6066_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6066_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6066),
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_21_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6066)
);
}


/* Pos - ns=2;i=6067 */

static UA_StatusCode function_lcbc_ns2_22_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6067_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6067_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6067_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6067),
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6067_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_22_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6067)
);
}


/* InUse - ns=2;i=6064 */

static UA_StatusCode function_lcbc_ns2_23_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6064_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6064_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6064_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6064),
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6064_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_23_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6064)
);
}


/* OffTxt - ns=2;i=6065 */

static UA_StatusCode function_lcbc_ns2_24_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6065_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6065_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6065_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6065),
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_24_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6065)
);
}


/* Vool 1 f. - ns=2;i=107 */

static UA_StatusCode function_lcbc_ns2_25_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_107_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_107_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_107_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Vool 1 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 1 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_107_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_25_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 107)
);
}


/* OnTxt - ns=2;i=6056 */

static UA_StatusCode function_lcbc_ns2_26_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6056_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6056_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6056_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6056),
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_26_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6056)
);
}


/* Pos - ns=2;i=6057 */

static UA_StatusCode function_lcbc_ns2_27_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6057_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6057_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6057_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6057),
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6057_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_27_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6057)
);
}


/* InUse - ns=2;i=6054 */

static UA_StatusCode function_lcbc_ns2_28_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6054_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6054_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6054_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6054),
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6054_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_28_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6054)
);
}


/* OffTxt - ns=2;i=6055 */

static UA_StatusCode function_lcbc_ns2_29_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6055_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6055_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6055_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6055),
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_29_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6055)
);
}


/* FeederCtx - ns=2;i=6052 */

static UA_StatusCode function_lcbc_ns2_30_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6052_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6052_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6052_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6052),
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_30_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6052)
);
}


/* FeederIdx - ns=2;i=6053 */

static UA_StatusCode function_lcbc_ns2_31_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6053_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6053_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6053_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6053),
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6053_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_31_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6053)
);
}


/* AlarmHigh - ns=2;i=6050 */

static UA_StatusCode function_lcbc_ns2_32_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6050_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6050_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6050_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6050),
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6050_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_32_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6050)
);
}


/* AlarmLow - ns=2;i=6051 */

static UA_StatusCode function_lcbc_ns2_33_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6051_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6051_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6051_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6051),
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_33_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6051)
);
}


/* Type - ns=2;i=6058 */

static UA_StatusCode function_lcbc_ns2_34_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6058_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6058_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6058_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6058),
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6058_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_34_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6058)
);
}


/* Hamardamise olek - ns=2;i=103 */

static UA_StatusCode function_lcbc_ns2_35_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_103_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_103_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_103_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Hamardamise olek");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DimmState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_103_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_35_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 103)
);
}


/* AlarmLow - ns=2;i=6027 */

static UA_StatusCode function_lcbc_ns2_36_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6027_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6027_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6027_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6027),
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_36_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6027)
);
}


/* AlarmHigh - ns=2;i=6026 */

static UA_StatusCode function_lcbc_ns2_37_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6026_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6026_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6026_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6026),
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_37_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6026)
);
}


/* OnTxt - ns=2;i=6032 */

static UA_StatusCode function_lcbc_ns2_38_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6032_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6032_variant_DataContents = UA_STRING_ALLOC("Hamar");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6032_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6032),
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6032_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_38_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6032)
);
}


/* Pos - ns=2;i=6033 */

static UA_StatusCode function_lcbc_ns2_39_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6033_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6033_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6033_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6033),
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6033_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_39_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6033)
);
}


/* Type - ns=2;i=6034 */

static UA_StatusCode function_lcbc_ns2_40_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6034_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6034_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6034_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6034),
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6034_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_40_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6034)
);
}


/* InUse - ns=2;i=6030 */

static UA_StatusCode function_lcbc_ns2_41_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6030_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6030_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6030_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6030),
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6030_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_41_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6030)
);
}


/* OffTxt - ns=2;i=6031 */

static UA_StatusCode function_lcbc_ns2_42_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6031_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6031_variant_DataContents = UA_STRING_ALLOC("Norm");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6031_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6031),
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6031_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_42_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6031)
);
}


/* FeederIdx - ns=2;i=6029 */

static UA_StatusCode function_lcbc_ns2_43_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6029_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6029_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6029_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6029_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_43_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6029)
);
}


/* FeederCtx - ns=2;i=6028 */

static UA_StatusCode function_lcbc_ns2_44_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6028_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6028_variant_DataContents = UA_STRING_ALLOC("DI_FxD");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6028_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6028),
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6028_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_44_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6028)
);
}


/* Hamardamise juhtimine - ns=2;i=104 */

static UA_StatusCode function_lcbc_ns2_45_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Hamardamise juhtimine");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 104),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DimmControl"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_45_finish(UA_Server *server, UA_UInt16* ns) {

    UA_Argument inputArgument;
    UA_Argument outputArgument;
    createDigitalMethodArguments(&inputArgument, &outputArgument);

    /// I won't free this mem anywhere. It is OK, bc I need this thruought the whole process
    lcbc_ctrl_ctx *context =  (lcbc_ctrl_ctx *)malloc(sizeof(lcbc_ctrl_ctx));
    context->NameSpaceIndex = LCBC2_NAMESPACE;
    context->StateVarNodeId = F1_DimmState_ID;

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[2], F1_DimmControl_ID),
        context);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 104)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* InputArguments - ns=2;i=6023 */

static UA_StatusCode function_lcbc_ns2_46_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6023),
// UA_NODEID_NUMERIC(ns[2], 104),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "InputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6023)
);
}


/* OutputArguments - ns=2;i=6024 */

static UA_StatusCode function_lcbc_ns2_47_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6024),
// UA_NODEID_NUMERIC(ns[2], 104),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6024)
);
}


/* Voimsus - ns=2;i=110 */

static UA_StatusCode function_lcbc_ns2_48_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_110_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_110_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_110_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Voimsus");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Power"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_110_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_48_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 110)
);
}


/* Type - ns=2;i=6048 */

static UA_StatusCode function_lcbc_ns2_49_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6048_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6048_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6048_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6048),
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6048_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_49_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6048)
);
}


/* OffTxt - ns=2;i=6045 */

static UA_StatusCode function_lcbc_ns2_50_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6045_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6045_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6045_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6045),
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_50_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6045)
);
}


/* InUse - ns=2;i=6044 */

static UA_StatusCode function_lcbc_ns2_51_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6044_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6044_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6044_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6044),
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6044_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_51_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6044)
);
}


/* Pos - ns=2;i=6047 */

static UA_StatusCode function_lcbc_ns2_52_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6047_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6047_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6047_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6047),
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6047_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_52_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6047)
);
}


/* OnTxt - ns=2;i=6046 */

static UA_StatusCode function_lcbc_ns2_53_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6046_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6046_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6046_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6046),
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_53_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6046)
);
}


/* AlarmLow - ns=2;i=6041 */

static UA_StatusCode function_lcbc_ns2_54_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6041_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6041_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6041_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6041),
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_54_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6041)
);
}


/* AlarmHigh - ns=2;i=6040 */

static UA_StatusCode function_lcbc_ns2_55_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6040_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6040_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6040_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6040),
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6040_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_55_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6040)
);
}


/* FeederIdx - ns=2;i=6043 */

static UA_StatusCode function_lcbc_ns2_56_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6043_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6043_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6043_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6043),
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6043_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_56_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6043)
);
}


/* FeederCtx - ns=2;i=6042 */

static UA_StatusCode function_lcbc_ns2_57_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6042_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6042_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6042_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6042),
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_57_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6042)
);
}


/* Energia - ns=2;i=111 */

static UA_StatusCode function_lcbc_ns2_58_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_111_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_i_111_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_111_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Energia");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Energy"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_111_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_58_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 111)
);
}


/* Type - ns=2;i=6020 */

static UA_StatusCode function_lcbc_ns2_59_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6020_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6020_variant_DataContents = UA_STRING_ALLOC("CN");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6020_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6020),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6020_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_59_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6020)
);
}


/* Pos - ns=2;i=6019 */

static UA_StatusCode function_lcbc_ns2_60_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6019_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6019_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6019_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6019),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6019_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_60_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6019)
);
}


/* OnTxt - ns=2;i=6018 */

static UA_StatusCode function_lcbc_ns2_61_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6018_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6018_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6018_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6018),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_61_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6018)
);
}


/* FeederIdx - ns=2;i=6015 */

static UA_StatusCode function_lcbc_ns2_62_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6015_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6015_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6015_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6015),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6015_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_62_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6015)
);
}


/* FeederCtx - ns=2;i=6014 */

static UA_StatusCode function_lcbc_ns2_63_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6014_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6014_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6014_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6014),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_63_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6014)
);
}


/* OffTxt - ns=2;i=6017 */

static UA_StatusCode function_lcbc_ns2_64_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6017_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6017_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6017_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6017),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_64_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6017)
);
}


/* InUse - ns=2;i=6016 */

static UA_StatusCode function_lcbc_ns2_65_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6016_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6016_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6016_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6016),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6016_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_65_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6016)
);
}


/* AlarmLow - ns=2;i=6013 */

static UA_StatusCode function_lcbc_ns2_66_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6013_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6013_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6013_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6013),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_66_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6013)
);
}


/* AlarmHigh - ns=2;i=6012 */

static UA_StatusCode function_lcbc_ns2_67_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6012_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6012_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6012_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6012),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_67_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6012)
);
}


/* Asend - ns=2;i=101 */

static UA_StatusCode function_lcbc_ns2_68_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_101_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_101_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_101_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Asend");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "State"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_101_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_68_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 101)
);
}


/* AlarmLow - ns=2;i=6003 */

static UA_StatusCode function_lcbc_ns2_69_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6003_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6003_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6003_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6003),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_69_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6003)
);
}


/* AlarmHigh - ns=2;i=6002 */

static UA_StatusCode function_lcbc_ns2_70_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6002_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6002_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6002_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6002),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_70_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6002)
);
}


/* OffTxt - ns=2;i=6007 */

static UA_StatusCode function_lcbc_ns2_71_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6007_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6007_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6007_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6007),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6007_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_71_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6007)
);
}


/* InUse - ns=2;i=6006 */

static UA_StatusCode function_lcbc_ns2_72_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6006_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6006_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6006_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6006),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6006_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_72_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6006)
);
}


/* FeederIdx - ns=2;i=6005 */

static UA_StatusCode function_lcbc_ns2_73_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6005_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6005_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6005_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6005),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6005_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_73_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6005)
);
}


/* FeederCtx - ns=2;i=6004 */

static UA_StatusCode function_lcbc_ns2_74_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6004_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6004_variant_DataContents = UA_STRING_ALLOC("DI_FxS");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6004_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6004),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6004_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_74_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6004)
);
}


/* Pos - ns=2;i=6009 */

static UA_StatusCode function_lcbc_ns2_75_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6009_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6009_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6009_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6009),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6009_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_75_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6009)
);
}


/* OnTxt - ns=2;i=6008 */

static UA_StatusCode function_lcbc_ns2_76_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6008_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6008_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6008_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6008),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6008_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_76_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6008)
);
}


/* Type - ns=2;i=6010 */

static UA_StatusCode function_lcbc_ns2_77_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6010_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6010_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6010_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6010),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6010_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_77_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6010)
);
}


/* FeederCtx - ns=2;i=6021 */

static UA_StatusCode function_lcbc_ns2_78_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6021_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6021_variant_DataContents = UA_STRING_ALLOC("TX_FN");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6021_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6021),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6021_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_78_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6021)
);
}


/* Juhtimine - ns=2;i=102 */

static UA_StatusCode function_lcbc_ns2_79_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Juhtimine");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 102),
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Control"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_79_finish(UA_Server *server, UA_UInt16* ns) {

    UA_Argument inputArgument;
    UA_Argument outputArgument;
    createDigitalMethodArguments(&inputArgument, &outputArgument);

    /// I won't free this mem anywhere. It is OK, bc I need this thruought the whole process
    lcbc_ctrl_ctx *context =  (lcbc_ctrl_ctx *)malloc(sizeof(lcbc_ctrl_ctx));
    context->NameSpaceIndex = LCBC2_NAMESPACE;
    context->StateVarNodeId = F1_State_ID;

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[2], F1_Control_ID),
        context);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 102)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* OutputArguments - ns=2;i=6036 */

static UA_StatusCode function_lcbc_ns2_80_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6036),
// UA_NODEID_NUMERIC(ns[2], 102),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6036)
);
}


/* InputArguments - ns=2;i=6035 */

static UA_StatusCode function_lcbc_ns2_81_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6035),
// UA_NODEID_NUMERIC(ns[2], 102),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "InputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6035)
);
}


/* Feeder2 - ns=2;i=200 */

static UA_StatusCode function_lcbc_ns2_82_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Feeder2");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[2], 50000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Feeder2"),
UA_NODEID_NUMERIC(ns[1], 1002),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_82_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 200)
);
}


/* Voimsus - ns=2;i=210 */

static UA_StatusCode function_lcbc_ns2_83_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_210_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_210_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_210_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Voimsus");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Power"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_210_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_83_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 210)
);
}


/* AlarmHigh - ns=2;i=6118 */

static UA_StatusCode function_lcbc_ns2_84_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6118_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6118_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6118_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6118),
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6118_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_84_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6118)
);
}


/* AlarmLow - ns=2;i=6119 */

static UA_StatusCode function_lcbc_ns2_85_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6119_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6119_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6119_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6119),
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_85_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6119)
);
}


/* Type - ns=2;i=6126 */

static UA_StatusCode function_lcbc_ns2_86_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6126_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6126_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6126_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6126),
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6126_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_86_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6126)
);
}


/* Pos - ns=2;i=6125 */

static UA_StatusCode function_lcbc_ns2_87_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6125_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6125_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6125_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6125),
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6125_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_87_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6125)
);
}


/* OnTxt - ns=2;i=6124 */

static UA_StatusCode function_lcbc_ns2_88_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6124_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6124_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6124_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6124),
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_88_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6124)
);
}


/* OffTxt - ns=2;i=6123 */

static UA_StatusCode function_lcbc_ns2_89_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6123_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6123_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6123_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6123),
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_89_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6123)
);
}


/* InUse - ns=2;i=6122 */

static UA_StatusCode function_lcbc_ns2_90_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6122_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6122_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6122_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6122),
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6122_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_90_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6122)
);
}


/* FeederIdx - ns=2;i=6121 */

static UA_StatusCode function_lcbc_ns2_91_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6121_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6121_variant_DataContents = (UA_UInt16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6121_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6121),
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6121_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_91_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6121)
);
}


/* FeederCtx - ns=2;i=6120 */

static UA_StatusCode function_lcbc_ns2_92_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6120_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6120_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6120_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6120),
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_92_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6120)
);
}


/* Vool 3 f. - ns=2;i=209 */

static UA_StatusCode function_lcbc_ns2_93_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_209_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_209_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_209_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Vool 3 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 3 f"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_209_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_93_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 209)
);
}


/* AlarmLow - ns=2;i=6149 */

static UA_StatusCode function_lcbc_ns2_94_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6149_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6149_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6149_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6149),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_94_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6149)
);
}


/* AlarmHigh - ns=2;i=6148 */

static UA_StatusCode function_lcbc_ns2_95_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6148_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6148_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6148_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6148),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6148_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_95_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6148)
);
}


/* FeederCtx - ns=2;i=6150 */

static UA_StatusCode function_lcbc_ns2_96_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6150_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6150_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6150_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6150),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_96_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6150)
);
}


/* FeederIdx - ns=2;i=6151 */

static UA_StatusCode function_lcbc_ns2_97_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6151_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6151_variant_DataContents = (UA_UInt16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6151_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6151),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6151_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_97_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6151)
);
}


/* InUse - ns=2;i=6152 */

static UA_StatusCode function_lcbc_ns2_98_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6152_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6152_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6152_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6152),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6152_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_98_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6152)
);
}


/* OffTxt - ns=2;i=6153 */

static UA_StatusCode function_lcbc_ns2_99_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6153_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6153_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6153_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6153),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_99_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6153)
);
}


/* OnTxt - ns=2;i=6154 */

static UA_StatusCode function_lcbc_ns2_100_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6154_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6154_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6154_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6154),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_100_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6154)
);
}


/* Pos - ns=2;i=6155 */

static UA_StatusCode function_lcbc_ns2_101_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6155_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6155_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6155_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6155),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6155_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_101_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6155)
);
}


/* Type - ns=2;i=6156 */

static UA_StatusCode function_lcbc_ns2_102_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6156_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6156_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6156_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6156),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6156_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_102_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6156)
);
}


/* Vool 2 f. - ns=2;i=208 */

static UA_StatusCode function_lcbc_ns2_103_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_208_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_208_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_208_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Vool 2 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 2 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_208_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_103_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 208)
);
}


/* FeederCtx - ns=2;i=6140 */

static UA_StatusCode function_lcbc_ns2_104_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6140_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6140_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6140_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6140),
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_104_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6140)
);
}


/* FeederIdx - ns=2;i=6141 */

static UA_StatusCode function_lcbc_ns2_105_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6141_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6141_variant_DataContents = (UA_UInt16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6141_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6141),
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6141_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_105_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6141)
);
}


/* InUse - ns=2;i=6142 */

static UA_StatusCode function_lcbc_ns2_106_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6142_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6142_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6142_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6142),
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6142_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_106_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6142)
);
}


/* OffTxt - ns=2;i=6143 */

static UA_StatusCode function_lcbc_ns2_107_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6143_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6143_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6143_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6143),
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_107_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6143)
);
}


/* OnTxt - ns=2;i=6144 */

static UA_StatusCode function_lcbc_ns2_108_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6144_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6144_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6144_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6144),
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_108_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6144)
);
}


/* Pos - ns=2;i=6145 */

static UA_StatusCode function_lcbc_ns2_109_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6145_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6145_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6145_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6145),
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6145_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_109_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6145)
);
}


/* Type - ns=2;i=6146 */

static UA_StatusCode function_lcbc_ns2_110_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6146_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6146_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6146_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6146),
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6146_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_110_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6146)
);
}


/* AlarmLow - ns=2;i=6139 */

static UA_StatusCode function_lcbc_ns2_111_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6139_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6139_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6139_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6139),
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_111_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6139)
);
}


/* AlarmHigh - ns=2;i=6138 */

static UA_StatusCode function_lcbc_ns2_112_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6138_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6138_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6138_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6138),
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6138_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_112_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6138)
);
}


/* Vool 1 f. - ns=2;i=207 */

static UA_StatusCode function_lcbc_ns2_113_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_207_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_207_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_207_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Vool 1 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 1 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_207_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_113_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 207)
);
}


/* FeederCtx - ns=2;i=6130 */

static UA_StatusCode function_lcbc_ns2_114_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6130_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6130_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6130_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6130),
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_114_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6130)
);
}


/* FeederIdx - ns=2;i=6131 */

static UA_StatusCode function_lcbc_ns2_115_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6131_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6131_variant_DataContents = (UA_UInt16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6131_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6131),
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6131_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_115_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6131)
);
}


/* InUse - ns=2;i=6132 */

static UA_StatusCode function_lcbc_ns2_116_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6132_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6132_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6132_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6132),
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6132_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_116_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6132)
);
}


/* OffTxt - ns=2;i=6133 */

static UA_StatusCode function_lcbc_ns2_117_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6133_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6133_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6133_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6133),
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_117_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6133)
);
}


/* OnTxt - ns=2;i=6134 */

static UA_StatusCode function_lcbc_ns2_118_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6134_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6134_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6134_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6134),
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_118_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6134)
);
}


/* Pos - ns=2;i=6135 */

static UA_StatusCode function_lcbc_ns2_119_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6135_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6135_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6135_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6135),
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6135_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_119_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6135)
);
}


/* Type - ns=2;i=6136 */

static UA_StatusCode function_lcbc_ns2_120_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6136_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6136_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6136_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6136),
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6136_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_120_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6136)
);
}


/* AlarmLow - ns=2;i=6129 */

static UA_StatusCode function_lcbc_ns2_121_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6129_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6129_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6129_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6129),
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_121_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6129)
);
}


/* AlarmHigh - ns=2;i=6128 */

static UA_StatusCode function_lcbc_ns2_122_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6128_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6128_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6128_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6128),
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6128_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_122_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6128)
);
}


/* Hamardamise juhtimine - ns=2;i=204 */

static UA_StatusCode function_lcbc_ns2_123_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Hamardamise juhtimine");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 204),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DimmControl"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_123_finish(UA_Server *server, UA_UInt16* ns) {
    
    UA_Argument inputArgument;
    UA_Argument outputArgument;
    createDigitalMethodArguments(&inputArgument, &outputArgument);

    /// I won't free this mem anywhere. It is OK, bc I need this thruought the whole process
    lcbc_ctrl_ctx *context =  (lcbc_ctrl_ctx *)malloc(sizeof(lcbc_ctrl_ctx));
    context->NameSpaceIndex = LCBC2_NAMESPACE;
    context->StateVarNodeId = F2_DimmState_ID;

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[2], F2_DimmControl_ID),
        context);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 204)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* InputArguments - ns=2;i=6101 */

static UA_StatusCode function_lcbc_ns2_124_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6101),
// UA_NODEID_NUMERIC(ns[2], 204),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "InputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6101)
);
}


/* OutputArguments - ns=2;i=6102 */

static UA_StatusCode function_lcbc_ns2_125_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6102),
// UA_NODEID_NUMERIC(ns[2], 204),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6102)
);
}


/* Hamardamise olek - ns=2;i=203 */

static UA_StatusCode function_lcbc_ns2_126_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_203_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_203_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_203_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Hamardamise olek");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DimmState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_203_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_126_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 203)
);
}


/* Type - ns=2;i=6112 */

static UA_StatusCode function_lcbc_ns2_127_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6112_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6112_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6112_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6112),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6112_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_127_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6112)
);
}


/* OnTxt - ns=2;i=6110 */

static UA_StatusCode function_lcbc_ns2_128_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6110_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6110_variant_DataContents = UA_STRING_ALLOC("Hamar");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6110_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6110),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6110_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_128_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6110)
);
}


/* Pos - ns=2;i=6111 */

static UA_StatusCode function_lcbc_ns2_129_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6111_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6111_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6111_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6111),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6111_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_129_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6111)
);
}


/* AlarmHigh - ns=2;i=6104 */

static UA_StatusCode function_lcbc_ns2_130_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6104_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6104_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6104_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6104),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_130_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6104)
);
}


/* FeederIdx - ns=2;i=6107 */

static UA_StatusCode function_lcbc_ns2_131_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6107_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6107_variant_DataContents = (UA_UInt16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6107_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6107),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6107_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_131_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6107)
);
}


/* FeederCtx - ns=2;i=6106 */

static UA_StatusCode function_lcbc_ns2_132_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6106_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6106_variant_DataContents = UA_STRING_ALLOC("DI_FxD");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6106_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6106),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6106_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_132_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6106)
);
}


/* OffTxt - ns=2;i=6109 */

static UA_StatusCode function_lcbc_ns2_133_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6109_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6109_variant_DataContents = UA_STRING_ALLOC("Norm");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6109_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6109),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6109_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_133_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6109)
);
}


/* InUse - ns=2;i=6108 */

static UA_StatusCode function_lcbc_ns2_134_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6108_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6108_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6108_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6108),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6108_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_134_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6108)
);
}


/* AlarmLow - ns=2;i=6105 */

static UA_StatusCode function_lcbc_ns2_135_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6105_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6105_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6105_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6105),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_135_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6105)
);
}


/* Juhtimine - ns=2;i=202 */

static UA_StatusCode function_lcbc_ns2_136_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Juhtimine");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 202),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Control"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_136_finish(UA_Server *server, UA_UInt16* ns) {

    UA_Argument inputArgument;
    UA_Argument outputArgument;
    createDigitalMethodArguments(&inputArgument, &outputArgument);

    /// I won't free this mem anywhere. It is OK, bc I need this thruought the whole process
    lcbc_ctrl_ctx *context =  (lcbc_ctrl_ctx *)malloc(sizeof(lcbc_ctrl_ctx));
    context->NameSpaceIndex = LCBC2_NAMESPACE;
    context->StateVarNodeId = F2_State_ID;

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[2], F2_Control_ID),
        context);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 202)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* InputArguments - ns=2;i=6113 */

static UA_StatusCode function_lcbc_ns2_137_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6113),
// UA_NODEID_NUMERIC(ns[2], 202),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "InputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6113)
);
}


/* OutputArguments - ns=2;i=6114 */

static UA_StatusCode function_lcbc_ns2_138_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6114),
// UA_NODEID_NUMERIC(ns[2], 202),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6114)
);
}


/* Asend - ns=2;i=201 */

static UA_StatusCode function_lcbc_ns2_139_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_201_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_201_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_201_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Asend");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "State"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_201_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_139_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 201)
);
}


/* Type - ns=2;i=6088 */

static UA_StatusCode function_lcbc_ns2_140_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6088_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6088_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6088_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6088),
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6088_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_140_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6088)
);
}


/* FeederCtx - ns=2;i=6082 */

static UA_StatusCode function_lcbc_ns2_141_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6082_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6082_variant_DataContents = UA_STRING_ALLOC("DI_FxS");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6082_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6082),
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6082_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_141_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6082)
);
}


/* FeederIdx - ns=2;i=6083 */

static UA_StatusCode function_lcbc_ns2_142_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6083_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6083_variant_DataContents = (UA_UInt16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6083_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6083),
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6083_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_142_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6083)
);
}


/* AlarmHigh - ns=2;i=6080 */

static UA_StatusCode function_lcbc_ns2_143_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6080_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6080_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6080_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6080),
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_143_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6080)
);
}


/* AlarmLow - ns=2;i=6081 */

static UA_StatusCode function_lcbc_ns2_144_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6081_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6081_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6081_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6081),
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_144_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6081)
);
}


/* OnTxt - ns=2;i=6086 */

static UA_StatusCode function_lcbc_ns2_145_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6086_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6086_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6086_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6086),
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6086_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_145_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6086)
);
}


/* Pos - ns=2;i=6087 */

static UA_StatusCode function_lcbc_ns2_146_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6087_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6087_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6087_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6087),
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6087_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_146_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6087)
);
}


/* InUse - ns=2;i=6084 */

static UA_StatusCode function_lcbc_ns2_147_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6084_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6084_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6084_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6084),
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6084_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_147_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6084)
);
}


/* OffTxt - ns=2;i=6085 */

static UA_StatusCode function_lcbc_ns2_148_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6085_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6085_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6085_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6085),
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6085_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_148_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6085)
);
}


/* Energia - ns=2;i=211 */

static UA_StatusCode function_lcbc_ns2_149_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_211_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_i_211_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_211_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Energia");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Energy"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_211_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_149_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 211)
);
}


/* Type - ns=2;i=6098 */

static UA_StatusCode function_lcbc_ns2_150_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6098_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6098_variant_DataContents = UA_STRING_ALLOC("CN");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6098_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6098),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6098_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_150_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6098)
);
}


/* AlarmHigh - ns=2;i=6090 */

static UA_StatusCode function_lcbc_ns2_151_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6090_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6090_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6090_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6090),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_151_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6090)
);
}


/* AlarmLow - ns=2;i=6091 */

static UA_StatusCode function_lcbc_ns2_152_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6091_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6091_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6091_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6091),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_152_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6091)
);
}


/* FeederCtx - ns=2;i=6092 */

static UA_StatusCode function_lcbc_ns2_153_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6092_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6092_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6092_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6092),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_153_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6092)
);
}


/* FeederIdx - ns=2;i=6093 */

static UA_StatusCode function_lcbc_ns2_154_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6093_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6093_variant_DataContents = (UA_UInt16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6093_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6093),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6093_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_154_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6093)
);
}


/* InUse - ns=2;i=6094 */

static UA_StatusCode function_lcbc_ns2_155_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6094_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6094_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6094_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6094),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6094_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_155_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6094)
);
}


/* OffTxt - ns=2;i=6095 */

static UA_StatusCode function_lcbc_ns2_156_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6095_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6095_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6095_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6095),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_156_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6095)
);
}


/* OnTxt - ns=2;i=6096 */

static UA_StatusCode function_lcbc_ns2_157_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6096_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6096_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6096_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6096),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_157_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6096)
);
}


/* Pos - ns=2;i=6097 */

static UA_StatusCode function_lcbc_ns2_158_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6097_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6097_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6097_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6097),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6097_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_158_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6097)
);
}


/* Type - ns=2;i=6116 */

static UA_StatusCode function_lcbc_ns2_159_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6116_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6116_variant_DataContents = UA_STRING_ALLOC("TX");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6116_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6116),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6116_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_159_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6116)
);
}


/* Pos - ns=2;i=6115 */

static UA_StatusCode function_lcbc_ns2_160_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6115_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6115_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6115_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6115),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6115_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_160_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6115)
);
}


/* FeederCtx - ns=2;i=6099 */

static UA_StatusCode function_lcbc_ns2_161_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6099_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6099_variant_DataContents = UA_STRING_ALLOC("TX_FN");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6099_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6099),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6099_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_161_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6099)
);
}


/* FeederIdx - ns=2;i=6100 */

static UA_StatusCode function_lcbc_ns2_162_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6100_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6100_variant_DataContents = (UA_UInt16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6100_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6100),
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6100_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_162_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6100)
);
}


/* Kullamae - ns=2;i=1 */

static UA_StatusCode function_lcbc_ns2_163_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Kullamae");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[2], 50000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Cabinet"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_163_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1)
);
}


/* Keskne Valgusandur - ns=2;i=12 */

static UA_StatusCode function_lcbc_ns2_164_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_12_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_12_variant_DataContents = (UA_Double) 1.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_12_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keskne Valgusandur");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CentralLightSensor"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_12_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_164_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 12)
);
}


/* Type - ns=2;i=6268 */

static UA_StatusCode function_lcbc_ns2_165_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6268_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6268_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6268_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6268),
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6268_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_165_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6268)
);
}


/* Pos - ns=2;i=6267 */

static UA_StatusCode function_lcbc_ns2_166_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6267_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6267_variant_DataContents = (UA_Int16) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6267_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6267),
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6267_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_166_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6267)
);
}


/* OnTxt - ns=2;i=6266 */

static UA_StatusCode function_lcbc_ns2_167_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6266_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6266_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6266_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6266),
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_167_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6266)
);
}


/* OffTxt - ns=2;i=6265 */

static UA_StatusCode function_lcbc_ns2_168_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6265_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6265_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6265_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6265),
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_168_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6265)
);
}


/* InUse - ns=2;i=6264 */

static UA_StatusCode function_lcbc_ns2_169_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6264_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6264_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6264_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6264),
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6264_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_169_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6264)
);
}


/* FeederIdx - ns=2;i=6263 */

static UA_StatusCode function_lcbc_ns2_170_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6263_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6263_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6263_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6263),
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6263_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_170_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6263)
);
}


/* FeederCtx - ns=2;i=6262 */

static UA_StatusCode function_lcbc_ns2_171_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6262_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6262_variant_DataContents = UA_STRING_ALLOC("AI_CLS");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6262_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6262),
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6262_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_171_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6262)
);
}


/* AlarmLow - ns=2;i=6261 */

static UA_StatusCode function_lcbc_ns2_172_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6261_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6261_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6261_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6261),
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_172_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6261)
);
}


/* AlarmHigh - ns=2;i=6260 */

static UA_StatusCode function_lcbc_ns2_173_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6260_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6260_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6260_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6260),
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_173_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6260)
);
}


/* Temperatuur - ns=2;i=13 */

static UA_StatusCode function_lcbc_ns2_174_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_13_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_13_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_13_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperatuur");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Temperature"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_13_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_174_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 13)
);
}


/* AlarmHigh - ns=2;i=6311 */

static UA_StatusCode function_lcbc_ns2_175_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6311_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6311_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6311_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6311),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_175_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6311)
);
}


/* AlarmLow - ns=2;i=6312 */

static UA_StatusCode function_lcbc_ns2_176_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6312_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6312_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6312_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6312),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_176_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6312)
);
}


/* FeederCtx - ns=2;i=6313 */

static UA_StatusCode function_lcbc_ns2_177_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6313_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6313_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6313_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6313),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_177_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6313)
);
}


/* FeederIdx - ns=2;i=6314 */

static UA_StatusCode function_lcbc_ns2_178_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6314_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6314_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6314_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6314),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6314_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_178_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6314)
);
}


/* InUse - ns=2;i=6315 */

static UA_StatusCode function_lcbc_ns2_179_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6315_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6315_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6315_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6315),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6315_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_179_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6315)
);
}


/* OffTxt - ns=2;i=6316 */

static UA_StatusCode function_lcbc_ns2_180_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6316_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6316_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6316_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6316),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_180_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6316)
);
}


/* OnTxt - ns=2;i=6317 */

static UA_StatusCode function_lcbc_ns2_181_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6317_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6317_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6317_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6317),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_181_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6317)
);
}


/* Pos - ns=2;i=6318 */

static UA_StatusCode function_lcbc_ns2_182_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6318_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6318_variant_DataContents = (UA_Int16) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6318_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6318),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6318_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_182_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6318)
);
}


/* Type - ns=2;i=6319 */

static UA_StatusCode function_lcbc_ns2_183_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6319_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6319_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6319_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6319),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6319_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_183_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6319)
);
}


/* Sireen Juhtimine - ns=2;i=10 */

static UA_StatusCode function_lcbc_ns2_184_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Sireen Juhtimine");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 10),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SirenControl"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_184_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 10)
, NULL, 0, NULL, 0, NULL);
}


/* InputArguments - ns=2;i=6299 */

static UA_StatusCode function_lcbc_ns2_185_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6299),
UA_NODEID_NUMERIC(ns[2], 10),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_185_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6299)
);
}


/* FeederCtx - ns=2;i=6341 */

static UA_StatusCode function_lcbc_ns2_186_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6341_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6341_variant_DataContents = UA_STRING_ALLOC("TX_LCB");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6341_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6341),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6341_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_186_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6341)
);
}


/* Type - ns=2;i=6320 */

static UA_StatusCode function_lcbc_ns2_187_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6320_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6320_variant_DataContents = UA_STRING_ALLOC("TX");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6320_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6320),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6320_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_187_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6320)
);
}


/* Ukse alarm - ns=2;i=8 */

static UA_StatusCode function_lcbc_ns2_188_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_8_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_8_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_8_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Ukse alarm");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DoorAlarm"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_8_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_188_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 8)
);
}


/* Type - ns=2;i=6330 */

static UA_StatusCode function_lcbc_ns2_189_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6330_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6330_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6330_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6330),
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6330_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_189_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6330)
);
}


/* OnTxt - ns=2;i=6328 */

static UA_StatusCode function_lcbc_ns2_190_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6328_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6328_variant_DataContents = UA_STRING_ALLOC("Kinni");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6328_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6328),
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6328_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_190_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6328)
);
}


/* Pos - ns=2;i=6329 */

static UA_StatusCode function_lcbc_ns2_191_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6329_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6329_variant_DataContents = (UA_Int16) 4;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6329_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6329),
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6329_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_191_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6329)
);
}


/* AlarmHigh - ns=2;i=6322 */

static UA_StatusCode function_lcbc_ns2_192_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6322_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6322_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6322_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6322),
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_192_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6322)
);
}


/* AlarmLow - ns=2;i=6323 */

static UA_StatusCode function_lcbc_ns2_193_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6323_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6323_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6323_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6323),
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6323_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_193_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6323)
);
}


/* FeederCtx - ns=2;i=6324 */

static UA_StatusCode function_lcbc_ns2_194_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6324_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6324_variant_DataContents = UA_STRING_ALLOC("DI_DRA");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6324_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6324),
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6324_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_194_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6324)
);
}


/* FeederIdx - ns=2;i=6325 */

static UA_StatusCode function_lcbc_ns2_195_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6325_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6325_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6325_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6325),
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6325_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_195_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6325)
);
}


/* InUse - ns=2;i=6326 */

static UA_StatusCode function_lcbc_ns2_196_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6326_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6326_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6326_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6326),
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6326_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_196_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6326)
);
}


/* OffTxt - ns=2;i=6327 */

static UA_StatusCode function_lcbc_ns2_197_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6327_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6327_variant_DataContents = UA_STRING_ALLOC("Lahti");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6327_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6327),
UA_NODEID_NUMERIC(ns[2], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6327_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_197_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6327)
);
}


/* FeederIdx - ns=2;i=6342 */

static UA_StatusCode function_lcbc_ns2_198_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6342_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6342_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6342_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6342),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6342_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_198_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6342)
);
}


/* Sireen Staatus - ns=2;i=9 */

static UA_StatusCode function_lcbc_ns2_199_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_9_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_9_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_9_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Sireen Staatus");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SirenState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_9_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_199_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 9)
);
}


/* InUse - ns=2;i=6305 */

static UA_StatusCode function_lcbc_ns2_200_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6305_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6305_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6305_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6305),
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6305_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_200_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6305)
);
}


/* FeederIdx - ns=2;i=6304 */

static UA_StatusCode function_lcbc_ns2_201_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6304_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6304_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6304_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6304),
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6304_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_201_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6304)
);
}


/* OnTxt - ns=2;i=6307 */

static UA_StatusCode function_lcbc_ns2_202_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6307_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6307_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6307_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6307),
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6307_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_202_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6307)
);
}


/* OffTxt - ns=2;i=6306 */

static UA_StatusCode function_lcbc_ns2_203_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6306_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6306_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6306_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6306),
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6306_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_203_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6306)
);
}


/* AlarmHigh - ns=2;i=6301 */

static UA_StatusCode function_lcbc_ns2_204_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6301_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6301_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6301_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6301),
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6301_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_204_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6301)
);
}


/* FeederCtx - ns=2;i=6303 */

static UA_StatusCode function_lcbc_ns2_205_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6303_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6303_variant_DataContents = UA_STRING_ALLOC("DI_SRN");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6303_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6303),
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6303_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_205_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6303)
);
}


/* AlarmLow - ns=2;i=6302 */

static UA_StatusCode function_lcbc_ns2_206_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6302_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6302_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6302_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6302),
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_206_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6302)
);
}


/* Type - ns=2;i=6309 */

static UA_StatusCode function_lcbc_ns2_207_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6309_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6309_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6309_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6309),
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6309_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_207_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6309)
);
}


/* Pos - ns=2;i=6308 */

static UA_StatusCode function_lcbc_ns2_208_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6308_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6308_variant_DataContents = (UA_Int16) 4;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6308_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6308),
UA_NODEID_NUMERIC(ns[2], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6308_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_208_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6308)
);
}


/* Analoogvaljund - ns=2;i=28 */

static UA_StatusCode function_lcbc_ns2_209_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Analoogvaljund");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 28),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AnalogOutput"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_209_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 28)
, NULL, 0, NULL, 0, NULL);
}


/* InputArguments - ns=2;i=6235 */

static UA_StatusCode function_lcbc_ns2_210_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6235),
UA_NODEID_NUMERIC(ns[2], 28),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_210_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6235)
);
}


/* OutputArguments - ns=2;i=6236 */

static UA_StatusCode function_lcbc_ns2_211_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6236),
UA_NODEID_NUMERIC(ns[2], 28),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_211_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6236)
);
}


/* Kohalik valgusandur - ns=2;i=11 */

static UA_StatusCode function_lcbc_ns2_212_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_11_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_11_variant_DataContents = (UA_Double) 1.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_11_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kohalik valgusandur");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "LocalLightSensor"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_11_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_212_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 11)
);
}


/* FeederIdx - ns=2;i=6273 */

static UA_StatusCode function_lcbc_ns2_213_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6273_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6273_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6273_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6273),
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6273_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_213_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6273)
);
}


/* OffTxt - ns=2;i=6275 */

static UA_StatusCode function_lcbc_ns2_214_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6275_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6275_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6275_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6275),
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_214_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6275)
);
}


/* InUse - ns=2;i=6274 */

static UA_StatusCode function_lcbc_ns2_215_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6274_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6274_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6274_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6274),
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6274_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_215_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6274)
);
}


/* Pos - ns=2;i=6277 */

static UA_StatusCode function_lcbc_ns2_216_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6277_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6277_variant_DataContents = (UA_Int16) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6277_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6277),
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6277_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_216_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6277)
);
}


/* OnTxt - ns=2;i=6276 */

static UA_StatusCode function_lcbc_ns2_217_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6276_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6276_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6276_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6276),
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_217_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6276)
);
}


/* AlarmLow - ns=2;i=6271 */

static UA_StatusCode function_lcbc_ns2_218_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6271_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6271_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6271_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6271),
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_218_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6271)
);
}


/* AlarmHigh - ns=2;i=6270 */

static UA_StatusCode function_lcbc_ns2_219_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6270_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6270_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6270_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6270),
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_219_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6270)
);
}


/* FeederCtx - ns=2;i=6272 */

static UA_StatusCode function_lcbc_ns2_220_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6272_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6272_variant_DataContents = UA_STRING_ALLOC("AI_LLS");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6272_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6272),
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6272_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_220_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6272)
);
}


/* Type - ns=2;i=6278 */

static UA_StatusCode function_lcbc_ns2_221_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6278_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6278_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6278_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6278),
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6278_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_221_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6278)
);
}


/* Koondalarm - ns=2;i=2 */

static UA_StatusCode function_lcbc_ns2_222_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_2_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_2_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_2_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Koondalarm");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AlarmState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_2_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_222_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 2)
);
}


/* AlarmLow - ns=2;i=6281 */

static UA_StatusCode function_lcbc_ns2_223_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6281_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6281_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6281_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6281),
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_223_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6281)
);
}


/* AlarmHigh - ns=2;i=6280 */

static UA_StatusCode function_lcbc_ns2_224_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6280_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6280_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6280_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6280),
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6280_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_224_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6280)
);
}


/* FeederIdx - ns=2;i=6283 */

static UA_StatusCode function_lcbc_ns2_225_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6283_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6283_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6283_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6283),
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6283_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_225_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6283)
);
}


/* FeederCtx - ns=2;i=6282 */

static UA_StatusCode function_lcbc_ns2_226_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6282_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6282_variant_DataContents = UA_STRING_ALLOC("DI_CA");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6282_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6282),
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6282_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_226_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6282)
);
}


/* OffTxt - ns=2;i=6285 */

static UA_StatusCode function_lcbc_ns2_227_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6285_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6285_variant_DataContents = UA_STRING_ALLOC("OK");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6285_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6285),
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6285_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_227_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6285)
);
}


/* InUse - ns=2;i=6284 */

static UA_StatusCode function_lcbc_ns2_228_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6284_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6284_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6284_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6284),
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6284_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_228_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6284)
);
}


/* Pos - ns=2;i=6287 */

static UA_StatusCode function_lcbc_ns2_229_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6287_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6287_variant_DataContents = (UA_Int16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6287_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6287),
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6287_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_229_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6287)
);
}


/* OnTxt - ns=2;i=6286 */

static UA_StatusCode function_lcbc_ns2_230_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6286_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6286_variant_DataContents = UA_STRING_ALLOC("Alarm");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6286_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6286),
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6286_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_230_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6286)
);
}


/* Type - ns=2;i=6288 */

static UA_StatusCode function_lcbc_ns2_231_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6288_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6288_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6288_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6288),
UA_NODEID_NUMERIC(ns[2], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6288_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_231_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6288)
);
}


/* Kasijuhtimisel - ns=2;i=3 */

static UA_StatusCode function_lcbc_ns2_232_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_3_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_3_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_3_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kasijuhtimisel");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ManualOverrideState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_3_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_232_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 3)
);
}


/* OffTxt - ns=2;i=6255 */

static UA_StatusCode function_lcbc_ns2_233_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6255_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6255_variant_DataContents = UA_STRING_ALLOC("Autom. juht.");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6255_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6255),
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6255_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_233_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6255)
);
}


/* InUse - ns=2;i=6254 */

static UA_StatusCode function_lcbc_ns2_234_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6254_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6254_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6254_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6254),
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6254_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_234_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6254)
);
}


/* Pos - ns=2;i=6257 */

static UA_StatusCode function_lcbc_ns2_235_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6257_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6257_variant_DataContents = (UA_Int16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6257_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6257),
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6257_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_235_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6257)
);
}


/* OnTxt - ns=2;i=6256 */

static UA_StatusCode function_lcbc_ns2_236_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6256_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6256_variant_DataContents = UA_STRING_ALLOC("Kasijuht");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6256_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6256),
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6256_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_236_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6256)
);
}


/* AlarmLow - ns=2;i=6251 */

static UA_StatusCode function_lcbc_ns2_237_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6251_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6251_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6251_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6251),
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_237_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6251)
);
}


/* AlarmHigh - ns=2;i=6250 */

static UA_StatusCode function_lcbc_ns2_238_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6250_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6250_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6250_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6250),
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6250_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_238_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6250)
);
}


/* FeederIdx - ns=2;i=6253 */

static UA_StatusCode function_lcbc_ns2_239_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6253_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6253_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6253_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6253),
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6253_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_239_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6253)
);
}


/* FeederCtx - ns=2;i=6252 */

static UA_StatusCode function_lcbc_ns2_240_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6252_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6252_variant_DataContents = UA_STRING_ALLOC("DI_MAN");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6252_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6252),
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6252_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_240_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6252)
);
}


/* Type - ns=2;i=6258 */

static UA_StatusCode function_lcbc_ns2_241_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6258_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6258_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6258_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6258),
UA_NODEID_NUMERIC(ns[2], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6258_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_241_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6258)
);
}


/* Pos - ns=2;i=6343 */

static UA_StatusCode function_lcbc_ns2_242_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6343_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6343_variant_DataContents = (UA_Int16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6343_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6343),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6343_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_242_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6343)
);
}


/* Pinge Alarm - ns=2;i=6 */

static UA_StatusCode function_lcbc_ns2_243_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_6_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_6_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pinge Alarm");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "VoltageAlarm"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_6_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_243_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6)
);
}


/* Type - ns=2;i=6298 */

static UA_StatusCode function_lcbc_ns2_244_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6298_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6298_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6298_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6298),
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6298_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_244_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6298)
);
}


/* FeederCtx - ns=2;i=6292 */

static UA_StatusCode function_lcbc_ns2_245_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6292_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6292_variant_DataContents = UA_STRING_ALLOC("DI_VA");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6292_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6292),
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6292_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_245_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6292)
);
}


/* FeederIdx - ns=2;i=6293 */

static UA_StatusCode function_lcbc_ns2_246_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6293_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6293_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6293_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6293),
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6293_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_246_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6293)
);
}


/* AlarmHigh - ns=2;i=6290 */

static UA_StatusCode function_lcbc_ns2_247_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6290_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6290_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6290_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6290),
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6290_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_247_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6290)
);
}


/* AlarmLow - ns=2;i=6291 */

static UA_StatusCode function_lcbc_ns2_248_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6291_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6291_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6291_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6291),
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_248_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6291)
);
}


/* OnTxt - ns=2;i=6296 */

static UA_StatusCode function_lcbc_ns2_249_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6296_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6296_variant_DataContents = UA_STRING_ALLOC("Alarm");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6296_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6296),
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6296_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_249_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6296)
);
}


/* Pos - ns=2;i=6297 */

static UA_StatusCode function_lcbc_ns2_250_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6297_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6297_variant_DataContents = (UA_Int16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6297_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6297),
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6297_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_250_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6297)
);
}


/* InUse - ns=2;i=6294 */

static UA_StatusCode function_lcbc_ns2_251_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6294_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6294_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6294_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6294),
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6294_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_251_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6294)
);
}


/* OffTxt - ns=2;i=6295 */

static UA_StatusCode function_lcbc_ns2_252_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6295_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6295_variant_DataContents = UA_STRING_ALLOC("OK");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6295_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6295),
UA_NODEID_NUMERIC(ns[2], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6295_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_252_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6295)
);
}


/* Automaadid Sees - ns=2;i=7 */

static UA_StatusCode function_lcbc_ns2_253_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_7_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_7_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_7_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Automaadid Sees");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CBStatus"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_7_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_253_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7)
);
}


/* AlarmLow - ns=2;i=6239 */

static UA_StatusCode function_lcbc_ns2_254_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6239_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6239_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6239_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6239),
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_254_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6239)
);
}


/* AlarmHigh - ns=2;i=6238 */

static UA_StatusCode function_lcbc_ns2_255_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6238_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6238_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6238_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6238),
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6238_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_255_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6238)
);
}


/* Type - ns=2;i=6246 */

static UA_StatusCode function_lcbc_ns2_256_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6246_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6246_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6246_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6246),
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6246_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_256_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6246)
);
}


/* OnTxt - ns=2;i=6244 */

static UA_StatusCode function_lcbc_ns2_257_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6244_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6244_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6244_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6244),
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6244_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_257_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6244)
);
}


/* Pos - ns=2;i=6245 */

static UA_StatusCode function_lcbc_ns2_258_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6245_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6245_variant_DataContents = (UA_Int16) 4;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6245_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6245),
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6245_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_258_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6245)
);
}


/* InUse - ns=2;i=6242 */

static UA_StatusCode function_lcbc_ns2_259_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6242_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6242_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6242_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6242),
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6242_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_259_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6242)
);
}


/* OffTxt - ns=2;i=6243 */

static UA_StatusCode function_lcbc_ns2_260_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6243_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6243_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6243_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6243),
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6243_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_260_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6243)
);
}


/* FeederCtx - ns=2;i=6240 */

static UA_StatusCode function_lcbc_ns2_261_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6240_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6240_variant_DataContents = UA_STRING_ALLOC("DI_CB");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6240_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6240),
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6240_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_261_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6240)
);
}


/* FeederIdx - ns=2;i=6241 */

static UA_StatusCode function_lcbc_ns2_262_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6241_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6241_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6241_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6241),
UA_NODEID_NUMERIC(ns[2], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6241_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_262_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6241)
);
}


/* Kasijuhtimine - ns=2;i=4 */

static UA_StatusCode function_lcbc_ns2_263_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Kasijuhtimine");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 4),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ManualOverrideControl"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_263_finish(UA_Server *server, UA_UInt16* ns) {

    UA_Argument inputArgument;
    UA_Argument outputArgument;
    createDigitalMethodArguments(&inputArgument, &outputArgument);

    /// I won't free this mem anywhere. It is OK, bc I need this thruought the whole process
    lcbc_ctrl_ctx *context = (lcbc_ctrl_ctx *)malloc(sizeof(lcbc_ctrl_ctx));
    context->NameSpaceIndex = LCBC2_NAMESPACE;
    context->StateVarNodeId = ManualOverrideState_ID;

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[2], ManualOverrideControl_ID),
        context);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 4)
, controlMethodCallbackManual, 1, &inputArgument, 1, &outputArgument);
}


/* InputArguments - ns=2;i=6247 */

static UA_StatusCode function_lcbc_ns2_264_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6247),
// UA_NODEID_NUMERIC(ns[2], 4),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "InputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_264_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6247)
);
}


/* OutputArguments - ns=2;i=6248 */

static UA_StatusCode function_lcbc_ns2_265_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6248),
// UA_NODEID_NUMERIC(ns[2], 4),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6248)
);
}


/* Valgustus Sees - ns=2;i=5 */

static UA_StatusCode function_lcbc_ns2_266_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_5_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_5_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_5_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Valgustus Sees");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Active"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_5_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_266_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5)
);
}


/* OnTxt - ns=2;i=6338 */

static UA_StatusCode function_lcbc_ns2_267_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6338_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6338_variant_DataContents = UA_STRING_ALLOC("Aktiivne");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6338_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6338),
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6338_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_267_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6338)
);
}


/* Pos - ns=2;i=6339 */

static UA_StatusCode function_lcbc_ns2_268_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6339_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6339_variant_DataContents = (UA_Int16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6339_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6339),
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6339_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_268_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6339)
);
}


/* FeederIdx - ns=2;i=6335 */

static UA_StatusCode function_lcbc_ns2_269_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6335_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6335_variant_DataContents = (UA_UInt16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6335_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6335),
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6335_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_269_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6335)
);
}


/* AlarmHigh - ns=2;i=6332 */

static UA_StatusCode function_lcbc_ns2_270_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6332_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6332_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6332_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6332),
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6332_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_270_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6332)
);
}


/* AlarmLow - ns=2;i=6333 */

static UA_StatusCode function_lcbc_ns2_271_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6333_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6333_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6333_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6333),
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_271_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6333)
);
}


/* FeederCtx - ns=2;i=6334 */

static UA_StatusCode function_lcbc_ns2_272_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6334_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6334_variant_DataContents = UA_STRING_ALLOC("DI_ACT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6334_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6334),
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6334_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_272_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6334)
);
}


/* Type - ns=2;i=6340 */

static UA_StatusCode function_lcbc_ns2_273_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6340_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6340_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6340_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6340),
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6340_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_273_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6340)
);
}


/* InUse - ns=2;i=6336 */

static UA_StatusCode function_lcbc_ns2_274_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6336_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6336_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6336_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6336),
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6336_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_274_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6336)
);
}


/* OffTxt - ns=2;i=6337 */

static UA_StatusCode function_lcbc_ns2_275_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6337_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6337_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6337_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6337),
UA_NODEID_NUMERIC(ns[2], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6337_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_275_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6337)
);
}


/* Feeder3 - ns=2;i=300 */

static UA_StatusCode function_lcbc_ns2_276_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Feeder3");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[2], 50000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Feeder3"),
UA_NODEID_NUMERIC(ns[1], 1002),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_276_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 300)
);
}


/* Type - ns=2;i=6194 */

static UA_StatusCode function_lcbc_ns2_277_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6194_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6194_variant_DataContents = UA_STRING_ALLOC("TX");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6194_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6194),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6194_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_277_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6194)
);
}


/* Voimsus - ns=2;i=310 */

static UA_StatusCode function_lcbc_ns2_278_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_310_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_310_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_310_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Voimsus");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Power"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_310_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_278_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 310)
);
}


/* OffTxt - ns=2;i=6201 */

static UA_StatusCode function_lcbc_ns2_279_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6201_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6201_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6201_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6201),
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_279_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6201)
);
}


/* InUse - ns=2;i=6200 */

static UA_StatusCode function_lcbc_ns2_280_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6200_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6200_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6200_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6200),
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6200_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_280_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6200)
);
}


/* Pos - ns=2;i=6203 */

static UA_StatusCode function_lcbc_ns2_281_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6203_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6203_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6203_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6203),
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6203_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_281_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6203)
);
}


/* OnTxt - ns=2;i=6202 */

static UA_StatusCode function_lcbc_ns2_282_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6202_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6202_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6202_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6202),
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_282_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6202)
);
}


/* Type - ns=2;i=6204 */

static UA_StatusCode function_lcbc_ns2_283_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6204_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6204_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6204_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6204),
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6204_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_283_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6204)
);
}


/* AlarmLow - ns=2;i=6197 */

static UA_StatusCode function_lcbc_ns2_284_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6197_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6197_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6197_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6197),
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_284_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6197)
);
}


/* AlarmHigh - ns=2;i=6196 */

static UA_StatusCode function_lcbc_ns2_285_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6196_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6196_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6196_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6196),
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6196_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_285_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6196)
);
}


/* FeederIdx - ns=2;i=6199 */

static UA_StatusCode function_lcbc_ns2_286_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6199_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6199_variant_DataContents = (UA_UInt16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6199_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6199),
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6199_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_286_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6199)
);
}


/* FeederCtx - ns=2;i=6198 */

static UA_StatusCode function_lcbc_ns2_287_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6198_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6198_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6198_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6198),
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_287_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6198)
);
}


/* Juhtimine - ns=2;i=302 */

static UA_StatusCode function_lcbc_ns2_288_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Juhtimine");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 302),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Control"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_288_finish(UA_Server *server, UA_UInt16* ns) {

    UA_Argument inputArgument;
    UA_Argument outputArgument;
    createDigitalMethodArguments(&inputArgument, &outputArgument);

    /// I won't free this mem anywhere. It is OK, bc I need this thruought the whole process
    lcbc_ctrl_ctx *context =  (lcbc_ctrl_ctx *)malloc(sizeof(lcbc_ctrl_ctx));
    context->NameSpaceIndex = LCBC2_NAMESPACE;
    context->StateVarNodeId = F3_State_ID;

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[2], F3_Control_ID),
        context);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 302)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* OutputArguments - ns=2;i=6192 */

static UA_StatusCode function_lcbc_ns2_289_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6192),
// UA_NODEID_NUMERIC(ns[2], 302),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6192)
);
}


/* InputArguments - ns=2;i=6191 */

static UA_StatusCode function_lcbc_ns2_290_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6191),
// UA_NODEID_NUMERIC(ns[2], 302),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "InputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_290_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6191)
);
}


/* Pos - ns=2;i=6193 */

static UA_StatusCode function_lcbc_ns2_291_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6193_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6193_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6193_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6193),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6193_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_291_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6193)
);
}


/* Energia - ns=2;i=311 */

static UA_StatusCode function_lcbc_ns2_292_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_311_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_i_311_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_311_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Energia");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Energy"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_311_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_292_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 311)
);
}


/* OnTxt - ns=2;i=6174 */

static UA_StatusCode function_lcbc_ns2_293_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6174_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6174_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6174_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6174),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_293_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6174)
);
}


/* AlarmLow - ns=2;i=6169 */

static UA_StatusCode function_lcbc_ns2_294_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6169_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6169_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6169_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6169),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_294_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6169)
);
}


/* AlarmHigh - ns=2;i=6168 */

static UA_StatusCode function_lcbc_ns2_295_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6168_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6168_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6168_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6168),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_295_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6168)
);
}


/* FeederCtx - ns=2;i=6170 */

static UA_StatusCode function_lcbc_ns2_296_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6170_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6170_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6170_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6170),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_296_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6170)
);
}


/* FeederIdx - ns=2;i=6171 */

static UA_StatusCode function_lcbc_ns2_297_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6171_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6171_variant_DataContents = (UA_UInt16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6171_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6171),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6171_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_297_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6171)
);
}


/* InUse - ns=2;i=6172 */

static UA_StatusCode function_lcbc_ns2_298_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6172_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6172_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6172_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6172),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6172_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_298_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6172)
);
}


/* OffTxt - ns=2;i=6173 */

static UA_StatusCode function_lcbc_ns2_299_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6173_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6173_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6173_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6173),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_299_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6173)
);
}


/* Pos - ns=2;i=6175 */

static UA_StatusCode function_lcbc_ns2_300_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6175_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6175_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6175_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6175),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6175_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_300_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6175)
);
}


/* Type - ns=2;i=6176 */

static UA_StatusCode function_lcbc_ns2_301_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6176_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6176_variant_DataContents = UA_STRING_ALLOC("CN");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6176_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6176),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6176_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_301_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6176)
);
}


/* Hamardamise olek - ns=2;i=303 */

static UA_StatusCode function_lcbc_ns2_302_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_303_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_303_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_303_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Hamardamise olek");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DimmState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_303_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_302_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 303)
);
}


/* AlarmHigh - ns=2;i=6182 */

static UA_StatusCode function_lcbc_ns2_303_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6182_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6182_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6182_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6182),
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_303_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6182)
);
}


/* Type - ns=2;i=6190 */

static UA_StatusCode function_lcbc_ns2_304_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6190_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6190_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6190_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6190),
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6190_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_304_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6190)
);
}


/* InUse - ns=2;i=6186 */

static UA_StatusCode function_lcbc_ns2_305_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6186_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6186_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6186_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6186),
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6186_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_305_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6186)
);
}


/* OffTxt - ns=2;i=6187 */

static UA_StatusCode function_lcbc_ns2_306_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6187_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6187_variant_DataContents = UA_STRING_ALLOC("Norm");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6187_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6187),
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6187_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_306_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6187)
);
}


/* FeederCtx - ns=2;i=6184 */

static UA_StatusCode function_lcbc_ns2_307_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6184_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6184_variant_DataContents = UA_STRING_ALLOC("DI_FxD");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6184_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6184),
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6184_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_307_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6184)
);
}


/* FeederIdx - ns=2;i=6185 */

static UA_StatusCode function_lcbc_ns2_308_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6185_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6185_variant_DataContents = (UA_UInt16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6185_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6185),
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6185_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_308_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6185)
);
}


/* AlarmLow - ns=2;i=6183 */

static UA_StatusCode function_lcbc_ns2_309_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6183_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6183_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6183_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6183),
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_309_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6183)
);
}


/* OnTxt - ns=2;i=6188 */

static UA_StatusCode function_lcbc_ns2_310_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6188_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6188_variant_DataContents = UA_STRING_ALLOC("Hamar");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6188_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6188),
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6188_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_310_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6188)
);
}


/* Pos - ns=2;i=6189 */

static UA_StatusCode function_lcbc_ns2_311_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6189_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6189_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6189_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6189),
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6189_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_311_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6189)
);
}


/* FeederCtx - ns=2;i=6177 */

static UA_StatusCode function_lcbc_ns2_312_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6177_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6177_variant_DataContents = UA_STRING_ALLOC("TX_FN");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6177_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6177),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6177_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_312_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6177)
);
}


/* Asend - ns=2;i=301 */

static UA_StatusCode function_lcbc_ns2_313_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_2_i_301_variant_DataContents =  UA_Byte_new();
*variablenode_ns_2_i_301_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_301_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Asend");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "State"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_2_i_301_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_313_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 301)
);
}


/* Type - ns=2;i=6166 */

static UA_StatusCode function_lcbc_ns2_314_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6166_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6166_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6166_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6166),
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6166_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_314_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6166)
);
}


/* AlarmHigh - ns=2;i=6158 */

static UA_StatusCode function_lcbc_ns2_315_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6158_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6158_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6158_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6158),
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_315_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6158)
);
}


/* AlarmLow - ns=2;i=6159 */

static UA_StatusCode function_lcbc_ns2_316_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6159_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6159_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6159_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6159),
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_316_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6159)
);
}


/* OnTxt - ns=2;i=6164 */

static UA_StatusCode function_lcbc_ns2_317_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6164_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6164_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6164_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6164),
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6164_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_317_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6164)
);
}


/* Pos - ns=2;i=6165 */

static UA_StatusCode function_lcbc_ns2_318_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6165_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6165_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6165_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6165),
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6165_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_318_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6165)
);
}


/* InUse - ns=2;i=6162 */

static UA_StatusCode function_lcbc_ns2_319_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6162_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6162_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6162_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6162),
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6162_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_319_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6162)
);
}


/* OffTxt - ns=2;i=6163 */

static UA_StatusCode function_lcbc_ns2_320_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6163_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6163_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6163_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6163),
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6163_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_320_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6163)
);
}


/* FeederCtx - ns=2;i=6160 */

static UA_StatusCode function_lcbc_ns2_321_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6160_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6160_variant_DataContents = UA_STRING_ALLOC("DI_FxS");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6160_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6160),
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6160_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_321_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6160)
);
}


/* FeederIdx - ns=2;i=6161 */

static UA_StatusCode function_lcbc_ns2_322_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6161_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6161_variant_DataContents = (UA_UInt16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6161_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6161),
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6161_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_322_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6161)
);
}


/* Vool 1 f. - ns=2;i=307 */

static UA_StatusCode function_lcbc_ns2_323_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_307_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_307_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_307_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Vool 1 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 1 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_307_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_323_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 307)
);
}


/* Type - ns=2;i=6214 */

static UA_StatusCode function_lcbc_ns2_324_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6214_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6214_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6214_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6214),
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6214_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_324_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6214)
);
}


/* FeederIdx - ns=2;i=6209 */

static UA_StatusCode function_lcbc_ns2_325_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6209_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6209_variant_DataContents = (UA_UInt16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6209_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6209),
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6209_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_325_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6209)
);
}


/* FeederCtx - ns=2;i=6208 */

static UA_StatusCode function_lcbc_ns2_326_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6208_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6208_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6208_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6208),
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_326_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6208)
);
}


/* AlarmLow - ns=2;i=6207 */

static UA_StatusCode function_lcbc_ns2_327_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6207_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6207_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6207_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6207),
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_327_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6207)
);
}


/* AlarmHigh - ns=2;i=6206 */

static UA_StatusCode function_lcbc_ns2_328_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6206_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6206_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6206_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6206),
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6206_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_328_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6206)
);
}


/* OnTxt - ns=2;i=6212 */

static UA_StatusCode function_lcbc_ns2_329_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6212_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6212_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6212_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6212),
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_329_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6212)
);
}


/* Pos - ns=2;i=6213 */

static UA_StatusCode function_lcbc_ns2_330_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6213_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6213_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6213_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6213),
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6213_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_330_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6213)
);
}


/* InUse - ns=2;i=6210 */

static UA_StatusCode function_lcbc_ns2_331_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6210_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6210_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6210_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6210),
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6210_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_331_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6210)
);
}


/* OffTxt - ns=2;i=6211 */

static UA_StatusCode function_lcbc_ns2_332_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6211_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6211_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6211_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6211),
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_332_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6211)
);
}


/* Hamardamise juhtimine - ns=2;i=304 */

static UA_StatusCode function_lcbc_ns2_333_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Hamardamise juhtimine");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 304),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DimmControl"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_333_finish(UA_Server *server, UA_UInt16* ns) {
    UA_Argument inputArgument;
    UA_Argument outputArgument;
    createDigitalMethodArguments(&inputArgument, &outputArgument);

    /// I won't free this mem anywhere. It is OK, bc I need this thruought the whole process
    lcbc_ctrl_ctx *context =  (lcbc_ctrl_ctx *)malloc(sizeof(lcbc_ctrl_ctx));
    context->NameSpaceIndex = LCBC2_NAMESPACE;
    context->StateVarNodeId = F3_DimmState_ID;

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[2], F3_DimmControl_ID),
        context);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 304)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* InputArguments - ns=2;i=6179 */

static UA_StatusCode function_lcbc_ns2_334_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6179),
// UA_NODEID_NUMERIC(ns[2], 304),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "InputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_334_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6179)
);
}


/* OutputArguments - ns=2;i=6180 */

static UA_StatusCode function_lcbc_ns2_335_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
// UA_VariableAttributes attr = UA_VariableAttributes_default;
// attr.minimumSamplingInterval = 0.000000;
// attr.userAccessLevel = 1;
// attr.accessLevel = 1;
// attr.valueRank = 1;
// attr.arrayDimensionsSize = 1;
// attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
// attr.arrayDimensions[0] = 0;
// attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
// attr.description = UA_LOCALIZEDTEXT("", "");
// attr.writeMask = 0;
// attr.userWriteMask = 0;
// retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
// UA_NODEID_NUMERIC(ns[2], 6180),
// UA_NODEID_NUMERIC(ns[2], 304),
// UA_NODEID_NUMERIC(ns[0], 46),
// UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
// UA_NODEID_NUMERIC(ns[0], 68),
// (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
// UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_335_finish(UA_Server *server, UA_UInt16* ns) {
return UA_STATUSCODE_GOOD;
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6180)
);
}


/* Vool 3 f. - ns=2;i=309 */

static UA_StatusCode function_lcbc_ns2_336_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_309_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_309_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_309_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Vool 3 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 3 f"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_309_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_336_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 309)
);
}


/* AlarmLow - ns=2;i=6227 */

static UA_StatusCode function_lcbc_ns2_337_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6227_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6227_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6227_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6227),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_337_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6227)
);
}


/* FeederIdx - ns=2;i=6229 */

static UA_StatusCode function_lcbc_ns2_338_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6229_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6229_variant_DataContents = (UA_UInt16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6229_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6229),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6229_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_338_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6229)
);
}


/* FeederCtx - ns=2;i=6228 */

static UA_StatusCode function_lcbc_ns2_339_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6228_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6228_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6228_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6228),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_339_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6228)
);
}


/* Type - ns=2;i=6234 */

static UA_StatusCode function_lcbc_ns2_340_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6234_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6234_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6234_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6234),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6234_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_340_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6234)
);
}


/* AlarmHigh - ns=2;i=6226 */

static UA_StatusCode function_lcbc_ns2_341_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6226_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6226_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6226_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6226),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6226_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_341_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6226)
);
}


/* OnTxt - ns=2;i=6232 */

static UA_StatusCode function_lcbc_ns2_342_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6232_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6232_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6232_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6232),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_342_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6232)
);
}


/* Pos - ns=2;i=6233 */

static UA_StatusCode function_lcbc_ns2_343_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6233_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6233_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6233_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6233),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6233_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_343_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6233)
);
}


/* InUse - ns=2;i=6230 */

static UA_StatusCode function_lcbc_ns2_344_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6230_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6230_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6230_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6230),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6230_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_344_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6230)
);
}


/* OffTxt - ns=2;i=6231 */

static UA_StatusCode function_lcbc_ns2_345_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6231_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6231_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6231_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6231),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_345_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6231)
);
}


/* Vool 2 f. - ns=2;i=308 */

static UA_StatusCode function_lcbc_ns2_346_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_308_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_i_308_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_308_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Vool 2 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 2 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_308_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_346_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 308)
);
}


/* AlarmLow - ns=2;i=6217 */

static UA_StatusCode function_lcbc_ns2_347_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_2_i_6217_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6217_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6217_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6217),
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_347_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6217)
);
}


/* AlarmHigh - ns=2;i=6216 */

static UA_StatusCode function_lcbc_ns2_348_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_2_i_6216_variant_DataContents =  UA_Int32_new();
*variablenode_ns_2_i_6216_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6216_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6216),
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6216_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_348_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6216)
);
}


/* InUse - ns=2;i=6220 */

static UA_StatusCode function_lcbc_ns2_349_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6220_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_i_6220_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6220_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6220),
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6220_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_349_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6220)
);
}


/* OffTxt - ns=2;i=6221 */

static UA_StatusCode function_lcbc_ns2_350_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6221_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6221_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6221_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6221),
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_350_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6221)
);
}


/* Type - ns=2;i=6224 */

static UA_StatusCode function_lcbc_ns2_351_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6224_variant_DataContents =  UA_String_new();
*variablenode_ns_2_i_6224_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6224_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6224),
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6224_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_351_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6224)
);
}


/* OnTxt - ns=2;i=6222 */

static UA_StatusCode function_lcbc_ns2_352_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6222_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6222_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6222_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6222),
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_352_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6222)
);
}


/* Pos - ns=2;i=6223 */

static UA_StatusCode function_lcbc_ns2_353_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_2_i_6223_variant_DataContents =  UA_Int16_new();
*variablenode_ns_2_i_6223_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6223_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6223),
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_2_i_6223_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_353_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6223)
);
}


/* FeederIdx - ns=2;i=6219 */

static UA_StatusCode function_lcbc_ns2_354_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6219_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6219_variant_DataContents = (UA_UInt16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6219_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6219),
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6219_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_354_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6219)
);
}


/* FeederCtx - ns=2;i=6218 */

static UA_StatusCode function_lcbc_ns2_355_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_2_i_6218_variant_DataContents, 1);
UA_init(variablenode_ns_2_i_6218_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6218_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6218),
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_355_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6218)
);
}


/* FeederIdx - ns=2;i=6178 */

static UA_StatusCode function_lcbc_ns2_356_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_2_i_6178_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_2_i_6178_variant_DataContents = (UA_UInt16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6178_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6178),
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_2_i_6178_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_ns2_356_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6178)
);
}


UA_StatusCode lcbc_ns2(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[3];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://martem.eu/LCBC1/");
ns[2] = UA_Server_addNamespace(server, "http://martem.eu/LCBC2/");
retVal |= function_lcbc_ns2_0_begin(server, ns);
retVal |= function_lcbc_ns2_1_begin(server, ns);
retVal |= function_lcbc_ns2_2_begin(server, ns);
retVal |= function_lcbc_ns2_3_begin(server, ns);
retVal |= function_lcbc_ns2_4_begin(server, ns);
retVal |= function_lcbc_ns2_5_begin(server, ns);
retVal |= function_lcbc_ns2_6_begin(server, ns);
retVal |= function_lcbc_ns2_7_begin(server, ns);
retVal |= function_lcbc_ns2_8_begin(server, ns);
retVal |= function_lcbc_ns2_9_begin(server, ns);
retVal |= function_lcbc_ns2_10_begin(server, ns);
retVal |= function_lcbc_ns2_11_begin(server, ns);
retVal |= function_lcbc_ns2_12_begin(server, ns);
retVal |= function_lcbc_ns2_13_begin(server, ns);
retVal |= function_lcbc_ns2_14_begin(server, ns);
retVal |= function_lcbc_ns2_15_begin(server, ns);
retVal |= function_lcbc_ns2_16_begin(server, ns);
retVal |= function_lcbc_ns2_17_begin(server, ns);
retVal |= function_lcbc_ns2_18_begin(server, ns);
retVal |= function_lcbc_ns2_19_begin(server, ns);
retVal |= function_lcbc_ns2_20_begin(server, ns);
retVal |= function_lcbc_ns2_21_begin(server, ns);
retVal |= function_lcbc_ns2_22_begin(server, ns);
retVal |= function_lcbc_ns2_23_begin(server, ns);
retVal |= function_lcbc_ns2_24_begin(server, ns);
retVal |= function_lcbc_ns2_25_begin(server, ns);
retVal |= function_lcbc_ns2_26_begin(server, ns);
retVal |= function_lcbc_ns2_27_begin(server, ns);
retVal |= function_lcbc_ns2_28_begin(server, ns);
retVal |= function_lcbc_ns2_29_begin(server, ns);
retVal |= function_lcbc_ns2_30_begin(server, ns);
retVal |= function_lcbc_ns2_31_begin(server, ns);
retVal |= function_lcbc_ns2_32_begin(server, ns);
retVal |= function_lcbc_ns2_33_begin(server, ns);
retVal |= function_lcbc_ns2_34_begin(server, ns);
retVal |= function_lcbc_ns2_35_begin(server, ns);
retVal |= function_lcbc_ns2_36_begin(server, ns);
retVal |= function_lcbc_ns2_37_begin(server, ns);
retVal |= function_lcbc_ns2_38_begin(server, ns);
retVal |= function_lcbc_ns2_39_begin(server, ns);
retVal |= function_lcbc_ns2_40_begin(server, ns);
retVal |= function_lcbc_ns2_41_begin(server, ns);
retVal |= function_lcbc_ns2_42_begin(server, ns);
retVal |= function_lcbc_ns2_43_begin(server, ns);
retVal |= function_lcbc_ns2_44_begin(server, ns);
retVal |= function_lcbc_ns2_45_begin(server, ns);
retVal |= function_lcbc_ns2_46_begin(server, ns);
retVal |= function_lcbc_ns2_47_begin(server, ns);
retVal |= function_lcbc_ns2_48_begin(server, ns);
retVal |= function_lcbc_ns2_49_begin(server, ns);
retVal |= function_lcbc_ns2_50_begin(server, ns);
retVal |= function_lcbc_ns2_51_begin(server, ns);
retVal |= function_lcbc_ns2_52_begin(server, ns);
retVal |= function_lcbc_ns2_53_begin(server, ns);
retVal |= function_lcbc_ns2_54_begin(server, ns);
retVal |= function_lcbc_ns2_55_begin(server, ns);
retVal |= function_lcbc_ns2_56_begin(server, ns);
retVal |= function_lcbc_ns2_57_begin(server, ns);
retVal |= function_lcbc_ns2_58_begin(server, ns);
retVal |= function_lcbc_ns2_59_begin(server, ns);
retVal |= function_lcbc_ns2_60_begin(server, ns);
retVal |= function_lcbc_ns2_61_begin(server, ns);
retVal |= function_lcbc_ns2_62_begin(server, ns);
retVal |= function_lcbc_ns2_63_begin(server, ns);
retVal |= function_lcbc_ns2_64_begin(server, ns);
retVal |= function_lcbc_ns2_65_begin(server, ns);
retVal |= function_lcbc_ns2_66_begin(server, ns);
retVal |= function_lcbc_ns2_67_begin(server, ns);
retVal |= function_lcbc_ns2_68_begin(server, ns);
retVal |= function_lcbc_ns2_69_begin(server, ns);
retVal |= function_lcbc_ns2_70_begin(server, ns);
retVal |= function_lcbc_ns2_71_begin(server, ns);
retVal |= function_lcbc_ns2_72_begin(server, ns);
retVal |= function_lcbc_ns2_73_begin(server, ns);
retVal |= function_lcbc_ns2_74_begin(server, ns);
retVal |= function_lcbc_ns2_75_begin(server, ns);
retVal |= function_lcbc_ns2_76_begin(server, ns);
retVal |= function_lcbc_ns2_77_begin(server, ns);
retVal |= function_lcbc_ns2_78_begin(server, ns);
retVal |= function_lcbc_ns2_79_begin(server, ns);
retVal |= function_lcbc_ns2_80_begin(server, ns);
retVal |= function_lcbc_ns2_81_begin(server, ns);
retVal |= function_lcbc_ns2_82_begin(server, ns);
retVal |= function_lcbc_ns2_83_begin(server, ns);
retVal |= function_lcbc_ns2_84_begin(server, ns);
retVal |= function_lcbc_ns2_85_begin(server, ns);
retVal |= function_lcbc_ns2_86_begin(server, ns);
retVal |= function_lcbc_ns2_87_begin(server, ns);
retVal |= function_lcbc_ns2_88_begin(server, ns);
retVal |= function_lcbc_ns2_89_begin(server, ns);
retVal |= function_lcbc_ns2_90_begin(server, ns);
retVal |= function_lcbc_ns2_91_begin(server, ns);
retVal |= function_lcbc_ns2_92_begin(server, ns);
retVal |= function_lcbc_ns2_93_begin(server, ns);
retVal |= function_lcbc_ns2_94_begin(server, ns);
retVal |= function_lcbc_ns2_95_begin(server, ns);
retVal |= function_lcbc_ns2_96_begin(server, ns);
retVal |= function_lcbc_ns2_97_begin(server, ns);
retVal |= function_lcbc_ns2_98_begin(server, ns);
retVal |= function_lcbc_ns2_99_begin(server, ns);
retVal |= function_lcbc_ns2_100_begin(server, ns);
retVal |= function_lcbc_ns2_101_begin(server, ns);
retVal |= function_lcbc_ns2_102_begin(server, ns);
retVal |= function_lcbc_ns2_103_begin(server, ns);
retVal |= function_lcbc_ns2_104_begin(server, ns);
retVal |= function_lcbc_ns2_105_begin(server, ns);
retVal |= function_lcbc_ns2_106_begin(server, ns);
retVal |= function_lcbc_ns2_107_begin(server, ns);
retVal |= function_lcbc_ns2_108_begin(server, ns);
retVal |= function_lcbc_ns2_109_begin(server, ns);
retVal |= function_lcbc_ns2_110_begin(server, ns);
retVal |= function_lcbc_ns2_111_begin(server, ns);
retVal |= function_lcbc_ns2_112_begin(server, ns);
retVal |= function_lcbc_ns2_113_begin(server, ns);
retVal |= function_lcbc_ns2_114_begin(server, ns);
retVal |= function_lcbc_ns2_115_begin(server, ns);
retVal |= function_lcbc_ns2_116_begin(server, ns);
retVal |= function_lcbc_ns2_117_begin(server, ns);
retVal |= function_lcbc_ns2_118_begin(server, ns);
retVal |= function_lcbc_ns2_119_begin(server, ns);
retVal |= function_lcbc_ns2_120_begin(server, ns);
retVal |= function_lcbc_ns2_121_begin(server, ns);
retVal |= function_lcbc_ns2_122_begin(server, ns);
retVal |= function_lcbc_ns2_123_begin(server, ns);
retVal |= function_lcbc_ns2_124_begin(server, ns);
retVal |= function_lcbc_ns2_125_begin(server, ns);
retVal |= function_lcbc_ns2_126_begin(server, ns);
retVal |= function_lcbc_ns2_127_begin(server, ns);
retVal |= function_lcbc_ns2_128_begin(server, ns);
retVal |= function_lcbc_ns2_129_begin(server, ns);
retVal |= function_lcbc_ns2_130_begin(server, ns);
retVal |= function_lcbc_ns2_131_begin(server, ns);
retVal |= function_lcbc_ns2_132_begin(server, ns);
retVal |= function_lcbc_ns2_133_begin(server, ns);
retVal |= function_lcbc_ns2_134_begin(server, ns);
retVal |= function_lcbc_ns2_135_begin(server, ns);
retVal |= function_lcbc_ns2_136_begin(server, ns);
retVal |= function_lcbc_ns2_137_begin(server, ns);
retVal |= function_lcbc_ns2_138_begin(server, ns);
retVal |= function_lcbc_ns2_139_begin(server, ns);
retVal |= function_lcbc_ns2_140_begin(server, ns);
retVal |= function_lcbc_ns2_141_begin(server, ns);
retVal |= function_lcbc_ns2_142_begin(server, ns);
retVal |= function_lcbc_ns2_143_begin(server, ns);
retVal |= function_lcbc_ns2_144_begin(server, ns);
retVal |= function_lcbc_ns2_145_begin(server, ns);
retVal |= function_lcbc_ns2_146_begin(server, ns);
retVal |= function_lcbc_ns2_147_begin(server, ns);
retVal |= function_lcbc_ns2_148_begin(server, ns);
retVal |= function_lcbc_ns2_149_begin(server, ns);
retVal |= function_lcbc_ns2_150_begin(server, ns);
retVal |= function_lcbc_ns2_151_begin(server, ns);
retVal |= function_lcbc_ns2_152_begin(server, ns);
retVal |= function_lcbc_ns2_153_begin(server, ns);
retVal |= function_lcbc_ns2_154_begin(server, ns);
retVal |= function_lcbc_ns2_155_begin(server, ns);
retVal |= function_lcbc_ns2_156_begin(server, ns);
retVal |= function_lcbc_ns2_157_begin(server, ns);
retVal |= function_lcbc_ns2_158_begin(server, ns);
retVal |= function_lcbc_ns2_159_begin(server, ns);
retVal |= function_lcbc_ns2_160_begin(server, ns);
retVal |= function_lcbc_ns2_161_begin(server, ns);
retVal |= function_lcbc_ns2_162_begin(server, ns);
retVal |= function_lcbc_ns2_163_begin(server, ns);
retVal |= function_lcbc_ns2_164_begin(server, ns);
retVal |= function_lcbc_ns2_165_begin(server, ns);
retVal |= function_lcbc_ns2_166_begin(server, ns);
retVal |= function_lcbc_ns2_167_begin(server, ns);
retVal |= function_lcbc_ns2_168_begin(server, ns);
retVal |= function_lcbc_ns2_169_begin(server, ns);
retVal |= function_lcbc_ns2_170_begin(server, ns);
retVal |= function_lcbc_ns2_171_begin(server, ns);
retVal |= function_lcbc_ns2_172_begin(server, ns);
retVal |= function_lcbc_ns2_173_begin(server, ns);
retVal |= function_lcbc_ns2_174_begin(server, ns);
retVal |= function_lcbc_ns2_175_begin(server, ns);
retVal |= function_lcbc_ns2_176_begin(server, ns);
retVal |= function_lcbc_ns2_177_begin(server, ns);
retVal |= function_lcbc_ns2_178_begin(server, ns);
retVal |= function_lcbc_ns2_179_begin(server, ns);
retVal |= function_lcbc_ns2_180_begin(server, ns);
retVal |= function_lcbc_ns2_181_begin(server, ns);
retVal |= function_lcbc_ns2_182_begin(server, ns);
retVal |= function_lcbc_ns2_183_begin(server, ns);
retVal |= function_lcbc_ns2_184_begin(server, ns);
retVal |= function_lcbc_ns2_185_begin(server, ns);
retVal |= function_lcbc_ns2_186_begin(server, ns);
retVal |= function_lcbc_ns2_187_begin(server, ns);
retVal |= function_lcbc_ns2_188_begin(server, ns);
retVal |= function_lcbc_ns2_189_begin(server, ns);
retVal |= function_lcbc_ns2_190_begin(server, ns);
retVal |= function_lcbc_ns2_191_begin(server, ns);
retVal |= function_lcbc_ns2_192_begin(server, ns);
retVal |= function_lcbc_ns2_193_begin(server, ns);
retVal |= function_lcbc_ns2_194_begin(server, ns);
retVal |= function_lcbc_ns2_195_begin(server, ns);
retVal |= function_lcbc_ns2_196_begin(server, ns);
retVal |= function_lcbc_ns2_197_begin(server, ns);
retVal |= function_lcbc_ns2_198_begin(server, ns);
retVal |= function_lcbc_ns2_199_begin(server, ns);
retVal |= function_lcbc_ns2_200_begin(server, ns);
retVal |= function_lcbc_ns2_201_begin(server, ns);
retVal |= function_lcbc_ns2_202_begin(server, ns);
retVal |= function_lcbc_ns2_203_begin(server, ns);
retVal |= function_lcbc_ns2_204_begin(server, ns);
retVal |= function_lcbc_ns2_205_begin(server, ns);
retVal |= function_lcbc_ns2_206_begin(server, ns);
retVal |= function_lcbc_ns2_207_begin(server, ns);
retVal |= function_lcbc_ns2_208_begin(server, ns);
retVal |= function_lcbc_ns2_209_begin(server, ns);
retVal |= function_lcbc_ns2_210_begin(server, ns);
retVal |= function_lcbc_ns2_211_begin(server, ns);
retVal |= function_lcbc_ns2_212_begin(server, ns);
retVal |= function_lcbc_ns2_213_begin(server, ns);
retVal |= function_lcbc_ns2_214_begin(server, ns);
retVal |= function_lcbc_ns2_215_begin(server, ns);
retVal |= function_lcbc_ns2_216_begin(server, ns);
retVal |= function_lcbc_ns2_217_begin(server, ns);
retVal |= function_lcbc_ns2_218_begin(server, ns);
retVal |= function_lcbc_ns2_219_begin(server, ns);
retVal |= function_lcbc_ns2_220_begin(server, ns);
retVal |= function_lcbc_ns2_221_begin(server, ns);
retVal |= function_lcbc_ns2_222_begin(server, ns);
retVal |= function_lcbc_ns2_223_begin(server, ns);
retVal |= function_lcbc_ns2_224_begin(server, ns);
retVal |= function_lcbc_ns2_225_begin(server, ns);
retVal |= function_lcbc_ns2_226_begin(server, ns);
retVal |= function_lcbc_ns2_227_begin(server, ns);
retVal |= function_lcbc_ns2_228_begin(server, ns);
retVal |= function_lcbc_ns2_229_begin(server, ns);
retVal |= function_lcbc_ns2_230_begin(server, ns);
retVal |= function_lcbc_ns2_231_begin(server, ns);
retVal |= function_lcbc_ns2_232_begin(server, ns);
retVal |= function_lcbc_ns2_233_begin(server, ns);
retVal |= function_lcbc_ns2_234_begin(server, ns);
retVal |= function_lcbc_ns2_235_begin(server, ns);
retVal |= function_lcbc_ns2_236_begin(server, ns);
retVal |= function_lcbc_ns2_237_begin(server, ns);
retVal |= function_lcbc_ns2_238_begin(server, ns);
retVal |= function_lcbc_ns2_239_begin(server, ns);
retVal |= function_lcbc_ns2_240_begin(server, ns);
retVal |= function_lcbc_ns2_241_begin(server, ns);
retVal |= function_lcbc_ns2_242_begin(server, ns);
retVal |= function_lcbc_ns2_243_begin(server, ns);
retVal |= function_lcbc_ns2_244_begin(server, ns);
retVal |= function_lcbc_ns2_245_begin(server, ns);
retVal |= function_lcbc_ns2_246_begin(server, ns);
retVal |= function_lcbc_ns2_247_begin(server, ns);
retVal |= function_lcbc_ns2_248_begin(server, ns);
retVal |= function_lcbc_ns2_249_begin(server, ns);
retVal |= function_lcbc_ns2_250_begin(server, ns);
retVal |= function_lcbc_ns2_251_begin(server, ns);
retVal |= function_lcbc_ns2_252_begin(server, ns);
retVal |= function_lcbc_ns2_253_begin(server, ns);
retVal |= function_lcbc_ns2_254_begin(server, ns);
retVal |= function_lcbc_ns2_255_begin(server, ns);
retVal |= function_lcbc_ns2_256_begin(server, ns);
retVal |= function_lcbc_ns2_257_begin(server, ns);
retVal |= function_lcbc_ns2_258_begin(server, ns);
retVal |= function_lcbc_ns2_259_begin(server, ns);
retVal |= function_lcbc_ns2_260_begin(server, ns);
retVal |= function_lcbc_ns2_261_begin(server, ns);
retVal |= function_lcbc_ns2_262_begin(server, ns);
retVal |= function_lcbc_ns2_263_begin(server, ns);
retVal |= function_lcbc_ns2_264_begin(server, ns);
retVal |= function_lcbc_ns2_265_begin(server, ns);
retVal |= function_lcbc_ns2_266_begin(server, ns);
retVal |= function_lcbc_ns2_267_begin(server, ns);
retVal |= function_lcbc_ns2_268_begin(server, ns);
retVal |= function_lcbc_ns2_269_begin(server, ns);
retVal |= function_lcbc_ns2_270_begin(server, ns);
retVal |= function_lcbc_ns2_271_begin(server, ns);
retVal |= function_lcbc_ns2_272_begin(server, ns);
retVal |= function_lcbc_ns2_273_begin(server, ns);
retVal |= function_lcbc_ns2_274_begin(server, ns);
retVal |= function_lcbc_ns2_275_begin(server, ns);
retVal |= function_lcbc_ns2_276_begin(server, ns);
retVal |= function_lcbc_ns2_277_begin(server, ns);
retVal |= function_lcbc_ns2_278_begin(server, ns);
retVal |= function_lcbc_ns2_279_begin(server, ns);
retVal |= function_lcbc_ns2_280_begin(server, ns);
retVal |= function_lcbc_ns2_281_begin(server, ns);
retVal |= function_lcbc_ns2_282_begin(server, ns);
retVal |= function_lcbc_ns2_283_begin(server, ns);
retVal |= function_lcbc_ns2_284_begin(server, ns);
retVal |= function_lcbc_ns2_285_begin(server, ns);
retVal |= function_lcbc_ns2_286_begin(server, ns);
retVal |= function_lcbc_ns2_287_begin(server, ns);
retVal |= function_lcbc_ns2_288_begin(server, ns);
retVal |= function_lcbc_ns2_289_begin(server, ns);
retVal |= function_lcbc_ns2_290_begin(server, ns);
retVal |= function_lcbc_ns2_291_begin(server, ns);
retVal |= function_lcbc_ns2_292_begin(server, ns);
retVal |= function_lcbc_ns2_293_begin(server, ns);
retVal |= function_lcbc_ns2_294_begin(server, ns);
retVal |= function_lcbc_ns2_295_begin(server, ns);
retVal |= function_lcbc_ns2_296_begin(server, ns);
retVal |= function_lcbc_ns2_297_begin(server, ns);
retVal |= function_lcbc_ns2_298_begin(server, ns);
retVal |= function_lcbc_ns2_299_begin(server, ns);
retVal |= function_lcbc_ns2_300_begin(server, ns);
retVal |= function_lcbc_ns2_301_begin(server, ns);
retVal |= function_lcbc_ns2_302_begin(server, ns);
retVal |= function_lcbc_ns2_303_begin(server, ns);
retVal |= function_lcbc_ns2_304_begin(server, ns);
retVal |= function_lcbc_ns2_305_begin(server, ns);
retVal |= function_lcbc_ns2_306_begin(server, ns);
retVal |= function_lcbc_ns2_307_begin(server, ns);
retVal |= function_lcbc_ns2_308_begin(server, ns);
retVal |= function_lcbc_ns2_309_begin(server, ns);
retVal |= function_lcbc_ns2_310_begin(server, ns);
retVal |= function_lcbc_ns2_311_begin(server, ns);
retVal |= function_lcbc_ns2_312_begin(server, ns);
retVal |= function_lcbc_ns2_313_begin(server, ns);
retVal |= function_lcbc_ns2_314_begin(server, ns);
retVal |= function_lcbc_ns2_315_begin(server, ns);
retVal |= function_lcbc_ns2_316_begin(server, ns);
retVal |= function_lcbc_ns2_317_begin(server, ns);
retVal |= function_lcbc_ns2_318_begin(server, ns);
retVal |= function_lcbc_ns2_319_begin(server, ns);
retVal |= function_lcbc_ns2_320_begin(server, ns);
retVal |= function_lcbc_ns2_321_begin(server, ns);
retVal |= function_lcbc_ns2_322_begin(server, ns);
retVal |= function_lcbc_ns2_323_begin(server, ns);
retVal |= function_lcbc_ns2_324_begin(server, ns);
retVal |= function_lcbc_ns2_325_begin(server, ns);
retVal |= function_lcbc_ns2_326_begin(server, ns);
retVal |= function_lcbc_ns2_327_begin(server, ns);
retVal |= function_lcbc_ns2_328_begin(server, ns);
retVal |= function_lcbc_ns2_329_begin(server, ns);
retVal |= function_lcbc_ns2_330_begin(server, ns);
retVal |= function_lcbc_ns2_331_begin(server, ns);
retVal |= function_lcbc_ns2_332_begin(server, ns);
retVal |= function_lcbc_ns2_333_begin(server, ns);
retVal |= function_lcbc_ns2_334_begin(server, ns);
retVal |= function_lcbc_ns2_335_begin(server, ns);
retVal |= function_lcbc_ns2_336_begin(server, ns);
retVal |= function_lcbc_ns2_337_begin(server, ns);
retVal |= function_lcbc_ns2_338_begin(server, ns);
retVal |= function_lcbc_ns2_339_begin(server, ns);
retVal |= function_lcbc_ns2_340_begin(server, ns);
retVal |= function_lcbc_ns2_341_begin(server, ns);
retVal |= function_lcbc_ns2_342_begin(server, ns);
retVal |= function_lcbc_ns2_343_begin(server, ns);
retVal |= function_lcbc_ns2_344_begin(server, ns);
retVal |= function_lcbc_ns2_345_begin(server, ns);
retVal |= function_lcbc_ns2_346_begin(server, ns);
retVal |= function_lcbc_ns2_347_begin(server, ns);
retVal |= function_lcbc_ns2_348_begin(server, ns);
retVal |= function_lcbc_ns2_349_begin(server, ns);
retVal |= function_lcbc_ns2_350_begin(server, ns);
retVal |= function_lcbc_ns2_351_begin(server, ns);
retVal |= function_lcbc_ns2_352_begin(server, ns);
retVal |= function_lcbc_ns2_353_begin(server, ns);
retVal |= function_lcbc_ns2_354_begin(server, ns);
retVal |= function_lcbc_ns2_355_begin(server, ns);
retVal |= function_lcbc_ns2_356_begin(server, ns);
retVal |= function_lcbc_ns2_356_finish(server, ns);
retVal |= function_lcbc_ns2_355_finish(server, ns);
retVal |= function_lcbc_ns2_354_finish(server, ns);
retVal |= function_lcbc_ns2_353_finish(server, ns);
retVal |= function_lcbc_ns2_352_finish(server, ns);
retVal |= function_lcbc_ns2_351_finish(server, ns);
retVal |= function_lcbc_ns2_350_finish(server, ns);
retVal |= function_lcbc_ns2_349_finish(server, ns);
retVal |= function_lcbc_ns2_348_finish(server, ns);
retVal |= function_lcbc_ns2_347_finish(server, ns);
retVal |= function_lcbc_ns2_346_finish(server, ns);
retVal |= function_lcbc_ns2_345_finish(server, ns);
retVal |= function_lcbc_ns2_344_finish(server, ns);
retVal |= function_lcbc_ns2_343_finish(server, ns);
retVal |= function_lcbc_ns2_342_finish(server, ns);
retVal |= function_lcbc_ns2_341_finish(server, ns);
retVal |= function_lcbc_ns2_340_finish(server, ns);
retVal |= function_lcbc_ns2_339_finish(server, ns);
retVal |= function_lcbc_ns2_338_finish(server, ns);
retVal |= function_lcbc_ns2_337_finish(server, ns);
retVal |= function_lcbc_ns2_336_finish(server, ns);
retVal |= function_lcbc_ns2_335_finish(server, ns);
retVal |= function_lcbc_ns2_334_finish(server, ns);
retVal |= function_lcbc_ns2_333_finish(server, ns);
retVal |= function_lcbc_ns2_332_finish(server, ns);
retVal |= function_lcbc_ns2_331_finish(server, ns);
retVal |= function_lcbc_ns2_330_finish(server, ns);
retVal |= function_lcbc_ns2_329_finish(server, ns);
retVal |= function_lcbc_ns2_328_finish(server, ns);
retVal |= function_lcbc_ns2_327_finish(server, ns);
retVal |= function_lcbc_ns2_326_finish(server, ns);
retVal |= function_lcbc_ns2_325_finish(server, ns);
retVal |= function_lcbc_ns2_324_finish(server, ns);
retVal |= function_lcbc_ns2_323_finish(server, ns);
retVal |= function_lcbc_ns2_322_finish(server, ns);
retVal |= function_lcbc_ns2_321_finish(server, ns);
retVal |= function_lcbc_ns2_320_finish(server, ns);
retVal |= function_lcbc_ns2_319_finish(server, ns);
retVal |= function_lcbc_ns2_318_finish(server, ns);
retVal |= function_lcbc_ns2_317_finish(server, ns);
retVal |= function_lcbc_ns2_316_finish(server, ns);
retVal |= function_lcbc_ns2_315_finish(server, ns);
retVal |= function_lcbc_ns2_314_finish(server, ns);
retVal |= function_lcbc_ns2_313_finish(server, ns);
retVal |= function_lcbc_ns2_312_finish(server, ns);
retVal |= function_lcbc_ns2_311_finish(server, ns);
retVal |= function_lcbc_ns2_310_finish(server, ns);
retVal |= function_lcbc_ns2_309_finish(server, ns);
retVal |= function_lcbc_ns2_308_finish(server, ns);
retVal |= function_lcbc_ns2_307_finish(server, ns);
retVal |= function_lcbc_ns2_306_finish(server, ns);
retVal |= function_lcbc_ns2_305_finish(server, ns);
retVal |= function_lcbc_ns2_304_finish(server, ns);
retVal |= function_lcbc_ns2_303_finish(server, ns);
retVal |= function_lcbc_ns2_302_finish(server, ns);
retVal |= function_lcbc_ns2_301_finish(server, ns);
retVal |= function_lcbc_ns2_300_finish(server, ns);
retVal |= function_lcbc_ns2_299_finish(server, ns);
retVal |= function_lcbc_ns2_298_finish(server, ns);
retVal |= function_lcbc_ns2_297_finish(server, ns);
retVal |= function_lcbc_ns2_296_finish(server, ns);
retVal |= function_lcbc_ns2_295_finish(server, ns);
retVal |= function_lcbc_ns2_294_finish(server, ns);
retVal |= function_lcbc_ns2_293_finish(server, ns);
retVal |= function_lcbc_ns2_292_finish(server, ns);
retVal |= function_lcbc_ns2_291_finish(server, ns);
retVal |= function_lcbc_ns2_290_finish(server, ns);
retVal |= function_lcbc_ns2_289_finish(server, ns);
retVal |= function_lcbc_ns2_288_finish(server, ns);
retVal |= function_lcbc_ns2_287_finish(server, ns);
retVal |= function_lcbc_ns2_286_finish(server, ns);
retVal |= function_lcbc_ns2_285_finish(server, ns);
retVal |= function_lcbc_ns2_284_finish(server, ns);
retVal |= function_lcbc_ns2_283_finish(server, ns);
retVal |= function_lcbc_ns2_282_finish(server, ns);
retVal |= function_lcbc_ns2_281_finish(server, ns);
retVal |= function_lcbc_ns2_280_finish(server, ns);
retVal |= function_lcbc_ns2_279_finish(server, ns);
retVal |= function_lcbc_ns2_278_finish(server, ns);
retVal |= function_lcbc_ns2_277_finish(server, ns);
retVal |= function_lcbc_ns2_276_finish(server, ns);
retVal |= function_lcbc_ns2_275_finish(server, ns);
retVal |= function_lcbc_ns2_274_finish(server, ns);
retVal |= function_lcbc_ns2_273_finish(server, ns);
retVal |= function_lcbc_ns2_272_finish(server, ns);
retVal |= function_lcbc_ns2_271_finish(server, ns);
retVal |= function_lcbc_ns2_270_finish(server, ns);
retVal |= function_lcbc_ns2_269_finish(server, ns);
retVal |= function_lcbc_ns2_268_finish(server, ns);
retVal |= function_lcbc_ns2_267_finish(server, ns);
retVal |= function_lcbc_ns2_266_finish(server, ns);
retVal |= function_lcbc_ns2_265_finish(server, ns);
retVal |= function_lcbc_ns2_264_finish(server, ns);
retVal |= function_lcbc_ns2_263_finish(server, ns);
retVal |= function_lcbc_ns2_262_finish(server, ns);
retVal |= function_lcbc_ns2_261_finish(server, ns);
retVal |= function_lcbc_ns2_260_finish(server, ns);
retVal |= function_lcbc_ns2_259_finish(server, ns);
retVal |= function_lcbc_ns2_258_finish(server, ns);
retVal |= function_lcbc_ns2_257_finish(server, ns);
retVal |= function_lcbc_ns2_256_finish(server, ns);
retVal |= function_lcbc_ns2_255_finish(server, ns);
retVal |= function_lcbc_ns2_254_finish(server, ns);
retVal |= function_lcbc_ns2_253_finish(server, ns);
retVal |= function_lcbc_ns2_252_finish(server, ns);
retVal |= function_lcbc_ns2_251_finish(server, ns);
retVal |= function_lcbc_ns2_250_finish(server, ns);
retVal |= function_lcbc_ns2_249_finish(server, ns);
retVal |= function_lcbc_ns2_248_finish(server, ns);
retVal |= function_lcbc_ns2_247_finish(server, ns);
retVal |= function_lcbc_ns2_246_finish(server, ns);
retVal |= function_lcbc_ns2_245_finish(server, ns);
retVal |= function_lcbc_ns2_244_finish(server, ns);
retVal |= function_lcbc_ns2_243_finish(server, ns);
retVal |= function_lcbc_ns2_242_finish(server, ns);
retVal |= function_lcbc_ns2_241_finish(server, ns);
retVal |= function_lcbc_ns2_240_finish(server, ns);
retVal |= function_lcbc_ns2_239_finish(server, ns);
retVal |= function_lcbc_ns2_238_finish(server, ns);
retVal |= function_lcbc_ns2_237_finish(server, ns);
retVal |= function_lcbc_ns2_236_finish(server, ns);
retVal |= function_lcbc_ns2_235_finish(server, ns);
retVal |= function_lcbc_ns2_234_finish(server, ns);
retVal |= function_lcbc_ns2_233_finish(server, ns);
retVal |= function_lcbc_ns2_232_finish(server, ns);
retVal |= function_lcbc_ns2_231_finish(server, ns);
retVal |= function_lcbc_ns2_230_finish(server, ns);
retVal |= function_lcbc_ns2_229_finish(server, ns);
retVal |= function_lcbc_ns2_228_finish(server, ns);
retVal |= function_lcbc_ns2_227_finish(server, ns);
retVal |= function_lcbc_ns2_226_finish(server, ns);
retVal |= function_lcbc_ns2_225_finish(server, ns);
retVal |= function_lcbc_ns2_224_finish(server, ns);
retVal |= function_lcbc_ns2_223_finish(server, ns);
retVal |= function_lcbc_ns2_222_finish(server, ns);
retVal |= function_lcbc_ns2_221_finish(server, ns);
retVal |= function_lcbc_ns2_220_finish(server, ns);
retVal |= function_lcbc_ns2_219_finish(server, ns);
retVal |= function_lcbc_ns2_218_finish(server, ns);
retVal |= function_lcbc_ns2_217_finish(server, ns);
retVal |= function_lcbc_ns2_216_finish(server, ns);
retVal |= function_lcbc_ns2_215_finish(server, ns);
retVal |= function_lcbc_ns2_214_finish(server, ns);
retVal |= function_lcbc_ns2_213_finish(server, ns);
retVal |= function_lcbc_ns2_212_finish(server, ns);
retVal |= function_lcbc_ns2_211_finish(server, ns);
retVal |= function_lcbc_ns2_210_finish(server, ns);
retVal |= function_lcbc_ns2_209_finish(server, ns);
retVal |= function_lcbc_ns2_208_finish(server, ns);
retVal |= function_lcbc_ns2_207_finish(server, ns);
retVal |= function_lcbc_ns2_206_finish(server, ns);
retVal |= function_lcbc_ns2_205_finish(server, ns);
retVal |= function_lcbc_ns2_204_finish(server, ns);
retVal |= function_lcbc_ns2_203_finish(server, ns);
retVal |= function_lcbc_ns2_202_finish(server, ns);
retVal |= function_lcbc_ns2_201_finish(server, ns);
retVal |= function_lcbc_ns2_200_finish(server, ns);
retVal |= function_lcbc_ns2_199_finish(server, ns);
retVal |= function_lcbc_ns2_198_finish(server, ns);
retVal |= function_lcbc_ns2_197_finish(server, ns);
retVal |= function_lcbc_ns2_196_finish(server, ns);
retVal |= function_lcbc_ns2_195_finish(server, ns);
retVal |= function_lcbc_ns2_194_finish(server, ns);
retVal |= function_lcbc_ns2_193_finish(server, ns);
retVal |= function_lcbc_ns2_192_finish(server, ns);
retVal |= function_lcbc_ns2_191_finish(server, ns);
retVal |= function_lcbc_ns2_190_finish(server, ns);
retVal |= function_lcbc_ns2_189_finish(server, ns);
retVal |= function_lcbc_ns2_188_finish(server, ns);
retVal |= function_lcbc_ns2_187_finish(server, ns);
retVal |= function_lcbc_ns2_186_finish(server, ns);
retVal |= function_lcbc_ns2_185_finish(server, ns);
retVal |= function_lcbc_ns2_184_finish(server, ns);
retVal |= function_lcbc_ns2_183_finish(server, ns);
retVal |= function_lcbc_ns2_182_finish(server, ns);
retVal |= function_lcbc_ns2_181_finish(server, ns);
retVal |= function_lcbc_ns2_180_finish(server, ns);
retVal |= function_lcbc_ns2_179_finish(server, ns);
retVal |= function_lcbc_ns2_178_finish(server, ns);
retVal |= function_lcbc_ns2_177_finish(server, ns);
retVal |= function_lcbc_ns2_176_finish(server, ns);
retVal |= function_lcbc_ns2_175_finish(server, ns);
retVal |= function_lcbc_ns2_174_finish(server, ns);
retVal |= function_lcbc_ns2_173_finish(server, ns);
retVal |= function_lcbc_ns2_172_finish(server, ns);
retVal |= function_lcbc_ns2_171_finish(server, ns);
retVal |= function_lcbc_ns2_170_finish(server, ns);
retVal |= function_lcbc_ns2_169_finish(server, ns);
retVal |= function_lcbc_ns2_168_finish(server, ns);
retVal |= function_lcbc_ns2_167_finish(server, ns);
retVal |= function_lcbc_ns2_166_finish(server, ns);
retVal |= function_lcbc_ns2_165_finish(server, ns);
retVal |= function_lcbc_ns2_164_finish(server, ns);
retVal |= function_lcbc_ns2_163_finish(server, ns);
retVal |= function_lcbc_ns2_162_finish(server, ns);
retVal |= function_lcbc_ns2_161_finish(server, ns);
retVal |= function_lcbc_ns2_160_finish(server, ns);
retVal |= function_lcbc_ns2_159_finish(server, ns);
retVal |= function_lcbc_ns2_158_finish(server, ns);
retVal |= function_lcbc_ns2_157_finish(server, ns);
retVal |= function_lcbc_ns2_156_finish(server, ns);
retVal |= function_lcbc_ns2_155_finish(server, ns);
retVal |= function_lcbc_ns2_154_finish(server, ns);
retVal |= function_lcbc_ns2_153_finish(server, ns);
retVal |= function_lcbc_ns2_152_finish(server, ns);
retVal |= function_lcbc_ns2_151_finish(server, ns);
retVal |= function_lcbc_ns2_150_finish(server, ns);
retVal |= function_lcbc_ns2_149_finish(server, ns);
retVal |= function_lcbc_ns2_148_finish(server, ns);
retVal |= function_lcbc_ns2_147_finish(server, ns);
retVal |= function_lcbc_ns2_146_finish(server, ns);
retVal |= function_lcbc_ns2_145_finish(server, ns);
retVal |= function_lcbc_ns2_144_finish(server, ns);
retVal |= function_lcbc_ns2_143_finish(server, ns);
retVal |= function_lcbc_ns2_142_finish(server, ns);
retVal |= function_lcbc_ns2_141_finish(server, ns);
retVal |= function_lcbc_ns2_140_finish(server, ns);
retVal |= function_lcbc_ns2_139_finish(server, ns);
retVal |= function_lcbc_ns2_138_finish(server, ns);
retVal |= function_lcbc_ns2_137_finish(server, ns);
retVal |= function_lcbc_ns2_136_finish(server, ns);
retVal |= function_lcbc_ns2_135_finish(server, ns);
retVal |= function_lcbc_ns2_134_finish(server, ns);
retVal |= function_lcbc_ns2_133_finish(server, ns);
retVal |= function_lcbc_ns2_132_finish(server, ns);
retVal |= function_lcbc_ns2_131_finish(server, ns);
retVal |= function_lcbc_ns2_130_finish(server, ns);
retVal |= function_lcbc_ns2_129_finish(server, ns);
retVal |= function_lcbc_ns2_128_finish(server, ns);
retVal |= function_lcbc_ns2_127_finish(server, ns);
retVal |= function_lcbc_ns2_126_finish(server, ns);
retVal |= function_lcbc_ns2_125_finish(server, ns);
retVal |= function_lcbc_ns2_124_finish(server, ns);
retVal |= function_lcbc_ns2_123_finish(server, ns);
retVal |= function_lcbc_ns2_122_finish(server, ns);
retVal |= function_lcbc_ns2_121_finish(server, ns);
retVal |= function_lcbc_ns2_120_finish(server, ns);
retVal |= function_lcbc_ns2_119_finish(server, ns);
retVal |= function_lcbc_ns2_118_finish(server, ns);
retVal |= function_lcbc_ns2_117_finish(server, ns);
retVal |= function_lcbc_ns2_116_finish(server, ns);
retVal |= function_lcbc_ns2_115_finish(server, ns);
retVal |= function_lcbc_ns2_114_finish(server, ns);
retVal |= function_lcbc_ns2_113_finish(server, ns);
retVal |= function_lcbc_ns2_112_finish(server, ns);
retVal |= function_lcbc_ns2_111_finish(server, ns);
retVal |= function_lcbc_ns2_110_finish(server, ns);
retVal |= function_lcbc_ns2_109_finish(server, ns);
retVal |= function_lcbc_ns2_108_finish(server, ns);
retVal |= function_lcbc_ns2_107_finish(server, ns);
retVal |= function_lcbc_ns2_106_finish(server, ns);
retVal |= function_lcbc_ns2_105_finish(server, ns);
retVal |= function_lcbc_ns2_104_finish(server, ns);
retVal |= function_lcbc_ns2_103_finish(server, ns);
retVal |= function_lcbc_ns2_102_finish(server, ns);
retVal |= function_lcbc_ns2_101_finish(server, ns);
retVal |= function_lcbc_ns2_100_finish(server, ns);
retVal |= function_lcbc_ns2_99_finish(server, ns);
retVal |= function_lcbc_ns2_98_finish(server, ns);
retVal |= function_lcbc_ns2_97_finish(server, ns);
retVal |= function_lcbc_ns2_96_finish(server, ns);
retVal |= function_lcbc_ns2_95_finish(server, ns);
retVal |= function_lcbc_ns2_94_finish(server, ns);
retVal |= function_lcbc_ns2_93_finish(server, ns);
retVal |= function_lcbc_ns2_92_finish(server, ns);
retVal |= function_lcbc_ns2_91_finish(server, ns);
retVal |= function_lcbc_ns2_90_finish(server, ns);
retVal |= function_lcbc_ns2_89_finish(server, ns);
retVal |= function_lcbc_ns2_88_finish(server, ns);
retVal |= function_lcbc_ns2_87_finish(server, ns);
retVal |= function_lcbc_ns2_86_finish(server, ns);
retVal |= function_lcbc_ns2_85_finish(server, ns);
retVal |= function_lcbc_ns2_84_finish(server, ns);
retVal |= function_lcbc_ns2_83_finish(server, ns);
retVal |= function_lcbc_ns2_82_finish(server, ns);
retVal |= function_lcbc_ns2_81_finish(server, ns);
retVal |= function_lcbc_ns2_80_finish(server, ns);
retVal |= function_lcbc_ns2_79_finish(server, ns);
retVal |= function_lcbc_ns2_78_finish(server, ns);
retVal |= function_lcbc_ns2_77_finish(server, ns);
retVal |= function_lcbc_ns2_76_finish(server, ns);
retVal |= function_lcbc_ns2_75_finish(server, ns);
retVal |= function_lcbc_ns2_74_finish(server, ns);
retVal |= function_lcbc_ns2_73_finish(server, ns);
retVal |= function_lcbc_ns2_72_finish(server, ns);
retVal |= function_lcbc_ns2_71_finish(server, ns);
retVal |= function_lcbc_ns2_70_finish(server, ns);
retVal |= function_lcbc_ns2_69_finish(server, ns);
retVal |= function_lcbc_ns2_68_finish(server, ns);
retVal |= function_lcbc_ns2_67_finish(server, ns);
retVal |= function_lcbc_ns2_66_finish(server, ns);
retVal |= function_lcbc_ns2_65_finish(server, ns);
retVal |= function_lcbc_ns2_64_finish(server, ns);
retVal |= function_lcbc_ns2_63_finish(server, ns);
retVal |= function_lcbc_ns2_62_finish(server, ns);
retVal |= function_lcbc_ns2_61_finish(server, ns);
retVal |= function_lcbc_ns2_60_finish(server, ns);
retVal |= function_lcbc_ns2_59_finish(server, ns);
retVal |= function_lcbc_ns2_58_finish(server, ns);
retVal |= function_lcbc_ns2_57_finish(server, ns);
retVal |= function_lcbc_ns2_56_finish(server, ns);
retVal |= function_lcbc_ns2_55_finish(server, ns);
retVal |= function_lcbc_ns2_54_finish(server, ns);
retVal |= function_lcbc_ns2_53_finish(server, ns);
retVal |= function_lcbc_ns2_52_finish(server, ns);
retVal |= function_lcbc_ns2_51_finish(server, ns);
retVal |= function_lcbc_ns2_50_finish(server, ns);
retVal |= function_lcbc_ns2_49_finish(server, ns);
retVal |= function_lcbc_ns2_48_finish(server, ns);
retVal |= function_lcbc_ns2_47_finish(server, ns);
retVal |= function_lcbc_ns2_46_finish(server, ns);
retVal |= function_lcbc_ns2_45_finish(server, ns);
retVal |= function_lcbc_ns2_44_finish(server, ns);
retVal |= function_lcbc_ns2_43_finish(server, ns);
retVal |= function_lcbc_ns2_42_finish(server, ns);
retVal |= function_lcbc_ns2_41_finish(server, ns);
retVal |= function_lcbc_ns2_40_finish(server, ns);
retVal |= function_lcbc_ns2_39_finish(server, ns);
retVal |= function_lcbc_ns2_38_finish(server, ns);
retVal |= function_lcbc_ns2_37_finish(server, ns);
retVal |= function_lcbc_ns2_36_finish(server, ns);
retVal |= function_lcbc_ns2_35_finish(server, ns);
retVal |= function_lcbc_ns2_34_finish(server, ns);
retVal |= function_lcbc_ns2_33_finish(server, ns);
retVal |= function_lcbc_ns2_32_finish(server, ns);
retVal |= function_lcbc_ns2_31_finish(server, ns);
retVal |= function_lcbc_ns2_30_finish(server, ns);
retVal |= function_lcbc_ns2_29_finish(server, ns);
retVal |= function_lcbc_ns2_28_finish(server, ns);
retVal |= function_lcbc_ns2_27_finish(server, ns);
retVal |= function_lcbc_ns2_26_finish(server, ns);
retVal |= function_lcbc_ns2_25_finish(server, ns);
retVal |= function_lcbc_ns2_24_finish(server, ns);
retVal |= function_lcbc_ns2_23_finish(server, ns);
retVal |= function_lcbc_ns2_22_finish(server, ns);
retVal |= function_lcbc_ns2_21_finish(server, ns);
retVal |= function_lcbc_ns2_20_finish(server, ns);
retVal |= function_lcbc_ns2_19_finish(server, ns);
retVal |= function_lcbc_ns2_18_finish(server, ns);
retVal |= function_lcbc_ns2_17_finish(server, ns);
retVal |= function_lcbc_ns2_16_finish(server, ns);
retVal |= function_lcbc_ns2_15_finish(server, ns);
retVal |= function_lcbc_ns2_14_finish(server, ns);
retVal |= function_lcbc_ns2_13_finish(server, ns);
retVal |= function_lcbc_ns2_12_finish(server, ns);
retVal |= function_lcbc_ns2_11_finish(server, ns);
retVal |= function_lcbc_ns2_10_finish(server, ns);
retVal |= function_lcbc_ns2_9_finish(server, ns);
retVal |= function_lcbc_ns2_8_finish(server, ns);
retVal |= function_lcbc_ns2_7_finish(server, ns);
retVal |= function_lcbc_ns2_6_finish(server, ns);
retVal |= function_lcbc_ns2_5_finish(server, ns);
retVal |= function_lcbc_ns2_4_finish(server, ns);
retVal |= function_lcbc_ns2_3_finish(server, ns);
retVal |= function_lcbc_ns2_2_finish(server, ns);
retVal |= function_lcbc_ns2_1_finish(server, ns);
retVal |= function_lcbc_ns2_0_finish(server, ns);
return retVal;
}
