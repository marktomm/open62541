/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "gen/lcbc_object_feeder1.h"

static UA_Int32 MARTEM_NS = 2;

static UA_Int32 F0_DI_FxM_ID = 2;

static UA_Int32 F1_DI_FxS_ID = 101;
static UA_Int32 F1_DO_FxC_ID = 102;
static UA_Int32 F1_DI_FxD_ID = 103;
static UA_Int32 F1_DO_FxD_ID = 104;

static UA_Int32 F2_DI_FxS_ID = 201;
static UA_Int32 F2_DO_FxC_ID = 202;
static UA_Int32 F2_DI_FxD_ID = 203;
static UA_Int32 F2_DO_FxD_ID = 204;

static UA_StatusCode controlMethodCallbackDigital(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output) 
{
    UA_Byte *inputByte = (UA_Byte*)input->data;
    UA_Int32 *context = (UA_Int32*)methodContext;

    /// get manual override value
    UA_Variant manualOverrideVariant;
    UA_Server_readValue(server, UA_NODEID_NUMERIC(MARTEM_NS, F0_DI_FxM_ID), &manualOverrideVariant);
    UA_Byte *manualOverrideVal = (UA_Byte*)manualOverrideVariant.data;

    
    if(*manualOverrideVal != 2) { /// first check if manual override is on
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackDigital manual override is not active (2), val: %d", *manualOverrideVal);
        return UA_STATUSCODE_BADNOTSUPPORTED;
    } else if(*inputByte < 1 || *inputByte > 2) { /// check input value
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackDigital input invalid, must be 1 or 2, val: %d", *inputByte);
        return UA_STATUSCODE_BADOUTOFRANGE;
    } else { /// all ok
        UA_NodeId stateVarNodeId = UA_NODEID_NUMERIC(MARTEM_NS, *context);
        UA_Byte stateNum = *inputByte;

        UA_Variant stateVal;
        UA_Variant_init(&stateVal);
        UA_Variant_setScalar(&stateVal, &stateNum, &UA_TYPES[UA_TYPES_BYTE]);
        UA_Server_writeValue(server, stateVarNodeId, stateVal);

        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackDigital was called %d, ctx: %d, manual override: %d, manual override type: %d", 
            *inputByte, 
            *context, 
            *manualOverrideVal, 
            manualOverrideVariant.type->typeId.identifier);

        return UA_STATUSCODE_GOOD;
    }
}

static UA_StatusCode controlMethodCallbackManual(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output) 
{
    UA_Byte *inputByte = (UA_Byte*)input->data;
    UA_Int32 *context = (UA_Int32*)methodContext;

    if(*inputByte < 1 || *inputByte > 2) { /// check input value
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackManual input invalid, must be 1 or 2, val: %d", *inputByte);
        return UA_STATUSCODE_BADOUTOFRANGE;
    } else { /// all ok
        UA_NodeId stateVarNodeId = UA_NODEID_NUMERIC(MARTEM_NS, *context);
        UA_Byte stateNum = *inputByte;

        UA_Variant stateVal;
        UA_Variant_init(&stateVal);
        UA_Variant_setScalar(&stateVal, &stateNum, &UA_TYPES[UA_TYPES_BYTE]);
        UA_Server_writeValue(server, stateVarNodeId, stateVal);

        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "controlMethodCallbackManual was called %d, ctx: %d", 
            *inputByte, 
            *context);

        return UA_STATUSCODE_GOOD;
    }
}

/* MartemSlcVariableType - ns=1;i=10001 */

static UA_StatusCode function_lcbc_object_feeder1_0_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "MartemSlcVariableType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MartemSlcVariableType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_0_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10001)
);
}


/* OnTxt - ns=1;i=6016 */

static UA_StatusCode function_lcbc_object_feeder1_1_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6016_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6016_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6016_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6016),
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6016), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_1_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6016)
);
}


/* InUse - ns=1;i=6017 */

static UA_StatusCode function_lcbc_object_feeder1_2_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_1_i_6017_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6017_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6017_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6017),
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6017), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_2_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6017)
);
}


/* Pos - ns=1;i=6014 */

static UA_StatusCode function_lcbc_object_feeder1_3_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6014_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6014_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6014_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6014),
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6014_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6014), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_3_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6014)
);
}


/* OffTxt - ns=1;i=6015 */

static UA_StatusCode function_lcbc_object_feeder1_4_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6015_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6015_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6015_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6015),
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6015), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_4_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6015)
);
}


/* FeederIdx - ns=1;i=6012 */

static UA_StatusCode function_lcbc_object_feeder1_5_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6012_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6012_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6012_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6012),
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6012), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_5_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6012)
);
}


/* FeederCtx - ns=1;i=6013 */

static UA_StatusCode function_lcbc_object_feeder1_6_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6013_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6013_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6013_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6013),
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6013), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_6_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6013)
);
}


/* Type - ns=1;i=6011 */

static UA_StatusCode function_lcbc_object_feeder1_7_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6011_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6011_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6011_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6011),
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6011), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_7_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6011)
);
}


/* AlarmLow - ns=1;i=6018 */

static UA_StatusCode function_lcbc_object_feeder1_8_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6018_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6018_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6018_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6018),
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6018), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_8_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6018)
);
}


/* AlarmHigh - ns=1;i=6019 */

static UA_StatusCode function_lcbc_object_feeder1_9_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6019_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6019_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6019_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6019),
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6019), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_9_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6019)
);
}


/* TypeDictionary - ns=1;i=6041 */

static UA_StatusCode function_lcbc_object_feeder1_10_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_6041_variant_DataContents =  UA_ByteString_new();
*variablenode_ns_1_i_6041_variant_DataContents = UA_BYTESTRING_ALLOC("<xs:schema elementFormDefault=\"qualified\" targetNamespace=\"http://martem.eu/LCBC/Types.xsd\" xmlns:tns=\"http://martem.eu/LCBC/Types.xsd\" xmlns:ua=\"http://opcfoundation.org/UA/2008/02/Types.xsd\" xmlns:xs=\"http://www.w3.org/2001/XMLSchema\"><xs:import namespace=\"http://opcfoundation.org/UA/2008/02/Types.xsd\"/></xs:schema>");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6041_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TypeDictionary");
attr.description = UA_LOCALIZEDTEXT("", "Collects the data type descriptions of http://martem.eu/LCBC/");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6041),
UA_NODEID_NUMERIC(ns[0], 92),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "TypeDictionary"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_ByteString_delete(variablenode_ns_1_i_6041_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_10_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6041)
);
}


/* NamespaceUri - ns=1;i=6051 */

static UA_StatusCode function_lcbc_object_feeder1_11_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6051_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6051_variant_DataContents = UA_STRING_ALLOC("http://martem.eu/LCBC/Types.xsd");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6051_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6051),
UA_NODEID_NUMERIC(ns[1], 6041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6051_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_11_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6051)
);
}


/* TypeDictionary - ns=1;i=6021 */

static UA_StatusCode function_lcbc_object_feeder1_12_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_6021_variant_DataContents =  UA_ByteString_new();
*variablenode_ns_1_i_6021_variant_DataContents = UA_BYTESTRING_ALLOC("<opc:TypeDictionary xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:tns=\"http://martem.eu/LCBC/\" DefaultByteOrder=\"LittleEndian\" xmlns:opc=\"http://opcfoundation.org/BinarySchema/\" xmlns:ua=\"http://opcfoundation.org/UA/\" TargetNamespace=\"http://martem.eu/LCBC/\"><opc:Import Namespace=\"http://opcfoundation.org/UA/\"/></opc:TypeDictionary>");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6021_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TypeDictionary");
attr.description = UA_LOCALIZEDTEXT("", "Collects the data type descriptions of http://martem.eu/LCBC/");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6021),
UA_NODEID_NUMERIC(ns[0], 93),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "TypeDictionary"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_ByteString_delete(variablenode_ns_1_i_6021_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_12_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6021)
);
}


/* NamespaceUri - ns=1;i=6031 */

static UA_StatusCode function_lcbc_object_feeder1_13_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6031_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6031_variant_DataContents = UA_STRING_ALLOC("http://martem.eu/LCBC/");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6031_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6031),
UA_NODEID_NUMERIC(ns[1], 6021),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6031_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_13_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6031)
);
}


/* LCBC - ns=1;i=5002 */

static UA_StatusCode function_lcbc_object_feeder1_14_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LCBC");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5002),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "LCBC"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_14_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5002)
);
}


/* MartemControllerType - ns=1;i=1003 */

static UA_StatusCode function_lcbc_object_feeder1_15_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MartemControllerType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MartemControllerType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_15_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1003)
);
}


/* AlarmState - ns=1;i=6238 */

static UA_StatusCode function_lcbc_object_feeder1_16_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_6238_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_6238_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6238_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmState");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AlarmState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_6238_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6238), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_16_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6238)
);
}


/* OnTxt - ns=1;i=6263 */

static UA_StatusCode function_lcbc_object_feeder1_17_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6263_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6263_variant_DataContents = UA_STRING_ALLOC("Alarm");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6263_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6263),
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6263_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6263), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_17_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6263)
);
}


/* OffTxt - ns=1;i=6262 */

static UA_StatusCode function_lcbc_object_feeder1_18_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6262_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6262_variant_DataContents = UA_STRING_ALLOC("OK");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6262_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6262),
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6262_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6262), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_18_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6262)
);
}


/* InUse - ns=1;i=6261 */

static UA_StatusCode function_lcbc_object_feeder1_19_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6261_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6261_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6261_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6261),
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6261_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6261), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_19_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6261)
);
}


/* FeederIdx - ns=1;i=6260 */

static UA_StatusCode function_lcbc_object_feeder1_20_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6260_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6260_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6260_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6260),
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6260), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_20_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6260)
);
}


/* AlarmHigh - ns=1;i=6248 */

static UA_StatusCode function_lcbc_object_feeder1_21_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6248_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6248_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6248_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6248),
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6248_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6248), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_21_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6248)
);
}


/* Type - ns=1;i=6265 */

static UA_StatusCode function_lcbc_object_feeder1_22_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6265_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6265_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6265_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6265),
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6265_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6265), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_22_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6265)
);
}


/* Pos - ns=1;i=6264 */

static UA_StatusCode function_lcbc_object_feeder1_23_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6264_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6264_variant_DataContents = (UA_Int16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6264_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6264),
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6264_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6264), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_23_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6264)
);
}


/* AlarmLow - ns=1;i=6258 */

static UA_StatusCode function_lcbc_object_feeder1_24_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6258_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6258_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6258_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6258),
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6258), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_24_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6258)
);
}


/* FeederCtx - ns=1;i=6259 */

static UA_StatusCode function_lcbc_object_feeder1_25_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6259_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6259_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6259_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6259),
UA_NODEID_NUMERIC(ns[1], 6238),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6259), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_25_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6259)
);
}


/* Active - ns=1;i=6276 */

static UA_StatusCode function_lcbc_object_feeder1_26_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_6276_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_6276_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6276_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Active");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Active"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_6276_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6276), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_26_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6276)
);
}


/* OnTxt - ns=1;i=6283 */

static UA_StatusCode function_lcbc_object_feeder1_27_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6283_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6283_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6283_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6283),
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6283_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6283), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_27_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6283)
);
}


/* OffTxt - ns=1;i=6282 */

static UA_StatusCode function_lcbc_object_feeder1_28_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6282_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6282_variant_DataContents = UA_STRING_ALLOC("Aktiivne");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6282_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6282),
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6282_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6282), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_28_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6282)
);
}


/* InUse - ns=1;i=6281 */

static UA_StatusCode function_lcbc_object_feeder1_29_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6281_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6281_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6281_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6281),
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6281_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6281), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_29_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6281)
);
}


/* FeederCtx - ns=1;i=6279 */

static UA_StatusCode function_lcbc_object_feeder1_30_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6279_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6279_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6279_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6279),
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6279_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6279), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_30_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6279)
);
}


/* Type - ns=1;i=6285 */

static UA_StatusCode function_lcbc_object_feeder1_31_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6285_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6285_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6285_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6285),
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6285_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6285), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_31_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6285)
);
}


/* Pos - ns=1;i=6284 */

static UA_StatusCode function_lcbc_object_feeder1_32_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6284_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6284_variant_DataContents = (UA_Int16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6284_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6284),
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6284_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6284), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_32_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6284)
);
}


/* AlarmHigh - ns=1;i=6277 */

static UA_StatusCode function_lcbc_object_feeder1_33_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6277_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6277_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6277_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6277),
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6277_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6277), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_33_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6277)
);
}


/* AlarmLow - ns=1;i=6278 */

static UA_StatusCode function_lcbc_object_feeder1_34_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6278_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6278_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6278_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6278),
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6278), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_34_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6278)
);
}


/* FeederIdx - ns=1;i=6280 */

static UA_StatusCode function_lcbc_object_feeder1_35_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6280_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6280_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6280_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6280),
UA_NODEID_NUMERIC(ns[1], 6276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6280), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_35_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6280)
);
}


/* ManualOverrideState - ns=1;i=6266 */

static UA_StatusCode function_lcbc_object_feeder1_36_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_6266_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_6266_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6266_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ManualOverrideState");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ManualOverrideState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_6266_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6266), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_36_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6266)
);
}


/* Type - ns=1;i=6275 */

static UA_StatusCode function_lcbc_object_feeder1_37_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6275_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6275_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6275_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6275),
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6275_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6275), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_37_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6275)
);
}


/* Pos - ns=1;i=6274 */

static UA_StatusCode function_lcbc_object_feeder1_38_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6274_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6274_variant_DataContents = (UA_Int16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6274_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6274),
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6274_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6274), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_38_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6274)
);
}


/* OnTxt - ns=1;i=6273 */

static UA_StatusCode function_lcbc_object_feeder1_39_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6273_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6273_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6273_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6273),
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6273_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6273), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_39_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6273)
);
}


/* OffTxt - ns=1;i=6272 */

static UA_StatusCode function_lcbc_object_feeder1_40_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6272_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6272_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6272_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6272),
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6272_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6272), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_40_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6272)
);
}


/* InUse - ns=1;i=6271 */

static UA_StatusCode function_lcbc_object_feeder1_41_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6271_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6271_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6271_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6271),
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6271_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6271), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_41_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6271)
);
}


/* FeederIdx - ns=1;i=6270 */

static UA_StatusCode function_lcbc_object_feeder1_42_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6270_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6270_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6270_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6270),
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6270), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_42_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6270)
);
}


/* AlarmLow - ns=1;i=6268 */

static UA_StatusCode function_lcbc_object_feeder1_43_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6268_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6268_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6268_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6268),
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6268), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_43_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6268)
);
}


/* FeederCtx - ns=1;i=6269 */

static UA_StatusCode function_lcbc_object_feeder1_44_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6269_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6269_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6269_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6269),
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6269), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_44_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6269)
);
}


/* AlarmHigh - ns=1;i=6267 */

static UA_StatusCode function_lcbc_object_feeder1_45_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6267_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6267_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6267_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6267),
UA_NODEID_NUMERIC(ns[1], 6266),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6267_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6267), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_45_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6267)
);
}


/* ManualOverrideControl - ns=1;i=7004 */

static UA_StatusCode function_lcbc_object_feeder1_46_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ManualOverrideControl");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 7004),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ManualOverrideControl"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 7004), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_46_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 7004)
, NULL, 0, NULL, 0, NULL);
}


/* InputArguments - ns=1;i=6348 */

static UA_StatusCode function_lcbc_object_feeder1_47_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6348),
UA_NODEID_NUMERIC(ns[1], 7004),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6348), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_47_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6348)
);
}


/* OutputArguments - ns=1;i=6349 */

static UA_StatusCode function_lcbc_object_feeder1_48_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6349),
UA_NODEID_NUMERIC(ns[1], 7004),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6349), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_48_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6349)
);
}


/* Automaadid Sees - ns=1;i=6296 */

static UA_StatusCode function_lcbc_object_feeder1_49_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_6296_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_6296_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6296_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Automaadid Sees");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Automaadid Sees"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_6296_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6296), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_49_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6296)
);
}


/* Pos - ns=1;i=6304 */

static UA_StatusCode function_lcbc_object_feeder1_50_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6304_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6304_variant_DataContents = (UA_Int16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6304_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6304),
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6304_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6304), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_50_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6304)
);
}


/* AlarmHigh - ns=1;i=6297 */

static UA_StatusCode function_lcbc_object_feeder1_51_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6297_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6297_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6297_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6297),
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6297_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6297), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_51_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6297)
);
}


/* InUse - ns=1;i=6301 */

static UA_StatusCode function_lcbc_object_feeder1_52_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6301_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6301_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6301_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6301),
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6301_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6301), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_52_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6301)
);
}


/* FeederIdx - ns=1;i=6300 */

static UA_StatusCode function_lcbc_object_feeder1_53_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6300_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6300_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6300_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6300),
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6300), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_53_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6300)
);
}


/* OffTxt - ns=1;i=6302 */

static UA_StatusCode function_lcbc_object_feeder1_54_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6302_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6302_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6302_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6302),
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6302), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_54_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6302)
);
}


/* OnTxt - ns=1;i=6303 */

static UA_StatusCode function_lcbc_object_feeder1_55_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6303_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6303_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6303_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6303),
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6303), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_55_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6303)
);
}


/* Type - ns=1;i=6305 */

static UA_StatusCode function_lcbc_object_feeder1_56_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6305_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6305_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6305_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6305),
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6305_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6305), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_56_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6305)
);
}


/* AlarmLow - ns=1;i=6298 */

static UA_StatusCode function_lcbc_object_feeder1_57_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6298_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6298_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6298_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6298),
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6298), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_57_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6298)
);
}


/* FeederCtx - ns=1;i=6299 */

static UA_StatusCode function_lcbc_object_feeder1_58_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6299_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6299_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6299_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6299),
UA_NODEID_NUMERIC(ns[1], 6296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6299_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6299), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_58_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6299)
);
}


/* Door Alarm - ns=1;i=6306 */

static UA_StatusCode function_lcbc_object_feeder1_59_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_6306_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_6306_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6306_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Door Alarm");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Door Alarm"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_6306_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6306), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_59_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6306)
);
}


/* AlarmLow - ns=1;i=6308 */

static UA_StatusCode function_lcbc_object_feeder1_60_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6308_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6308_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6308_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6308),
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6308_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6308), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_60_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6308)
);
}


/* FeederCtx - ns=1;i=6309 */

static UA_StatusCode function_lcbc_object_feeder1_61_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6309_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6309_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6309_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6309),
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6309), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_61_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6309)
);
}


/* Type - ns=1;i=6315 */

static UA_StatusCode function_lcbc_object_feeder1_62_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6315_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6315_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6315_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6315),
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6315_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6315), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_62_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6315)
);
}


/* Pos - ns=1;i=6314 */

static UA_StatusCode function_lcbc_object_feeder1_63_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6314_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6314_variant_DataContents = (UA_Int16) 4;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6314_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6314),
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6314_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6314), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_63_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6314)
);
}


/* AlarmHigh - ns=1;i=6307 */

static UA_StatusCode function_lcbc_object_feeder1_64_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6307_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6307_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6307_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6307),
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6307), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_64_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6307)
);
}


/* InUse - ns=1;i=6311 */

static UA_StatusCode function_lcbc_object_feeder1_65_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6311_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6311_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6311_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6311),
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6311_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6311), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_65_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6311)
);
}


/* FeederIdx - ns=1;i=6310 */

static UA_StatusCode function_lcbc_object_feeder1_66_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6310_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6310_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6310_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6310),
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6310), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_66_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6310)
);
}


/* OnTxt - ns=1;i=6313 */

static UA_StatusCode function_lcbc_object_feeder1_67_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6313_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6313_variant_DataContents = UA_STRING_ALLOC("Lahti");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6313_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6313),
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6313_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6313), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_67_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6313)
);
}


/* OffTxt - ns=1;i=6312 */

static UA_StatusCode function_lcbc_object_feeder1_68_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6312_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6312_variant_DataContents = UA_STRING_ALLOC("Kinni");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6312_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6312),
UA_NODEID_NUMERIC(ns[1], 6306),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6312_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6312), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_68_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6312)
);
}


/* VoltageAlarm - ns=1;i=6286 */

static UA_StatusCode function_lcbc_object_feeder1_69_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_6286_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_6286_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6286_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "VoltageAlarm");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "VoltageAlarm"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_6286_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6286), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_69_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6286)
);
}


/* AlarmLow - ns=1;i=6288 */

static UA_StatusCode function_lcbc_object_feeder1_70_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6288_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6288_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6288_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6288),
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6288), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_70_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6288)
);
}


/* FeederCtx - ns=1;i=6289 */

static UA_StatusCode function_lcbc_object_feeder1_71_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6289_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6289_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6289_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6289),
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6289), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_71_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6289)
);
}


/* AlarmHigh - ns=1;i=6287 */

static UA_StatusCode function_lcbc_object_feeder1_72_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6287_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6287_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6287_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6287),
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6287_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6287), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_72_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6287)
);
}


/* Type - ns=1;i=6295 */

static UA_StatusCode function_lcbc_object_feeder1_73_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6295_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6295_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6295_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6295),
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6295_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6295), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_73_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6295)
);
}


/* Pos - ns=1;i=6294 */

static UA_StatusCode function_lcbc_object_feeder1_74_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6294_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6294_variant_DataContents = (UA_Int16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6294_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6294),
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6294_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6294), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_74_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6294)
);
}


/* OnTxt - ns=1;i=6293 */

static UA_StatusCode function_lcbc_object_feeder1_75_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6293_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6293_variant_DataContents = UA_STRING_ALLOC("Alarm");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6293_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6293),
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6293_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6293), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_75_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6293)
);
}


/* OffTxt - ns=1;i=6292 */

static UA_StatusCode function_lcbc_object_feeder1_76_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6292_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6292_variant_DataContents = UA_STRING_ALLOC("OK");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6292_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6292),
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6292_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6292), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_76_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6292)
);
}


/* InUse - ns=1;i=6291 */

static UA_StatusCode function_lcbc_object_feeder1_77_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6291_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6291_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6291_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6291),
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6291_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6291), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_77_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6291)
);
}


/* FeederIdx - ns=1;i=6290 */

static UA_StatusCode function_lcbc_object_feeder1_78_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6290_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6290_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6290_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6290),
UA_NODEID_NUMERIC(ns[1], 6286),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6290), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_78_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6290)
);
}


/* LocalLightSensor - ns=1;i=6316 */

static UA_StatusCode function_lcbc_object_feeder1_79_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_STACKARRAY(UA_Double, variablenode_ns_1_i_6316_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6316_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6316_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "LocalLightSensor");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "LocalLightSensor"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6316), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_79_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6316)
);
}


/* OffTxt - ns=1;i=6322 */

static UA_StatusCode function_lcbc_object_feeder1_80_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6322_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6322_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6322_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6322),
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6322), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_80_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6322)
);
}


/* AlarmLow - ns=1;i=6318 */

static UA_StatusCode function_lcbc_object_feeder1_81_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6318_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6318_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6318_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6318),
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6318), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_81_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6318)
);
}


/* FeederCtx - ns=1;i=6319 */

static UA_StatusCode function_lcbc_object_feeder1_82_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6319_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6319_variant_DataContents = UA_STRING_ALLOC("AI_L");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6319_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6319),
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6319_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6319), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_82_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6319)
);
}


/* AlarmHigh - ns=1;i=6317 */

static UA_StatusCode function_lcbc_object_feeder1_83_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6317_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6317_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6317_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6317),
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6317), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_83_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6317)
);
}


/* Type - ns=1;i=6325 */

static UA_StatusCode function_lcbc_object_feeder1_84_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6325_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6325_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6325_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6325),
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6325_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6325), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_84_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6325)
);
}


/* Pos - ns=1;i=6324 */

static UA_StatusCode function_lcbc_object_feeder1_85_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6324_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6324_variant_DataContents = (UA_Int16) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6324_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6324),
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6324_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6324), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_85_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6324)
);
}


/* InUse - ns=1;i=6321 */

static UA_StatusCode function_lcbc_object_feeder1_86_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6321_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6321_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6321_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6321),
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6321_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6321), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_86_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6321)
);
}


/* FeederIdx - ns=1;i=6320 */

static UA_StatusCode function_lcbc_object_feeder1_87_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6320_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6320_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6320_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6320),
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6320), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_87_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6320)
);
}


/* OnTxt - ns=1;i=6323 */

static UA_StatusCode function_lcbc_object_feeder1_88_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6323_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6323_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6323_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6323),
UA_NODEID_NUMERIC(ns[1], 6316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6323), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_88_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6323)
);
}


/* CentralLightSensor - ns=1;i=6326 */

static UA_StatusCode function_lcbc_object_feeder1_89_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_STACKARRAY(UA_Double, variablenode_ns_1_i_6326_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6326_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6326_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CentralLightSensor");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CentralLightSensor"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6326), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_89_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6326)
);
}


/* Type - ns=1;i=6335 */

static UA_StatusCode function_lcbc_object_feeder1_90_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6335_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6335_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6335_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6335),
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6335_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6335), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_90_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6335)
);
}


/* AlarmHigh - ns=1;i=6327 */

static UA_StatusCode function_lcbc_object_feeder1_91_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6327_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6327_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6327_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6327),
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6327), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_91_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6327)
);
}


/* InUse - ns=1;i=6331 */

static UA_StatusCode function_lcbc_object_feeder1_92_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6331_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6331_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6331_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6331),
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6331_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6331), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_92_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6331)
);
}


/* FeederIdx - ns=1;i=6330 */

static UA_StatusCode function_lcbc_object_feeder1_93_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6330_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6330_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6330_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6330),
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6330), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_93_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6330)
);
}


/* OnTxt - ns=1;i=6333 */

static UA_StatusCode function_lcbc_object_feeder1_94_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6333_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6333_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6333_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6333),
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6333), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_94_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6333)
);
}


/* OffTxt - ns=1;i=6332 */

static UA_StatusCode function_lcbc_object_feeder1_95_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6332_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6332_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6332_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6332),
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6332), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_95_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6332)
);
}


/* Pos - ns=1;i=6334 */

static UA_StatusCode function_lcbc_object_feeder1_96_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6334_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6334_variant_DataContents = (UA_Int16) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6334_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6334),
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6334_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6334), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_96_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6334)
);
}


/* AlarmLow - ns=1;i=6328 */

static UA_StatusCode function_lcbc_object_feeder1_97_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6328_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6328_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6328_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6328),
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6328), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_97_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6328)
);
}


/* FeederCtx - ns=1;i=6329 */

static UA_StatusCode function_lcbc_object_feeder1_98_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6329_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6329_variant_DataContents = UA_STRING_ALLOC("AI_C");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6329_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6329),
UA_NODEID_NUMERIC(ns[1], 6326),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6329_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6329), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_98_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6329)
);
}


/* Temperature - ns=1;i=6336 */

static UA_StatusCode function_lcbc_object_feeder1_99_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_STACKARRAY(UA_Double, variablenode_ns_1_i_6336_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6336_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6336_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Temperature"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6336), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_99_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6336)
);
}


/* AlarmHigh - ns=1;i=6337 */

static UA_StatusCode function_lcbc_object_feeder1_100_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6337_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6337_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6337_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6337),
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6337), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_100_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6337)
);
}


/* AlarmLow - ns=1;i=6338 */

static UA_StatusCode function_lcbc_object_feeder1_101_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6338_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6338_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6338_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6338),
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6338), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_101_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6338)
);
}


/* FeederCtx - ns=1;i=6339 */

static UA_StatusCode function_lcbc_object_feeder1_102_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6339_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6339_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6339_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6339),
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6339), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_102_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6339)
);
}


/* Type - ns=1;i=6345 */

static UA_StatusCode function_lcbc_object_feeder1_103_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6345_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6345_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6345_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6345),
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6345_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6345), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_103_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6345)
);
}


/* Pos - ns=1;i=6344 */

static UA_StatusCode function_lcbc_object_feeder1_104_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6344_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6344_variant_DataContents = (UA_Int16) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6344_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6344),
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6344_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6344), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_104_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6344)
);
}


/* InUse - ns=1;i=6341 */

static UA_StatusCode function_lcbc_object_feeder1_105_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_1_i_6341_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6341_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6341_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6341),
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6341), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_105_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6341)
);
}


/* FeederIdx - ns=1;i=6340 */

static UA_StatusCode function_lcbc_object_feeder1_106_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6340_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6340_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6340_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6340),
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6340), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_106_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6340)
);
}


/* OnTxt - ns=1;i=6343 */

static UA_StatusCode function_lcbc_object_feeder1_107_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6343_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6343_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6343_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6343),
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6343), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_107_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6343)
);
}


/* OffTxt - ns=1;i=6342 */

static UA_StatusCode function_lcbc_object_feeder1_108_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6342_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6342_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6342_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6342),
UA_NODEID_NUMERIC(ns[1], 6336),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6342), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_108_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6342)
);
}


/* AnalogOutput - ns=1;i=7003 */

static UA_StatusCode function_lcbc_object_feeder1_109_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AnalogOutput");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 7003),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AnalogOutput"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 7003), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_109_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 7003)
, NULL, 0, NULL, 0, NULL);
}


/* OutputArguments - ns=1;i=6347 */

static UA_StatusCode function_lcbc_object_feeder1_110_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6347),
UA_NODEID_NUMERIC(ns[1], 7003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6347), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_110_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6347)
);
}


/* InputArguments - ns=1;i=6346 */

static UA_StatusCode function_lcbc_object_feeder1_111_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6346),
UA_NODEID_NUMERIC(ns[1], 7003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6346), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_111_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6346)
);
}


/* Controller - ns=1;i=10000 */

static UA_StatusCode function_lcbc_object_feeder1_112_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controller");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[1], 5002),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Controller"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_112_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10000)
);
}



/* AnalogOutput - ns=1;i=27 */

static UA_StatusCode function_lcbc_object_feeder1_113_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AnalogOutput");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 27),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AnalogOutput"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_113_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 27)
, NULL, 0, NULL, 0, NULL);
}


/* OutputArguments - ns=1;i=6173 */

static UA_StatusCode function_lcbc_object_feeder1_114_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6173),
UA_NODEID_NUMERIC(ns[1], 27),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_114_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6173)
);
}


/* InputArguments - ns=1;i=6162 */

static UA_StatusCode function_lcbc_object_feeder1_115_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6162),
UA_NODEID_NUMERIC(ns[1], 27),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_115_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6162)
);
}


/* ManualOverrideControl - ns=1;i=11 */

static UA_StatusCode function_lcbc_object_feeder1_116_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ManualOverrideControl");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 11),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ManualOverrideControl"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_116_finish(UA_Server *server, UA_UInt16* ns) {
    UA_Argument inputArgument;
    UA_Argument_init(&inputArgument);
    inputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    inputArgument.name = UA_STRING("CmdControlByte");
    inputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    inputArgument.valueRank = -1; /* scalar */

    UA_Argument outputArgument;
    UA_Argument_init(&outputArgument);
    outputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    outputArgument.name = UA_STRING("CmdResultByte");
    outputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    outputArgument.valueRank = -1; /* scalar */

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[1], 11),
        &F0_DI_FxM_ID);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11)
, controlMethodCallbackManual, 1, &inputArgument, 1, &outputArgument);
}


/* InputArguments - ns=1;i=6206 */

static UA_StatusCode function_lcbc_object_feeder1_117_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6206),
UA_NODEID_NUMERIC(ns[1], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_117_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6206)
);
}


/* OutputArguments - ns=1;i=6207 */

static UA_StatusCode function_lcbc_object_feeder1_118_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6207),
UA_NODEID_NUMERIC(ns[1], 11),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_118_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6207)
);
}



/* Door Alarm - ns=1;i=6 */

static UA_StatusCode function_lcbc_object_feeder1_119_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_6_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_6_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Door Alarm");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Door Alarm"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_6_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_119_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6)
);
}


/* Pos - ns=1;i=6366 */

static UA_StatusCode function_lcbc_object_feeder1_120_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6366_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6366_variant_DataContents = (UA_Int16) 4;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6366_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6366),
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6366_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_120_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6366)
);
}


/* OffTxt - ns=1;i=6364 */

static UA_StatusCode function_lcbc_object_feeder1_121_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6364_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6364_variant_DataContents = UA_STRING_ALLOC("Kinni");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6364_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6364),
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6364_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_121_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6364)
);
}


/* Type - ns=1;i=6367 */

static UA_StatusCode function_lcbc_object_feeder1_122_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6367_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6367_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6367_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6367),
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6367_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_122_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6367)
);
}


/* AlarmHigh - ns=1;i=6359 */

static UA_StatusCode function_lcbc_object_feeder1_123_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6359_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6359_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6359_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6359),
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_123_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6359)
);
}


/* OnTxt - ns=1;i=6365 */

static UA_StatusCode function_lcbc_object_feeder1_124_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6365_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6365_variant_DataContents = UA_STRING_ALLOC("Lahti");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6365_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6365),
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6365_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_124_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6365)
);
}


/* FeederIdx - ns=1;i=6362 */

static UA_StatusCode function_lcbc_object_feeder1_125_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6362_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6362_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6362_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6362),
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_125_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6362)
);
}


/* InUse - ns=1;i=6363 */

static UA_StatusCode function_lcbc_object_feeder1_126_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6363_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6363_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6363_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6363),
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6363_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_126_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6363)
);
}


/* AlarmLow - ns=1;i=6360 */

static UA_StatusCode function_lcbc_object_feeder1_127_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6360_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6360_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6360_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6360),
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6360_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_127_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6360)
);
}


/* FeederCtx - ns=1;i=6361 */

static UA_StatusCode function_lcbc_object_feeder1_128_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6361_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6361_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6361_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6361),
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_128_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6361)
);
}


/* LocalLightSensor - ns=1;i=7 */

static UA_StatusCode function_lcbc_object_feeder1_129_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_STACKARRAY(UA_Double, variablenode_ns_1_i_7_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_7_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_7_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "LocalLightSensor");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "LocalLightSensor"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_129_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 7)
);
}


/* Pos - ns=1;i=6376 */

static UA_StatusCode function_lcbc_object_feeder1_130_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6376_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6376_variant_DataContents = (UA_Int16) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6376_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6376),
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6376_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_130_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6376)
);
}


/* FeederIdx - ns=1;i=6372 */

static UA_StatusCode function_lcbc_object_feeder1_131_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6372_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6372_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6372_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6372),
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_131_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6372)
);
}


/* InUse - ns=1;i=6373 */

static UA_StatusCode function_lcbc_object_feeder1_132_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6373_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6373_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6373_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6373),
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6373_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_132_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6373)
);
}


/* AlarmLow - ns=1;i=6370 */

static UA_StatusCode function_lcbc_object_feeder1_133_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6370_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6370_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6370_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6370),
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_133_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6370)
);
}


/* FeederCtx - ns=1;i=6371 */

static UA_StatusCode function_lcbc_object_feeder1_134_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6371_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6371_variant_DataContents = UA_STRING_ALLOC("AI_L");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6371_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6371),
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6371_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_134_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6371)
);
}


/* AlarmHigh - ns=1;i=6369 */

static UA_StatusCode function_lcbc_object_feeder1_135_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6369_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6369_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6369_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6369),
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_135_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6369)
);
}


/* Type - ns=1;i=6377 */

static UA_StatusCode function_lcbc_object_feeder1_136_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6377_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6377_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6377_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6377),
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6377_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_136_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6377)
);
}


/* OffTxt - ns=1;i=6374 */

static UA_StatusCode function_lcbc_object_feeder1_137_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6374_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6374_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6374_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6374),
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_137_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6374)
);
}


/* OnTxt - ns=1;i=6375 */

static UA_StatusCode function_lcbc_object_feeder1_138_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6375_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6375_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6375_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6375),
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_138_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6375)
);
}


/* VoltageAlarm - ns=1;i=4 */

static UA_StatusCode function_lcbc_object_feeder1_139_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_4_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_4_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "VoltageAlarm");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "VoltageAlarm"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_4_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_139_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4)
);
}


/* Type - ns=1;i=6409 */

static UA_StatusCode function_lcbc_object_feeder1_140_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6409_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6409_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6409_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6409),
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6409_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_140_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6409)
);
}


/* Pos - ns=1;i=6408 */

static UA_StatusCode function_lcbc_object_feeder1_141_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6408_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6408_variant_DataContents = (UA_Int16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6408_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6408),
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6408_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_141_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6408)
);
}


/* InUse - ns=1;i=6405 */

static UA_StatusCode function_lcbc_object_feeder1_142_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6405_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6405_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6405_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6405),
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6405_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_142_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6405)
);
}


/* FeederIdx - ns=1;i=6404 */

static UA_StatusCode function_lcbc_object_feeder1_143_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6404_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6404_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6404_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6404),
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_143_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6404)
);
}


/* OnTxt - ns=1;i=6407 */

static UA_StatusCode function_lcbc_object_feeder1_144_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6407_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6407_variant_DataContents = UA_STRING_ALLOC("Alarm");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6407_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6407),
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6407_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_144_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6407)
);
}


/* OffTxt - ns=1;i=6406 */

static UA_StatusCode function_lcbc_object_feeder1_145_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6406_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6406_variant_DataContents = UA_STRING_ALLOC("OK");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6406_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6406),
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6406_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_145_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6406)
);
}


/* AlarmHigh - ns=1;i=6401 */

static UA_StatusCode function_lcbc_object_feeder1_146_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6401_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6401_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6401_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6401),
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6401_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_146_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6401)
);
}


/* FeederCtx - ns=1;i=6403 */

static UA_StatusCode function_lcbc_object_feeder1_147_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6403_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6403_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6403_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6403),
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_147_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6403)
);
}


/* AlarmLow - ns=1;i=6402 */

static UA_StatusCode function_lcbc_object_feeder1_148_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6402_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6402_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6402_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6402),
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_148_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6402)
);
}


/* Automaadid Sees - ns=1;i=5 */

static UA_StatusCode function_lcbc_object_feeder1_149_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_5_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_5_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_5_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Automaadid Sees");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Automaadid Sees"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_5_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_149_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5)
);
}


/* AlarmHigh - ns=1;i=6218 */

static UA_StatusCode function_lcbc_object_feeder1_150_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6218_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6218_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6218_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6218),
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6218_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_150_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6218)
);
}


/* AlarmLow - ns=1;i=6228 */

static UA_StatusCode function_lcbc_object_feeder1_151_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6228_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6228_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6228_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6228),
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_151_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6228)
);
}


/* FeederCtx - ns=1;i=6229 */

static UA_StatusCode function_lcbc_object_feeder1_152_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6229_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6229_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6229_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6229),
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6229_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_152_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6229)
);
}


/* InUse - ns=1;i=6231 */

static UA_StatusCode function_lcbc_object_feeder1_153_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6231_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6231_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6231_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6231),
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6231_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_153_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6231)
);
}


/* FeederIdx - ns=1;i=6230 */

static UA_StatusCode function_lcbc_object_feeder1_154_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6230_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6230_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6230_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6230),
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_154_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6230)
);
}


/* OnTxt - ns=1;i=6233 */

static UA_StatusCode function_lcbc_object_feeder1_155_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6233_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6233_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6233_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6233),
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_155_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6233)
);
}


/* OffTxt - ns=1;i=6232 */

static UA_StatusCode function_lcbc_object_feeder1_156_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6232_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6232_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6232_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6232),
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_156_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6232)
);
}


/* Type - ns=1;i=6235 */

static UA_StatusCode function_lcbc_object_feeder1_157_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6235_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6235_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6235_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6235),
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6235_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_157_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6235)
);
}


/* Pos - ns=1;i=6234 */

static UA_StatusCode function_lcbc_object_feeder1_158_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6234_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6234_variant_DataContents = (UA_Int16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6234_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6234),
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6234_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_158_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6234)
);
}


/* ManualOverrideState - ns=1;i=2 */

static UA_StatusCode function_lcbc_object_feeder1_159_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_2_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_2_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ManualOverrideState");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ManualOverrideState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_2_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_159_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2)
);
}


/* AlarmHigh - ns=1;i=6381 */

static UA_StatusCode function_lcbc_object_feeder1_160_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6381_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6381_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6381_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6381),
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6381_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_160_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6381)
);
}


/* AlarmLow - ns=1;i=6382 */

static UA_StatusCode function_lcbc_object_feeder1_161_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6382_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6382_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6382_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6382),
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_161_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6382)
);
}


/* FeederCtx - ns=1;i=6383 */

static UA_StatusCode function_lcbc_object_feeder1_162_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6383_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6383_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6383_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6383),
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_162_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6383)
);
}


/* FeederIdx - ns=1;i=6384 */

static UA_StatusCode function_lcbc_object_feeder1_163_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6384_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6384_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6384_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6384),
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_163_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6384)
);
}


/* InUse - ns=1;i=6385 */

static UA_StatusCode function_lcbc_object_feeder1_164_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6385_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6385_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6385_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6385),
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6385_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_164_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6385)
);
}


/* OffTxt - ns=1;i=6386 */

static UA_StatusCode function_lcbc_object_feeder1_165_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6386_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6386_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6386_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6386),
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6386_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_165_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6386)
);
}


/* OnTxt - ns=1;i=6387 */

static UA_StatusCode function_lcbc_object_feeder1_166_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6387_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6387_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6387_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6387),
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6387_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_166_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6387)
);
}


/* Pos - ns=1;i=6388 */

static UA_StatusCode function_lcbc_object_feeder1_167_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6388_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6388_variant_DataContents = (UA_Int16) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6388_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6388),
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6388_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_167_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6388)
);
}


/* Type - ns=1;i=6389 */

static UA_StatusCode function_lcbc_object_feeder1_168_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6389_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6389_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6389_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6389),
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6389_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_168_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6389)
);
}


/* Active - ns=1;i=3 */

static UA_StatusCode function_lcbc_object_feeder1_169_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_3_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_3_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Active");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Active"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_3_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_169_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3)
);
}


/* AlarmHigh - ns=1;i=6163 */

static UA_StatusCode function_lcbc_object_feeder1_170_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6163_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6163_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6163_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6163),
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6163_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_170_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6163)
);
}


/* Pos - ns=1;i=6170 */

static UA_StatusCode function_lcbc_object_feeder1_171_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6170_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6170_variant_DataContents = (UA_Int16) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6170_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6170),
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6170_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_171_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6170)
);
}


/* Type - ns=1;i=6171 */

static UA_StatusCode function_lcbc_object_feeder1_172_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6171_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6171_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6171_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6171),
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6171_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_172_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6171)
);
}


/* InUse - ns=1;i=6167 */

static UA_StatusCode function_lcbc_object_feeder1_173_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6167_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6167_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6167_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6167),
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6167_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_173_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6167)
);
}


/* FeederIdx - ns=1;i=6166 */

static UA_StatusCode function_lcbc_object_feeder1_174_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6166_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6166_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6166_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6166),
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_174_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6166)
);
}


/* FeederCtx - ns=1;i=6165 */

static UA_StatusCode function_lcbc_object_feeder1_175_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6165_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6165_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6165_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6165),
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6165_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_175_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6165)
);
}


/* AlarmLow - ns=1;i=6164 */

static UA_StatusCode function_lcbc_object_feeder1_176_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6164_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6164_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6164_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6164),
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_176_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6164)
);
}


/* OnTxt - ns=1;i=6169 */

static UA_StatusCode function_lcbc_object_feeder1_177_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6169_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6169_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6169_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6169),
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6169_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_177_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6169)
);
}


/* OffTxt - ns=1;i=6168 */

static UA_StatusCode function_lcbc_object_feeder1_178_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6168_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6168_variant_DataContents = UA_STRING_ALLOC("Aktiivne");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6168_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6168),
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6168_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_178_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6168)
);
}


/* AlarmState - ns=1;i=1 */

static UA_StatusCode function_lcbc_object_feeder1_179_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_1_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_1_variant_DataContents = (UA_Byte) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_1_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmState");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AlarmState"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_1_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_179_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1)
);
}


/* Type - ns=1;i=6196 */

static UA_StatusCode function_lcbc_object_feeder1_180_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6196_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6196_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6196_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6196),
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6196_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_180_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6196)
);
}


/* Pos - ns=1;i=6181 */

static UA_StatusCode function_lcbc_object_feeder1_181_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6181_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6181_variant_DataContents = (UA_Int16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6181_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6181),
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6181_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_181_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6181)
);
}


/* OnTxt - ns=1;i=6180 */

static UA_StatusCode function_lcbc_object_feeder1_182_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6180_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6180_variant_DataContents = UA_STRING_ALLOC("Alarm");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6180_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6180),
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6180_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_182_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6180)
);
}


/* FeederCtx - ns=1;i=6176 */

static UA_StatusCode function_lcbc_object_feeder1_183_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6176_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6176_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6176_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6176),
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_183_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6176)
);
}


/* AlarmHigh - ns=1;i=6174 */

static UA_StatusCode function_lcbc_object_feeder1_184_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6174_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6174_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6174_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6174),
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6174_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_184_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6174)
);
}


/* AlarmLow - ns=1;i=6175 */

static UA_StatusCode function_lcbc_object_feeder1_185_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6175_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6175_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6175_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6175),
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_185_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6175)
);
}


/* OffTxt - ns=1;i=6179 */

static UA_StatusCode function_lcbc_object_feeder1_186_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6179_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6179_variant_DataContents = UA_STRING_ALLOC("OK");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6179_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6179),
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6179_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_186_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6179)
);
}


/* InUse - ns=1;i=6178 */

static UA_StatusCode function_lcbc_object_feeder1_187_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6178_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6178_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6178_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6178),
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6178_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_187_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6178)
);
}


/* FeederIdx - ns=1;i=6177 */

static UA_StatusCode function_lcbc_object_feeder1_188_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6177_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6177_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6177_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6177),
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_188_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6177)
);
}


/* CentralLightSensor - ns=1;i=8 */

static UA_StatusCode function_lcbc_object_feeder1_189_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_STACKARRAY(UA_Double, variablenode_ns_1_i_8_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_8_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CentralLightSensor");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CentralLightSensor"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_189_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8)
);
}


/* AlarmHigh - ns=1;i=6237 */

static UA_StatusCode function_lcbc_object_feeder1_190_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6237_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6237_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6237_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6237),
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_190_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6237)
);
}


/* OnTxt - ns=1;i=6355 */

static UA_StatusCode function_lcbc_object_feeder1_191_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6355_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6355_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6355_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6355),
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_191_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6355)
);
}


/* OffTxt - ns=1;i=6354 */

static UA_StatusCode function_lcbc_object_feeder1_192_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6354_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6354_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6354_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6354),
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_192_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6354)
);
}


/* Type - ns=1;i=6357 */

static UA_StatusCode function_lcbc_object_feeder1_193_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6357_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6357_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6357_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6357),
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6357_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_193_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6357)
);
}


/* Pos - ns=1;i=6356 */

static UA_StatusCode function_lcbc_object_feeder1_194_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6356_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6356_variant_DataContents = (UA_Int16) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6356_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6356),
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6356_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_194_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6356)
);
}


/* FeederCtx - ns=1;i=6351 */

static UA_StatusCode function_lcbc_object_feeder1_195_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6351_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6351_variant_DataContents = UA_STRING_ALLOC("AI_C");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6351_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6351),
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6351_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_195_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6351)
);
}


/* AlarmLow - ns=1;i=6350 */

static UA_StatusCode function_lcbc_object_feeder1_196_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6350_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6350_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6350_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6350),
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_196_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6350)
);
}


/* InUse - ns=1;i=6353 */

static UA_StatusCode function_lcbc_object_feeder1_197_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6353_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6353_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6353_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6353),
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6353_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_197_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6353)
);
}


/* FeederIdx - ns=1;i=6352 */

static UA_StatusCode function_lcbc_object_feeder1_198_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6352_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6352_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6352_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6352),
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_198_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6352)
);
}


/* Temperature - ns=1;i=9 */

static UA_StatusCode function_lcbc_object_feeder1_199_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_STACKARRAY(UA_Double, variablenode_ns_1_i_9_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_9_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_9_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Temperature"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_199_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 9)
);
}


/* FeederCtx - ns=1;i=6393 */

static UA_StatusCode function_lcbc_object_feeder1_200_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6393_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6393_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6393_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6393),
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_200_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6393)
);
}


/* AlarmLow - ns=1;i=6392 */

static UA_StatusCode function_lcbc_object_feeder1_201_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6392_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6392_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6392_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6392),
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_201_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6392)
);
}


/* AlarmHigh - ns=1;i=6391 */

static UA_StatusCode function_lcbc_object_feeder1_202_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6391_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6391_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6391_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6391),
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_202_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6391)
);
}


/* OffTxt - ns=1;i=6396 */

static UA_StatusCode function_lcbc_object_feeder1_203_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6396_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6396_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6396_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6396),
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_203_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6396)
);
}


/* OnTxt - ns=1;i=6397 */

static UA_StatusCode function_lcbc_object_feeder1_204_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6397_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6397_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6397_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6397),
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_204_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6397)
);
}


/* FeederIdx - ns=1;i=6394 */

static UA_StatusCode function_lcbc_object_feeder1_205_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_STACKARRAY(UA_UInt16, variablenode_ns_1_i_6394_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6394_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6394_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6394),
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_205_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6394)
);
}


/* InUse - ns=1;i=6395 */

static UA_StatusCode function_lcbc_object_feeder1_206_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_STACKARRAY(UA_Boolean, variablenode_ns_1_i_6395_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6395_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6395_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6395),
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_206_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6395)
);
}


/* Pos - ns=1;i=6398 */

static UA_StatusCode function_lcbc_object_feeder1_207_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6398_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6398_variant_DataContents = (UA_Int16) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6398_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6398),
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6398_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_207_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6398)
);
}


/* Type - ns=1;i=6399 */

static UA_StatusCode function_lcbc_object_feeder1_208_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6399_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6399_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6399_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6399),
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6399_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_208_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6399)
);
}


/* MartemFeederType - ns=1;i=1002 */

static UA_StatusCode function_lcbc_object_feeder1_209_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MartemFeederType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MartemFeederType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_209_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1002)
);
}


/* Current 2 f. - ns=1;i=6084 */

static UA_StatusCode function_lcbc_object_feeder1_210_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_6084_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_6084_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6084_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Current 2 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 2 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_6084_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6084), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_210_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6084)
);
}


/* FeederIdx - ns=1;i=6088 */

static UA_StatusCode function_lcbc_object_feeder1_211_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6088_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6088_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6088_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6088),
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6088_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6088), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_211_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6088)
);
}


/* InUse - ns=1;i=6089 */

static UA_StatusCode function_lcbc_object_feeder1_212_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6089_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6089_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6089_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6089),
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6089_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6089), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_212_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6089)
);
}


/* OnTxt - ns=1;i=6091 */

static UA_StatusCode function_lcbc_object_feeder1_213_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6091_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6091_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6091_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6091),
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6091), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_213_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6091)
);
}


/* OffTxt - ns=1;i=6090 */

static UA_StatusCode function_lcbc_object_feeder1_214_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6090_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6090_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6090_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6090),
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6090), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_214_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6090)
);
}


/* Type - ns=1;i=6093 */

static UA_StatusCode function_lcbc_object_feeder1_215_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6093_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6093_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6093_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6093),
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6093_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6093), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_215_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6093)
);
}


/* Pos - ns=1;i=6092 */

static UA_StatusCode function_lcbc_object_feeder1_216_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6092_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6092_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6092_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6092),
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6092_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6092), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_216_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6092)
);
}


/* AlarmLow - ns=1;i=6086 */

static UA_StatusCode function_lcbc_object_feeder1_217_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6086_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6086_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6086_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6086),
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6086), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_217_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6086)
);
}


/* FeederCtx - ns=1;i=6087 */

static UA_StatusCode function_lcbc_object_feeder1_218_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6087_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6087_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6087_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6087),
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6087), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_218_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6087)
);
}


/* AlarmHigh - ns=1;i=6085 */

static UA_StatusCode function_lcbc_object_feeder1_219_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6085_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6085_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6085_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6085),
UA_NODEID_NUMERIC(ns[1], 6084),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6085_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6085), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_219_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6085)
);
}


/* Current 3 f - ns=1;i=6094 */

static UA_StatusCode function_lcbc_object_feeder1_220_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_6094_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_6094_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6094_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Current 3 f");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 3 f"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_6094_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6094), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_220_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6094)
);
}


/* AlarmHigh - ns=1;i=6095 */

static UA_StatusCode function_lcbc_object_feeder1_221_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6095_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6095_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6095_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6095),
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6095_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6095), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_221_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6095)
);
}


/* AlarmLow - ns=1;i=6096 */

static UA_StatusCode function_lcbc_object_feeder1_222_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6096_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6096_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6096_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6096),
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6096), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_222_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6096)
);
}


/* FeederCtx - ns=1;i=6097 */

static UA_StatusCode function_lcbc_object_feeder1_223_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6097_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6097_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6097_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6097),
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6097), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_223_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6097)
);
}


/* Pos - ns=1;i=6102 */

static UA_StatusCode function_lcbc_object_feeder1_224_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6102_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6102_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6102_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6102),
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6102_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6102), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_224_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6102)
);
}


/* FeederIdx - ns=1;i=6098 */

static UA_StatusCode function_lcbc_object_feeder1_225_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6098_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6098_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6098_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6098),
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6098_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6098), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_225_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6098)
);
}


/* InUse - ns=1;i=6099 */

static UA_StatusCode function_lcbc_object_feeder1_226_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6099_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6099_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6099_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6099),
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6099_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6099), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_226_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6099)
);
}


/* OffTxt - ns=1;i=6100 */

static UA_StatusCode function_lcbc_object_feeder1_227_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6100_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6100_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6100_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6100),
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6100), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_227_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6100)
);
}


/* Type - ns=1;i=6103 */

static UA_StatusCode function_lcbc_object_feeder1_228_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6103_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6103_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6103_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6103),
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6103_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6103), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_228_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6103)
);
}


/* OnTxt - ns=1;i=6101 */

static UA_StatusCode function_lcbc_object_feeder1_229_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6101_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6101_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6101_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6101),
UA_NODEID_NUMERIC(ns[1], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6101), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_229_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6101)
);
}


/* Current 1 f. - ns=1;i=6074 */

static UA_StatusCode function_lcbc_object_feeder1_230_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_6074_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_6074_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6074_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Current 1 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 1 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_6074_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6074), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_230_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6074)
);
}


/* FeederIdx - ns=1;i=6078 */

static UA_StatusCode function_lcbc_object_feeder1_231_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6078_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6078_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6078_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6078),
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6078_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6078), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_231_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6078)
);
}


/* InUse - ns=1;i=6079 */

static UA_StatusCode function_lcbc_object_feeder1_232_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6079_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6079_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6079_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6079),
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6079_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6079), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_232_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6079)
);
}


/* OnTxt - ns=1;i=6081 */

static UA_StatusCode function_lcbc_object_feeder1_233_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6081_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6081_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6081_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6081),
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6081), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_233_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6081)
);
}


/* OffTxt - ns=1;i=6080 */

static UA_StatusCode function_lcbc_object_feeder1_234_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6080_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6080_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6080_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6080),
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6080), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_234_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6080)
);
}


/* Type - ns=1;i=6083 */

static UA_StatusCode function_lcbc_object_feeder1_235_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6083_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6083_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6083_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6083),
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6083_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6083), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_235_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6083)
);
}


/* Pos - ns=1;i=6082 */

static UA_StatusCode function_lcbc_object_feeder1_236_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6082_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6082_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6082_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6082),
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6082_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6082), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_236_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6082)
);
}


/* AlarmHigh - ns=1;i=6075 */

static UA_StatusCode function_lcbc_object_feeder1_237_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6075_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6075_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6075_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6075),
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6075_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6075), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_237_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6075)
);
}


/* AlarmLow - ns=1;i=6076 */

static UA_StatusCode function_lcbc_object_feeder1_238_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6076_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6076_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6076_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6076),
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6076), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_238_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6076)
);
}


/* FeederCtx - ns=1;i=6077 */

static UA_StatusCode function_lcbc_object_feeder1_239_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6077_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6077_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6077_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6077),
UA_NODEID_NUMERIC(ns[1], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6077), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_239_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6077)
);
}


/* Status - ns=1;i=6003 */

static UA_StatusCode function_lcbc_object_feeder1_240_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_6003_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_6003_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6003_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Status"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_6003_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6003), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_240_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6003)
);
}


/* Type - ns=1;i=6061 */

static UA_StatusCode function_lcbc_object_feeder1_241_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6061_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6061_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6061_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6061),
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6061_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6061), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_241_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6061)
);
}


/* Pos - ns=1;i=6060 */

static UA_StatusCode function_lcbc_object_feeder1_242_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6060_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6060_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6060_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6060),
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6060_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6060), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_242_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6060)
);
}


/* OffTxt - ns=1;i=6009 */

static UA_StatusCode function_lcbc_object_feeder1_243_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6009_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6009_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6009_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6009),
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6009_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6009), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_243_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6009)
);
}


/* FeederIdx - ns=1;i=6007 */

static UA_StatusCode function_lcbc_object_feeder1_244_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6007_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6007_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6007_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6007),
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6007_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6007), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_244_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6007)
);
}


/* FeederCtx - ns=1;i=6006 */

static UA_StatusCode function_lcbc_object_feeder1_245_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6006_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6006_variant_DataContents = UA_STRING_ALLOC("DI_FxS");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6006_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6006),
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6006_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6006), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_245_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6006)
);
}


/* AlarmLow - ns=1;i=6005 */

static UA_StatusCode function_lcbc_object_feeder1_246_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6005_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6005_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6005_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6005),
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6005), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_246_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6005)
);
}


/* AlarmHigh - ns=1;i=6004 */

static UA_StatusCode function_lcbc_object_feeder1_247_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6004_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6004_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6004_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6004),
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6004), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_247_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6004)
);
}


/* InUse - ns=1;i=6008 */

static UA_StatusCode function_lcbc_object_feeder1_248_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6008_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6008_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6008_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6008),
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6008_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6008), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_248_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6008)
);
}


/* OnTxt - ns=1;i=6010 */

static UA_StatusCode function_lcbc_object_feeder1_249_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6010_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6010_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6010_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6010),
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6010_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6010), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_249_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6010)
);
}


/* Dimming status - ns=1;i=6062 */

static UA_StatusCode function_lcbc_object_feeder1_250_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_6062_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_6062_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6062_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Dimming status");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Dimming status"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_6062_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6062), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_250_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6062)
);
}


/* AlarmHigh - ns=1;i=6063 */

static UA_StatusCode function_lcbc_object_feeder1_251_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6063_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6063_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6063_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6063),
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6063), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_251_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6063)
);
}


/* AlarmLow - ns=1;i=6064 */

static UA_StatusCode function_lcbc_object_feeder1_252_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6064_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6064_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6064_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6064),
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6064), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_252_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6064)
);
}


/* FeederCtx - ns=1;i=6065 */

static UA_StatusCode function_lcbc_object_feeder1_253_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6065_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6065_variant_DataContents = UA_STRING_ALLOC("DI_FxD");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6065_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6065),
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6065_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6065), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_253_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6065)
);
}


/* FeederIdx - ns=1;i=6066 */

static UA_StatusCode function_lcbc_object_feeder1_254_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6066_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6066_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6066_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6066),
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6066_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6066), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_254_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6066)
);
}


/* InUse - ns=1;i=6067 */

static UA_StatusCode function_lcbc_object_feeder1_255_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6067_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6067_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6067_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6067),
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6067_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6067), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_255_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6067)
);
}


/* OffTxt - ns=1;i=6068 */

static UA_StatusCode function_lcbc_object_feeder1_256_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6068_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6068_variant_DataContents = UA_STRING_ALLOC("Hamar");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6068_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6068),
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6068_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6068), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_256_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6068)
);
}


/* OnTxt - ns=1;i=6069 */

static UA_StatusCode function_lcbc_object_feeder1_257_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6069_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6069_variant_DataContents = UA_STRING_ALLOC("Norm");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6069_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6069),
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6069_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6069), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_257_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6069)
);
}


/* Type - ns=1;i=6071 */

static UA_StatusCode function_lcbc_object_feeder1_258_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6071_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6071_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6071_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6071),
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6071_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6071), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_258_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6071)
);
}


/* Pos - ns=1;i=6070 */

static UA_StatusCode function_lcbc_object_feeder1_259_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6070_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6070_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6070_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6070),
UA_NODEID_NUMERIC(ns[1], 6062),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6070_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6070), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_259_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6070)
);
}


/* Dimming Control - ns=1;i=7002 */

static UA_StatusCode function_lcbc_object_feeder1_260_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Dimming Control");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 7002),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Dimming Control"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 7002), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_260_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 7002)
, NULL, 0, NULL, 0, NULL);
}


/* InputArguments - ns=1;i=6072 */

static UA_StatusCode function_lcbc_object_feeder1_261_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6072),
UA_NODEID_NUMERIC(ns[1], 7002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6072), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_261_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6072)
);
}


/* OutputArguments - ns=1;i=6073 */

static UA_StatusCode function_lcbc_object_feeder1_262_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6073),
UA_NODEID_NUMERIC(ns[1], 7002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6073), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_262_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6073)
);
}


/* Control - ns=1;i=7001 */

static UA_StatusCode function_lcbc_object_feeder1_263_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Control");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 7001),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Control"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 7001), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_263_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 7001)
, NULL, 0, NULL, 0, NULL);
}


/* OutputArguments - ns=1;i=6002 */

static UA_StatusCode function_lcbc_object_feeder1_264_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6002),
UA_NODEID_NUMERIC(ns[1], 7001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6002), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_264_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6002)
);
}


/* InputArguments - ns=1;i=6001 */

static UA_StatusCode function_lcbc_object_feeder1_265_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6001),
UA_NODEID_NUMERIC(ns[1], 7001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6001), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_265_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6001)
);
}


/* Power - ns=1;i=6104 */

static UA_StatusCode function_lcbc_object_feeder1_266_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_6104_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_6104_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6104_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Power");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Power"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_6104_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6104), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_266_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6104)
);
}


/* AlarmLow - ns=1;i=6106 */

static UA_StatusCode function_lcbc_object_feeder1_267_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6106_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6106_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6106_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6106),
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6106), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_267_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6106)
);
}


/* FeederCtx - ns=1;i=6107 */

static UA_StatusCode function_lcbc_object_feeder1_268_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6107_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6107_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6107_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6107),
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6107), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_268_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6107)
);
}


/* FeederIdx - ns=1;i=6108 */

static UA_StatusCode function_lcbc_object_feeder1_269_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6108_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6108_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6108_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6108),
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6108_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6108), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_269_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6108)
);
}


/* InUse - ns=1;i=6109 */

static UA_StatusCode function_lcbc_object_feeder1_270_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6109_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6109_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6109_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6109),
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6109_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6109), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_270_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6109)
);
}


/* Type - ns=1;i=6113 */

static UA_StatusCode function_lcbc_object_feeder1_271_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6113_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6113_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6113_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6113),
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6113_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6113), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_271_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6113)
);
}


/* Pos - ns=1;i=6112 */

static UA_StatusCode function_lcbc_object_feeder1_272_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6112_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6112_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6112_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6112),
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6112_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6112), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_272_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6112)
);
}


/* OnTxt - ns=1;i=6111 */

static UA_StatusCode function_lcbc_object_feeder1_273_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6111_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6111_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6111_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6111),
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6111), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_273_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6111)
);
}


/* OffTxt - ns=1;i=6110 */

static UA_StatusCode function_lcbc_object_feeder1_274_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6110_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6110_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6110_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6110),
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6110), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_274_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6110)
);
}


/* AlarmHigh - ns=1;i=6105 */

static UA_StatusCode function_lcbc_object_feeder1_275_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6105_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6105_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6105_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6105),
UA_NODEID_NUMERIC(ns[1], 6104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6105_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6105), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_275_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6105)
);
}


/* Energy - ns=1;i=6114 */

static UA_StatusCode function_lcbc_object_feeder1_276_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_6114_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_1_i_6114_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6114_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Energy");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Energy"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_6114_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6114), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_276_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6114)
);
}


/* Type - ns=1;i=6123 */

static UA_StatusCode function_lcbc_object_feeder1_277_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6123_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6123_variant_DataContents = UA_STRING_ALLOC("CN");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6123_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6123),
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6123_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6123), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_277_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6123)
);
}


/* Pos - ns=1;i=6122 */

static UA_StatusCode function_lcbc_object_feeder1_278_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6122_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6122_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6122_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6122),
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6122_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6122), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_278_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6122)
);
}


/* OnTxt - ns=1;i=6121 */

static UA_StatusCode function_lcbc_object_feeder1_279_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6121_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6121_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6121_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6121),
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6121), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_279_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6121)
);
}


/* OffTxt - ns=1;i=6120 */

static UA_StatusCode function_lcbc_object_feeder1_280_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6120_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6120_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6120_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6120),
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6120), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_280_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6120)
);
}


/* FeederIdx - ns=1;i=6118 */

static UA_StatusCode function_lcbc_object_feeder1_281_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6118_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6118_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6118_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6118),
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6118_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6118), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_281_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6118)
);
}


/* InUse - ns=1;i=6119 */

static UA_StatusCode function_lcbc_object_feeder1_282_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6119_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6119_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6119_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6119),
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6119_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6119), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_282_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6119)
);
}


/* AlarmLow - ns=1;i=6116 */

static UA_StatusCode function_lcbc_object_feeder1_283_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6116_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6116_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6116_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6116),
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6116), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_283_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6116)
);
}


/* FeederCtx - ns=1;i=6117 */

static UA_StatusCode function_lcbc_object_feeder1_284_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6117_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6117_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6117_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6117),
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6117), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_284_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6117)
);
}


/* AlarmHigh - ns=1;i=6115 */

static UA_StatusCode function_lcbc_object_feeder1_285_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6115_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6115_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6115_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6115),
UA_NODEID_NUMERIC(ns[1], 6114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6115), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_285_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6115)
);
}


/* Feeder 1 - ns=1;i=100 */

static UA_StatusCode function_lcbc_object_feeder1_286_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Feeder 1");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[1], 5002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Feeder 1"),
UA_NODEID_NUMERIC(ns[1], 1002),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_286_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 100)
);
}


/* Energy - ns=1;i=109 */

static UA_StatusCode function_lcbc_object_feeder1_287_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_109_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_1_i_109_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_109_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Energy");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Energy"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_109_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_287_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 109)
);
}


/* OnTxt - ns=1;i=6139 */

static UA_StatusCode function_lcbc_object_feeder1_288_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6139_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6139_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6139_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6139),
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_288_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6139)
);
}


/* OffTxt - ns=1;i=6138 */

static UA_StatusCode function_lcbc_object_feeder1_289_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6138_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6138_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6138_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6138),
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_289_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6138)
);
}


/* AlarmHigh - ns=1;i=6133 */

static UA_StatusCode function_lcbc_object_feeder1_290_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6133_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6133_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6133_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6133),
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_290_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6133)
);
}


/* Pos - ns=1;i=6140 */

static UA_StatusCode function_lcbc_object_feeder1_291_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6140_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6140_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6140_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6140),
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6140_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_291_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6140)
);
}


/* Type - ns=1;i=6141 */

static UA_StatusCode function_lcbc_object_feeder1_292_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6141_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6141_variant_DataContents = UA_STRING_ALLOC("CN");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6141_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6141),
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6141_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_292_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6141)
);
}


/* InUse - ns=1;i=6137 */

static UA_StatusCode function_lcbc_object_feeder1_293_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6137_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6137_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6137_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6137),
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6137_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_293_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6137)
);
}


/* FeederIdx - ns=1;i=6136 */

static UA_StatusCode function_lcbc_object_feeder1_294_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6136_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6136_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6136_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6136),
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6136_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_294_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6136)
);
}


/* FeederCtx - ns=1;i=6135 */

static UA_StatusCode function_lcbc_object_feeder1_295_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6135_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6135_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6135_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6135),
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_295_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6135)
);
}


/* AlarmLow - ns=1;i=6134 */

static UA_StatusCode function_lcbc_object_feeder1_296_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6134_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6134_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6134_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6134),
UA_NODEID_NUMERIC(ns[1], 109),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_296_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6134)
);
}


/* Power - ns=1;i=108 */

static UA_StatusCode function_lcbc_object_feeder1_297_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_108_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_108_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_108_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Power");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Power"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_108_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_297_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 108)
);
}


/* Pos - ns=1;i=6150 */

static UA_StatusCode function_lcbc_object_feeder1_298_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6150_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6150_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6150_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6150),
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6150_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_298_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6150)
);
}


/* FeederCtx - ns=1;i=6145 */

static UA_StatusCode function_lcbc_object_feeder1_299_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6145_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6145_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6145_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6145),
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_299_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6145)
);
}


/* AlarmLow - ns=1;i=6144 */

static UA_StatusCode function_lcbc_object_feeder1_300_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6144_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6144_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6144_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6144),
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_300_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6144)
);
}


/* InUse - ns=1;i=6147 */

static UA_StatusCode function_lcbc_object_feeder1_301_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6147_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6147_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6147_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6147),
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6147_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_301_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6147)
);
}


/* FeederIdx - ns=1;i=6146 */

static UA_StatusCode function_lcbc_object_feeder1_302_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6146_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6146_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6146_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6146),
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6146_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_302_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6146)
);
}


/* AlarmHigh - ns=1;i=6143 */

static UA_StatusCode function_lcbc_object_feeder1_303_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6143_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6143_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6143_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6143),
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6143_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_303_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6143)
);
}


/* Type - ns=1;i=6151 */

static UA_StatusCode function_lcbc_object_feeder1_304_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6151_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6151_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6151_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6151),
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6151_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_304_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6151)
);
}


/* OnTxt - ns=1;i=6149 */

static UA_StatusCode function_lcbc_object_feeder1_305_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6149_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6149_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6149_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6149),
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_305_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6149)
);
}


/* OffTxt - ns=1;i=6148 */

static UA_StatusCode function_lcbc_object_feeder1_306_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6148_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6148_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6148_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6148),
UA_NODEID_NUMERIC(ns[1], 108),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_306_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6148)
);
}


/* Current 3 f - ns=1;i=107 */

static UA_StatusCode function_lcbc_object_feeder1_307_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_107_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_107_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_107_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Current 3 f");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 3 f"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_107_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_307_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 107)
);
}


/* AlarmLow - ns=1;i=6047 */

static UA_StatusCode function_lcbc_object_feeder1_308_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6047_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6047_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6047_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6047),
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_308_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6047)
);
}


/* AlarmHigh - ns=1;i=6046 */

static UA_StatusCode function_lcbc_object_feeder1_309_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6046_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6046_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6046_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6046),
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6046_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_309_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6046)
);
}


/* FeederIdx - ns=1;i=6049 */

static UA_StatusCode function_lcbc_object_feeder1_310_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6049_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6049_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6049_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6049),
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6049_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_310_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6049)
);
}


/* FeederCtx - ns=1;i=6048 */

static UA_StatusCode function_lcbc_object_feeder1_311_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6048_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6048_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6048_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6048),
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_311_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6048)
);
}


/* Pos - ns=1;i=6054 */

static UA_StatusCode function_lcbc_object_feeder1_312_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6054_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6054_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6054_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6054),
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6054_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_312_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6054)
);
}


/* Type - ns=1;i=6055 */

static UA_StatusCode function_lcbc_object_feeder1_313_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6055_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6055_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6055_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6055),
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6055_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_313_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6055)
);
}


/* OffTxt - ns=1;i=6052 */

static UA_StatusCode function_lcbc_object_feeder1_314_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6052_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6052_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6052_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6052),
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_314_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6052)
);
}


/* OnTxt - ns=1;i=6053 */

static UA_StatusCode function_lcbc_object_feeder1_315_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6053_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6053_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6053_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6053),
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_315_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6053)
);
}


/* InUse - ns=1;i=6050 */

static UA_StatusCode function_lcbc_object_feeder1_316_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6050_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6050_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6050_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6050),
UA_NODEID_NUMERIC(ns[1], 107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6050_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_316_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6050)
);
}


/* Current 2 f. - ns=1;i=106 */

static UA_StatusCode function_lcbc_object_feeder1_317_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_106_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_106_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_106_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Current 2 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 2 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_106_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_317_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 106)
);
}


/* InUse - ns=1;i=6039 */

static UA_StatusCode function_lcbc_object_feeder1_318_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6039_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6039_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6039_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6039),
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6039_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_318_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6039)
);
}


/* FeederIdx - ns=1;i=6038 */

static UA_StatusCode function_lcbc_object_feeder1_319_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6038_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6038_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6038_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6038),
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6038_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_319_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6038)
);
}


/* FeederCtx - ns=1;i=6037 */

static UA_StatusCode function_lcbc_object_feeder1_320_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6037_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6037_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6037_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6037),
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_320_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6037)
);
}


/* AlarmLow - ns=1;i=6036 */

static UA_StatusCode function_lcbc_object_feeder1_321_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6036_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6036_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6036_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6036),
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_321_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6036)
);
}


/* AlarmHigh - ns=1;i=6035 */

static UA_StatusCode function_lcbc_object_feeder1_322_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6035_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6035_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6035_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6035),
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6035_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_322_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6035)
);
}


/* OnTxt - ns=1;i=6042 */

static UA_StatusCode function_lcbc_object_feeder1_323_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6042_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6042_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6042_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6042),
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_323_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6042)
);
}


/* Pos - ns=1;i=6043 */

static UA_StatusCode function_lcbc_object_feeder1_324_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6043_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6043_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6043_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6043),
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6043_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_324_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6043)
);
}


/* OffTxt - ns=1;i=6040 */

static UA_StatusCode function_lcbc_object_feeder1_325_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6040_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6040_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6040_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6040),
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_325_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6040)
);
}


/* Type - ns=1;i=6044 */

static UA_StatusCode function_lcbc_object_feeder1_326_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6044_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6044_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6044_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6044),
UA_NODEID_NUMERIC(ns[1], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6044_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_326_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6044)
);
}


/* Current 1 f. - ns=1;i=105 */

static UA_StatusCode function_lcbc_object_feeder1_327_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_105_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_105_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_105_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Current 1 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 1 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_105_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_327_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 105)
);
}


/* OffTxt - ns=1;i=6029 */

static UA_StatusCode function_lcbc_object_feeder1_328_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6029_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6029_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6029_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6029),
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_328_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6029)
);
}


/* InUse - ns=1;i=6028 */

static UA_StatusCode function_lcbc_object_feeder1_329_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6028_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6028_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6028_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6028),
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6028_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_329_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6028)
);
}


/* AlarmLow - ns=1;i=6025 */

static UA_StatusCode function_lcbc_object_feeder1_330_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6025_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6025_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6025_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6025),
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_330_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6025)
);
}


/* AlarmHigh - ns=1;i=6024 */

static UA_StatusCode function_lcbc_object_feeder1_331_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6024_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6024_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6024_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6024),
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6024_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_331_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6024)
);
}


/* FeederIdx - ns=1;i=6027 */

static UA_StatusCode function_lcbc_object_feeder1_332_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6027_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6027_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6027_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6027),
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6027_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_332_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6027)
);
}


/* FeederCtx - ns=1;i=6026 */

static UA_StatusCode function_lcbc_object_feeder1_333_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6026_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6026_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6026_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6026),
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_333_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6026)
);
}


/* Pos - ns=1;i=6032 */

static UA_StatusCode function_lcbc_object_feeder1_334_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6032_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6032_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6032_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6032),
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6032_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_334_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6032)
);
}


/* Type - ns=1;i=6033 */

static UA_StatusCode function_lcbc_object_feeder1_335_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6033_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6033_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6033_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6033),
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6033_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_335_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6033)
);
}


/* OnTxt - ns=1;i=6030 */

static UA_StatusCode function_lcbc_object_feeder1_336_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6030_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6030_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6030_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6030),
UA_NODEID_NUMERIC(ns[1], 105),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_336_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6030)
);
}


/* Dimming Control - ns=1;i=104 */

static UA_StatusCode function_lcbc_object_feeder1_337_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Dimming Control");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 104),
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Dimming Control"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_337_finish(UA_Server *server, UA_UInt16* ns) {

    UA_Argument inputArgument;
    UA_Argument_init(&inputArgument);
    inputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    inputArgument.name = UA_STRING("CmdControlByte");
    inputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    inputArgument.valueRank = -1; /* scalar */

    UA_Argument outputArgument;
    UA_Argument_init(&outputArgument);
    outputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    outputArgument.name = UA_STRING("CmdResultByte");
    outputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    outputArgument.valueRank = -1; /* scalar */

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[1], 104),
        &F1_DI_FxD_ID);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 104)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* OutputArguments - ns=1;i=6057 */

static UA_StatusCode function_lcbc_object_feeder1_338_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6057),
UA_NODEID_NUMERIC(ns[1], 104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_338_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6057)
);
}


/* InputArguments - ns=1;i=6056 */

static UA_StatusCode function_lcbc_object_feeder1_339_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6056),
UA_NODEID_NUMERIC(ns[1], 104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_339_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6056)
);
}


/* Dimming status - ns=1;i=103 */

static UA_StatusCode function_lcbc_object_feeder1_340_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_103_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_103_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_103_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Dimming status");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Dimming status"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_103_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_340_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 103)
);
}


/* Pos - ns=1;i=6130 */

static UA_StatusCode function_lcbc_object_feeder1_341_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6130_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6130_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6130_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6130),
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6130_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_341_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6130)
);
}


/* InUse - ns=1;i=6127 */

static UA_StatusCode function_lcbc_object_feeder1_342_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6127_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6127_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6127_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6127),
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6127_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_342_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6127)
);
}


/* FeederIdx - ns=1;i=6126 */

static UA_StatusCode function_lcbc_object_feeder1_343_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6126_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6126_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6126_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6126),
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6126_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_343_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6126)
);
}


/* AlarmHigh - ns=1;i=6059 */

static UA_StatusCode function_lcbc_object_feeder1_344_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6059_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6059_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6059_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6059),
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_344_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6059)
);
}


/* AlarmLow - ns=1;i=6124 */

static UA_StatusCode function_lcbc_object_feeder1_345_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6124_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6124_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6124_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6124),
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_345_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6124)
);
}


/* FeederCtx - ns=1;i=6125 */

static UA_StatusCode function_lcbc_object_feeder1_346_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6125_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6125_variant_DataContents = UA_STRING_ALLOC("DI_FxD");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6125_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6125),
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6125_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_346_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6125)
);
}


/* OffTxt - ns=1;i=6128 */

static UA_StatusCode function_lcbc_object_feeder1_347_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6128_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6128_variant_DataContents = UA_STRING_ALLOC("Hamar");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6128_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6128),
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6128_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_347_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6128)
);
}


/* OnTxt - ns=1;i=6129 */

static UA_StatusCode function_lcbc_object_feeder1_348_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6129_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6129_variant_DataContents = UA_STRING_ALLOC("Norm");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6129_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6129),
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6129_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_348_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6129)
);
}


/* Type - ns=1;i=6131 */

static UA_StatusCode function_lcbc_object_feeder1_349_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6131_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6131_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6131_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6131),
UA_NODEID_NUMERIC(ns[1], 103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6131_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_349_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6131)
);
}


/* Control - ns=1;i=102 */

static UA_StatusCode function_lcbc_object_feeder1_350_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Control");
attr.description = UA_LOCALIZEDTEXT("", "Returns true on ACK, false on NACK");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 102),
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Control"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_350_finish(UA_Server *server, UA_UInt16* ns) {
    UA_Argument inputArgument;
    UA_Argument_init(&inputArgument);
    inputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    inputArgument.name = UA_STRING("CmdControlByte");
    inputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    inputArgument.valueRank = -1; /* scalar */

    UA_Argument outputArgument;
    UA_Argument_init(&outputArgument);
    outputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    outputArgument.name = UA_STRING("CmdResultByte");
    outputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    outputArgument.valueRank = -1; /* scalar */

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[1], 102),
        &F1_DI_FxS_ID);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 102)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* InputArguments - ns=1;i=6020 */

static UA_StatusCode function_lcbc_object_feeder1_351_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6020),
UA_NODEID_NUMERIC(ns[1], 102),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_351_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6020)
);
}


/* OutputArguments - ns=1;i=6022 */

static UA_StatusCode function_lcbc_object_feeder1_352_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6022),
UA_NODEID_NUMERIC(ns[1], 102),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_352_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6022)
);
}


/* Status - ns=1;i=101 */

static UA_StatusCode function_lcbc_object_feeder1_353_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_101_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_101_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_101_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[1], 100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Status"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_101_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_353_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 101)
);
}


/* Pos - ns=1;i=6160 */

static UA_StatusCode function_lcbc_object_feeder1_354_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6160_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6160_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6160_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6160),
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6160_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_354_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6160)
);
}


/* Type - ns=1;i=6161 */

static UA_StatusCode function_lcbc_object_feeder1_355_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6161_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6161_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6161_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6161),
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6161_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_355_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6161)
);
}


/* FeederCtx - ns=1;i=6155 */

static UA_StatusCode function_lcbc_object_feeder1_356_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6155_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6155_variant_DataContents = UA_STRING_ALLOC("DI_FxS");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6155_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6155),
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6155_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_356_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6155)
);
}


/* AlarmLow - ns=1;i=6154 */

static UA_StatusCode function_lcbc_object_feeder1_357_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6154_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6154_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6154_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6154),
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_357_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6154)
);
}


/* InUse - ns=1;i=6157 */

static UA_StatusCode function_lcbc_object_feeder1_358_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6157_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6157_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6157_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6157),
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6157_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_358_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6157)
);
}


/* FeederIdx - ns=1;i=6156 */

static UA_StatusCode function_lcbc_object_feeder1_359_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6156_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6156_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6156_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6156),
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6156_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_359_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6156)
);
}


/* AlarmHigh - ns=1;i=6153 */

static UA_StatusCode function_lcbc_object_feeder1_360_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6153_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6153_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6153_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6153),
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_360_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6153)
);
}


/* OnTxt - ns=1;i=6159 */

static UA_StatusCode function_lcbc_object_feeder1_361_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6159_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6159_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6159_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6159),
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6159_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_361_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6159)
);
}


/* OffTxt - ns=1;i=6158 */

static UA_StatusCode function_lcbc_object_feeder1_362_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6158_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6158_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6158_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6158),
UA_NODEID_NUMERIC(ns[1], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6158_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_362_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6158)
);
}


/* Feeder 2 - ns=1;i=200 */

static UA_StatusCode function_lcbc_object_feeder1_363_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Feeder 2");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[1], 5002),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Feeder 2"),
UA_NODEID_NUMERIC(ns[1], 1002),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_363_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 200)
);
}


/* Current 3 f - ns=1;i=207 */

static UA_StatusCode function_lcbc_object_feeder1_364_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_207_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_207_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_207_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Current 3 f");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 3 f"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_207_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_364_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 207)
);
}


/* AlarmHigh - ns=1;i=6197 */

static UA_StatusCode function_lcbc_object_feeder1_365_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6197_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6197_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6197_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6197),
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6197_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_365_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6197)
);
}


/* Pos - ns=1;i=6204 */

static UA_StatusCode function_lcbc_object_feeder1_366_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6204_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6204_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6204_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6204),
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6204_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_366_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6204)
);
}


/* Type - ns=1;i=6205 */

static UA_StatusCode function_lcbc_object_feeder1_367_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6205_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6205_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6205_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6205),
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6205_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_367_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6205)
);
}


/* OffTxt - ns=1;i=6202 */

static UA_StatusCode function_lcbc_object_feeder1_368_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6202_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6202_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6202_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6202),
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_368_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6202)
);
}


/* OnTxt - ns=1;i=6203 */

static UA_StatusCode function_lcbc_object_feeder1_369_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6203_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6203_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6203_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6203),
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_369_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6203)
);
}


/* FeederIdx - ns=1;i=6200 */

static UA_StatusCode function_lcbc_object_feeder1_370_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6200_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6200_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6200_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6200),
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6200_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_370_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6200)
);
}


/* InUse - ns=1;i=6201 */

static UA_StatusCode function_lcbc_object_feeder1_371_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6201_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6201_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6201_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6201),
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6201_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_371_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6201)
);
}


/* AlarmLow - ns=1;i=6198 */

static UA_StatusCode function_lcbc_object_feeder1_372_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6198_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6198_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6198_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6198),
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_372_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6198)
);
}


/* FeederCtx - ns=1;i=6199 */

static UA_StatusCode function_lcbc_object_feeder1_373_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6199_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6199_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6199_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6199),
UA_NODEID_NUMERIC(ns[1], 207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_373_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6199)
);
}


/* Current 2 f. - ns=1;i=206 */

static UA_StatusCode function_lcbc_object_feeder1_374_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_206_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_206_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_206_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Current 2 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 2 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_206_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_374_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 206)
);
}


/* AlarmLow - ns=1;i=6188 */

static UA_StatusCode function_lcbc_object_feeder1_375_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6188_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6188_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6188_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6188),
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_375_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6188)
);
}


/* FeederCtx - ns=1;i=6189 */

static UA_StatusCode function_lcbc_object_feeder1_376_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6189_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6189_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6189_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6189),
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_376_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6189)
);
}


/* Type - ns=1;i=6195 */

static UA_StatusCode function_lcbc_object_feeder1_377_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6195_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6195_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6195_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6195),
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6195_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_377_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6195)
);
}


/* Pos - ns=1;i=6194 */

static UA_StatusCode function_lcbc_object_feeder1_378_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6194_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6194_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6194_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6194),
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6194_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_378_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6194)
);
}


/* AlarmHigh - ns=1;i=6187 */

static UA_StatusCode function_lcbc_object_feeder1_379_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6187_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6187_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6187_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6187),
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6187_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_379_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6187)
);
}


/* InUse - ns=1;i=6191 */

static UA_StatusCode function_lcbc_object_feeder1_380_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6191_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6191_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6191_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6191),
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6191_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_380_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6191)
);
}


/* FeederIdx - ns=1;i=6190 */

static UA_StatusCode function_lcbc_object_feeder1_381_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6190_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6190_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6190_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6190),
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6190_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_381_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6190)
);
}


/* OnTxt - ns=1;i=6193 */

static UA_StatusCode function_lcbc_object_feeder1_382_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6193_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6193_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6193_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6193),
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_382_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6193)
);
}


/* OffTxt - ns=1;i=6192 */

static UA_StatusCode function_lcbc_object_feeder1_383_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6192_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6192_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6192_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6192),
UA_NODEID_NUMERIC(ns[1], 206),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_383_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6192)
);
}


/* Current 1 f. - ns=1;i=205 */

static UA_StatusCode function_lcbc_object_feeder1_384_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_205_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_205_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_205_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Current 1 f.");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Current 1 f."),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_205_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_384_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 205)
);
}


/* FeederCtx - ns=1;i=6142 */

static UA_StatusCode function_lcbc_object_feeder1_385_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6142_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6142_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6142_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6142),
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_385_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6142)
);
}


/* AlarmLow - ns=1;i=6132 */

static UA_StatusCode function_lcbc_object_feeder1_386_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6132_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6132_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6132_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6132),
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_386_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6132)
);
}


/* InUse - ns=1;i=6172 */

static UA_StatusCode function_lcbc_object_feeder1_387_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6172_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6172_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6172_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6172),
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6172_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_387_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6172)
);
}


/* FeederIdx - ns=1;i=6152 */

static UA_StatusCode function_lcbc_object_feeder1_388_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6152_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6152_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6152_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6152),
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6152_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_388_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6152)
);
}


/* AlarmHigh - ns=1;i=6058 */

static UA_StatusCode function_lcbc_object_feeder1_389_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6058_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6058_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6058_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6058),
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6058_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_389_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6058)
);
}


/* Type - ns=1;i=6185 */

static UA_StatusCode function_lcbc_object_feeder1_390_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6185_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6185_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6185_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6185),
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6185_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_390_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6185)
);
}


/* Pos - ns=1;i=6184 */

static UA_StatusCode function_lcbc_object_feeder1_391_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6184_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6184_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6184_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6184),
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6184_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_391_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6184)
);
}


/* OnTxt - ns=1;i=6183 */

static UA_StatusCode function_lcbc_object_feeder1_392_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6183_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6183_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6183_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6183),
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_392_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6183)
);
}


/* OffTxt - ns=1;i=6182 */

static UA_StatusCode function_lcbc_object_feeder1_393_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6182_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6182_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6182_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6182),
UA_NODEID_NUMERIC(ns[1], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_393_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6182)
);
}


/* Dimming Control - ns=1;i=204 */

static UA_StatusCode function_lcbc_object_feeder1_394_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Dimming Control");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 204),
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Dimming Control"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_394_finish(UA_Server *server, UA_UInt16* ns) {
    UA_Argument inputArgument;
    UA_Argument_init(&inputArgument);
    inputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    inputArgument.name = UA_STRING("CmdControlByte");
    inputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    inputArgument.valueRank = -1; /* scalar */

    UA_Argument outputArgument;
    UA_Argument_init(&outputArgument);
    outputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    outputArgument.name = UA_STRING("CmdResultByte");
    outputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    outputArgument.valueRank = -1; /* scalar */

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[1], 204),
        &F2_DI_FxD_ID);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 204)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* InputArguments - ns=1;i=6045 */

static UA_StatusCode function_lcbc_object_feeder1_395_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6045),
UA_NODEID_NUMERIC(ns[1], 204),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_395_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6045)
);
}


/* OutputArguments - ns=1;i=6186 */

static UA_StatusCode function_lcbc_object_feeder1_396_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6186),
UA_NODEID_NUMERIC(ns[1], 204),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_396_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6186)
);
}


/* Dimming status - ns=1;i=203 */

static UA_StatusCode function_lcbc_object_feeder1_397_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_203_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_203_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_203_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Dimming status");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Dimming status"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_203_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_397_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 203)
);
}


/* FeederCtx - ns=1;i=6211 */

static UA_StatusCode function_lcbc_object_feeder1_398_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6211_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6211_variant_DataContents = UA_STRING_ALLOC("DI_FxD");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6211_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6211),
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6211_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_398_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6211)
);
}


/* AlarmLow - ns=1;i=6210 */

static UA_StatusCode function_lcbc_object_feeder1_399_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6210_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6210_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6210_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6210),
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_399_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6210)
);
}


/* InUse - ns=1;i=6213 */

static UA_StatusCode function_lcbc_object_feeder1_400_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6213_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6213_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6213_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6213),
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6213_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_400_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6213)
);
}


/* FeederIdx - ns=1;i=6212 */

static UA_StatusCode function_lcbc_object_feeder1_401_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6212_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6212_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6212_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6212),
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6212_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_401_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6212)
);
}


/* OnTxt - ns=1;i=6215 */

static UA_StatusCode function_lcbc_object_feeder1_402_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6215_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6215_variant_DataContents = UA_STRING_ALLOC("Norm");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6215_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6215),
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6215_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_402_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6215)
);
}


/* OffTxt - ns=1;i=6214 */

static UA_StatusCode function_lcbc_object_feeder1_403_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6214_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6214_variant_DataContents = UA_STRING_ALLOC("Hamar");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6214_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6214),
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6214_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_403_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6214)
);
}


/* Type - ns=1;i=6217 */

static UA_StatusCode function_lcbc_object_feeder1_404_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6217_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6217_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6217_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6217),
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6217_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_404_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6217)
);
}


/* Pos - ns=1;i=6216 */

static UA_StatusCode function_lcbc_object_feeder1_405_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6216_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6216_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6216_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6216),
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6216_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_405_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6216)
);
}


/* AlarmHigh - ns=1;i=6209 */

static UA_StatusCode function_lcbc_object_feeder1_406_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6209_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6209_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6209_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6209),
UA_NODEID_NUMERIC(ns[1], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_406_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6209)
);
}


/* Control - ns=1;i=202 */

static UA_StatusCode function_lcbc_object_feeder1_407_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Control");
attr.description = UA_LOCALIZEDTEXT("", "Returns true on ACK, false on NACK");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 202),
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Control"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_407_finish(UA_Server *server, UA_UInt16* ns) {
    UA_Argument inputArgument;
    UA_Argument_init(&inputArgument);
    inputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    inputArgument.name = UA_STRING("CmdControlByte");
    inputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    inputArgument.valueRank = -1; /* scalar */

    UA_Argument outputArgument;
    UA_Argument_init(&outputArgument);
    outputArgument.description = UA_LOCALIZEDTEXT("en-US", "A Byte");
    outputArgument.name = UA_STRING("CmdResultByte");
    outputArgument.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    outputArgument.valueRank = -1; /* scalar */

    UA_Server_setNodeContext(server, 
        UA_NODEID_NUMERIC(ns[1], 202),
        &F2_DI_FxS_ID);

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 202)
, controlMethodCallbackDigital, 1, &inputArgument, 1, &outputArgument);
}


/* InputArguments - ns=1;i=6023 */

static UA_StatusCode function_lcbc_object_feeder1_408_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6023),
UA_NODEID_NUMERIC(ns[1], 202),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_408_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6023)
);
}


/* OutputArguments - ns=1;i=6034 */

static UA_StatusCode function_lcbc_object_feeder1_409_begin(UA_Server *server, UA_UInt16* ns) {

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
UA_NODEID_NUMERIC(ns[1], 6034),
UA_NODEID_NUMERIC(ns[1], 202),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_409_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6034)
);
}


/* Status - ns=1;i=201 */

static UA_StatusCode function_lcbc_object_feeder1_410_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_201_variant_DataContents =  UA_Byte_new();
*variablenode_ns_1_i_201_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_201_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Status"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_201_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_410_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 201)
);
}


/* InUse - ns=1;i=6253 */

static UA_StatusCode function_lcbc_object_feeder1_411_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6253_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6253_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6253_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6253),
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6253_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_411_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6253)
);
}


/* FeederIdx - ns=1;i=6252 */

static UA_StatusCode function_lcbc_object_feeder1_412_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6252_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6252_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6252_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6252),
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6252_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_412_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6252)
);
}


/* AlarmHigh - ns=1;i=6249 */

static UA_StatusCode function_lcbc_object_feeder1_413_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6249_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6249_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6249_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6249),
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_413_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6249)
);
}


/* AlarmLow - ns=1;i=6250 */

static UA_StatusCode function_lcbc_object_feeder1_414_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6250_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6250_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6250_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6250),
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_414_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6250)
);
}


/* Type - ns=1;i=6257 */

static UA_StatusCode function_lcbc_object_feeder1_415_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6257_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6257_variant_DataContents = UA_STRING_ALLOC("DI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6257_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6257),
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6257_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_415_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6257)
);
}


/* Pos - ns=1;i=6256 */

static UA_StatusCode function_lcbc_object_feeder1_416_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6256_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6256_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6256_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6256),
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6256_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_416_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6256)
);
}


/* OnTxt - ns=1;i=6255 */

static UA_StatusCode function_lcbc_object_feeder1_417_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6255_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6255_variant_DataContents = UA_STRING_ALLOC("Sees");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6255_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6255),
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6255_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_417_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6255)
);
}


/* OffTxt - ns=1;i=6254 */

static UA_StatusCode function_lcbc_object_feeder1_418_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6254_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6254_variant_DataContents = UA_STRING_ALLOC("Valjas");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6254_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6254),
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6254_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_418_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6254)
);
}


/* FeederCtx - ns=1;i=6251 */

static UA_StatusCode function_lcbc_object_feeder1_419_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6251_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6251_variant_DataContents = UA_STRING_ALLOC("DI_FxS");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6251_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6251),
UA_NODEID_NUMERIC(ns[1], 201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6251_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_419_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6251)
);
}


/* Energy - ns=1;i=209 */

static UA_StatusCode function_lcbc_object_feeder1_420_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_209_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_1_i_209_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_209_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Energy");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Energy"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_209_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_420_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 209)
);
}


/* AlarmLow - ns=1;i=6220 */

static UA_StatusCode function_lcbc_object_feeder1_421_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6220_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6220_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6220_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6220),
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_421_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6220)
);
}


/* Pos - ns=1;i=6226 */

static UA_StatusCode function_lcbc_object_feeder1_422_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6226_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6226_variant_DataContents = (UA_Int16) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6226_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6226),
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6226_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_422_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6226)
);
}


/* Type - ns=1;i=6227 */

static UA_StatusCode function_lcbc_object_feeder1_423_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6227_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6227_variant_DataContents = UA_STRING_ALLOC("CN");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6227_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6227),
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6227_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_423_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6227)
);
}


/* OffTxt - ns=1;i=6224 */

static UA_StatusCode function_lcbc_object_feeder1_424_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6224_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6224_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6224_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6224),
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_424_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6224)
);
}


/* OnTxt - ns=1;i=6225 */

static UA_StatusCode function_lcbc_object_feeder1_425_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6225_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6225_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6225_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6225),
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_425_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6225)
);
}


/* FeederIdx - ns=1;i=6222 */

static UA_StatusCode function_lcbc_object_feeder1_426_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6222_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6222_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6222_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6222),
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6222_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_426_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6222)
);
}


/* InUse - ns=1;i=6223 */

static UA_StatusCode function_lcbc_object_feeder1_427_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6223_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6223_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6223_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6223),
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6223_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_427_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6223)
);
}


/* AlarmHigh - ns=1;i=6219 */

static UA_StatusCode function_lcbc_object_feeder1_428_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6219_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6219_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6219_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6219),
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_428_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6219)
);
}


/* FeederCtx - ns=1;i=6221 */

static UA_StatusCode function_lcbc_object_feeder1_429_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6221_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6221_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6221_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6221),
UA_NODEID_NUMERIC(ns[1], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_429_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6221)
);
}


/* Power - ns=1;i=208 */

static UA_StatusCode function_lcbc_object_feeder1_430_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_208_variant_DataContents =  UA_Double_new();
*variablenode_ns_1_i_208_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_208_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Power");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[1], 200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Power"),
UA_NODEID_NUMERIC(ns[1], 10001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_208_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_430_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 208)
);
}


/* InUse - ns=1;i=6243 */

static UA_StatusCode function_lcbc_object_feeder1_431_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_6243_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_1_i_6243_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6243_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "InUse");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6243),
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "InUse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6243_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_431_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6243)
);
}


/* FeederIdx - ns=1;i=6242 */

static UA_StatusCode function_lcbc_object_feeder1_432_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 *variablenode_ns_1_i_6242_variant_DataContents =  UA_UInt16_new();
*variablenode_ns_1_i_6242_variant_DataContents = (UA_UInt16) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6242_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederIdx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6242),
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederIdx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt16_delete(variablenode_ns_1_i_6242_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_432_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6242)
);
}


/* FeederCtx - ns=1;i=6241 */

static UA_StatusCode function_lcbc_object_feeder1_433_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6241_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6241_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6241_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeederCtx");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6241),
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "FeederCtx"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_433_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6241)
);
}


/* AlarmLow - ns=1;i=6240 */

static UA_StatusCode function_lcbc_object_feeder1_434_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_STACKARRAY(UA_Int32, variablenode_ns_1_i_6240_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6240_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6240_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmLow");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6240),
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmLow"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_434_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6240)
);
}


/* Type - ns=1;i=6247 */

static UA_StatusCode function_lcbc_object_feeder1_435_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6247_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6247_variant_DataContents = UA_STRING_ALLOC("AI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6247_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6247),
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Type"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6247_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_435_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6247)
);
}


/* Pos - ns=1;i=6246 */

static UA_StatusCode function_lcbc_object_feeder1_436_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
UA_Int16 *variablenode_ns_1_i_6246_variant_DataContents =  UA_Int16_new();
*variablenode_ns_1_i_6246_variant_DataContents = (UA_Int16) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6246_variant_DataContents, &UA_TYPES[UA_TYPES_INT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "Pos");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6246),
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Pos"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int16_delete(variablenode_ns_1_i_6246_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_436_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6246)
);
}


/* OnTxt - ns=1;i=6245 */

static UA_StatusCode function_lcbc_object_feeder1_437_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6245_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6245_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6245_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OnTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6245),
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OnTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_437_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6245)
);
}


/* OffTxt - ns=1;i=6244 */

static UA_StatusCode function_lcbc_object_feeder1_438_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_STACKARRAY(UA_String, variablenode_ns_1_i_6244_variant_DataContents, 1);
UA_init(variablenode_ns_1_i_6244_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6244_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OffTxt");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6244),
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "OffTxt"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_438_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6244)
);
}


/* AlarmHigh - ns=1;i=6239 */

static UA_StatusCode function_lcbc_object_feeder1_439_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_6239_variant_DataContents =  UA_Int32_new();
*variablenode_ns_1_i_6239_variant_DataContents = (UA_Int32) 30;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6239_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "AlarmHigh");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6239),
UA_NODEID_NUMERIC(ns[1], 208),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AlarmHigh"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_6239_variant_DataContents);
return retVal;
}

static UA_StatusCode function_lcbc_object_feeder1_439_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6239)
);
}


UA_StatusCode lcbc_object_feeder1(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://martem.eu/LCBC/");
retVal |= function_lcbc_object_feeder1_0_begin(server, ns);
retVal |= function_lcbc_object_feeder1_1_begin(server, ns);
retVal |= function_lcbc_object_feeder1_2_begin(server, ns);
retVal |= function_lcbc_object_feeder1_3_begin(server, ns);
retVal |= function_lcbc_object_feeder1_4_begin(server, ns);
retVal |= function_lcbc_object_feeder1_5_begin(server, ns);
retVal |= function_lcbc_object_feeder1_6_begin(server, ns);
retVal |= function_lcbc_object_feeder1_7_begin(server, ns);
retVal |= function_lcbc_object_feeder1_8_begin(server, ns);
retVal |= function_lcbc_object_feeder1_9_begin(server, ns);
retVal |= function_lcbc_object_feeder1_10_begin(server, ns);
retVal |= function_lcbc_object_feeder1_11_begin(server, ns);
retVal |= function_lcbc_object_feeder1_12_begin(server, ns);
retVal |= function_lcbc_object_feeder1_13_begin(server, ns);
retVal |= function_lcbc_object_feeder1_14_begin(server, ns);
retVal |= function_lcbc_object_feeder1_15_begin(server, ns);
retVal |= function_lcbc_object_feeder1_16_begin(server, ns);
retVal |= function_lcbc_object_feeder1_17_begin(server, ns);
retVal |= function_lcbc_object_feeder1_18_begin(server, ns);
retVal |= function_lcbc_object_feeder1_19_begin(server, ns);
retVal |= function_lcbc_object_feeder1_20_begin(server, ns);
retVal |= function_lcbc_object_feeder1_21_begin(server, ns);
retVal |= function_lcbc_object_feeder1_22_begin(server, ns);
retVal |= function_lcbc_object_feeder1_23_begin(server, ns);
retVal |= function_lcbc_object_feeder1_24_begin(server, ns);
retVal |= function_lcbc_object_feeder1_25_begin(server, ns);
retVal |= function_lcbc_object_feeder1_26_begin(server, ns);
retVal |= function_lcbc_object_feeder1_27_begin(server, ns);
retVal |= function_lcbc_object_feeder1_28_begin(server, ns);
retVal |= function_lcbc_object_feeder1_29_begin(server, ns);
retVal |= function_lcbc_object_feeder1_30_begin(server, ns);
retVal |= function_lcbc_object_feeder1_31_begin(server, ns);
retVal |= function_lcbc_object_feeder1_32_begin(server, ns);
retVal |= function_lcbc_object_feeder1_33_begin(server, ns);
retVal |= function_lcbc_object_feeder1_34_begin(server, ns);
retVal |= function_lcbc_object_feeder1_35_begin(server, ns);
retVal |= function_lcbc_object_feeder1_36_begin(server, ns);
retVal |= function_lcbc_object_feeder1_37_begin(server, ns);
retVal |= function_lcbc_object_feeder1_38_begin(server, ns);
retVal |= function_lcbc_object_feeder1_39_begin(server, ns);
retVal |= function_lcbc_object_feeder1_40_begin(server, ns);
retVal |= function_lcbc_object_feeder1_41_begin(server, ns);
retVal |= function_lcbc_object_feeder1_42_begin(server, ns);
retVal |= function_lcbc_object_feeder1_43_begin(server, ns);
retVal |= function_lcbc_object_feeder1_44_begin(server, ns);
retVal |= function_lcbc_object_feeder1_45_begin(server, ns);
retVal |= function_lcbc_object_feeder1_46_begin(server, ns);
retVal |= function_lcbc_object_feeder1_47_begin(server, ns);
retVal |= function_lcbc_object_feeder1_48_begin(server, ns);
retVal |= function_lcbc_object_feeder1_49_begin(server, ns);
retVal |= function_lcbc_object_feeder1_50_begin(server, ns);
retVal |= function_lcbc_object_feeder1_51_begin(server, ns);
retVal |= function_lcbc_object_feeder1_52_begin(server, ns);
retVal |= function_lcbc_object_feeder1_53_begin(server, ns);
retVal |= function_lcbc_object_feeder1_54_begin(server, ns);
retVal |= function_lcbc_object_feeder1_55_begin(server, ns);
retVal |= function_lcbc_object_feeder1_56_begin(server, ns);
retVal |= function_lcbc_object_feeder1_57_begin(server, ns);
retVal |= function_lcbc_object_feeder1_58_begin(server, ns);
retVal |= function_lcbc_object_feeder1_59_begin(server, ns);
retVal |= function_lcbc_object_feeder1_60_begin(server, ns);
retVal |= function_lcbc_object_feeder1_61_begin(server, ns);
retVal |= function_lcbc_object_feeder1_62_begin(server, ns);
retVal |= function_lcbc_object_feeder1_63_begin(server, ns);
retVal |= function_lcbc_object_feeder1_64_begin(server, ns);
retVal |= function_lcbc_object_feeder1_65_begin(server, ns);
retVal |= function_lcbc_object_feeder1_66_begin(server, ns);
retVal |= function_lcbc_object_feeder1_67_begin(server, ns);
retVal |= function_lcbc_object_feeder1_68_begin(server, ns);
retVal |= function_lcbc_object_feeder1_69_begin(server, ns);
retVal |= function_lcbc_object_feeder1_70_begin(server, ns);
retVal |= function_lcbc_object_feeder1_71_begin(server, ns);
retVal |= function_lcbc_object_feeder1_72_begin(server, ns);
retVal |= function_lcbc_object_feeder1_73_begin(server, ns);
retVal |= function_lcbc_object_feeder1_74_begin(server, ns);
retVal |= function_lcbc_object_feeder1_75_begin(server, ns);
retVal |= function_lcbc_object_feeder1_76_begin(server, ns);
retVal |= function_lcbc_object_feeder1_77_begin(server, ns);
retVal |= function_lcbc_object_feeder1_78_begin(server, ns);
retVal |= function_lcbc_object_feeder1_79_begin(server, ns);
retVal |= function_lcbc_object_feeder1_80_begin(server, ns);
retVal |= function_lcbc_object_feeder1_81_begin(server, ns);
retVal |= function_lcbc_object_feeder1_82_begin(server, ns);
retVal |= function_lcbc_object_feeder1_83_begin(server, ns);
retVal |= function_lcbc_object_feeder1_84_begin(server, ns);
retVal |= function_lcbc_object_feeder1_85_begin(server, ns);
retVal |= function_lcbc_object_feeder1_86_begin(server, ns);
retVal |= function_lcbc_object_feeder1_87_begin(server, ns);
retVal |= function_lcbc_object_feeder1_88_begin(server, ns);
retVal |= function_lcbc_object_feeder1_89_begin(server, ns);
retVal |= function_lcbc_object_feeder1_90_begin(server, ns);
retVal |= function_lcbc_object_feeder1_91_begin(server, ns);
retVal |= function_lcbc_object_feeder1_92_begin(server, ns);
retVal |= function_lcbc_object_feeder1_93_begin(server, ns);
retVal |= function_lcbc_object_feeder1_94_begin(server, ns);
retVal |= function_lcbc_object_feeder1_95_begin(server, ns);
retVal |= function_lcbc_object_feeder1_96_begin(server, ns);
retVal |= function_lcbc_object_feeder1_97_begin(server, ns);
retVal |= function_lcbc_object_feeder1_98_begin(server, ns);
retVal |= function_lcbc_object_feeder1_99_begin(server, ns);
retVal |= function_lcbc_object_feeder1_100_begin(server, ns);
retVal |= function_lcbc_object_feeder1_101_begin(server, ns);
retVal |= function_lcbc_object_feeder1_102_begin(server, ns);
retVal |= function_lcbc_object_feeder1_103_begin(server, ns);
retVal |= function_lcbc_object_feeder1_104_begin(server, ns);
retVal |= function_lcbc_object_feeder1_105_begin(server, ns);
retVal |= function_lcbc_object_feeder1_106_begin(server, ns);
retVal |= function_lcbc_object_feeder1_107_begin(server, ns);
retVal |= function_lcbc_object_feeder1_108_begin(server, ns);
retVal |= function_lcbc_object_feeder1_109_begin(server, ns);
retVal |= function_lcbc_object_feeder1_110_begin(server, ns);
retVal |= function_lcbc_object_feeder1_111_begin(server, ns);
retVal |= function_lcbc_object_feeder1_112_begin(server, ns);
retVal |= function_lcbc_object_feeder1_113_begin(server, ns);
retVal |= function_lcbc_object_feeder1_114_begin(server, ns);
retVal |= function_lcbc_object_feeder1_115_begin(server, ns);
retVal |= function_lcbc_object_feeder1_116_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_117_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_118_begin(server, ns);
retVal |= function_lcbc_object_feeder1_119_begin(server, ns);
retVal |= function_lcbc_object_feeder1_120_begin(server, ns);
retVal |= function_lcbc_object_feeder1_121_begin(server, ns);
retVal |= function_lcbc_object_feeder1_122_begin(server, ns);
retVal |= function_lcbc_object_feeder1_123_begin(server, ns);
retVal |= function_lcbc_object_feeder1_124_begin(server, ns);
retVal |= function_lcbc_object_feeder1_125_begin(server, ns);
retVal |= function_lcbc_object_feeder1_126_begin(server, ns);
retVal |= function_lcbc_object_feeder1_127_begin(server, ns);
retVal |= function_lcbc_object_feeder1_128_begin(server, ns);
retVal |= function_lcbc_object_feeder1_129_begin(server, ns);
retVal |= function_lcbc_object_feeder1_130_begin(server, ns);
retVal |= function_lcbc_object_feeder1_131_begin(server, ns);
retVal |= function_lcbc_object_feeder1_132_begin(server, ns);
retVal |= function_lcbc_object_feeder1_133_begin(server, ns);
retVal |= function_lcbc_object_feeder1_134_begin(server, ns);
retVal |= function_lcbc_object_feeder1_135_begin(server, ns);
retVal |= function_lcbc_object_feeder1_136_begin(server, ns);
retVal |= function_lcbc_object_feeder1_137_begin(server, ns);
retVal |= function_lcbc_object_feeder1_138_begin(server, ns);
retVal |= function_lcbc_object_feeder1_139_begin(server, ns);
retVal |= function_lcbc_object_feeder1_140_begin(server, ns);
retVal |= function_lcbc_object_feeder1_141_begin(server, ns);
retVal |= function_lcbc_object_feeder1_142_begin(server, ns);
retVal |= function_lcbc_object_feeder1_143_begin(server, ns);
retVal |= function_lcbc_object_feeder1_144_begin(server, ns);
retVal |= function_lcbc_object_feeder1_145_begin(server, ns);
retVal |= function_lcbc_object_feeder1_146_begin(server, ns);
retVal |= function_lcbc_object_feeder1_147_begin(server, ns);
retVal |= function_lcbc_object_feeder1_148_begin(server, ns);
retVal |= function_lcbc_object_feeder1_149_begin(server, ns);
retVal |= function_lcbc_object_feeder1_150_begin(server, ns);
retVal |= function_lcbc_object_feeder1_151_begin(server, ns);
retVal |= function_lcbc_object_feeder1_152_begin(server, ns);
retVal |= function_lcbc_object_feeder1_153_begin(server, ns);
retVal |= function_lcbc_object_feeder1_154_begin(server, ns);
retVal |= function_lcbc_object_feeder1_155_begin(server, ns);
retVal |= function_lcbc_object_feeder1_156_begin(server, ns);
retVal |= function_lcbc_object_feeder1_157_begin(server, ns);
retVal |= function_lcbc_object_feeder1_158_begin(server, ns);
retVal |= function_lcbc_object_feeder1_159_begin(server, ns);
retVal |= function_lcbc_object_feeder1_160_begin(server, ns);
retVal |= function_lcbc_object_feeder1_161_begin(server, ns);
retVal |= function_lcbc_object_feeder1_162_begin(server, ns);
retVal |= function_lcbc_object_feeder1_163_begin(server, ns);
retVal |= function_lcbc_object_feeder1_164_begin(server, ns);
retVal |= function_lcbc_object_feeder1_165_begin(server, ns);
retVal |= function_lcbc_object_feeder1_166_begin(server, ns);
retVal |= function_lcbc_object_feeder1_167_begin(server, ns);
retVal |= function_lcbc_object_feeder1_168_begin(server, ns);
retVal |= function_lcbc_object_feeder1_169_begin(server, ns);
retVal |= function_lcbc_object_feeder1_170_begin(server, ns);
retVal |= function_lcbc_object_feeder1_171_begin(server, ns);
retVal |= function_lcbc_object_feeder1_172_begin(server, ns);
retVal |= function_lcbc_object_feeder1_173_begin(server, ns);
retVal |= function_lcbc_object_feeder1_174_begin(server, ns);
retVal |= function_lcbc_object_feeder1_175_begin(server, ns);
retVal |= function_lcbc_object_feeder1_176_begin(server, ns);
retVal |= function_lcbc_object_feeder1_177_begin(server, ns);
retVal |= function_lcbc_object_feeder1_178_begin(server, ns);
retVal |= function_lcbc_object_feeder1_179_begin(server, ns);
retVal |= function_lcbc_object_feeder1_180_begin(server, ns);
retVal |= function_lcbc_object_feeder1_181_begin(server, ns);
retVal |= function_lcbc_object_feeder1_182_begin(server, ns);
retVal |= function_lcbc_object_feeder1_183_begin(server, ns);
retVal |= function_lcbc_object_feeder1_184_begin(server, ns);
retVal |= function_lcbc_object_feeder1_185_begin(server, ns);
retVal |= function_lcbc_object_feeder1_186_begin(server, ns);
retVal |= function_lcbc_object_feeder1_187_begin(server, ns);
retVal |= function_lcbc_object_feeder1_188_begin(server, ns);
retVal |= function_lcbc_object_feeder1_189_begin(server, ns);
retVal |= function_lcbc_object_feeder1_190_begin(server, ns);
retVal |= function_lcbc_object_feeder1_191_begin(server, ns);
retVal |= function_lcbc_object_feeder1_192_begin(server, ns);
retVal |= function_lcbc_object_feeder1_193_begin(server, ns);
retVal |= function_lcbc_object_feeder1_194_begin(server, ns);
retVal |= function_lcbc_object_feeder1_195_begin(server, ns);
retVal |= function_lcbc_object_feeder1_196_begin(server, ns);
retVal |= function_lcbc_object_feeder1_197_begin(server, ns);
retVal |= function_lcbc_object_feeder1_198_begin(server, ns);
retVal |= function_lcbc_object_feeder1_199_begin(server, ns);
retVal |= function_lcbc_object_feeder1_200_begin(server, ns);
retVal |= function_lcbc_object_feeder1_201_begin(server, ns);
retVal |= function_lcbc_object_feeder1_202_begin(server, ns);
retVal |= function_lcbc_object_feeder1_203_begin(server, ns);
retVal |= function_lcbc_object_feeder1_204_begin(server, ns);
retVal |= function_lcbc_object_feeder1_205_begin(server, ns);
retVal |= function_lcbc_object_feeder1_206_begin(server, ns);
retVal |= function_lcbc_object_feeder1_207_begin(server, ns);
retVal |= function_lcbc_object_feeder1_208_begin(server, ns);
retVal |= function_lcbc_object_feeder1_209_begin(server, ns);
retVal |= function_lcbc_object_feeder1_210_begin(server, ns);
retVal |= function_lcbc_object_feeder1_211_begin(server, ns);
retVal |= function_lcbc_object_feeder1_212_begin(server, ns);
retVal |= function_lcbc_object_feeder1_213_begin(server, ns);
retVal |= function_lcbc_object_feeder1_214_begin(server, ns);
retVal |= function_lcbc_object_feeder1_215_begin(server, ns);
retVal |= function_lcbc_object_feeder1_216_begin(server, ns);
retVal |= function_lcbc_object_feeder1_217_begin(server, ns);
retVal |= function_lcbc_object_feeder1_218_begin(server, ns);
retVal |= function_lcbc_object_feeder1_219_begin(server, ns);
retVal |= function_lcbc_object_feeder1_220_begin(server, ns);
retVal |= function_lcbc_object_feeder1_221_begin(server, ns);
retVal |= function_lcbc_object_feeder1_222_begin(server, ns);
retVal |= function_lcbc_object_feeder1_223_begin(server, ns);
retVal |= function_lcbc_object_feeder1_224_begin(server, ns);
retVal |= function_lcbc_object_feeder1_225_begin(server, ns);
retVal |= function_lcbc_object_feeder1_226_begin(server, ns);
retVal |= function_lcbc_object_feeder1_227_begin(server, ns);
retVal |= function_lcbc_object_feeder1_228_begin(server, ns);
retVal |= function_lcbc_object_feeder1_229_begin(server, ns);
retVal |= function_lcbc_object_feeder1_230_begin(server, ns);
retVal |= function_lcbc_object_feeder1_231_begin(server, ns);
retVal |= function_lcbc_object_feeder1_232_begin(server, ns);
retVal |= function_lcbc_object_feeder1_233_begin(server, ns);
retVal |= function_lcbc_object_feeder1_234_begin(server, ns);
retVal |= function_lcbc_object_feeder1_235_begin(server, ns);
retVal |= function_lcbc_object_feeder1_236_begin(server, ns);
retVal |= function_lcbc_object_feeder1_237_begin(server, ns);
retVal |= function_lcbc_object_feeder1_238_begin(server, ns);
retVal |= function_lcbc_object_feeder1_239_begin(server, ns);
retVal |= function_lcbc_object_feeder1_240_begin(server, ns);
retVal |= function_lcbc_object_feeder1_241_begin(server, ns);
retVal |= function_lcbc_object_feeder1_242_begin(server, ns);
retVal |= function_lcbc_object_feeder1_243_begin(server, ns);
retVal |= function_lcbc_object_feeder1_244_begin(server, ns);
retVal |= function_lcbc_object_feeder1_245_begin(server, ns);
retVal |= function_lcbc_object_feeder1_246_begin(server, ns);
retVal |= function_lcbc_object_feeder1_247_begin(server, ns);
retVal |= function_lcbc_object_feeder1_248_begin(server, ns);
retVal |= function_lcbc_object_feeder1_249_begin(server, ns);
retVal |= function_lcbc_object_feeder1_250_begin(server, ns);
retVal |= function_lcbc_object_feeder1_251_begin(server, ns);
retVal |= function_lcbc_object_feeder1_252_begin(server, ns);
retVal |= function_lcbc_object_feeder1_253_begin(server, ns);
retVal |= function_lcbc_object_feeder1_254_begin(server, ns);
retVal |= function_lcbc_object_feeder1_255_begin(server, ns);
retVal |= function_lcbc_object_feeder1_256_begin(server, ns);
retVal |= function_lcbc_object_feeder1_257_begin(server, ns);
retVal |= function_lcbc_object_feeder1_258_begin(server, ns);
retVal |= function_lcbc_object_feeder1_259_begin(server, ns);
retVal |= function_lcbc_object_feeder1_260_begin(server, ns);
retVal |= function_lcbc_object_feeder1_261_begin(server, ns);
retVal |= function_lcbc_object_feeder1_262_begin(server, ns);
retVal |= function_lcbc_object_feeder1_263_begin(server, ns);
retVal |= function_lcbc_object_feeder1_264_begin(server, ns);
retVal |= function_lcbc_object_feeder1_265_begin(server, ns);
retVal |= function_lcbc_object_feeder1_266_begin(server, ns);
retVal |= function_lcbc_object_feeder1_267_begin(server, ns);
retVal |= function_lcbc_object_feeder1_268_begin(server, ns);
retVal |= function_lcbc_object_feeder1_269_begin(server, ns);
retVal |= function_lcbc_object_feeder1_270_begin(server, ns);
retVal |= function_lcbc_object_feeder1_271_begin(server, ns);
retVal |= function_lcbc_object_feeder1_272_begin(server, ns);
retVal |= function_lcbc_object_feeder1_273_begin(server, ns);
retVal |= function_lcbc_object_feeder1_274_begin(server, ns);
retVal |= function_lcbc_object_feeder1_275_begin(server, ns);
retVal |= function_lcbc_object_feeder1_276_begin(server, ns);
retVal |= function_lcbc_object_feeder1_277_begin(server, ns);
retVal |= function_lcbc_object_feeder1_278_begin(server, ns);
retVal |= function_lcbc_object_feeder1_279_begin(server, ns);
retVal |= function_lcbc_object_feeder1_280_begin(server, ns);
retVal |= function_lcbc_object_feeder1_281_begin(server, ns);
retVal |= function_lcbc_object_feeder1_282_begin(server, ns);
retVal |= function_lcbc_object_feeder1_283_begin(server, ns);
retVal |= function_lcbc_object_feeder1_284_begin(server, ns);
retVal |= function_lcbc_object_feeder1_285_begin(server, ns);
retVal |= function_lcbc_object_feeder1_286_begin(server, ns);
retVal |= function_lcbc_object_feeder1_287_begin(server, ns);
retVal |= function_lcbc_object_feeder1_288_begin(server, ns);
retVal |= function_lcbc_object_feeder1_289_begin(server, ns);
retVal |= function_lcbc_object_feeder1_290_begin(server, ns);
retVal |= function_lcbc_object_feeder1_291_begin(server, ns);
retVal |= function_lcbc_object_feeder1_292_begin(server, ns);
retVal |= function_lcbc_object_feeder1_293_begin(server, ns);
retVal |= function_lcbc_object_feeder1_294_begin(server, ns);
retVal |= function_lcbc_object_feeder1_295_begin(server, ns);
retVal |= function_lcbc_object_feeder1_296_begin(server, ns);
retVal |= function_lcbc_object_feeder1_297_begin(server, ns);
retVal |= function_lcbc_object_feeder1_298_begin(server, ns);
retVal |= function_lcbc_object_feeder1_299_begin(server, ns);
retVal |= function_lcbc_object_feeder1_300_begin(server, ns);
retVal |= function_lcbc_object_feeder1_301_begin(server, ns);
retVal |= function_lcbc_object_feeder1_302_begin(server, ns);
retVal |= function_lcbc_object_feeder1_303_begin(server, ns);
retVal |= function_lcbc_object_feeder1_304_begin(server, ns);
retVal |= function_lcbc_object_feeder1_305_begin(server, ns);
retVal |= function_lcbc_object_feeder1_306_begin(server, ns);
retVal |= function_lcbc_object_feeder1_307_begin(server, ns);
retVal |= function_lcbc_object_feeder1_308_begin(server, ns);
retVal |= function_lcbc_object_feeder1_309_begin(server, ns);
retVal |= function_lcbc_object_feeder1_310_begin(server, ns);
retVal |= function_lcbc_object_feeder1_311_begin(server, ns);
retVal |= function_lcbc_object_feeder1_312_begin(server, ns);
retVal |= function_lcbc_object_feeder1_313_begin(server, ns);
retVal |= function_lcbc_object_feeder1_314_begin(server, ns);
retVal |= function_lcbc_object_feeder1_315_begin(server, ns);
retVal |= function_lcbc_object_feeder1_316_begin(server, ns);
retVal |= function_lcbc_object_feeder1_317_begin(server, ns);
retVal |= function_lcbc_object_feeder1_318_begin(server, ns);
retVal |= function_lcbc_object_feeder1_319_begin(server, ns);
retVal |= function_lcbc_object_feeder1_320_begin(server, ns);
retVal |= function_lcbc_object_feeder1_321_begin(server, ns);
retVal |= function_lcbc_object_feeder1_322_begin(server, ns);
retVal |= function_lcbc_object_feeder1_323_begin(server, ns);
retVal |= function_lcbc_object_feeder1_324_begin(server, ns);
retVal |= function_lcbc_object_feeder1_325_begin(server, ns);
retVal |= function_lcbc_object_feeder1_326_begin(server, ns);
retVal |= function_lcbc_object_feeder1_327_begin(server, ns);
retVal |= function_lcbc_object_feeder1_328_begin(server, ns);
retVal |= function_lcbc_object_feeder1_329_begin(server, ns);
retVal |= function_lcbc_object_feeder1_330_begin(server, ns);
retVal |= function_lcbc_object_feeder1_331_begin(server, ns);
retVal |= function_lcbc_object_feeder1_332_begin(server, ns);
retVal |= function_lcbc_object_feeder1_333_begin(server, ns);
retVal |= function_lcbc_object_feeder1_334_begin(server, ns);
retVal |= function_lcbc_object_feeder1_335_begin(server, ns);
retVal |= function_lcbc_object_feeder1_336_begin(server, ns);
retVal |= function_lcbc_object_feeder1_337_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_338_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_339_begin(server, ns);
retVal |= function_lcbc_object_feeder1_340_begin(server, ns);
retVal |= function_lcbc_object_feeder1_341_begin(server, ns);
retVal |= function_lcbc_object_feeder1_342_begin(server, ns);
retVal |= function_lcbc_object_feeder1_343_begin(server, ns);
retVal |= function_lcbc_object_feeder1_344_begin(server, ns);
retVal |= function_lcbc_object_feeder1_345_begin(server, ns);
retVal |= function_lcbc_object_feeder1_346_begin(server, ns);
retVal |= function_lcbc_object_feeder1_347_begin(server, ns);
retVal |= function_lcbc_object_feeder1_348_begin(server, ns);
retVal |= function_lcbc_object_feeder1_349_begin(server, ns);
retVal |= function_lcbc_object_feeder1_350_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_351_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_352_begin(server, ns);
retVal |= function_lcbc_object_feeder1_353_begin(server, ns);
retVal |= function_lcbc_object_feeder1_354_begin(server, ns);
retVal |= function_lcbc_object_feeder1_355_begin(server, ns);
retVal |= function_lcbc_object_feeder1_356_begin(server, ns);
retVal |= function_lcbc_object_feeder1_357_begin(server, ns);
retVal |= function_lcbc_object_feeder1_358_begin(server, ns);
retVal |= function_lcbc_object_feeder1_359_begin(server, ns);
retVal |= function_lcbc_object_feeder1_360_begin(server, ns);
retVal |= function_lcbc_object_feeder1_361_begin(server, ns);
retVal |= function_lcbc_object_feeder1_362_begin(server, ns);
retVal |= function_lcbc_object_feeder1_363_begin(server, ns);
retVal |= function_lcbc_object_feeder1_364_begin(server, ns);
retVal |= function_lcbc_object_feeder1_365_begin(server, ns);
retVal |= function_lcbc_object_feeder1_366_begin(server, ns);
retVal |= function_lcbc_object_feeder1_367_begin(server, ns);
retVal |= function_lcbc_object_feeder1_368_begin(server, ns);
retVal |= function_lcbc_object_feeder1_369_begin(server, ns);
retVal |= function_lcbc_object_feeder1_370_begin(server, ns);
retVal |= function_lcbc_object_feeder1_371_begin(server, ns);
retVal |= function_lcbc_object_feeder1_372_begin(server, ns);
retVal |= function_lcbc_object_feeder1_373_begin(server, ns);
retVal |= function_lcbc_object_feeder1_374_begin(server, ns);
retVal |= function_lcbc_object_feeder1_375_begin(server, ns);
retVal |= function_lcbc_object_feeder1_376_begin(server, ns);
retVal |= function_lcbc_object_feeder1_377_begin(server, ns);
retVal |= function_lcbc_object_feeder1_378_begin(server, ns);
retVal |= function_lcbc_object_feeder1_379_begin(server, ns);
retVal |= function_lcbc_object_feeder1_380_begin(server, ns);
retVal |= function_lcbc_object_feeder1_381_begin(server, ns);
retVal |= function_lcbc_object_feeder1_382_begin(server, ns);
retVal |= function_lcbc_object_feeder1_383_begin(server, ns);
retVal |= function_lcbc_object_feeder1_384_begin(server, ns);
retVal |= function_lcbc_object_feeder1_385_begin(server, ns);
retVal |= function_lcbc_object_feeder1_386_begin(server, ns);
retVal |= function_lcbc_object_feeder1_387_begin(server, ns);
retVal |= function_lcbc_object_feeder1_388_begin(server, ns);
retVal |= function_lcbc_object_feeder1_389_begin(server, ns);
retVal |= function_lcbc_object_feeder1_390_begin(server, ns);
retVal |= function_lcbc_object_feeder1_391_begin(server, ns);
retVal |= function_lcbc_object_feeder1_392_begin(server, ns);
retVal |= function_lcbc_object_feeder1_393_begin(server, ns);
retVal |= function_lcbc_object_feeder1_394_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_395_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_396_begin(server, ns);
retVal |= function_lcbc_object_feeder1_397_begin(server, ns);
retVal |= function_lcbc_object_feeder1_398_begin(server, ns);
retVal |= function_lcbc_object_feeder1_399_begin(server, ns);
retVal |= function_lcbc_object_feeder1_400_begin(server, ns);
retVal |= function_lcbc_object_feeder1_401_begin(server, ns);
retVal |= function_lcbc_object_feeder1_402_begin(server, ns);
retVal |= function_lcbc_object_feeder1_403_begin(server, ns);
retVal |= function_lcbc_object_feeder1_404_begin(server, ns);
retVal |= function_lcbc_object_feeder1_405_begin(server, ns);
retVal |= function_lcbc_object_feeder1_406_begin(server, ns);
retVal |= function_lcbc_object_feeder1_407_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_408_begin(server, ns);
// retVal |= function_lcbc_object_feeder1_409_begin(server, ns);
retVal |= function_lcbc_object_feeder1_410_begin(server, ns);
retVal |= function_lcbc_object_feeder1_411_begin(server, ns);
retVal |= function_lcbc_object_feeder1_412_begin(server, ns);
retVal |= function_lcbc_object_feeder1_413_begin(server, ns);
retVal |= function_lcbc_object_feeder1_414_begin(server, ns);
retVal |= function_lcbc_object_feeder1_415_begin(server, ns);
retVal |= function_lcbc_object_feeder1_416_begin(server, ns);
retVal |= function_lcbc_object_feeder1_417_begin(server, ns);
retVal |= function_lcbc_object_feeder1_418_begin(server, ns);
retVal |= function_lcbc_object_feeder1_419_begin(server, ns);
retVal |= function_lcbc_object_feeder1_420_begin(server, ns);
retVal |= function_lcbc_object_feeder1_421_begin(server, ns);
retVal |= function_lcbc_object_feeder1_422_begin(server, ns);
retVal |= function_lcbc_object_feeder1_423_begin(server, ns);
retVal |= function_lcbc_object_feeder1_424_begin(server, ns);
retVal |= function_lcbc_object_feeder1_425_begin(server, ns);
retVal |= function_lcbc_object_feeder1_426_begin(server, ns);
retVal |= function_lcbc_object_feeder1_427_begin(server, ns);
retVal |= function_lcbc_object_feeder1_428_begin(server, ns);
retVal |= function_lcbc_object_feeder1_429_begin(server, ns);
retVal |= function_lcbc_object_feeder1_430_begin(server, ns);
retVal |= function_lcbc_object_feeder1_431_begin(server, ns);
retVal |= function_lcbc_object_feeder1_432_begin(server, ns);
retVal |= function_lcbc_object_feeder1_433_begin(server, ns);
retVal |= function_lcbc_object_feeder1_434_begin(server, ns);
retVal |= function_lcbc_object_feeder1_435_begin(server, ns);
retVal |= function_lcbc_object_feeder1_436_begin(server, ns);
retVal |= function_lcbc_object_feeder1_437_begin(server, ns);
retVal |= function_lcbc_object_feeder1_438_begin(server, ns);
retVal |= function_lcbc_object_feeder1_439_begin(server, ns);
retVal |= function_lcbc_object_feeder1_439_finish(server, ns);
retVal |= function_lcbc_object_feeder1_438_finish(server, ns);
retVal |= function_lcbc_object_feeder1_437_finish(server, ns);
retVal |= function_lcbc_object_feeder1_436_finish(server, ns);
retVal |= function_lcbc_object_feeder1_435_finish(server, ns);
retVal |= function_lcbc_object_feeder1_434_finish(server, ns);
retVal |= function_lcbc_object_feeder1_433_finish(server, ns);
retVal |= function_lcbc_object_feeder1_432_finish(server, ns);
retVal |= function_lcbc_object_feeder1_431_finish(server, ns);
retVal |= function_lcbc_object_feeder1_430_finish(server, ns);
retVal |= function_lcbc_object_feeder1_429_finish(server, ns);
retVal |= function_lcbc_object_feeder1_428_finish(server, ns);
retVal |= function_lcbc_object_feeder1_427_finish(server, ns);
retVal |= function_lcbc_object_feeder1_426_finish(server, ns);
retVal |= function_lcbc_object_feeder1_425_finish(server, ns);
retVal |= function_lcbc_object_feeder1_424_finish(server, ns);
retVal |= function_lcbc_object_feeder1_423_finish(server, ns);
retVal |= function_lcbc_object_feeder1_422_finish(server, ns);
retVal |= function_lcbc_object_feeder1_421_finish(server, ns);
retVal |= function_lcbc_object_feeder1_420_finish(server, ns);
retVal |= function_lcbc_object_feeder1_419_finish(server, ns);
retVal |= function_lcbc_object_feeder1_418_finish(server, ns);
retVal |= function_lcbc_object_feeder1_417_finish(server, ns);
retVal |= function_lcbc_object_feeder1_416_finish(server, ns);
retVal |= function_lcbc_object_feeder1_415_finish(server, ns);
retVal |= function_lcbc_object_feeder1_414_finish(server, ns);
retVal |= function_lcbc_object_feeder1_413_finish(server, ns);
retVal |= function_lcbc_object_feeder1_412_finish(server, ns);
retVal |= function_lcbc_object_feeder1_411_finish(server, ns);
retVal |= function_lcbc_object_feeder1_410_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_409_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_408_finish(server, ns);
retVal |= function_lcbc_object_feeder1_407_finish(server, ns);
retVal |= function_lcbc_object_feeder1_406_finish(server, ns);
retVal |= function_lcbc_object_feeder1_405_finish(server, ns);
retVal |= function_lcbc_object_feeder1_404_finish(server, ns);
retVal |= function_lcbc_object_feeder1_403_finish(server, ns);
retVal |= function_lcbc_object_feeder1_402_finish(server, ns);
retVal |= function_lcbc_object_feeder1_401_finish(server, ns);
retVal |= function_lcbc_object_feeder1_400_finish(server, ns);
retVal |= function_lcbc_object_feeder1_399_finish(server, ns);
retVal |= function_lcbc_object_feeder1_398_finish(server, ns);
retVal |= function_lcbc_object_feeder1_397_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_396_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_395_finish(server, ns);
retVal |= function_lcbc_object_feeder1_394_finish(server, ns);
retVal |= function_lcbc_object_feeder1_393_finish(server, ns);
retVal |= function_lcbc_object_feeder1_392_finish(server, ns);
retVal |= function_lcbc_object_feeder1_391_finish(server, ns);
retVal |= function_lcbc_object_feeder1_390_finish(server, ns);
retVal |= function_lcbc_object_feeder1_389_finish(server, ns);
retVal |= function_lcbc_object_feeder1_388_finish(server, ns);
retVal |= function_lcbc_object_feeder1_387_finish(server, ns);
retVal |= function_lcbc_object_feeder1_386_finish(server, ns);
retVal |= function_lcbc_object_feeder1_385_finish(server, ns);
retVal |= function_lcbc_object_feeder1_384_finish(server, ns);
retVal |= function_lcbc_object_feeder1_383_finish(server, ns);
retVal |= function_lcbc_object_feeder1_382_finish(server, ns);
retVal |= function_lcbc_object_feeder1_381_finish(server, ns);
retVal |= function_lcbc_object_feeder1_380_finish(server, ns);
retVal |= function_lcbc_object_feeder1_379_finish(server, ns);
retVal |= function_lcbc_object_feeder1_378_finish(server, ns);
retVal |= function_lcbc_object_feeder1_377_finish(server, ns);
retVal |= function_lcbc_object_feeder1_376_finish(server, ns);
retVal |= function_lcbc_object_feeder1_375_finish(server, ns);
retVal |= function_lcbc_object_feeder1_374_finish(server, ns);
retVal |= function_lcbc_object_feeder1_373_finish(server, ns);
retVal |= function_lcbc_object_feeder1_372_finish(server, ns);
retVal |= function_lcbc_object_feeder1_371_finish(server, ns);
retVal |= function_lcbc_object_feeder1_370_finish(server, ns);
retVal |= function_lcbc_object_feeder1_369_finish(server, ns);
retVal |= function_lcbc_object_feeder1_368_finish(server, ns);
retVal |= function_lcbc_object_feeder1_367_finish(server, ns);
retVal |= function_lcbc_object_feeder1_366_finish(server, ns);
retVal |= function_lcbc_object_feeder1_365_finish(server, ns);
retVal |= function_lcbc_object_feeder1_364_finish(server, ns);
retVal |= function_lcbc_object_feeder1_363_finish(server, ns);
retVal |= function_lcbc_object_feeder1_362_finish(server, ns);
retVal |= function_lcbc_object_feeder1_361_finish(server, ns);
retVal |= function_lcbc_object_feeder1_360_finish(server, ns);
retVal |= function_lcbc_object_feeder1_359_finish(server, ns);
retVal |= function_lcbc_object_feeder1_358_finish(server, ns);
retVal |= function_lcbc_object_feeder1_357_finish(server, ns);
retVal |= function_lcbc_object_feeder1_356_finish(server, ns);
retVal |= function_lcbc_object_feeder1_355_finish(server, ns);
retVal |= function_lcbc_object_feeder1_354_finish(server, ns);
retVal |= function_lcbc_object_feeder1_353_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_352_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_351_finish(server, ns);
retVal |= function_lcbc_object_feeder1_350_finish(server, ns);
retVal |= function_lcbc_object_feeder1_349_finish(server, ns);
retVal |= function_lcbc_object_feeder1_348_finish(server, ns);
retVal |= function_lcbc_object_feeder1_347_finish(server, ns);
retVal |= function_lcbc_object_feeder1_346_finish(server, ns);
retVal |= function_lcbc_object_feeder1_345_finish(server, ns);
retVal |= function_lcbc_object_feeder1_344_finish(server, ns);
retVal |= function_lcbc_object_feeder1_343_finish(server, ns);
retVal |= function_lcbc_object_feeder1_342_finish(server, ns);
retVal |= function_lcbc_object_feeder1_341_finish(server, ns);
retVal |= function_lcbc_object_feeder1_340_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_339_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_338_finish(server, ns);
retVal |= function_lcbc_object_feeder1_337_finish(server, ns);
retVal |= function_lcbc_object_feeder1_336_finish(server, ns);
retVal |= function_lcbc_object_feeder1_335_finish(server, ns);
retVal |= function_lcbc_object_feeder1_334_finish(server, ns);
retVal |= function_lcbc_object_feeder1_333_finish(server, ns);
retVal |= function_lcbc_object_feeder1_332_finish(server, ns);
retVal |= function_lcbc_object_feeder1_331_finish(server, ns);
retVal |= function_lcbc_object_feeder1_330_finish(server, ns);
retVal |= function_lcbc_object_feeder1_329_finish(server, ns);
retVal |= function_lcbc_object_feeder1_328_finish(server, ns);
retVal |= function_lcbc_object_feeder1_327_finish(server, ns);
retVal |= function_lcbc_object_feeder1_326_finish(server, ns);
retVal |= function_lcbc_object_feeder1_325_finish(server, ns);
retVal |= function_lcbc_object_feeder1_324_finish(server, ns);
retVal |= function_lcbc_object_feeder1_323_finish(server, ns);
retVal |= function_lcbc_object_feeder1_322_finish(server, ns);
retVal |= function_lcbc_object_feeder1_321_finish(server, ns);
retVal |= function_lcbc_object_feeder1_320_finish(server, ns);
retVal |= function_lcbc_object_feeder1_319_finish(server, ns);
retVal |= function_lcbc_object_feeder1_318_finish(server, ns);
retVal |= function_lcbc_object_feeder1_317_finish(server, ns);
retVal |= function_lcbc_object_feeder1_316_finish(server, ns);
retVal |= function_lcbc_object_feeder1_315_finish(server, ns);
retVal |= function_lcbc_object_feeder1_314_finish(server, ns);
retVal |= function_lcbc_object_feeder1_313_finish(server, ns);
retVal |= function_lcbc_object_feeder1_312_finish(server, ns);
retVal |= function_lcbc_object_feeder1_311_finish(server, ns);
retVal |= function_lcbc_object_feeder1_310_finish(server, ns);
retVal |= function_lcbc_object_feeder1_309_finish(server, ns);
retVal |= function_lcbc_object_feeder1_308_finish(server, ns);
retVal |= function_lcbc_object_feeder1_307_finish(server, ns);
retVal |= function_lcbc_object_feeder1_306_finish(server, ns);
retVal |= function_lcbc_object_feeder1_305_finish(server, ns);
retVal |= function_lcbc_object_feeder1_304_finish(server, ns);
retVal |= function_lcbc_object_feeder1_303_finish(server, ns);
retVal |= function_lcbc_object_feeder1_302_finish(server, ns);
retVal |= function_lcbc_object_feeder1_301_finish(server, ns);
retVal |= function_lcbc_object_feeder1_300_finish(server, ns);
retVal |= function_lcbc_object_feeder1_299_finish(server, ns);
retVal |= function_lcbc_object_feeder1_298_finish(server, ns);
retVal |= function_lcbc_object_feeder1_297_finish(server, ns);
retVal |= function_lcbc_object_feeder1_296_finish(server, ns);
retVal |= function_lcbc_object_feeder1_295_finish(server, ns);
retVal |= function_lcbc_object_feeder1_294_finish(server, ns);
retVal |= function_lcbc_object_feeder1_293_finish(server, ns);
retVal |= function_lcbc_object_feeder1_292_finish(server, ns);
retVal |= function_lcbc_object_feeder1_291_finish(server, ns);
retVal |= function_lcbc_object_feeder1_290_finish(server, ns);
retVal |= function_lcbc_object_feeder1_289_finish(server, ns);
retVal |= function_lcbc_object_feeder1_288_finish(server, ns);
retVal |= function_lcbc_object_feeder1_287_finish(server, ns);
retVal |= function_lcbc_object_feeder1_286_finish(server, ns);
retVal |= function_lcbc_object_feeder1_285_finish(server, ns);
retVal |= function_lcbc_object_feeder1_284_finish(server, ns);
retVal |= function_lcbc_object_feeder1_283_finish(server, ns);
retVal |= function_lcbc_object_feeder1_282_finish(server, ns);
retVal |= function_lcbc_object_feeder1_281_finish(server, ns);
retVal |= function_lcbc_object_feeder1_280_finish(server, ns);
retVal |= function_lcbc_object_feeder1_279_finish(server, ns);
retVal |= function_lcbc_object_feeder1_278_finish(server, ns);
retVal |= function_lcbc_object_feeder1_277_finish(server, ns);
retVal |= function_lcbc_object_feeder1_276_finish(server, ns);
retVal |= function_lcbc_object_feeder1_275_finish(server, ns);
retVal |= function_lcbc_object_feeder1_274_finish(server, ns);
retVal |= function_lcbc_object_feeder1_273_finish(server, ns);
retVal |= function_lcbc_object_feeder1_272_finish(server, ns);
retVal |= function_lcbc_object_feeder1_271_finish(server, ns);
retVal |= function_lcbc_object_feeder1_270_finish(server, ns);
retVal |= function_lcbc_object_feeder1_269_finish(server, ns);
retVal |= function_lcbc_object_feeder1_268_finish(server, ns);
retVal |= function_lcbc_object_feeder1_267_finish(server, ns);
retVal |= function_lcbc_object_feeder1_266_finish(server, ns);
retVal |= function_lcbc_object_feeder1_265_finish(server, ns);
retVal |= function_lcbc_object_feeder1_264_finish(server, ns);
retVal |= function_lcbc_object_feeder1_263_finish(server, ns);
retVal |= function_lcbc_object_feeder1_262_finish(server, ns);
retVal |= function_lcbc_object_feeder1_261_finish(server, ns);
retVal |= function_lcbc_object_feeder1_260_finish(server, ns);
retVal |= function_lcbc_object_feeder1_259_finish(server, ns);
retVal |= function_lcbc_object_feeder1_258_finish(server, ns);
retVal |= function_lcbc_object_feeder1_257_finish(server, ns);
retVal |= function_lcbc_object_feeder1_256_finish(server, ns);
retVal |= function_lcbc_object_feeder1_255_finish(server, ns);
retVal |= function_lcbc_object_feeder1_254_finish(server, ns);
retVal |= function_lcbc_object_feeder1_253_finish(server, ns);
retVal |= function_lcbc_object_feeder1_252_finish(server, ns);
retVal |= function_lcbc_object_feeder1_251_finish(server, ns);
retVal |= function_lcbc_object_feeder1_250_finish(server, ns);
retVal |= function_lcbc_object_feeder1_249_finish(server, ns);
retVal |= function_lcbc_object_feeder1_248_finish(server, ns);
retVal |= function_lcbc_object_feeder1_247_finish(server, ns);
retVal |= function_lcbc_object_feeder1_246_finish(server, ns);
retVal |= function_lcbc_object_feeder1_245_finish(server, ns);
retVal |= function_lcbc_object_feeder1_244_finish(server, ns);
retVal |= function_lcbc_object_feeder1_243_finish(server, ns);
retVal |= function_lcbc_object_feeder1_242_finish(server, ns);
retVal |= function_lcbc_object_feeder1_241_finish(server, ns);
retVal |= function_lcbc_object_feeder1_240_finish(server, ns);
retVal |= function_lcbc_object_feeder1_239_finish(server, ns);
retVal |= function_lcbc_object_feeder1_238_finish(server, ns);
retVal |= function_lcbc_object_feeder1_237_finish(server, ns);
retVal |= function_lcbc_object_feeder1_236_finish(server, ns);
retVal |= function_lcbc_object_feeder1_235_finish(server, ns);
retVal |= function_lcbc_object_feeder1_234_finish(server, ns);
retVal |= function_lcbc_object_feeder1_233_finish(server, ns);
retVal |= function_lcbc_object_feeder1_232_finish(server, ns);
retVal |= function_lcbc_object_feeder1_231_finish(server, ns);
retVal |= function_lcbc_object_feeder1_230_finish(server, ns);
retVal |= function_lcbc_object_feeder1_229_finish(server, ns);
retVal |= function_lcbc_object_feeder1_228_finish(server, ns);
retVal |= function_lcbc_object_feeder1_227_finish(server, ns);
retVal |= function_lcbc_object_feeder1_226_finish(server, ns);
retVal |= function_lcbc_object_feeder1_225_finish(server, ns);
retVal |= function_lcbc_object_feeder1_224_finish(server, ns);
retVal |= function_lcbc_object_feeder1_223_finish(server, ns);
retVal |= function_lcbc_object_feeder1_222_finish(server, ns);
retVal |= function_lcbc_object_feeder1_221_finish(server, ns);
retVal |= function_lcbc_object_feeder1_220_finish(server, ns);
retVal |= function_lcbc_object_feeder1_219_finish(server, ns);
retVal |= function_lcbc_object_feeder1_218_finish(server, ns);
retVal |= function_lcbc_object_feeder1_217_finish(server, ns);
retVal |= function_lcbc_object_feeder1_216_finish(server, ns);
retVal |= function_lcbc_object_feeder1_215_finish(server, ns);
retVal |= function_lcbc_object_feeder1_214_finish(server, ns);
retVal |= function_lcbc_object_feeder1_213_finish(server, ns);
retVal |= function_lcbc_object_feeder1_212_finish(server, ns);
retVal |= function_lcbc_object_feeder1_211_finish(server, ns);
retVal |= function_lcbc_object_feeder1_210_finish(server, ns);
retVal |= function_lcbc_object_feeder1_209_finish(server, ns);
retVal |= function_lcbc_object_feeder1_208_finish(server, ns);
retVal |= function_lcbc_object_feeder1_207_finish(server, ns);
retVal |= function_lcbc_object_feeder1_206_finish(server, ns);
retVal |= function_lcbc_object_feeder1_205_finish(server, ns);
retVal |= function_lcbc_object_feeder1_204_finish(server, ns);
retVal |= function_lcbc_object_feeder1_203_finish(server, ns);
retVal |= function_lcbc_object_feeder1_202_finish(server, ns);
retVal |= function_lcbc_object_feeder1_201_finish(server, ns);
retVal |= function_lcbc_object_feeder1_200_finish(server, ns);
retVal |= function_lcbc_object_feeder1_199_finish(server, ns);
retVal |= function_lcbc_object_feeder1_198_finish(server, ns);
retVal |= function_lcbc_object_feeder1_197_finish(server, ns);
retVal |= function_lcbc_object_feeder1_196_finish(server, ns);
retVal |= function_lcbc_object_feeder1_195_finish(server, ns);
retVal |= function_lcbc_object_feeder1_194_finish(server, ns);
retVal |= function_lcbc_object_feeder1_193_finish(server, ns);
retVal |= function_lcbc_object_feeder1_192_finish(server, ns);
retVal |= function_lcbc_object_feeder1_191_finish(server, ns);
retVal |= function_lcbc_object_feeder1_190_finish(server, ns);
retVal |= function_lcbc_object_feeder1_189_finish(server, ns);
retVal |= function_lcbc_object_feeder1_188_finish(server, ns);
retVal |= function_lcbc_object_feeder1_187_finish(server, ns);
retVal |= function_lcbc_object_feeder1_186_finish(server, ns);
retVal |= function_lcbc_object_feeder1_185_finish(server, ns);
retVal |= function_lcbc_object_feeder1_184_finish(server, ns);
retVal |= function_lcbc_object_feeder1_183_finish(server, ns);
retVal |= function_lcbc_object_feeder1_182_finish(server, ns);
retVal |= function_lcbc_object_feeder1_181_finish(server, ns);
retVal |= function_lcbc_object_feeder1_180_finish(server, ns);
retVal |= function_lcbc_object_feeder1_179_finish(server, ns);
retVal |= function_lcbc_object_feeder1_178_finish(server, ns);
retVal |= function_lcbc_object_feeder1_177_finish(server, ns);
retVal |= function_lcbc_object_feeder1_176_finish(server, ns);
retVal |= function_lcbc_object_feeder1_175_finish(server, ns);
retVal |= function_lcbc_object_feeder1_174_finish(server, ns);
retVal |= function_lcbc_object_feeder1_173_finish(server, ns);
retVal |= function_lcbc_object_feeder1_172_finish(server, ns);
retVal |= function_lcbc_object_feeder1_171_finish(server, ns);
retVal |= function_lcbc_object_feeder1_170_finish(server, ns);
retVal |= function_lcbc_object_feeder1_169_finish(server, ns);
retVal |= function_lcbc_object_feeder1_168_finish(server, ns);
retVal |= function_lcbc_object_feeder1_167_finish(server, ns);
retVal |= function_lcbc_object_feeder1_166_finish(server, ns);
retVal |= function_lcbc_object_feeder1_165_finish(server, ns);
retVal |= function_lcbc_object_feeder1_164_finish(server, ns);
retVal |= function_lcbc_object_feeder1_163_finish(server, ns);
retVal |= function_lcbc_object_feeder1_162_finish(server, ns);
retVal |= function_lcbc_object_feeder1_161_finish(server, ns);
retVal |= function_lcbc_object_feeder1_160_finish(server, ns);
retVal |= function_lcbc_object_feeder1_159_finish(server, ns);
retVal |= function_lcbc_object_feeder1_158_finish(server, ns);
retVal |= function_lcbc_object_feeder1_157_finish(server, ns);
retVal |= function_lcbc_object_feeder1_156_finish(server, ns);
retVal |= function_lcbc_object_feeder1_155_finish(server, ns);
retVal |= function_lcbc_object_feeder1_154_finish(server, ns);
retVal |= function_lcbc_object_feeder1_153_finish(server, ns);
retVal |= function_lcbc_object_feeder1_152_finish(server, ns);
retVal |= function_lcbc_object_feeder1_151_finish(server, ns);
retVal |= function_lcbc_object_feeder1_150_finish(server, ns);
retVal |= function_lcbc_object_feeder1_149_finish(server, ns);
retVal |= function_lcbc_object_feeder1_148_finish(server, ns);
retVal |= function_lcbc_object_feeder1_147_finish(server, ns);
retVal |= function_lcbc_object_feeder1_146_finish(server, ns);
retVal |= function_lcbc_object_feeder1_145_finish(server, ns);
retVal |= function_lcbc_object_feeder1_144_finish(server, ns);
retVal |= function_lcbc_object_feeder1_143_finish(server, ns);
retVal |= function_lcbc_object_feeder1_142_finish(server, ns);
retVal |= function_lcbc_object_feeder1_141_finish(server, ns);
retVal |= function_lcbc_object_feeder1_140_finish(server, ns);
retVal |= function_lcbc_object_feeder1_139_finish(server, ns);
retVal |= function_lcbc_object_feeder1_138_finish(server, ns);
retVal |= function_lcbc_object_feeder1_137_finish(server, ns);
retVal |= function_lcbc_object_feeder1_136_finish(server, ns);
retVal |= function_lcbc_object_feeder1_135_finish(server, ns);
retVal |= function_lcbc_object_feeder1_134_finish(server, ns);
retVal |= function_lcbc_object_feeder1_133_finish(server, ns);
retVal |= function_lcbc_object_feeder1_132_finish(server, ns);
retVal |= function_lcbc_object_feeder1_131_finish(server, ns);
retVal |= function_lcbc_object_feeder1_130_finish(server, ns);
retVal |= function_lcbc_object_feeder1_129_finish(server, ns);
retVal |= function_lcbc_object_feeder1_128_finish(server, ns);
retVal |= function_lcbc_object_feeder1_127_finish(server, ns);
retVal |= function_lcbc_object_feeder1_126_finish(server, ns);
retVal |= function_lcbc_object_feeder1_125_finish(server, ns);
retVal |= function_lcbc_object_feeder1_124_finish(server, ns);
retVal |= function_lcbc_object_feeder1_123_finish(server, ns);
retVal |= function_lcbc_object_feeder1_122_finish(server, ns);
retVal |= function_lcbc_object_feeder1_121_finish(server, ns);
retVal |= function_lcbc_object_feeder1_120_finish(server, ns);
retVal |= function_lcbc_object_feeder1_119_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_118_finish(server, ns);
// retVal |= function_lcbc_object_feeder1_117_finish(server, ns);
retVal |= function_lcbc_object_feeder1_116_finish(server, ns);
retVal |= function_lcbc_object_feeder1_115_finish(server, ns);
retVal |= function_lcbc_object_feeder1_114_finish(server, ns);
retVal |= function_lcbc_object_feeder1_113_finish(server, ns);
retVal |= function_lcbc_object_feeder1_112_finish(server, ns);
retVal |= function_lcbc_object_feeder1_111_finish(server, ns);
retVal |= function_lcbc_object_feeder1_110_finish(server, ns);
retVal |= function_lcbc_object_feeder1_109_finish(server, ns);
retVal |= function_lcbc_object_feeder1_108_finish(server, ns);
retVal |= function_lcbc_object_feeder1_107_finish(server, ns);
retVal |= function_lcbc_object_feeder1_106_finish(server, ns);
retVal |= function_lcbc_object_feeder1_105_finish(server, ns);
retVal |= function_lcbc_object_feeder1_104_finish(server, ns);
retVal |= function_lcbc_object_feeder1_103_finish(server, ns);
retVal |= function_lcbc_object_feeder1_102_finish(server, ns);
retVal |= function_lcbc_object_feeder1_101_finish(server, ns);
retVal |= function_lcbc_object_feeder1_100_finish(server, ns);
retVal |= function_lcbc_object_feeder1_99_finish(server, ns);
retVal |= function_lcbc_object_feeder1_98_finish(server, ns);
retVal |= function_lcbc_object_feeder1_97_finish(server, ns);
retVal |= function_lcbc_object_feeder1_96_finish(server, ns);
retVal |= function_lcbc_object_feeder1_95_finish(server, ns);
retVal |= function_lcbc_object_feeder1_94_finish(server, ns);
retVal |= function_lcbc_object_feeder1_93_finish(server, ns);
retVal |= function_lcbc_object_feeder1_92_finish(server, ns);
retVal |= function_lcbc_object_feeder1_91_finish(server, ns);
retVal |= function_lcbc_object_feeder1_90_finish(server, ns);
retVal |= function_lcbc_object_feeder1_89_finish(server, ns);
retVal |= function_lcbc_object_feeder1_88_finish(server, ns);
retVal |= function_lcbc_object_feeder1_87_finish(server, ns);
retVal |= function_lcbc_object_feeder1_86_finish(server, ns);
retVal |= function_lcbc_object_feeder1_85_finish(server, ns);
retVal |= function_lcbc_object_feeder1_84_finish(server, ns);
retVal |= function_lcbc_object_feeder1_83_finish(server, ns);
retVal |= function_lcbc_object_feeder1_82_finish(server, ns);
retVal |= function_lcbc_object_feeder1_81_finish(server, ns);
retVal |= function_lcbc_object_feeder1_80_finish(server, ns);
retVal |= function_lcbc_object_feeder1_79_finish(server, ns);
retVal |= function_lcbc_object_feeder1_78_finish(server, ns);
retVal |= function_lcbc_object_feeder1_77_finish(server, ns);
retVal |= function_lcbc_object_feeder1_76_finish(server, ns);
retVal |= function_lcbc_object_feeder1_75_finish(server, ns);
retVal |= function_lcbc_object_feeder1_74_finish(server, ns);
retVal |= function_lcbc_object_feeder1_73_finish(server, ns);
retVal |= function_lcbc_object_feeder1_72_finish(server, ns);
retVal |= function_lcbc_object_feeder1_71_finish(server, ns);
retVal |= function_lcbc_object_feeder1_70_finish(server, ns);
retVal |= function_lcbc_object_feeder1_69_finish(server, ns);
retVal |= function_lcbc_object_feeder1_68_finish(server, ns);
retVal |= function_lcbc_object_feeder1_67_finish(server, ns);
retVal |= function_lcbc_object_feeder1_66_finish(server, ns);
retVal |= function_lcbc_object_feeder1_65_finish(server, ns);
retVal |= function_lcbc_object_feeder1_64_finish(server, ns);
retVal |= function_lcbc_object_feeder1_63_finish(server, ns);
retVal |= function_lcbc_object_feeder1_62_finish(server, ns);
retVal |= function_lcbc_object_feeder1_61_finish(server, ns);
retVal |= function_lcbc_object_feeder1_60_finish(server, ns);
retVal |= function_lcbc_object_feeder1_59_finish(server, ns);
retVal |= function_lcbc_object_feeder1_58_finish(server, ns);
retVal |= function_lcbc_object_feeder1_57_finish(server, ns);
retVal |= function_lcbc_object_feeder1_56_finish(server, ns);
retVal |= function_lcbc_object_feeder1_55_finish(server, ns);
retVal |= function_lcbc_object_feeder1_54_finish(server, ns);
retVal |= function_lcbc_object_feeder1_53_finish(server, ns);
retVal |= function_lcbc_object_feeder1_52_finish(server, ns);
retVal |= function_lcbc_object_feeder1_51_finish(server, ns);
retVal |= function_lcbc_object_feeder1_50_finish(server, ns);
retVal |= function_lcbc_object_feeder1_49_finish(server, ns);
retVal |= function_lcbc_object_feeder1_48_finish(server, ns);
retVal |= function_lcbc_object_feeder1_47_finish(server, ns);
retVal |= function_lcbc_object_feeder1_46_finish(server, ns);
retVal |= function_lcbc_object_feeder1_45_finish(server, ns);
retVal |= function_lcbc_object_feeder1_44_finish(server, ns);
retVal |= function_lcbc_object_feeder1_43_finish(server, ns);
retVal |= function_lcbc_object_feeder1_42_finish(server, ns);
retVal |= function_lcbc_object_feeder1_41_finish(server, ns);
retVal |= function_lcbc_object_feeder1_40_finish(server, ns);
retVal |= function_lcbc_object_feeder1_39_finish(server, ns);
retVal |= function_lcbc_object_feeder1_38_finish(server, ns);
retVal |= function_lcbc_object_feeder1_37_finish(server, ns);
retVal |= function_lcbc_object_feeder1_36_finish(server, ns);
retVal |= function_lcbc_object_feeder1_35_finish(server, ns);
retVal |= function_lcbc_object_feeder1_34_finish(server, ns);
retVal |= function_lcbc_object_feeder1_33_finish(server, ns);
retVal |= function_lcbc_object_feeder1_32_finish(server, ns);
retVal |= function_lcbc_object_feeder1_31_finish(server, ns);
retVal |= function_lcbc_object_feeder1_30_finish(server, ns);
retVal |= function_lcbc_object_feeder1_29_finish(server, ns);
retVal |= function_lcbc_object_feeder1_28_finish(server, ns);
retVal |= function_lcbc_object_feeder1_27_finish(server, ns);
retVal |= function_lcbc_object_feeder1_26_finish(server, ns);
retVal |= function_lcbc_object_feeder1_25_finish(server, ns);
retVal |= function_lcbc_object_feeder1_24_finish(server, ns);
retVal |= function_lcbc_object_feeder1_23_finish(server, ns);
retVal |= function_lcbc_object_feeder1_22_finish(server, ns);
retVal |= function_lcbc_object_feeder1_21_finish(server, ns);
retVal |= function_lcbc_object_feeder1_20_finish(server, ns);
retVal |= function_lcbc_object_feeder1_19_finish(server, ns);
retVal |= function_lcbc_object_feeder1_18_finish(server, ns);
retVal |= function_lcbc_object_feeder1_17_finish(server, ns);
retVal |= function_lcbc_object_feeder1_16_finish(server, ns);
retVal |= function_lcbc_object_feeder1_15_finish(server, ns);
retVal |= function_lcbc_object_feeder1_14_finish(server, ns);
retVal |= function_lcbc_object_feeder1_13_finish(server, ns);
retVal |= function_lcbc_object_feeder1_12_finish(server, ns);
retVal |= function_lcbc_object_feeder1_11_finish(server, ns);
retVal |= function_lcbc_object_feeder1_10_finish(server, ns);
retVal |= function_lcbc_object_feeder1_9_finish(server, ns);
retVal |= function_lcbc_object_feeder1_8_finish(server, ns);
retVal |= function_lcbc_object_feeder1_7_finish(server, ns);
retVal |= function_lcbc_object_feeder1_6_finish(server, ns);
retVal |= function_lcbc_object_feeder1_5_finish(server, ns);
retVal |= function_lcbc_object_feeder1_4_finish(server, ns);
retVal |= function_lcbc_object_feeder1_3_finish(server, ns);
retVal |= function_lcbc_object_feeder1_2_finish(server, ns);
retVal |= function_lcbc_object_feeder1_1_finish(server, ns);
retVal |= function_lcbc_object_feeder1_0_finish(server, ns);
return retVal;
}
