/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSDate, ASEmailItem, NSString, NSNumber;



@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding>
{
    NSNumber *_instanceType;
    NSDate *_recurrenceId;
    NSMutableDictionary *_placeHolder;
    NSInteger _meetingClassType;
    ASEmailItem *_parentEmailItem;
    NSString *_cachedParentFolderId;
    NSString *_cachedParentServerId;
}


- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)arg1 forCCPT:(NSInteger)arg2;
- (id)asParseRules;
- (void)_determineSelfness;
- (void)postProcessApplicationData;
- (id)_defaultCalendarFolder;
- (void*)_copyFirstExchangeCalendarInFirstExchangeStore:(BOOL)arg1;
- (BOOL)_bailIfNotNewestData;
- (BOOL)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 treatNullsAsDeletes:(BOOL)arg3;
- (BOOL)_shouldKeepLocalExceptions;
- (BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)_setReminderSecsBefore:(id)arg1;
- (void)takeValuesFromParentEmail;
- (void)setOrganizer:(id)arg1;
- (id)exceptionDate;
- (void)setExceptionDate:(id)arg1;
- (void)setDTStamp:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)cachedOrganizerIsSelf;
- (id)instanceType;
- (void)setInstanceType:(id)arg1;
- (id)recurrenceId;
- (void)setRecurrenceId:(id)arg1;
- (NSInteger)meetingClassType;
- (void)setMeetingClassType:(NSInteger)arg1;
- (id)cachedParentFolderId;
- (void)setCachedParentFolderId:(id)arg1;
- (id)cachedParentServerId;
- (void)setCachedParentServerId:(id)arg1;

@end
