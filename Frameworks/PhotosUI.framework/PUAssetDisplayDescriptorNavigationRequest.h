/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetDisplayDescriptorNavigationRequest : NSObject <PUBrowsingViewModelChangeObserver> {
    BOOL  __arrived;
    PUAssetReference * __foundTargetAssetReference;
    BOOL  __isPerformingChanges;
    BOOL  __isUpdating;
    BOOL  __needsUpdateArrived;
    BOOL  __needsUpdateDone;
    BOOL  __needsUpdateFoundTargetAssetReference;
    BOOL  __seeked;
    BOOL  __timedOut;
    id /* block */  _completionHandler;
    BOOL  _hasSeenContentChange;
    PUAssetReference * _targetAssetReference;
    NSDate * _targetModificationDate;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _targetSeekTime;
    double  _timeOut;
    NSTimer * _timeOutTimer;
    PUBrowsingViewModel * _viewModel;
}

@property (setter=_setArrived:, nonatomic) BOOL _arrived;
@property (setter=_setFoundTargetAssetReference:, nonatomic, retain) PUAssetReference *_foundTargetAssetReference;
@property (setter=_setPerformingChanges:, nonatomic) BOOL _isPerformingChanges;
@property (setter=_setUpdating:, nonatomic) BOOL _isUpdating;
@property (setter=_setNeedsUpdateArrived:, nonatomic) BOOL _needsUpdateArrived;
@property (setter=_setNeedsUpdateDone:, nonatomic) BOOL _needsUpdateDone;
@property (setter=_setNeedsUpdateFoundTargetAssetReference:, nonatomic) BOOL _needsUpdateFoundTargetAssetReference;
@property (setter=_setSeeked:, nonatomic) BOOL _seeked;
@property (setter=_setTimedOut:, nonatomic) BOOL _timedOut;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUAssetReference *targetAssetReference;
@property (nonatomic, retain) NSDate *targetModificationDate;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } targetSeekTime;
@property (nonatomic) double timeOut;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (BOOL)_arrived;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_cleanUpWhenDone;
- (id)_errorMessage;
- (void)_finishRequest;
- (id)_foundTargetAssetReference;
- (void)_invalidateArrived;
- (void)_invalidateDone;
- (void)_invalidateFoundTargetAssetReference;
- (BOOL)_isPerformingChanges;
- (BOOL)_isUpdating;
- (id)_navigationRequestError;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateArrived;
- (BOOL)_needsUpdateDone;
- (BOOL)_needsUpdateFoundTargetAssetReference;
- (BOOL)_seeked;
- (void)_setArrived:(BOOL)arg1;
- (void)_setFoundTargetAssetReference:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateArrived:(BOOL)arg1;
- (void)_setNeedsUpdateDone:(BOOL)arg1;
- (void)_setNeedsUpdateFoundTargetAssetReference:(BOOL)arg1;
- (void)_setPerformingChanges:(BOOL)arg1;
- (void)_setSeeked:(BOOL)arg1;
- (void)_setTimedOut:(BOOL)arg1;
- (void)_setUpdating:(BOOL)arg1;
- (BOOL)_timedOut;
- (void)_updateArrivedIfNeeded;
- (void)_updateCurrentAssetReference;
- (void)_updateDoneIfNeeded;
- (void)_updateFoundTargetAssetReferenceIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSeeking;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)init;
- (void)performChanges:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setTargetAssetReference:(id)arg1;
- (void)setTargetModificationDate:(id)arg1;
- (void)setTargetSeekTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setTimeOut:(double)arg1;
- (void)setViewModel:(id)arg1;
- (id)targetAssetReference;
- (id)targetModificationDate;
- (struct { int x1; int x2; unsigned int x3; int x4; })targetSeekTime;
- (double)timeOut;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end