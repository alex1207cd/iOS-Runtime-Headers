/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSMutableDictionary, NSLock, NSString;



@interface CPDistributedNotificationCenter : NSObject 
{
    NSString *_name;
    NSLock *_lock;
    NSString *_targetedIdentifier;
    struct __CFRunLoopSource { } *_receiveNotificationSource;
    BOOL _isServer;
    NSMutableDictionary *_sendPorts;
}

+ (id)centerNamed:(id)arg1;

- (id)_initWithServerName:(id)arg1;
- (void)dealloc;
- (id)name;
- (id)targetedIdentifier;
- (void)setTargetedIdentifier:(id)arg1;
- (void)_checkIn;
- (void)_checkOut;
- (void)_notificationServerWasRestarted;
- (void)startDeliveringNotificationsToMainThread;
- (void)stopDeliveringNotificationsToMainThread;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (void)runServerOnCurrentThread;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (BOOL)postNotificationName:(id)arg1 userInfo:(id)arg2 toTargetedIdentifier:(id)arg3;
- (void)_receivedCheckIn:(NSUInteger)arg1 targetedIdentifier:(id)arg2;
- (void)_receivedCheckOut:(struct __CFMachPort { }*)arg1;

@end
