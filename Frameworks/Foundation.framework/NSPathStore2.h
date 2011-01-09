/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSPathStore2 : NSString 
{
    NSUInteger _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathStoreWithCharacters:(const unsigned short*)arg1 length:(NSUInteger)arg2;
+ (id)pathWithComponents:(id)arg1;

- (NSUInteger)length;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToString:(id)arg1;
- (id)pathComponents;
- (BOOL)isAbsolutePath;
- (id)lastPathComponent;
- (id)stringByDeletingLastPathComponent;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)pathExtension;
- (id)stringByDeletingPathExtension;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByExpandingTildeInPath;
- (id)_stringByStandardizingPathUsingCache:(BOOL)arg1;
- (id)stringByStandardizingPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1;
- (id)stringByResolvingSymlinksInPath;

@end
