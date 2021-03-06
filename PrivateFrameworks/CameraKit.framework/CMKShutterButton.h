/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKShutterButton : UIButton {
    UIView * __innerView;
    UIImageView * __outerImageView;
    UIView * __outerView;
    UIActivityIndicatorView * __progressActivityIndicatorView;
    CMKTimelapseShutterRingView * __timelapseOuterView;
    int  _buttonMode;
    BOOL  _pulsing;
    BOOL  _showDisabled;
    struct CMKShutterButtonSpec { 
        float outerRingDiameter; 
        float outerRingStrokeWidth; 
        float stopSquareSideLength; 
        float stopSquareCornerRadius; 
    }  _spec;
    BOOL  _spinning;
}

@property (nonatomic, readonly) UIView *_innerView;
@property (nonatomic, readonly) UIImageView *_outerImageView;
@property (nonatomic, readonly) UIView *_outerView;
@property (nonatomic, readonly) UIActivityIndicatorView *_progressActivityIndicatorView;
@property (nonatomic, readonly) CMKTimelapseShutterRingView *_timelapseOuterView;
@property (nonatomic) int buttonMode;
@property (getter=isPulsing, nonatomic) BOOL pulsing;
@property (nonatomic) BOOL showDisabled;
@property (setter=_setSpec:, nonatomic) struct CMKShutterButtonSpec { float x1; float x2; float x3; float x4; } spec;
@property (getter=isSpinning, nonatomic) BOOL spinning;

+ (id)shutterButton;
+ (id)shutterButtonWithDesiredSpec:(struct CMKShutterButtonSpec { float x1; float x2; float x3; float x4; })arg1;
+ (id)smallShutterButton;
+ (id)tinyShutterButton;

- (void).cxx_destruct;
- (float)_borderWidthForMode:(int)arg1;
- (id)_colorForMode:(int)arg1;
- (void)_commonCMKShutterButtonInitialization;
- (float)_cornerRadiusForMode:(int)arg1;
- (float)_innerCircleDiameter;
- (id)_innerView;
- (BOOL)_isStopMode:(int)arg1;
- (id)_outerImageForMode:(int)arg1;
- (id)_outerImageView;
- (id)_outerView;
- (void)_performHighlightAnimation;
- (void)_performModeSwitchAnimationFromMode:(int)arg1 toMode:(int)arg2 animated:(BOOL)arg3;
- (id)_progressActivityIndicatorView;
- (void)_setSpec:(struct CMKShutterButtonSpec { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)_shouldUseImageViewForMode:(int)arg1;
- (BOOL)_shouldUseTimelapseOuterViewForMode:(int)arg1;
- (struct CGSize { float x1; float x2; })_sizeForMode:(int)arg1;
- (id)_timelapseOuterView;
- (void)_updateOuterAndInnerLayers;
- (void)_updateSpinningAnimations;
- (int)buttonMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isPulsing;
- (BOOL)isSpinning;
- (void)layoutSubviews;
- (void)setButtonMode:(int)arg1;
- (void)setButtonMode:(int)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPulsing:(BOOL)arg1;
- (void)setShowDisabled:(BOOL)arg1;
- (void)setSpinning:(BOOL)arg1;
- (BOOL)showDisabled;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct CMKShutterButtonSpec { float x1; float x2; float x3; float x4; })spec;

@end
