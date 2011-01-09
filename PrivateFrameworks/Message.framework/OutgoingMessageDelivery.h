/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString, MailDelivery, MutableMessageHeaders, MailAccount, Message, PlainTextDocument, DeliveryAccount;



@interface OutgoingMessageDelivery : SafeObserver 
{
    Message *_message;
    MutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    NSString *_htmlBody;
    PlainTextDocument *_plainTextAlternative;
    NSArray *_otherHTMLAndAttachments;
    id _delegate;
    MailAccount *_archiveAccount;
    DeliveryAccount *_deliveryAccount;
    MailDelivery *_currentDeliveryObject;
}

+ (id)newWithMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;

- (void)dealloc;
- (id)initWithMessage:(id)arg1;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)_currentDeliveryObject;
- (id)originalHeaders;
- (NSInteger)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg1;
- (NSInteger)deliverSynchronously;
- (NSInteger)deliveryStatus;
- (id)message;
- (id)_deliveryAccountForInitializers;
- (id)account;
- (void)setDelegate:(id)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setAccount:(id)arg1;

@end
