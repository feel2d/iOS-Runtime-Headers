/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMetricsAppLaunchEvent : SSMetricsBaseEvent <SKUIInspectableObject> {
    NSMutableDictionary * _templateMetrics;
}

@property (nonatomic) double bootstrapEndTime;
@property (nonatomic) double bootstrapStartTime;
@property (nonatomic) double clientConfigurationLoadTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) double initialTabRequestStartTime;
@property (nonatomic) double initialTabResponseEndTime;
@property (nonatomic) double initialTabResponseStartTime;
@property (nonatomic) double jsResourcesEndTime;
@property (nonatomic) double jsResourcesStartTime;
@property (nonatomic, retain) NSString *launchCorrelationKey;
@property (nonatomic) double launchEndTime;
@property (nonatomic) double launchFailureTime;
@property (nonatomic) double mainTime;
@property (nonatomic) BOOL requiredBlockingBagLoad;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *templateMetrics;
@property (nonatomic) BOOL usedBootstrapFallback;

+ (id)consumePendingLaunchEvent;
+ (double)processStartTime;
+ (void)resetPendingLaunchEventForTesting;
+ (void)withPendingLaunchEvent:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)addTemplateLoadTimingMetric:(id)arg1 forURL:(id)arg2;
- (void)appendPropertiesToBody:(id)arg1;
- (double)bootstrapEndTime;
- (double)bootstrapStartTime;
- (double)clientConfigurationLoadTime;
- (id)init;
- (double)initialTabRequestStartTime;
- (double)initialTabResponseEndTime;
- (double)initialTabResponseStartTime;
- (double)jsResourcesEndTime;
- (double)jsResourcesStartTime;
- (id)launchCorrelationKey;
- (double)launchEndTime;
- (double)launchFailureTime;
- (double)mainTime;
- (void)populateObjectInspector:(id)arg1;
- (BOOL)requiredBlockingBagLoad;
- (void)setBootstrapEndTime:(double)arg1;
- (void)setBootstrapStartTime:(double)arg1;
- (void)setClientConfigurationLoadTime:(double)arg1;
- (void)setInitialTabRequestStartTime:(double)arg1;
- (void)setInitialTabResponseEndTime:(double)arg1;
- (void)setInitialTabResponseStartTime:(double)arg1;
- (void)setJsResourcesEndTime:(double)arg1;
- (void)setJsResourcesStartTime:(double)arg1;
- (void)setLaunchCorrelationKey:(id)arg1;
- (void)setLaunchEndTime:(double)arg1;
- (void)setLaunchFailureTime:(double)arg1;
- (void)setMainTime:(double)arg1;
- (void)setRequiredBlockingBagLoad:(BOOL)arg1;
- (void)setUsedBootstrapFallback:(BOOL)arg1;
- (id)templateMetrics;
- (BOOL)usedBootstrapFallback;

@end