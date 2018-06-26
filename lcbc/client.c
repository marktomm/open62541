#include <stdio.h>

#include <unistd.h>

#include "constants.h"

void statusChangeCb(UA_Client *client, UA_UInt32 subId, 
                    void *subContext, UA_StatusChangeNotification *notification) 
{
    LOG_INFO("statusChangeCb");
    // UA_StatusChangeNotification
}

void deleteSubscriptionCb(UA_Client *client, UA_UInt32 subId, void *subContext)
{
    LOG_INFO("deleteSubscriptionCb");
}

void dataChangeNotficationCb(UA_Client *client, 
        UA_UInt32 subId, void *subContext,
        UA_UInt32 monId, void *monContext,
        UA_DataValue *value) 
{
    UA_Byte dblVal;
    UA_Variant_setScalarCopy(&value->value, &dblVal, &UA_TYPES[UA_TYPES_BYTE]);
    LOG_INFO("dataChangeNotficationCb: %d" , (unsigned int)dblVal);
}

void deleteMonitoredItemCb(UA_Client *client, 
        UA_UInt32 subId, void *subContext,
        UA_UInt32 monId, void *monContext) 
{
    LOG_INFO("deleteMonitoredItemCb");
}

int main(void) {
    UA_Client *client = UA_Client_new(UA_ClientConfig_default);
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:48020");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return (int)retval;
    }

    /* NodeIds for Manual Override */
    UA_NodeId nodeIdObject = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, 1);
    UA_NodeId nodeIdMethod = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, ManualOverrideControl_ID);

    /* Call Manual Override with ON */
    UA_Variant varManOverride;
    UA_Byte valManOverride = 2;
    UA_Variant_setScalar(&varManOverride, &valManOverride, &UA_TYPES[UA_TYPES_BYTE]);
    assertStatus(UA_Client_call(client, nodeIdObject, nodeIdMethod, 1, &varManOverride, NULL, NULL));


    /* NodeId of the variable F1:State */
    const UA_NodeId nodeIdSubscribe = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, 101);

    /* Create Subscription */
    UA_CreateSubscriptionRequest sreq = UA_CreateSubscriptionRequest_default();
    UA_CreateSubscriptionResponse sresp = UA_Client_Subscriptions_create(client,
                    sreq,
                    NULL, // ctx
                    statusChangeCb,
                    deleteSubscriptionCb);
    assertStatus(sresp.responseHeader.serviceResult);

    /* Create MonitoredItem */
    UA_MonitoredItemCreateRequest mireq = UA_MonitoredItemCreateRequest_default(nodeIdSubscribe);
    UA_MonitoredItemCreateResult mires = UA_Client_MonitoredItems_createDataChange(client,
                                                                                sresp.subscriptionId,
                                                                                UA_TIMESTAMPSTORETURN_BOTH,
                                                                                mireq,
                                                                                NULL, // ctx
                                                                                dataChangeNotficationCb,
                                                                                deleteMonitoredItemCb);

    /* NodeIds for F1:Control */
    nodeIdObject = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, 100);
    nodeIdMethod = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, F1_Control_ID);

    UA_Byte valControl = 2;
    UA_Variant varControl;
    /* Change F1:State and do client stuff */
    UA_Variant_setScalar(&varControl, &valControl, &UA_TYPES[UA_TYPES_BYTE]);
    LOG_INFO("Do control");
    assertStatus(UA_Client_call(client, nodeIdObject, nodeIdMethod, 1, &varControl, NULL, NULL));
    while(1) {

        // if(valControl == 1) {
        //     valControl = 2;
        // } else {
        //     valControl = 1;
        // }
        UA_Client_runAsync(client, 1000);
        usleep(2000000);
    }

    /* Clean up */
    UA_Client_delete(client); /* Disconnects the client internally */
    return UA_STATUSCODE_GOOD;
}