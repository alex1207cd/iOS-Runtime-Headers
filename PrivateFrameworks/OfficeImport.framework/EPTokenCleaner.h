/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDSheet, SFUPointerKeyDictionary, EDName, EDFormula, EDWorkbook, EDTokens, EDResources;



@interface EPTokenCleaner : EDProcessor 
{
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    EDSheet *mCurrentSheet;
    EDFormula *mFormula;
    EDName *mParentName;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mCopying;

    EDTokens *mCopiedTokens;
    SFUPointerKeyDictionary *mContentOutOfLassoBoundsCache;
}

+ (id)tokenCleaner;

- (void)dealloc;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isObjectSupported:(id)arg1;
     /* Encoded args for previous method: B12@0:4@8 */

- (void)applyProcessorToObject:(id)arg1 withWorkbook:(id)arg2;
- (id)cleanTokens:(id)arg1 currentSheet:(id)arg2 workbook:(id)arg3;
- (id)cleanTokens:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanToken:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1 xlPtgs:(struct ChVector<XlPtg*> { struct XlPtg {} **x1; struct XlPtg {} **x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg2 current:(NSUInteger)arg3;
     /* Encoded args for previous method: B20@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8^{ChVector<XlPtg*>=^^{XlPtg}^^{XlPtg}III}12I16 */

- (NSInteger)columnFlags:(NSInteger)arg1;
- (NSInteger)removeColumnFlags:(NSInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isRowReference:(NSInteger)arg1 columnMax:(NSInteger)arg2;
     /* Encoded args for previous method: B16@0:4i8i12 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isColumnReference:(NSInteger)arg1 rowMax:(NSInteger)arg2;
     /* Encoded args for previous method: B16@0:4i8i12 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isReferenceValidInLassoForRow:(NSInteger)arg1 column:(NSInteger)arg2;
     /* Encoded args for previous method: B16@0:4i8i12 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isReferenceValidForSheet:(id)arg1 rowMin:(NSInteger)arg2 rowMax:(NSInteger)arg3 columnMin:(NSInteger)arg4 columnMax:(NSInteger)arg5;
     /* Encoded args for previous method: B28@0:4@8i12i16i20i24 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isThereContentOutsideOfLassoBoundsForSheet:(id)arg1 rowMin:(NSInteger)arg2 rowMax:(NSInteger)arg3 columnMin:(NSInteger)arg4 columnMax:(NSInteger)arg5;
     /* Encoded args for previous method: B28@0:4@8i12i16i20i24 */

- (void)updateSheet:(id)arg1 row:(NSInteger)arg2 column:(NSInteger)arg3;
- (void)updateSheet:(id)arg1 rowMin:(NSInteger)arg2 rowMax:(NSInteger*)arg3 columnMin:(NSInteger)arg4 columnMax:(NSInteger*)arg5;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanArray:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanRef:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanArea:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanRef3D:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanArea3D:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanName:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1 xlPtgs:(struct ChVector<XlPtg*> { struct XlPtg {} **x1; struct XlPtg {} **x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg2 current:(NSUInteger)arg3;
     /* Encoded args for previous method: B20@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8^{ChVector<XlPtg*>=^^{XlPtg}^^{XlPtg}III}12I16 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanNameX:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1 xlPtgs:(struct ChVector<XlPtg*> { struct XlPtg {} **x1; struct XlPtg {} **x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg2 current:(NSUInteger)arg3;
     /* Encoded args for previous method: B20@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8^{ChVector<XlPtg*>=^^{XlPtg}^^{XlPtg}III}12I16 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanFunc:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanFuncVar:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8 */

- (void)prepareForCopyingTokens:(struct ChVector<XlPtg*> { struct XlPtg {} **x1; struct XlPtg {} **x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg1 current:(NSUInteger)arg2;
- (void)copyToCleanedTokens:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isLinkReferenceIndexSupported:(NSUInteger)arg1 allowExternal:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
     /* Encoded args for previous method: B16@0:4I8B12 */

- (id)worksheetFromLinkReferenceIndex:(NSUInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)cleanName:(struct XlPtg { struct ChVector<ChBYTE*> {} *x1; struct ChVector<ChUINT4> {} *x2; NSInteger x3; NSInteger x4; }*)arg1 nameIndex:(NSUInteger)arg2 sheetIndex:(NSUInteger)arg3 xlPtgs:(struct ChVector<XlPtg*> { struct XlPtg {} **x1; struct XlPtg {} **x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg4 current:(NSUInteger)arg5;
     /* Encoded args for previous method: B28@0:4^{XlPtg=^{ChVector<ChBYTE*>}^{ChVector<ChUINT4>}ii}8I12I16^{ChVector<XlPtg*>=^^{XlPtg}^^{XlPtg}III}20I24 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)checkFunctionId:(NSInteger)arg1;
     /* Encoded args for previous method: B12@0:4i8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)checkSupportedAddInName:(id)arg1 externalLink:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
     /* Encoded args for previous method: B16@0:4@8B12 */

- (void)updateWorksheet:(id)arg1 row:(NSInteger)arg2 column:(NSInteger)arg3 inDictionary:(id)arg4;
- (void)applyMaxCellsInName:(id)arg1;
- (id)reportWarning:(id)arg1;
- (id)reportWarning:(id)arg1 parameter:(id)arg2;

@end
