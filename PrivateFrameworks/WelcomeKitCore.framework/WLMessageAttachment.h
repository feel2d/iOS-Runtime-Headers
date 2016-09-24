/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMessageAttachment : NSObject {
    NSData * _data;
    NSString * _fileName;
    NSString * _guid;
    NSString * _mimeType;
    int * _rowID;
    NSString * _uti;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic) NSString *guid;
@property (nonatomic, readonly) NSString *mimeType;
@property (nonatomic) int*rowID;
@property (nonatomic, readonly) NSString *uti;

- (void).cxx_destruct;
- (id)_initWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 uti:(id)arg4;
- (id)data;
- (id)fileName;
- (id)guid;
- (id)mimeType;
- (int*)rowID;
- (void)setGuid:(id)arg1;
- (void)setRowID:(int*)arg1;
- (id)uti;

@end