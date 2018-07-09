#include <stdio.h>

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <getopt.h>

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
    UA_Byte *dblVal = (UA_Byte*)value->value.data;
    LOG_INFO("dataChangeNotficationCb: %d" , (int)*dblVal);
}

void deleteMonitoredItemCb(UA_Client *client, 
        UA_UInt32 subId, void *subContext,
        UA_UInt32 monId, void *monContext) 
{
    LOG_INFO("deleteMonitoredItemCb");
}

/* Global vars for handler */
static volatile UA_Boolean gh_doControl;

// main
UA_Boolean running = true;
void sighandler(int sign) 
{
    gh_doControl = true;
}

int main(int argc, char **argv) 
{
    gh_doControl = false;

    struct sigaction sa;
    sa.sa_handler = sighandler;
    sigemptyset(&(sa.sa_mask));
    sigaddset(&(sa.sa_mask), SIGINT);
    sigaction(SIGINT, &sa, NULL);

    /* NodeId of the variable F1:State */
    const UA_NodeId nodeIdSubscribe = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, 101);

    /* Provides default values for a new monitored item.
        static UA_INLINE UA_MonitoredItemCreateRequest
        UA_MonitoredItemCreateRequest_default(UA_NodeId nodeId) {
            UA_MonitoredItemCreateRequest request;
            UA_MonitoredItemCreateRequest_init(&request);
            request.itemToMonitor.nodeId = nodeId;
            request.itemToMonitor.attributeId = UA_ATTRIBUTEID_VALUE;
            request.monitoringMode = UA_MONITORINGMODE_REPORTING;
            request.requestedParameters.samplingInterval = 250;
            request.requestedParameters.discardOldest = true;
            request.requestedParameters.queueSize = 1;
            return request;
        } 
    */
    UA_MonitoredItemCreateRequest mireq = UA_MonitoredItemCreateRequest_default(nodeIdSubscribe);

    /* Provides default values for a new subscription.
    *
    * RequestedPublishingInterval:  500.0 [ms]
    * RequestedLifetimeCount: 10000
    * RequestedMaxKeepAliveCount: 10
    * MaxNotificationsPerPublish: 0 (unlimited)
    * PublishingEnabled: true
    * Priority: 0 */
    UA_CreateSubscriptionRequest sreq = UA_CreateSubscriptionRequest_default();
    UA_ClientConfig conf = UA_ClientConfig_default;

    int c;
    while ((c = getopt (argc, argv, "a:b:c:d:e:")) != -1) {
        switch (c) {
            case 'a':
                LOG_INFOC("UA_ClientConfig.timeout: %s", optarg);
                conf.timeout = strtol(optarg, NULL, 10);
                break;
            case 'b':
                LOG_INFOC("UA_ClientConfig.secureChannelLifeTime: %s", optarg);
                conf.secureChannelLifeTime = strtol(optarg, NULL, 10);
                break;
            case 'c':
                LOG_INFOC("UA_CreateSubscriptionRequest.requestedPublishingInterval: %s", optarg);
                sreq.requestedPublishingInterval = strtol(optarg, NULL, 10);
                break;
            case 'd':
                LOG_INFOC("UA_MonitoredItemCreateRequest.requestedParameters.samplingInterval: %s", optarg);
                mireq.requestedParameters.samplingInterval = strtol(optarg, NULL, 10);
                break;
            case 'e':
                LOG_INFOC("UA_CreateSubscriptionRequest.requestedMaxKeepAliveCount: %s", optarg);
                sreq.requestedMaxKeepAliveCount = strtol(optarg, NULL, 10);
                break;
            default:
                abort ();
        }
    }

    UA_Client *client = UA_Client_new(conf);
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:48020");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return (int)retval;
    }

    /* NodeIds for Manual Override */
    const UA_NodeId nodeIdObject = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, 1);
    const UA_NodeId nodeIdMethod = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, ManualOverrideControl_ID);

    /* Call Manual Override with ON */
    UA_Variant varManOverride;
    UA_Byte valManOverride = 2;
    UA_Variant_setScalar(&varManOverride, &valManOverride, &UA_TYPES[UA_TYPES_BYTE]);
    LOG_INFOC("Set manual override to on");
    assertStatus(UA_Client_call(client, nodeIdObject, nodeIdMethod, 1, &varManOverride, NULL, NULL));

    /* Create Subscription */
    UA_CreateSubscriptionResponse sresp = UA_Client_Subscriptions_create(client,
                    sreq,
                    NULL, // ctx
                    statusChangeCb,
                    deleteSubscriptionCb);
    assertStatus(sresp.responseHeader.serviceResult);

    /* Create MonitoredItem */
    UA_MonitoredItemCreateResult mires = UA_Client_MonitoredItems_createDataChange(client,
                                                                                sresp.subscriptionId,
                                                                                UA_TIMESTAMPSTORETURN_BOTH,
                                                                                mireq,
                                                                                NULL, // ctx
                                                                                dataChangeNotficationCb,
                                                                                deleteMonitoredItemCb);

    UA_Byte valControl = 2;
    while(1) {
        UA_Client_runAsync(client, 1000);
        usleep(1000);

        if(gh_doControl) {
            UA_Variant varControl;       
            /* NodeIds for F1:Control */
            const UA_NodeId nodeIdObjectF1 = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, 100);
            const UA_NodeId nodeIdMethodF1 = UA_NODEID_NUMERIC(LCBC1_NAMESPACE, F1_Control_ID);
            /* Change F1:State  */
            UA_Variant_setScalar(&varControl, &valControl, &UA_TYPES[UA_TYPES_BYTE]);
            LOG_INFOC("Handler: Do control");
            assertStatus(UA_Client_call(client, nodeIdObjectF1, nodeIdMethodF1, 1, &varControl, NULL, NULL));

            if(valControl == 1) {
                valControl = 2;
            } else {
                valControl = 1;
            }
            gh_doControl = false;
        }
    }

    /* Clean up */
    UA_Client_delete(client); /* Disconnects the client internally */
    return UA_STATUSCODE_GOOD;
}