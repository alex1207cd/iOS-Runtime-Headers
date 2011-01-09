/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSURLCacheNode, NSString, NSURLQueue, NSLock, NSMutableSet;



@interface NSURLCacheInternal : NSObject 
{
    NSUInteger memoryCapacity;
    NSUInteger diskCapacity;
    NSString *diskPath;
    NSUInteger currentMemoryUsage;
    NSUInteger currentDiskUsage;
    NSMutableDictionary *memoryCache;
    NSLock *memoryCacheGuard;
    NSURLCacheNode *memoryCacheLRUHead;
    NSURLCacheNode *memoryCacheLRUTail;
    NSUInteger memoryCacheItemLengthThreshold;
    NSLock *diskCacheGuard;
    NSMutableDictionary *diskCachePendingWrites;
    NSMutableSet *diskCachePendingRemovals;
    NSURLQueue *diskCachePendingOperations;
    NSUInteger diskCacheItemLengthThreshold;
    double diskCacheTouchTime;
    struct NSLRUFileList { } *diskCacheLRUList;
    NSUInteger timerResetCount;
    NSUInteger syncSkipCount;
    struct _CFURLCache { } *_cacheRef;
    BOOL diskCacheLeftoverFilesRemovedFlag;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}


- (void)dealloc;
- (void)finalize;

@end
