/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableHeaderInfo : NSObject {
    TSTCellStyle *mCellStyle;
    unsigned char mHidingState;
    unsigned short mNumberOfCells;
    float mSize;
    TSWPParagraphStyle *mTextStyle;
}

@property (nonatomic, retain) TSTCellStyle *cellStyle;
@property (nonatomic) unsigned char hidingState;
@property (nonatomic) unsigned short numberOfCells;
@property (nonatomic) float size;
@property (nonatomic, retain) TSWPParagraphStyle *textStyle;

- (id)cellStyle;
- (void)dealloc;
- (id)description;
- (unsigned char)hidingState;
- (unsigned short)numberOfCells;
- (void)setCellStyle:(id)arg1;
- (void)setHidingState:(unsigned char)arg1;
- (void)setNumberOfCells:(unsigned short)arg1;
- (void)setSize:(float)arg1;
- (void)setTextStyle:(id)arg1;
- (float)size;
- (id)textStyle;

@end
