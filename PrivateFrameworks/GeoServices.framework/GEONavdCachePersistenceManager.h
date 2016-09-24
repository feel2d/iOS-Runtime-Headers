/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdCachePersistenceManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    GEONavdCacheDBReader * _reader;
    GEONavdCacheDBWriter * _writer;
}

- (void)_deleteFromDiskWithKey:(id)arg1;
- (void)_deleteRowWithRowId:(int)arg1;
- (int)_dumpToDiskWithKey:(id)arg1 value:(id)arg2;
- (id)_entryWithRowId:(int)arg1;
- (void)_enumerateAllEntriesWithHandler:(id /* block */)arg1;
- (void)_enumerateAllForCacheEntriesWithHandler:(id /* block */)arg1;
- (double)_nextTimeStampForRefreshTimer;
- (int)_numberOfEntries;
- (id)_readValueWithKey:(id)arg1;
- (void)_removeAllEntries;
- (void)_removeOldFormatCache;
- (int)_rowIdOfKey:(id)arg1;
- (id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1;
- (int)_threadUnsafeRowIdOfKey:(id)arg1;
- (id)initWithPath:(id)arg1;

@end