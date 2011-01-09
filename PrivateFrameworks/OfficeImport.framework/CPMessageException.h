/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CPMessageEntry;



@interface CPMessageException : NSException 
{
    CPMessageEntry *m_entry;
}

+ (void)initialize;
+ (id)exceptionWithMessage:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (void)raise:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
+ (void)raiseUntaggedMessage:(id)arg1;

- (id)initWithMessage:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
- (id)initWithUntaggedMessage:(id)arg1;
- (void)dealloc;
- (id)getEntry;
- (id)description;

@end
