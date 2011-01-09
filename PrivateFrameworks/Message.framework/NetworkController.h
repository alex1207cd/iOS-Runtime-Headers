/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSTimer;



@interface NetworkController : NSObject 
{
    struct __SCDynamicStore { } *_store;
    NSString *_domainName;
    unsigned int _waitingForDialToFinish : 1;
    unsigned int _checkedNetwork : 1;
    unsigned int _isNetworkUp : 1;
    unsigned int _isFatPipe : 1;
    unsigned int _edgeRequested : 1;
    NSTimer *_notificationTimer;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)isNetworkUp;
- (BOOL)isFatPipe;
- (BOOL)inAirplaneMode;
- (id)domainName;
- (BOOL)isHostReachable:(id)arg1;
- (id)primaryEthernetAddressAsString;
- (void)registerCTServerRunLoopSource;
- (id)IMEI;
- (id)edgeInterfaceName;
- (BOOL)isEdgeUp;
- (void)bringUpEdge;
- (void)keepEdgeUp;
- (void*)createPacketContextAssertionWithIdentifier:(id)arg1;
- (void)_postNotification:(id)arg1;
- (void)_postNetworkChangeNotification:(id)arg1;
- (void)_triggerDialForHostname:(id)arg1;
- (void)_registerForNotificationKeys:(id)arg1 patterns:(id)arg2;

@end
