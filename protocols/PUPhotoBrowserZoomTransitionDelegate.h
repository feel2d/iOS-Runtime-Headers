/* Generated by RuntimeBrowser.
 */

@protocol PUPhotoBrowserZoomTransitionDelegate <NSObject>

@required

- (BOOL)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 getFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 contentMode:(int*)arg3 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg4 forPhotoToken:(id)arg5 operation:(int)arg6;
- (id)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 photoTokenForPhoto:(PHAsset *)arg2 inCollection:(PHAssetCollection *)arg3;

@optional

- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 didFinishAnimationForOperation:(int)arg2;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 didFinishForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 shouldHidePhotoTokens:(NSSet *)arg2;
- (BOOL)zoomTransition:(void *)arg1 transitionImageForPhotoToken:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 8: PUPhotoBrowserZoomTransition *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 willBeginAnimationForOperation:(int)arg2;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 willBeginForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;

@end