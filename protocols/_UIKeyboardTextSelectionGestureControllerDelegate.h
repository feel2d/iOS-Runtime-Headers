/* Generated by RuntimeBrowser.
 */

@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>

@required

- (UIKeyboardTaskQueue *)taskQueue;
- (_UIKeyboardTextSelectionController *)textSelectionController;

@optional

- (void)didEndGesture;
- (BOOL)hasMarkedText;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(BOOL)arg3;
- (double)timestampOfLastTouchesEnded;
- (BOOL)transitionInProgress;
- (void)willBeginGesture;

@end