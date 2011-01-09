/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSTimer;



@interface SUImageCache : ISImageCache 
{
    NSTimer *_batchCommitTimer;
    unsigned int _madeImageRequest : 1;
    struct __CFSet { } *_preloadedImageTags;
    unsigned int _delegateWantsBatchCommitMessage : 1;
}


- (void)dealloc;
- (void)cancelPendingRequests;
- (struct CGImage { }*)imageForRequest:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (struct CGImage { }*)preloadImageForRequest:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (void)noteLoadedImageForURL:(id)arg1 tag:(NSInteger)arg2;
- (void)setDelegate:(id)arg1;
- (void)beginRequestBatch;
- (void)endRequestBatch;
- (void)_cancelPendingPreloads;
- (void)_commitImageBatch;
- (void)_invalidateBatchTimer;
- (struct CGImage { }*)_imageForRequest:(id)arg1 fetchIfNecessary:(BOOL)arg2;

@end
