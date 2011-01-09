/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData, NSMutableData, NSString;



@interface POP3Connection : Connection 
{
    NSMutableData *_sendBuffer;
    struct __CFDictionary { } *_listResults;
    struct __CFDictionary { } *_messageIdsByNumber;
    struct __CFDictionary { } *_numbersByMessageId;
    NSData *_apopTimeStamp;
    id _delegate;
    unsigned int _numberOfMessagesAvailable : 24;
    unsigned int _state : 4;
    unsigned int _delegateRespondsToReceivedNumberOfBytes : 1;
    unsigned int _delegateRespondsToWillRetrieveMessageNumber : 1;
    unsigned int _delegateRespondsToDidRetrieveMessageNumber : 1;
    unsigned int _hidingPassword : 1;
    NSString *_accountURL;
}


- (id)init;
- (void)dealloc;
- (id)capabilities;
- (id)authenticationMechanisms;
- (BOOL)_doBasicConnectionWithAccount:(id)arg1;
- (BOOL)connectUsingAccount:(id)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (NSInteger)quit;
- (BOOL)supportsAPOP;
- (void)disableAPOP;
- (NSInteger)doStat;
- (NSInteger)list:(NSInteger)arg1;
- (NSInteger)_getListResults;
- (NSInteger)_getUidlResults;
- (NSInteger)getMessageNumbers:(const struct __CFArray {}**)arg1 messageIdsByNumber:(const struct __CFDictionary {}**)arg2 numbersByMessageId:(const struct __CFDictionary {}**)arg3;
- (NSUInteger)serverMessageCount;
- (NSInteger)getMessageNumbers:(const struct __CFArray {}**)arg1 andMessageIdsByNumber:(const struct __CFDictionary {}**)arg2;
- (id)idForMessageNumber:(NSInteger)arg1;
- (NSInteger)_retrieveMessage:(unsigned long)arg1 ofSize:(NSUInteger)arg2 informDelegate:(BOOL)arg3 consumer:(id)arg4;
- (NSInteger)retr:(unsigned long)arg1 consumer:(id)arg2 intoQueue:(id)arg3 idsByNumber:(struct __CFDictionary { }*)arg4 allowIncomplete:(BOOL)arg5 queueStatus:(BOOL*)arg6;
- (NSInteger)retr:(unsigned long)arg1 data:(id*)arg2;
- (NSInteger)retr:(unsigned long)arg1 dataConsumer:(id)arg2;
- (NSInteger)dele:(unsigned long)arg1;
- (id)retainedMessageHeaderForMessageNumber:(unsigned long)arg1;
- (void)getTopOfMessageNumber:(unsigned long)arg1 intoMutableData:(id)arg2;
- (unsigned long)sizeOfMessageNumber:(unsigned long)arg1;
- (BOOL)messagesAvailable;
- (NSUInteger)numberOfMessagesAvailable;
- (NSInteger)fetchMessages:(struct __CFArray { }*)arg1 intoQueue:(id)arg2 serverIDsByNumber:(struct __CFDictionary { }*)arg3;
- (NSInteger)fetchMessages:(struct __CFArray { }*)arg1;
- (NSInteger)deleteMessagesOnServer:(struct __CFArray { }*)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)startTLSForAccount:(id)arg1;
- (void)getTop:(NSInteger)arg1 ofMessageNumber:(unsigned long)arg2 intoMutableData:(id)arg3;
- (NSInteger)_readMultilineResponseWithMaxSize:(NSInteger)arg1 informDelegate:(BOOL)arg2 consumer:(id)arg3;
- (NSInteger)_sendCommand:(const char *)arg1 withArguments:(id)arg2;
- (id)copyReplyLineData;
- (NSInteger)_getStatusFromReply;
- (NSInteger)_apopWithUsername:(id)arg1 password:(id)arg2;
- (NSInteger)_user:(id)arg1;
- (NSInteger)_pass:(id)arg1;

@end
