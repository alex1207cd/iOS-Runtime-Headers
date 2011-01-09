/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDResources, EDHyperlink, EDConditionalFormatting, EDReference, EDWorksheet;



@interface EDRow : EDSortedCollection <EDKeyedObject>
{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
    NSInteger mRowNumber;
    double mHeight;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mCustomHeight;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mHidden;

    NSUInteger mStyleIndex;
    EDReference *mMergedCells;
    EDConditionalFormatting *mConditionalFormatting;
    EDHyperlink *mHyperlink;
}

+ (id)rowWithResources:(id)arg1;

- (id)initWithResources:(id)arg1;
- (void)dealloc;
- (void)doneWithContent;
- (NSInteger)key;
- (NSInteger)rowNumber;
- (void)setRowNumber:(NSInteger)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isCustomHeight;
     /* Encoded args for previous method: B8@0:4 */

- (void)setCustomHeight:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isHidden;
     /* Encoded args for previous method: B8@0:4 */

- (void)setHidden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (NSUInteger)cellCount;
- (id)cellAtIndex:(NSUInteger)arg1;
- (id)cellWithColumnNumber:(NSInteger)arg1;
- (void)addCell:(id)arg1;
- (id)createCellWithColumnNumber:(NSInteger)arg1;
- (id)cellCreateIfNilWithColumnNumber:(NSInteger)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)mergedCells;
- (id)conditionalFormatting;
- (id)hyperlink;
- (void)clearBackpointers;
- (id)worksheet;
- (void)setWorksheet:(id)arg1;
- (NSUInteger)styleIndex;
- (void)setStyleIndex:(NSUInteger)arg1;
- (void)setMergedCells:(id)arg1;
- (void)setConditionalFormatting:(id)arg1;
- (void)setHyperlink:(id)arg1;

@end
