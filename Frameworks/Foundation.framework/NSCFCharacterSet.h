/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSCFCharacterSet : NSMutableCharacterSet 
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)retain;
- (oneway void)release;
- (NSUInteger)retainCount;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (id)bitmapRepresentation;
- (id)invertedSet;
- (void)addCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)removeCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)invert;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (Class)classForArchiver;
- (Class)classForKeyedArchiver;
- (void)encodeWithCoder:(id)arg1;

@end
