/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface _NABoundedQueueingStrategy : NSObject <NAQueueingStrategy> {
    unsigned int  _capacity;
    id /* block */  _overflowHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithCapacity:(unsigned int)arg1 overflowHandler:(id /* block */)arg2;

@end