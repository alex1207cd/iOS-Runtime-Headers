/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSDecimalNumber : NSNumber 
{
    unsigned int _exponent : 8;
    unsigned int _length : 4;
    unsigned int _isNegative : 1;
    unsigned int _isCompact : 1;
    unsigned int _reserved : 1;
    unsigned int _hasExternalRefCount : 1;
    unsigned int _refs : 16;
    unsigned short _mantissa[0];
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)decimalNumberWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3;
+ (id)decimalNumberWithDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg1;
+ (id)decimalNumberWithString:(id)arg1;
+ (id)decimalNumberWithString:(id)arg1 locale:(id)arg2;
+ (id)minimumDecimalNumber;
+ (id)maximumDecimalNumber;
+ (id)zero;
+ (id)one;
+ (id)notANumber;
+ (void)setDefaultBehavior:(id)arg1;
+ (id)defaultBehavior;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithInt:(NSInteger)arg1;
+ (id)numberWithInteger:(NSInteger)arg1;
+ (id)numberWithUnsignedInt:(NSUInteger)arg1;
+ (id)numberWithUnsignedInteger:(NSUInteger)arg1;
+ (id)numberWithLong:(long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithBool:(BOOL)arg1;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3;
- (id)initWithDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (NSInteger)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (const char *)objCType;
- (double)doubleValue;
- (void)getValue:(void*)arg1;
- (id)decimalNumberByAdding:(id)arg1;
- (id)decimalNumberByAdding:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberBySubstracting:(id)arg1;
- (id)decimalNumberBySubstracting:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberBySubtracting:(id)arg1;
- (id)decimalNumberBySubtracting:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingBy:(id)arg1;
- (id)decimalNumberByMultiplyingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByDividingBy:(id)arg1;
- (id)decimalNumberByDividingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByRaisingToPower:(NSUInteger)arg1;
- (id)decimalNumberByRaisingToPower:(NSUInteger)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByRoundingAccordingToBehavior:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (NSInteger)intValue;
- (NSUInteger)unsignedIntValue;
- (long)longValue;
- (unsigned long)unsignedLongValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (float)floatValue;
- (BOOL)boolValue;

@end
