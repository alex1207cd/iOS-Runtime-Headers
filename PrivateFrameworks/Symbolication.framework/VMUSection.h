/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString;



@interface VMUSection : NSObject 
{
    NSString *_sectionName;
    NSString *_segmentName;
    unsigned long long _addr;
    unsigned long long _size;
    NSUInteger _offset;
    NSUInteger _align;
    NSUInteger _reloff;
    NSUInteger _nreloc;
    NSUInteger _flags;
    NSUInteger _reserved1;
    NSUInteger _reserved2;
}


- (BOOL)isSection32;
- (BOOL)isSection64;
- (id)sectionName;
- (id)segmentName;
- (unsigned long long)addr;
- (unsigned long long)size;
- (NSUInteger)offset;
- (NSUInteger)align;
- (NSUInteger)reloff;
- (NSUInteger)nreloc;
- (NSUInteger)flags;
- (NSUInteger)reserved1;
- (NSUInteger)reserved2;
- (id)description;
- (void)dealloc;

@end
