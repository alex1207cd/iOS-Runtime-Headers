/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;



@interface IMAPCommandPipeline : NSObject 
{
    NSUInteger _chunkSize;
    NSUInteger _expectedSize;
    unsigned int _full : 1;
    unsigned int _sending : 1;
    NSMutableArray *_fetchUnits;
}


- (void)dealloc;
- (void)addFetchCommandForUid:(unsigned long)arg1 fetchItem:(id)arg2 expectedLength:(unsigned long)arg3;
- (unsigned long)expectedSize;
- (void)setChunkSize:(unsigned long)arg1;
- (unsigned long)chunkSize;
- (void)setFull:(BOOL)arg1;
- (BOOL)isFull;
- (void)_removeFetchUnitMatchingResponse:(id)arg1;
- (id)failureResponsesFromSendingCommandsWithConnection:(id)arg1;
- (BOOL)isSending;

@end
