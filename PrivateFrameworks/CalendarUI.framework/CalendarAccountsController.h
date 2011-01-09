/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class NSMutableDictionary, AccountSettingsAccountManager;



@interface CalendarAccountsController : NSObject 
{
    NSMutableDictionary *_lastCalendarRefreshDates;
    NSMutableDictionary *_lastStoreRefreshDates;
    NSMutableDictionary *_lastStoreListingRefreshDates;
    AccountSettingsAccountManager *_accountManager;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)accountManager;
- (id)titleForStore:(void*)arg1;
- (id)accountTypeTitleForStore:(void*)arg1;
- (BOOL)calendarNeedsRefresh:(void*)arg1;
- (BOOL)storeNeedsRefresh:(void*)arg1;
- (BOOL)storeListingNeedsRefresh:(void*)arg1;
- (void)refreshCalendar:(void*)arg1;
- (void)refreshStore:(void*)arg1;
- (void)refreshListingForStore:(void*)arg1;

@end
