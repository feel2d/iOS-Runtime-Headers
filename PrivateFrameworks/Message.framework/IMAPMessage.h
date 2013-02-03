/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray;

@interface IMAPMessage : MailMessage {
    struct { 
        unsigned int reserved : 26; 
        unsigned int hasCustomEncoding : 1; 
        unsigned int isPartial : 1; 
        unsigned int hasTemporaryUid : 1; 
        unsigned int isHTML : 1; 
        unsigned int isRich : 1; 
    NSArray *_customFlags;
    } _imapFlags;
    NSUInteger _size;
    NSUInteger _uid;
}

+ (void)initialize;

- (NSInteger)compareByNumberWithMessage:(id)arg1;
- (id)customFlags;
- (void)dealloc;
- (id)description;
- (BOOL)hasTemporaryUid;
- (struct { unsigned int x1 : 26; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; })imapFlags;
- (id)initWithFlags:(unsigned long)arg1 customFlags:(id)arg2 size:(NSUInteger)arg3 uid:(unsigned long)arg4;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)isPartial;
- (id)mailboxName;
- (id)messageID;
- (NSUInteger)messageSize;
- (id)originalMailboxURL;
- (id)remoteID;
- (id)remoteMailboxURL;
- (void)setHasTemporaryUid:(BOOL)arg1;
- (void)setIsPartial:(BOOL)arg1;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (void)setUid:(unsigned long)arg1;
- (unsigned long)uid;

@end