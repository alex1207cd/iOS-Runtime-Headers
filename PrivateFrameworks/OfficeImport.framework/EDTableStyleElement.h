/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDDifferentialStyle;



@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying>
{
    EDCollection *mDifferentialStyles;
    NSInteger mType;
    NSUInteger mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}

+ (id)tableStyleElementWithResources:(id)arg1;

- (id)initWithResources:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSInteger)key;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (NSUInteger)bandSize;
- (void)setBandSize:(NSUInteger)arg1;
- (id)differentialStyle;
- (void)setDifferentialStyle:(id)arg1;
- (void)setDifferentialStyleWithIndex:(NSUInteger)arg1;

@end
