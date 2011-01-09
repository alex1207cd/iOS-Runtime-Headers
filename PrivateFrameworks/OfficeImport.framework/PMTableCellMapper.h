/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableCell, CMStyle;



@interface PMTableCellMapper : CMMapper 
{
    OADTableCell *mCell;
    CMStyle *mStyle;
    NSInteger mColIndex;
    float mWidth;
}


- (id)initWithOadTableCell:(id)arg1 columnIndex:(NSInteger)arg2 parent:(id)arg3;
- (void)dealloc;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (float)width;
- (void)mapBordersWithState:(id)arg1;
- (void)mapCellPropertiesWithState:(id)arg1 textAnchor:(NSInteger)arg2;

@end
