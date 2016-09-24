/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBufferingIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver> {
    UIButton * __errorButton;
    int  __indicatorStyle;
    UIActivityIndicatorView * __spinner;
    PUBrowsingVideoPlayer * __videoPlayer;
    PUAssetViewModel * _assetViewModel;
    id /* block */  _errorDisplayer;
}

@property (setter=_setErrorButton:, nonatomic, retain) UIButton *_errorButton;
@property (setter=_setIndicatorStyle:, nonatomic) int _indicatorStyle;
@property (setter=_setSpinner:, nonatomic, retain) UIActivityIndicatorView *_spinner;
@property (setter=_setVideoPlayer:, nonatomic, retain) PUBrowsingVideoPlayer *_videoPlayer;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorDisplayer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })bufferingIndicatorTileSize;
+ (BOOL)canShowBufferingIndicatorTileForAsset:(id)arg1;

- (void).cxx_destruct;
- (id)_errorButton;
- (void)_handleErrorButton:(id)arg1;
- (int)_indicatorStyle;
- (void)_setErrorButton:(id)arg1;
- (void)_setIndicatorStyle:(int)arg1;
- (void)_setIndicatorStyle:(int)arg1 animated:(BOOL)arg2;
- (void)_setSpinner:(id)arg1;
- (void)_setVideoPlayer:(id)arg1;
- (id)_spinner;
- (void)_updateIndicator;
- (id)_videoPlayer;
- (id)assetViewModel;
- (void)becomeReusable;
- (id /* block */)errorDisplayer;
- (void)setAssetViewModel:(id)arg1;
- (void)setErrorDisplayer:(id /* block */)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end