/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray, NSConditionLock;



@interface RequestQueue : NSObject 
{
    NSConditionLock *_condition;
    NSMutableArray *_requests;
    NSMutableArray *_consumers;
    NSUInteger _waitingOutside;
    NSUInteger _waitingInside;
}


- (id)init;
- (void)addRequest:(id)arg1 consumer:(id)arg2;
- (void)willAddRequests:(id)arg1 consumers:(id)arg2;
- (void)addRequests:(id)arg1 consumers:(id)arg2;
- (void)processRequest:(id)arg1 consumer:(id)arg2;
- (void)_processRequests:(id)arg1 consumers:(id)arg2;
- (void)processRequests:(id)arg1 consumers:(id)arg2;
- (void)dealloc;

@end
