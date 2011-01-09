/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSCalendar : NSObject <NSCopying, NSCoding>
{
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)currentCalendar;
+ (id)autoupdatingCurrentCalendar;

- (id)init;
- (unsigned long)_cfTypeID;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)calendarIdentifier;
- (void)setLocale:(id)arg1;
- (id)locale;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)setFirstWeekday:(NSUInteger)arg1;
- (NSUInteger)firstWeekday;
- (void)setMinimumDaysInFirstWeek:(NSUInteger)arg1;
- (NSUInteger)minimumDaysInFirstWeek;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })minimumRangeOfUnit:(NSUInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })maximumRangeOfUnit:(NSUInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forDate:(id)arg3;
- (NSUInteger)ordinalityOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forDate:(id)arg3;
- (BOOL)rangeOfUnit:(NSUInteger)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (id)dateFromComponents:(id)arg1;
- (id)components:(NSUInteger)arg1 fromDate:(id)arg2;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(NSUInteger)arg3;
- (id)components:(NSUInteger)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(NSUInteger)arg4;
- (id)_copyLocale;
- (id)_copyTimeZone;
- (void)_setGregorianStartDate:(id)arg1;
- (id)_gregorianStartDate;
- (struct { NSInteger x1; NSInteger x2; })_minimumRangeOfUnit:(NSUInteger)arg1;
- (struct { NSInteger x1; NSInteger x2; })_maximumRangeOfUnit:(NSUInteger)arg1;
- (struct { NSInteger x1; NSInteger x2; })_rangeOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forAT:(double)arg3;
- (long)_ordinalityOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forAT:(double)arg3;
- (unsigned char)_rangeOfUnit:(NSUInteger)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4;
- (unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char *)arg2 :(void*)arg3;
- (unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char *)arg2 :(void*)arg3;
- (unsigned char)_addComponents:(double*)arg1 :(unsigned long)arg2 :(const char *)arg3 :(void*)arg4;
- (unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long)arg3 :(const char *)arg4 :(void*)arg5;

@end
