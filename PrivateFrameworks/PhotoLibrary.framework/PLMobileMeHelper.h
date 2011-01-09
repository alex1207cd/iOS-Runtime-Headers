/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray, NSArray, NSMutableData, NSURLConnection, NSMutableURLRequest;



@interface PLMobileMeHelper : NSObject 
{
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
    id _delegate;
    BOOL _performedFullAccountScan;
    NSArray *_albums;
    NSMutableArray *_usernamesToCheck;
    NSMutableData *_responseData;
    NSInteger _lastStatusCode;
}

+ (void)initialize;
+ (id)_copyPasswordForUsername:(id)arg1;
+ (id)_createAlbumFetchRequestForUsernames:(id)arg1 includeTimeStamp:(BOOL)arg2;
+ (id)serviceName;
+ (id)userAgentString;
+ (id)languageString;

- (id)init;
- (void)dealloc;
- (BOOL)canPostToDotMac;
- (void)setDelegate:(id)arg1;
- (void)cancel;
- (id)albums;
- (id)preferredUsername;
- (id)_accountsWeThinkAreValid;
- (void)_noValidAccountsFound;
- (void)enableApplicationNetworkFlags:(BOOL)arg1;
- (void)validateAlbums;
- (BOOL)_setAlbumsFromServerResponse:(id)arg1;
- (BOOL)canValidateAlbums;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;

@end
