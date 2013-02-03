/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSString, NSBundle;

@interface Player : NSObject <AVAudioPlayerDelegate> {
    NSBundle *_bundle;
    NSString *_directory;
}

@property(readonly) BOOL isPlaying;

+ (void)__audioSessionInterruptionDidBegin;
+ (void)__audioSessionInterruptionDidEnd;
+ (void)__deactivateAudioSession;
+ (void)__nts_indicateEndOfQueuePlayback:(id)arg1;
+ (id)__sharedPlayQueue;
+ (id)__stringForAudioSessionError:(long)arg1;
+ (void)initialize;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

- (void)_addFileToQueue:(id)arg1;
- (id)_playerItemForFileNamed:(id)arg1;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1 bundle:(id)arg2;
- (BOOL)isPlaying;
- (void)playSoundFilesInSequence:(id)arg1;
- (void)stopAllSounds;

@end