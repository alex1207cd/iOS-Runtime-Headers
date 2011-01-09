/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADCustomDash : OADDash 
{
    NSMutableArray *mStops;
    BOOL mAreStopsOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDefaults;
- (void)dealloc;
- (NSUInteger)stopCount;
- (float)dashAtIndex:(NSUInteger)arg1;
- (float)spaceAtIndex:(NSUInteger)arg1;
- (void)addStopWithDash:(float)arg1 space:(float)arg2;
- (id)stops;
- (void)setStops:(id)arg1;
- (BOOL)areStopsOverridden;

@end
