/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCharacterSet;



@interface _NSPlaceholderCharacterSet : NSCharacterSet 
{
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { 
        unsigned int _inverted : 1; 
        unsigned int _builtin : 1; 
        unsigned int _isCF : 1; 
        unsigned int _reserved : 29; 
    } _flags;
}


- (id)initWithSet:(id)arg1 options:(NSUInteger)arg2;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (void)_expandInverted;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)bitmapRepresentation;
- (BOOL)isEmpty;
- (id)invertedSet;
- (id)autorelease;
- (id)retain;
- (NSUInteger)retainCount;
- (void)release;
- (void)dealloc;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end
