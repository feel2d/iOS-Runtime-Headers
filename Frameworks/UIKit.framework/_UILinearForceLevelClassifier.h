/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILinearForceLevelClassifier : _UIForceLevelClassifier <UIDebuggingInformationObserver> {
    BOOL  _anyForceObservations;
    int  _impulseObservationState;
    double  _impulseSmoothingFactor;
    double  _lastForceForImpulse;
    double  _lastTimestampForImpulse;
    double  _revealThreshold;
    double  _smoothedForce;
    double  _smoothedImpulse;
    double  _smoothingFactor;
    double  _standardThreshold;
    double  _strongThreshold;
}

@property (nonatomic, readonly) double currentImpulse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) double impulseSmoothingFactor;
@property (nonatomic) double revealThreshold;
@property (nonatomic) double smoothingFactor;
@property (nonatomic) double standardThreshold;
@property (nonatomic) double strongThreshold;
@property (readonly) Class superclass;

- (float)_calculateProgressOfTouchForceValue:(float)arg1 toForceLevel:(int)arg2 minimumRequiredForceLevel:(int)arg3;
- (int)_forceLevelForTouchForceValue:(float)arg1;
- (float)_instantaneousImpulseForTouchForceValue:(float)arg1 atTimestamp:(double)arg2;
- (float)_thresholdForForceLevel:(int)arg1;
- (void)_updateForceWithTouchForceValue:(float)arg1 atTimestamp:(double)arg2;
- (void)_updateImpulseWithTouchForceValue:(float)arg1 atTimestamp:(double)arg2;
- (float)currentImpulse;
- (void)dealloc;
- (void)debuggingPropertyForKey:(id)arg1 changedToValue:(id)arg2;
- (float)impulseSmoothingFactor;
- (id)init;
- (void)observeTouchWithForceValue:(float)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)reset;
- (float)revealThreshold;
- (void)setImpulseSmoothingFactor:(float)arg1;
- (void)setRevealThreshold:(float)arg1;
- (void)setSmoothingFactor:(float)arg1;
- (void)setStandardThreshold:(float)arg1;
- (void)setStrongThreshold:(float)arg1;
- (float)smoothingFactor;
- (float)standardThreshold;
- (float)strongThreshold;
- (void)touchForceMultiplierDidChange;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(int)arg1 minimumRequiredForceLevel:(int)arg2;

@end