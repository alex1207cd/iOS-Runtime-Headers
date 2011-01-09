/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary, NSMutableArray;



@interface MessageNotificationCenter : NSNotificationCenter 
{
    NSMutableDictionary *_notificationMapping;
    NSMutableArray *_queuedObjects;
    NSInteger _generationNumber;
}


- (void)dealloc;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)copyAllObserversForNotificationName:(id)arg1 andObject:(id)arg2;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_removeEntryForObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;

@end
