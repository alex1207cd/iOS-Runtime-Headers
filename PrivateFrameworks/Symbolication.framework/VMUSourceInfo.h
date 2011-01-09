/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString;



@interface VMUSourceInfo : VMUAddressRange <NSCopying>
{
    NSString *_path;
    NSUInteger _lineNumber;
    NSUInteger _fileOffset;
}

+ (id)sourceInfoWithPath:(id)arg1 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 lineNumber:(NSUInteger)arg3 fileOffset:(NSUInteger)arg4;

- (id)initWithPath:(id)arg1 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 lineNumber:(NSUInteger)arg3 fileOffset:(NSUInteger)arg4;
- (id)path;
- (id)fileName;
- (NSUInteger)lineNumber;
- (NSUInteger)fileOffset;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (NSInteger)compare:(id)arg1;
- (BOOL)isEqualToSourceInfo:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
