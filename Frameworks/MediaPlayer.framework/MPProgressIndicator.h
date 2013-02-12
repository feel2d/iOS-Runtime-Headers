/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MediaDetailScrubberControl;

@interface MPProgressIndicator : UIView {
    id _delegate;
    NSUInteger _duration;
    NSUInteger _elapsed;
    double _nextValidUpdateDate;
    NSUInteger _offset;
    BOOL _scheduledDelayedCommit;
    double _scheduledDelayedCommitDurationRemaining;
    double _scheduledDelayedCommitSetupTime;
    MediaDetailScrubberControl *_scrubberControl;
    BOOL _tracking;
}

+ (float)defaultHeight;

- (void)_commitNow;
- (void)_commitValue;
- (void)_commitValueForEndOfScrubbing;
- (void)_delayedDoCommitNow;
- (void)_ignoreElapsedTimeUpdatesForALittleBit:(float)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)cancelTracking;
- (void)dealloc;
- (NSUInteger)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrubberControl:(id)arg1 didChangeToScrubValue:(float)arg2;
- (void)scrubberControl:(id)arg1 didEnterScrubbingState:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(NSUInteger)arg1;
- (void)setElapsedTime:(NSUInteger)arg1 offset:(NSUInteger)arg2 force:(BOOL)arg3;

@end