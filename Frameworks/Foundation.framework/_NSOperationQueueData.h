/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableArray, NSOperation, NSRecursiveLock, NSMutableIndexSet;



@interface _NSOperationQueueData : NSObject 
{
    NSRecursiveLock *lock;
    NSMutableArray *operations;
    NSMutableArray *waiters;
    NSInteger maxNumOps;
    NSInteger actualMaxNumOps;
    NSInteger numExecOps;
    struct { 
        NSOperation *stqh_first; 
        NSOperation *stqh_last; 
    } readyOps[5];
    NSMutableIndexSet *tmpIndexSet;
    BOOL suspended;
    NSInteger finishedWaiter;
}



@end
