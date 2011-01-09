/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSString, ISItem, <ISConcernReporterDelegate>, ISPlistParser, ISConcern;



@interface ISConcernReporter : NSObject 
{
    <ISConcernReporterDelegate> *_delegate;
    ISItem *_item;
    NSArray *_concerns;
    ISPlistParser *_requestParser;
    NSString *_comments;
    ISConcern *_concern;
}

@property(retain,readonly) NSArray *concerns;
@property(readonly) BOOL serverProvidesConcerns;
@property <ISConcernReporterDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(retain) ISConcern *concern; /* unknown property attribute: V_concern */
@property(copy) NSString *comments; /* unknown property attribute: V_comments */

+ (BOOL)canPostConcerns:(id*)arg1;

- (id)initWithItem:(id)arg1;
- (void)dealloc;
- (BOOL)fetchConcerns;
- (BOOL)postConcern;
- (id)concern;
- (id)concerns;
- (BOOL)serverProvidesConcerns;
- (void)plistParser:(id)arg1 finishedWithPlist:(id)arg2 error:(id)arg3;
- (void)plistParserWillSendDialog:(id)arg1 forPlist:(id)arg2;
- (void)plistParserWasCancelled:(id)arg1;
- (id)_createDefaultConcerns;
- (id)_createFetchListParser;
- (id)_createPostConcernParser;
- (id)_handleFetchListResponse:(id)arg1;
- (id)_handlePostConcernResponse:(id)arg1;
- (id)_httpBody;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setConcern:(id)arg1;
- (id)comments;
- (void)setComments:(id)arg1;

@end
