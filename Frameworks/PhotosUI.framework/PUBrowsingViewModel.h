/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingViewModel : PUViewModel <PUAssetSharedViewModelChangeObserver, PUAssetViewModelChangeObserver> {
    NSMutableSet * __animatingTransitionIdentifiers;
    PUAssetReference * __leadingAssetReference;
    int  __scrubbingSessionDistance;
    PUAssetReference * __trailingAssetReference;
    int  __userNavigationDistance;
    BOOL  _accessoryViewsDefaultVisibility;
    BOOL  _allAssetViewModelsAreInvalid;
    PUCachedMapTable * _assetSharedViewModelByAsset;
    PUAssetsDataSource * _assetsDataSource;
    int  _browsingSpeedRegime;
    BOOL  _browsingSpeedRegimeIsValid;
    PUAssetReference * _currentAssetReference;
    NSDate * _currentAssetReferenceChangedDate;
    double  _currentAssetTransitionProgress;
    NSMutableSet * _invalidAssetViewModels;
    BOOL  _isAnimatingAnyTransition;
    BOOL  _isChromeVisible;
    BOOL  _isScrolling;
    BOOL  _isScrubbing;
    double  _lastAssetWasCurrentForDuration;
    id  _lastChromeVisibilityChangeContext;
    int  _lastChromeVisibilityChangeReason;
    PUMediaProvider * _mediaProvider;
    int  _ongoingEnumerations;
    BOOL  _presentingOverOneUp;
    struct CGSize { 
        double width; 
        double height; 
    }  _secondScreenSize;
    NSString * _transitionDriverIdentifier;
    BOOL  _videoContentAllowed;
    PUCachedMapTable * _viewModelByAssetReference;
}

@property (setter=_setAnimatingTransitionIdentifiers:, nonatomic, retain) NSMutableSet *_animatingTransitionIdentifiers;
@property (setter=_setLeadingAssetReference:, nonatomic, retain) PUAssetReference *_leadingAssetReference;
@property (setter=_setScrubbingSessionDistance:, nonatomic) int _scrubbingSessionDistance;
@property (setter=_setTrailingAssetReference:, nonatomic, retain) PUAssetReference *_trailingAssetReference;
@property (setter=_setUserNavigationDistance:, nonatomic) int _userNavigationDistance;
@property (nonatomic) BOOL accessoryViewsDefaultVisibility;
@property (nonatomic, retain) PUAssetsDataSource *assetsDataSource;
@property (setter=_setBrowsingSpeedRegime:, nonatomic) int browsingSpeedRegime;
@property (nonatomic, retain) PUAssetReference *currentAssetReference;
@property (nonatomic, readonly) double currentAssetTransitionProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (setter=_setAnimatingAnyTransition:, nonatomic) BOOL isAnimatingAnyTransition;
@property (setter=setChromeVisible:, nonatomic) BOOL isChromeVisible;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isScrubbing;
@property (setter=_setLastChromeVisibilityChangeContext:, nonatomic, retain) id lastChromeVisibilityChangeContext;
@property (setter=_setLastChromeVisibilityChangeReason:, nonatomic) int lastChromeVisibilityChangeReason;
@property (nonatomic, retain) PUMediaProvider *mediaProvider;
@property (getter=isPresentingOverOneUp, nonatomic) BOOL presentingOverOneUp;
@property (nonatomic) struct CGSize { double x1; double x2; } secondScreenSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *transitionDriverIdentifier;
@property (nonatomic) BOOL videoContentAllowed;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_animatingTransitionIdentifiers;
- (id)_assetSharedViewModelForAsset:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_badgeInfoForAssetReference:(id)arg1;
- (float)_focusValueForAsset:(id)arg1;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleAsyncScrubRegimeInvalidation;
- (void)_invalidateAllAssetViewModels;
- (void)_invalidateAssetViewModel:(id)arg1;
- (void)_invalidateBrowsingSpeedRegime;
- (void)_invalidateNeighboringAssetViewModels;
- (BOOL)_isAssetInFocus:(id)arg1;
- (id)_leadingAssetReference;
- (BOOL)_needsUpdate;
- (void)_resetAccessoryViewsVisibilityToDefaultWithChangeReason:(int)arg1;
- (int)_scrubbingSessionDistance;
- (void)_setAnimatingAnyTransition:(BOOL)arg1;
- (void)_setAnimatingTransitionIdentifiers:(id)arg1;
- (void)_setBrowsingSpeedRegime:(int)arg1;
- (void)_setCurrentAssetTransitionProgress:(float)arg1;
- (void)_setLastChromeVisibilityChangeContext:(id)arg1;
- (void)_setLastChromeVisibilityChangeReason:(int)arg1;
- (void)_setLeadingAssetReference:(id)arg1;
- (void)_setScrubbingSessionDistance:(int)arg1;
- (void)_setTrailingAssetReference:(id)arg1;
- (void)_setTransitionDriverIdentifier:(id)arg1;
- (void)_setUserNavigationDistance:(int)arg1;
- (id)_trailingAssetReference;
- (void)_updateAssetViewModel:(id)arg1;
- (void)_updateAssetViewModelsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateNeighboringAssetReferences;
- (void)_updateScrubSpeedRegimeIfNeeded;
- (int)_userNavigationDistance;
- (BOOL)accessoryViewsDefaultVisibility;
- (id)activeAssetReferences;
- (id)assetSharedViewModelForAsset:(id)arg1;
- (id)assetViewModelForAssetReference:(id)arg1;
- (id)assetsDataSource;
- (int)browsingSpeedRegime;
- (id)currentAssetReference;
- (float)currentAssetTransitionProgress;
- (id)currentChange;
- (id)debugDetailedDescription;
- (void)didPerformChanges;
- (id)init;
- (BOOL)isAnimatingAnyTransition;
- (BOOL)isChromeVisible;
- (BOOL)isPresentingOverOneUp;
- (BOOL)isScrolling;
- (BOOL)isScrubbing;
- (id)lastChromeVisibilityChangeContext;
- (int)lastChromeVisibilityChangeReason;
- (id)mediaProvider;
- (id)newViewModelChange;
- (void)registerChangeObserver:(id)arg1;
- (struct CGSize { double x1; double x2; })secondScreenSize;
- (void)setAccessoryViewsDefaultVisibility:(BOOL)arg1;
- (void)setAccessoryViewsDefaultVisibility:(BOOL)arg1 changeReason:(int)arg2;
- (void)setAnimating:(BOOL)arg1 transitionWithIdentifier:(id)arg2;
- (void)setAssetsDataSource:(id)arg1;
- (void)setChromeVisible:(BOOL)arg1;
- (void)setChromeVisible:(BOOL)arg1 changeReason:(int)arg2;
- (void)setChromeVisible:(BOOL)arg1 changeReason:(int)arg2 context:(id)arg3;
- (void)setCurrentAssetReference:(id)arg1;
- (void)setCurrentAssetReference:(id)arg1 transitionProgress:(float)arg2 transitionDriverIdentifier:(id)arg3;
- (void)setIsScrolling:(BOOL)arg1;
- (void)setIsScrubbing:(BOOL)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPresentingOverOneUp:(BOOL)arg1;
- (void)setSecondScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoContentAllowed:(BOOL)arg1;
- (id)transitionDriverIdentifier;
- (void)unregisterChangeObserver:(id)arg1;
- (BOOL)videoContentAllowed;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end