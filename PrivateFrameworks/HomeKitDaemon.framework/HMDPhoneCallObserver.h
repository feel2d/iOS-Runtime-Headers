/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPhoneCallObserver : NSObject <CXCallObserverDelegate> {
    CXCallObserver * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CXCallObserver *observer;
@property (readonly) Class superclass;

+ (id)sharedPhoneCallObserver;

- (void).cxx_destruct;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (BOOL)hasActiveCalls;
- (id)init;
- (BOOL)isActiveCall:(id)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void)startObserving;

@end
