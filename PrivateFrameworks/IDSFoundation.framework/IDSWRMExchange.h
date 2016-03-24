/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSWRMExchange : NSObject {
    unsigned long long _activeLinkType;
    unsigned short _connectCount;
    NSObject<OS_xpc_object> *_connection;
    id /* block */ _delegateBlock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    IDSWRMMetricContainer *_metrics;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _recommendedLinkType;
    BOOL _registered;
    unsigned long long _reportInterval;
    BOOL _shouldSendReport;
    BOOL _subscribed;
}

+ (id)sharedInstance;

- (void)_dispatchAfter:(double)arg1 block:(id /* block */)arg2;
- (BOOL)_isXPCDictionary:(id)arg1;
- (id)_newMetricReportMessage;
- (id)_newPrefSubscribeMessage:(BOOL)arg1;
- (id)_newRegisterMessage;
- (id)_newSubscribeMessage;
- (id)_newSubscribeStatusUpdateMessage;
- (id)_newUnsubscribeMessage;
- (void)_notifyDelegate;
- (BOOL)_processLinkPreferenceNotificationEvent:(id)arg1;
- (BOOL)_processMetricsConfigEvent:(id)arg1;
- (void)_processXPCEvent:(id)arg1;
- (BOOL)_processXPCMessage:(id)arg1;
- (void)_reconnectUntilTimeout;
- (void)_registerWithWRM;
- (void)_resetLocalMetric;
- (void)_restartClient;
- (void)_restartSubscriptionIfNeeded;
- (void)_sendMetricReport;
- (void)_sendMetricReportPeriodically;
- (void)_sendXPCMessage:(id)arg1;
- (BOOL)_setRecommendedLinkType:(unsigned long long)arg1;
- (void)_setReportInterval:(unsigned long long)arg1;
- (void)_startXPCConnection;
- (void)_stopXPCConnection;
- (void)_submitBlockAsync:(id /* block */)arg1;
- (void)_updateLocalMetric:(id)arg1;
- (void)dealloc;
- (void)handleActiveLinkChange:(unsigned long long)arg1;
- (id)init;
- (BOOL)isBTRecommended;
- (BOOL)isWiFiRecommended;
- (unsigned long long)recommendedLinkType;
- (void)submitMetric:(id)arg1;
- (void)subscribeForRecommendation:(id)arg1 block:(id /* block */)arg2;
- (void)unsubscribeForRecommendation;

@end