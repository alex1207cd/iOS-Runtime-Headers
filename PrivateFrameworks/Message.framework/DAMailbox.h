/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAFolder;



@interface DAMailbox : MailboxUid 
{
    DAFolder *_DAFolder;
}


- (id)initWithName:(id)arg1 attributes:(NSUInteger)arg2 account:(id)arg3 folder:(id)arg4;
- (id)description;
- (id)DAFolder;
- (void)setDAFolder:(id)arg1;
- (id)folderID;
- (id)URLStringWithAccount:(id)arg1;
- (void)dealloc;

@end
