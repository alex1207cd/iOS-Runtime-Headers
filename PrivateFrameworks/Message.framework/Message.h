/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageStore, NSString, NSData;



@interface Message : NSObject 
{
    MessageStore *_store;
    NSUInteger _messageFlags;
    struct { 
        unsigned int colorHasBeenEvaluated : 1; 
        unsigned int colorWasSetManually : 1; 
        unsigned int redColor : 8; 
        unsigned int greenColor : 8; 
        unsigned int blueColor : 8; 
        unsigned int loadingBody : 1; 
        unsigned int unused : 5; 
    } _flags;
    NSUInteger _preferredEncoding;
    NSString *_senderAddressComment;
    NSUInteger _dateSentInterval;
    NSUInteger _dateReceivedInterval;
    double _generationTime;
    NSString *_subject;
    unsigned char _subjectPrefixLength;
    NSString *_to;
    NSString *_cc;
    NSString *_sender;
    NSString *_contentType;
    NSData *_messageIDHeaderDigest;
    NSData *_inReplyToHeaderDigest;
    NSString *_summary;
}

+ (void)initialize;
+ (id)productName;
+ (id)verboseVersion;
+ (id)frameworkVersion;
+ (id)systemVersion;
+ (id)systemBuildVersion;
+ (void)setUserAgent:(id)arg1;
+ (id)userAgent;
+ (id)mailDirectory;
+ (id)messageWithRFC822Data:(id)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;
+ (id)replyPrefixWithSpacer:(BOOL)arg1;
+ (NSUInteger)validatePriority:(NSInteger)arg1;
+ (NSUInteger)displayablePriorityForPriority:(NSInteger)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)messageStore;
- (void)setMessageStore:(id)arg1;
- (id)mailbox;
- (id)headers;
- (id)headersIfAvailable;
- (unsigned long)messageFlags;
- (void)setMessageFlags:(unsigned long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long)arg1;
- (id)messageBody;
- (id)messageBodyIfAvailable;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)messageDataIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)messageData;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (id)dataConsumerForMimePart:(id)arg1;
- (BOOL)colorHasBeenEvaluated;
- (void)setColorHasBeenEvaluated:(BOOL)arg1;
- (void)dealloc;
- (NSUInteger)messageSize;
- (id)preferredEmailAddressToReplyWith;
- (id)messageID;
- (id)messageIDHeaderDigest;
- (id)messageIDHeader;
- (void)unlockedSetMessageIDHeaderDigest:(id)arg1;
- (void)setMessageIDHeaderDigest:(id)arg1;
- (id)_messageIDHeaderDigestIvar;
- (BOOL)needsMessageIDHeader;
- (id)inReplyToHeaderDigest;
- (void)unlockedSetInReplyToHeaderDigest:(id)arg1;
- (void)setInReplyToHeaderDigest:(id)arg1;
- (id)_inReplyToHeaderDigestIvar;
- (BOOL)isMessageContentsLocallyAvailable;
- (NSUInteger)numberOfAttachments;
- (void)setPriorityFromHeaders:(id)arg1;
- (NSInteger)priority;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (BOOL)_doesDateAppearToBeSane:(id)arg1;
- (id)_copyDateFromReceivedHeadersInHeaders:(id)arg1;
- (id)_copyDateFromDateHeaderInHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (void)_setDateSentFromHeaders:(id)arg1;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)subjectAndPrefixLength:(NSUInteger*)arg1;
- (id)subjectNotIncludingReAndFwdPrefix;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)dateReceived;
- (id)dateSent;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (double)dateReceivedAsTimeIntervalSince1970;
- (BOOL)needsDateReceived;
- (double)dateSentAsTimeIntervalSince1970;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)sender;
- (id)senderIfCached;
- (void)setSender:(id)arg1;
- (id)senderAddressComment;
- (id)to;
- (id)toIfCached;
- (void)setTo:(id)arg1;
- (id)cc;
- (id)ccIfCached;
- (void)setCc:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (BOOL)shouldSetSummary;
- (id)loadMeetingExternalID;
- (id)loadMeetingData;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 sender:(id)arg4 dateReceivedTimeIntervalSince1970:(double)arg5 dateSentTimeIntervalSince1970:(double)arg6 messageIDHeaderDigest:(id)arg7 inReplyToHeaderDigest:(id)arg8 summary:(id)arg9;
- (void)setMessageInfoFromMessage:(id)arg1;
- (id)references;
- (id)remoteID;
- (unsigned long)uid;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 8; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 5; })moreMessageFlags;
- (id)path;
- (id)account;
- (void)markAsViewed;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsForwarded;
- (id)remoteMailboxURL;
- (id)originalMailboxURL;
- (id)persistentID;
- (id)bodyData;
- (id)bodyDataIsComplete:(BOOL*)arg1;
- (id)headerData;
- (id)dataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (id)dataPathForMimePart:(id)arg1;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (void)calculateAttachmentInfoFromBody:(id)arg1;
- (void)setNumberOfAttachments:(NSUInteger)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
- (void)setMutableInfoFromMessage:(id)arg1;
- (id)cachedAttributes;
- (id)URL;
- (void)setGenerationTime:(double)arg1;
- (double)generationTime;
- (NSInteger)generationCompare:(id)arg1;
- (id)defaultAlternativeInPart:(id)arg1;
- (id)bestAlternativeInPart:(id)arg1;

@end
