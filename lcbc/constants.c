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

UA_StatusCode TranslateBrowsePathToNodeIds(UA_Server* server, UA_NodeId* result, const unsigned long referenceTypeId, const UA_UInt16 target_qualifiedName_Ns, char * const target_qualifiedName, const UA_NodeId source_node)
{
    UA_StatusCode ret = UA_STATUSCODE_GOOD;   
    UA_NodeId ObjectType_NodeId;

    UA_RelativePathElement rpe;
    UA_RelativePathElement_init(&rpe);
    rpe.referenceTypeId = UA_NODEID_NUMERIC(0, referenceTypeId);
    rpe.isInverse = false;
    rpe.includeSubtypes = false;
    rpe.targetName = UA_QUALIFIEDNAME(target_qualifiedName_Ns, target_qualifiedName);

    UA_BrowsePath bp;
    UA_BrowsePath_init(&bp);
    bp.startingNode = source_node;
    bp.relativePath.elementsSize = 1;
    bp.relativePath.elements = &rpe;

    UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);

    if(bpr.statusCode != UA_STATUSCODE_GOOD || bpr.targetsSize < 1) {
        UA_LOG_FATAL(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "TranslateBrowsePathToNodeIds | Find Node by UA_QUALIFIEDNAME(%d, %s) failed: %s", target_qualifiedName_Ns, target_qualifiedName,  UA_StatusCode_name(bpr.statusCode));
        return (int)bpr.statusCode;
    } 

    ret |= UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, result);

    UA_BrowsePathResult_deleteMembers(&bpr);

    return ret;
}