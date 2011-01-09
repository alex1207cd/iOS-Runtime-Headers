/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADTableCellProperties;



@interface OADTableCell : NSObject 
{
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    NSInteger mRowSpan;
    NSInteger mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    NSInteger mTopRow;
    NSInteger mLeftColumn;
}


- (id)init;
- (void)dealloc;
- (id)textBody;
- (void)setTextBody:(id)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;
- (NSInteger)spanAlongDir:(NSInteger)arg1;
- (NSInteger)rowSpan;
- (void)setRowSpan:(NSInteger)arg1;
- (NSInteger)gridSpan;
- (void)setGridSpan:(NSInteger)arg1;
- (BOOL)horzMerge;
- (void)setHorzMerge:(BOOL)arg1;
- (BOOL)vertMerge;
- (void)setVertMerge:(BOOL)arg1;
- (NSInteger)topRow;
- (void)setTopRow:(NSInteger)arg1;
- (NSInteger)leftColumn;
- (void)setLeftColumn:(NSInteger)arg1;

@end
