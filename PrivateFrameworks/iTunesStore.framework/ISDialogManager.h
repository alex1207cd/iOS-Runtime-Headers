/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISRemoteObserver, NSMutableSet;



@interface ISDialogManager : NSObject 
{
    NSMutableSet *_userNotifications;
    NSUInteger _passwordPromptCount;
    ISRemoteObserver *_remoteObserver;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)cancelDialogWithTag:(NSInteger)arg1;
- (BOOL)presentDialog:(id)arg1;
- (BOOL)presentDialog:(id)arg1 forClients:(id)arg2;
- (id)presentDialogForError:(id)arg1;
- (BOOL)promptForPassword:(id)arg1 account:(id)arg2;
- (BOOL)beginWatchingDaemonForObserver:(id)arg1;
- (void)endWatchingDaemonForObserver:(id)arg1 afterDeath:(BOOL)arg2;
- (void)_dialogFromDaemon:(id)arg1;
- (BOOL)isPromptingForPassword;
- (void)userNotificationDidFinish:(id)arg1 responseFlags:(unsigned long)arg2;
- (void)userNotificationFailed:(id)arg1;
- (BOOL)_alreadyShowingDialog:(id)arg1;
- (id)_createPasswordDialogForMessage:(id)arg1 account:(id)arg2;
- (BOOL)_handlePasswordDialogResponse:(id)arg1 flags:(unsigned long)arg2;
- (void)_presentUserNotification:(id)arg1;
- (void)_cancelPasswordPrompt;

@end
