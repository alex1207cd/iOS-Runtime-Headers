/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSCountedSet, ISRequestInfo, ISDialog, NSMutableArray, NSURL, NSMutableSet, ISRequest;



@interface ISPlistParser : NSObject 
{
    id _delegate;
    ISRequestInfo *_requestInfo;
    unsigned int _requestWasForced : 1;
    unsigned int _postedLostFastConnection : 1;
    unsigned int _preparingFetchRequest : 1;
    unsigned int _processingDisabled : 1;
    unsigned int _watchingForFastNetwork : 1;
    NSInteger _tag;
    NSMutableArray *_operations;
    NSInteger _type;
    NSURL *_url;
    NSString *_queryString;
    ISRequest *_request;
    NSMutableSet *_pingRequests;
    NSCountedSet *_redirects;
    ISDialog *_dialog;
}


- (id)init;
- (id)initWithOperation:(id)arg1 type:(NSInteger)arg2 delegate:(id)arg3;
- (id)initWithOperations:(id)arg1 type:(NSInteger)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)setArguments:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setProcessingDisabled:(BOOL)arg1;
- (void)setQueryString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)requestInfo;
- (void)setRequestInfo:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (id)dialog;
- (id)response;
- (id)url;
- (NSInteger)tag;
- (void)setTag:(NSInteger)arg1;
- (BOOL)canParse;
- (BOOL)isParsing;
- (BOOL)isWaitingOnFastNetwork;
- (void)destroyCache;
- (BOOL)usedCache;
- (void)cancel;
- (void)fetchPlist:(BOOL)arg1;
- (void)requestWillBegin:(id)arg1;
- (void)request:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (void)requestWasCancelled:(id)arg1;
- (void)_delayedRetryFetch;
- (void)_postFakeLostFastConnection;
- (void)_bagLoadedNotification:(id)arg1;
- (void)_delayedBagLoadedNotification:(id)arg1;
- (void)_networkChanged:(id)arg1;
- (id)_clients;
- (id)_createStoreVersionForPlist:(id)arg1 error:(id*)arg2;
- (BOOL)_handleGotoActionForPlist:(id)arg1 error:(id*)arg2;
- (NSUInteger)_minimumNetworkType;
- (void)_processProtocolInformation:(id)arg1;
- (void)_processDialogFromPlist:(id)arg1;
- (id)_plistForData:(id)arg1 errorString:(id*)arg2;
- (void)_sendPlistToDelegate:(id)arg1;
- (void)_sendPlistErrorToDelegate:(id)arg1;
- (id)_createRequestForURL:(id)arg1 orOperation:(id)arg2 asPing:(BOOL)arg3;
- (void)_stopObservingBagDidLoad;
- (id)_swizzleURLsInData:(id)arg1;

@end
