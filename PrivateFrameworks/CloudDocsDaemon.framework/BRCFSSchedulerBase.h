/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle> {
    BOOL  _hasActiveWork;
    BOOL  _hasWork;
    NSObject<OS_dispatch_group> * _hasWorkGroup;
    BOOL  _isCancelled;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _schedulerQueue;
    BRCDeadlineSource * _schedulerSource;
    BRCAccountSession * _session;
    PQLNameInjection * _tableName;
}

@property (readonly) BOOL closed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasActiveWork;
@property (nonatomic) BOOL hasWork;
@property (retain) NSObject<OS_dispatch_group> *hasWorkGroup;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isCancelled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canRetryThrottleID:(int)arg1 zone:(id)arg2;
- (void)_close;
- (void)_computeStamps:(struct throttle_stamps { unsigned int x1; int x2; int x3; int x4; int x5; }*)arg1 throttleID:(int)arg2 zone:(id)arg3 throttle:(id)arg4 hasBeenTried:(BOOL)arg5;
- (void)_deleteThrottleID:(int)arg1;
- (void)_describe:(id)arg1 zone:(id)arg2 now:(int)arg3 context:(id)arg4;
- (id)_initWithSession:(id)arg1 name:(id)arg2 tableName:(id)arg3;
- (int)_updateStamps:(struct throttle_stamps { unsigned int x1; int x2; int x3; int x4; int x5; }*)arg1 throttle:(id)arg2 now:(int)arg3;
- (void)cancel;
- (void)close;
- (BOOL)closed;
- (void)deleteExpiredThrottles;
- (void)deleteThrottlesForZone:(id)arg1;
- (id)descriptionForThrottleID:(int)arg1 zone:(id)arg2 now:(int)arg3 context:(id)arg4;
- (id)descriptionForZone:(id)arg1 now:(int)arg2 context:(id)arg3;
- (BOOL)hasActiveWork;
- (BOOL)hasWork;
- (id)hasWorkGroup;
- (BOOL)isCancelled;
- (BOOL)isZoneIdle:(id)arg1;
- (void)moveAppLibraryTransfers:(id)arg1 toAppLibrary:(id)arg2;
- (void)resetBackoffForThrottleID:(int)arg1 zone:(id)arg2;
- (void)resume;
- (void)schedule;
- (void)scheduleDidFinishWithTimestamp:(int)arg1 nextScheduleTimestamp:(int)arg2;
- (void)setHasActiveWork:(BOOL)arg1;
- (void)setHasWork:(BOOL)arg1;
- (void)setHasWorkGroup:(id)arg1;
- (void)signal;
- (void)signalWithDeadline:(int)arg1;
- (void)suspend;
- (void)updateThrottleID:(int)arg1 zone:(id)arg2 state:(int)arg3;

@end