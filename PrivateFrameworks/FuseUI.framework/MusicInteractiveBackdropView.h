/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicInteractiveBackdropView : _UIBackdropView {
    double  _factor;
    double  _finalScale;
    double  _scale;
    double  _transitionProgress;
}

@property (nonatomic) double factor;
@property (nonatomic) double scale;

- (void)_updateInputBounds;
- (void)applySettings:(id)arg1;
- (float)factor;
- (id)gaussianBlurFilter;
- (float)scale;
- (void)setFactor:(float)arg1;
- (void)setScale:(float)arg1;
- (void)transitionComplete;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(float)arg2;

@end