/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EDReference : NSObject <NSCopying>
{
    NSInteger mFirstRow;
    NSInteger mLastRow;
    NSInteger mFirstColumn;
    NSInteger mLastColumn;
}

+ (id)reference;
+ (id)referenceWithFirstRow:(NSInteger)arg1 lastRow:(NSInteger)arg2 firstColumn:(NSInteger)arg3 lastColumn:(NSInteger)arg4;

- (id)init;
- (id)initWithFirstRow:(NSInteger)arg1 lastRow:(NSInteger)arg2 firstColumn:(NSInteger)arg3 lastColumn:(NSInteger)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqualToReference:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSInteger)firstRow;
- (void)setFirstRow:(NSInteger)arg1;
- (NSInteger)firstColumn;
- (void)setFirstColumn:(NSInteger)arg1;
- (NSInteger)lastRow;
- (void)setLastRow:(NSInteger)arg1;
- (NSInteger)lastColumn;
- (void)setLastColumn:(NSInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)fullyAdjacentToReference:(id)arg1;
     /* Encoded args for previous method: B12@0:4@8 */

- (void)unionWithReference:(id)arg1;
- (void)unionWithMaxRow:(NSInteger)arg1 maxColumn:(NSInteger)arg2;

@end
