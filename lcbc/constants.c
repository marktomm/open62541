#include "constants.h"

void createDigitalMethodArguments(UA_Argument *inputArgument, UA_Argument *outputArgument) 
{
    UA_Argument_init(inputArgument);
    inputArgument->description = UA_LOCALIZEDTEXT("en-US", "Byte");
    inputArgument->name = UA_STRING("CmdControlByte");
    inputArgument->dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
    inputArgument->valueRank = -1; /* scalar */

    UA_Argument_init(outputArgument);
    outputArgument->description = UA_LOCALIZEDTEXT("en-US", "Boolean");
    outputArgument->name = UA_STRING("CmdResultBoolean");
    outputArgument->dataType = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
    outputArgument->valueRank = -1; /* scalar */
}

void assertStatus(UA_StatusCode st)
{
    if(UA_STATUSCODE_GOOD != st) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "LCBC invalid state: %s", UA_StatusCode_name(st));
        exit(144);
    }
}