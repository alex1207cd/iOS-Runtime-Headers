/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDRGradient : NSObject <GQDNameMappable>
{
    struct __CFArray { } *mStops;
    NSInteger mType;
    float mOpacity;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (struct __CFArray { }*)stops;
- (NSInteger)type;
- (float)opacity;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
