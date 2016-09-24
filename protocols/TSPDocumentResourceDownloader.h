/* Generated by RuntimeBrowser.
 */

@protocol TSPDocumentResourceDownloader <NSObject>

@required

- (void)cancelDownloads;
- (TSUDownloadSession *)downloadWithDelegate:(id <TSUDownloadSessionDelegate>)arg1 description:(NSString *)arg2;
- (int)estimatedDownloadSize;
- (BOOL)isEstimatedDownloadSizePrecise;
- (BOOL)needsDownload;

@end