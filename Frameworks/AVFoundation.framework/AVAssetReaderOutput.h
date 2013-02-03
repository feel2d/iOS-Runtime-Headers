/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetReaderOutputInternal;

@interface AVAssetReaderOutput : NSObject {
    AVAssetReaderOutputInternal *_internal;
}

@property(readonly) NSString *mediaType;

- (id)_asset;
- (void)_cancelReading;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (NSInteger)_extractionID;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_figAssetReaderDecodeError;
- (id)_figAssetReaderExtractionOptions;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(NSInteger)arg1;
- (BOOL)_prepareForReadingReturningError:(id*)arg1;
- (void)_setExtractionID:(NSInteger)arg1;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader { }*)arg1;
- (void)_setStatus:(NSInteger)arg1;
- (NSInteger)_status;
- (BOOL)_trimsSampleDurations;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)mediaType;
- (void)release;
- (id)retain;

@end