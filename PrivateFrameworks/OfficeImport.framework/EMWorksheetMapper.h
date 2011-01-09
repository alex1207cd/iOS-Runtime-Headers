/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ECColumnWidthConvertor, CMStyle, EDWorksheet;



@interface EMWorksheetMapper : EMSheetMapper 
{
    EDWorksheet *edWorksheet;
    CMStyle *mStyle;
    NSUInteger mColumnCount;
    NSUInteger mRowCount;
    double *mColumnGrid;
    double *mRowGrid;
    NSInteger mWidth;
    NSInteger mHeight;
    ECColumnWidthConvertor *mColumnWidthConvertor;
}


- (id)initWithEDWorksheet:(id)arg1 parent:(id)arg2;
- (void)dealloc;
- (BOOL)isVisible;
- (double*)columnGrid;
- (NSInteger)columnCount;
- (double*)rowGrid;
- (NSInteger)maxRowNumber;
- (double)defaultRowHeight;
- (double)xlColumnWidthToPoints:(double)arg1;
- (double)defaultColumnWidth;
- (NSInteger)width;
- (NSInteger)height;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)columnWidthConvertor;
- (void)setRowGrid;
- (void)countRowsAndColumns;
- (void)mapColumnInfosAt:(id)arg1 withState:(id)arg2;
- (void)mapGridAt:(id)arg1;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapTableAt:(id)arg1 withState:(id)arg2;
- (void)mapTableStyleAt:(id)arg1 withState:(id)arg2;

@end
