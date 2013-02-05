/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSMutableDictionary, SPXPCConnection, NSObject<OS_dispatch_queue>;

@interface SPDaemonConnection : NSObject {
    SPXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_tokens;
}

+ (id)sharedConnection;

- (id)_connection;
- (void)_resetConnection;
- (void)_sendMessage:(id)arg1 info:(id)arg2 reply:(id)arg3;
- (void)cancelQuery:(id)arg1;
- (void)dealloc;
- (void)endRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2;
- (void)indexUpdatedContent:(id)arg1 moreComing:(BOOL)arg2;
- (id)init;
- (void)preheat;
- (void)registerApplication:(id)arg1 withCategories:(id)arg2;
- (void)requestRecordUpdatesForApplication:(id)arg1 category:(id)arg2 andIDs:(id)arg3;
- (BOOL)retrieveUpdateList:(id*)arg1 forDisplayIdentifier:(id)arg2 category:(id)arg3;
- (void)searchResultWasSelected:(id)arg1 inDomain:(unsigned int)arg2 queryString:(id)arg3;
- (id)startQuery:(id)arg1;
- (void)startRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2;

@end