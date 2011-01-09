/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDRStrokePattern, GQDColor;



@interface GQDRStroke : NSObject <GQDNameMappable>
{
    float mMiterLimit;
    float mWidth;
    NSInteger mCap;
    NSInteger mJoin;
    GQDColor *mColor;
    GQDRStrokePattern *mPattern;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (float)miterLimit;
- (float)width;
- (NSInteger)cap;
- (NSInteger)join;
- (id)color;
- (id)pattern;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
