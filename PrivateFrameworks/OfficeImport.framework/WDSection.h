/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSDate, WDBorder, WDText, WDDocument;



@interface WDSection : NSObject 
{
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    WDDocument *mDocument;
    WDText *mText;
    WDText *mEvenPageHeader;
    WDText *mOddPageHeader;
    WDText *mFirstPageHeader;
    WDText *mEvenPageFooter;
    WDText *mOddPageFooter;
    WDText *mFirstPageFooter;
    struct { 
        WDBorder *topBorder; 
        BOOL topBorderOverridden; 
        WDBorder *leftBorder; 
        BOOL leftBorderOverridden; 
        WDBorder *bottomBorder; 
        BOOL bottomBorderOverridden; 
        WDBorder *rightBorder; 
        BOOL rightBorderOverridden; 
        NSInteger breakType; 
        BOOL breakTypeOverridden; 
        NSUInteger pageWidth; 
        BOOL pageWidthOverridden; 
        NSUInteger pageHeight; 
        BOOL pageHeightOverridden; 
        NSInteger pageOrientation; 
        BOOL pageOrientationOverridden; 
        NSUInteger leftMargin; 
        BOOL leftMarginOverridden; 
        NSUInteger rightMargin; 
        BOOL rightMarginOverridden; 
        NSUInteger topMargin; 
        BOOL topMarginOverridden; 
        NSUInteger bottomMargin; 
        BOOL bottomMarginOverridden; 
        NSUInteger headerMargin; 
        BOOL headerMarginOverridden; 
        NSUInteger footerMargin; 
        BOOL footerMarginOverridden; 
        NSUInteger gutterMargin; 
        BOOL gutterMarginOverridden; 
        NSInteger borderDepth; 
        BOOL borderDepthOverridden; 
        NSInteger borderDisplay; 
        BOOL borderDisplayOverridden; 
        NSInteger borderOffset; 
        BOOL borderOffsetOverridden; 
        short lineNumberStart; 
        BOOL lineNumberStartOverridden; 
        unsigned short lineNumberIncrement; 
        BOOL lineNumberIncrementOverridden; 
        short lineNumberDistance; 
        BOOL lineNumberDistanceOverridden; 
        NSInteger lineNumberRestart; 
        BOOL lineNumberRestartOverridden; 
        NSInteger pageNumberFormat; 
        BOOL pageNumberFormatOverridden; 
        unsigned short pageNumberStart; 
        BOOL pageNumberStartOverridden; 
        BOOL pageNumberRestart; 
        BOOL pageNumberRestartOverridden; 
        NSInteger chapterNumberSeparator; 
        BOOL chapterNumberSeparatorOverridden; 
        NSMutableArray *columnWidths; 
        NSMutableArray *columnSpaces; 
        unsigned short columnCount; 
        BOOL columnCountOverridden; 
        BOOL columnsEqualWidth; 
        BOOL columnsEqualWidthOverridden; 
        NSInteger columnSpace; 
        BOOL columnSpaceOverridden; 
        NSInteger verticalJustification; 
        BOOL verticalJustificationOverridden; 
        BOOL titlePage; 
        BOOL titlePageOverridden; 
        BOOL formattingChanged; 
        BOOL formattingChangedOverridden; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        BOOL indexToAuthorIDOfFormattingChangeOverridden; 
        NSDate *formattingChangeDate; 
        BOOL formattingChangeDateOverridden; 
    } mOriginalProperties;
    struct { 
        WDBorder *topBorder; 
        BOOL topBorderOverridden; 
        WDBorder *leftBorder; 
        BOOL leftBorderOverridden; 
        WDBorder *bottomBorder; 
        BOOL bottomBorderOverridden; 
        WDBorder *rightBorder; 
        BOOL rightBorderOverridden; 
        NSInteger breakType; 
        BOOL breakTypeOverridden; 
        NSUInteger pageWidth; 
        BOOL pageWidthOverridden; 
        NSUInteger pageHeight; 
        BOOL pageHeightOverridden; 
        NSInteger pageOrientation; 
        BOOL pageOrientationOverridden; 
        NSUInteger leftMargin; 
        BOOL leftMarginOverridden; 
        NSUInteger rightMargin; 
        BOOL rightMarginOverridden; 
        NSUInteger topMargin; 
        BOOL topMarginOverridden; 
        NSUInteger bottomMargin; 
        BOOL bottomMarginOverridden; 
        NSUInteger headerMargin; 
        BOOL headerMarginOverridden; 
        NSUInteger footerMargin; 
        BOOL footerMarginOverridden; 
        NSUInteger gutterMargin; 
        BOOL gutterMarginOverridden; 
        NSInteger borderDepth; 
        BOOL borderDepthOverridden; 
        NSInteger borderDisplay; 
        BOOL borderDisplayOverridden; 
        NSInteger borderOffset; 
        BOOL borderOffsetOverridden; 
        short lineNumberStart; 
        BOOL lineNumberStartOverridden; 
        unsigned short lineNumberIncrement; 
        BOOL lineNumberIncrementOverridden; 
        short lineNumberDistance; 
        BOOL lineNumberDistanceOverridden; 
        NSInteger lineNumberRestart; 
        BOOL lineNumberRestartOverridden; 
        NSInteger pageNumberFormat; 
        BOOL pageNumberFormatOverridden; 
        unsigned short pageNumberStart; 
        BOOL pageNumberStartOverridden; 
        BOOL pageNumberRestart; 
        BOOL pageNumberRestartOverridden; 
        NSInteger chapterNumberSeparator; 
        BOOL chapterNumberSeparatorOverridden; 
        NSMutableArray *columnWidths; 
        NSMutableArray *columnSpaces; 
        unsigned short columnCount; 
        BOOL columnCountOverridden; 
        BOOL columnsEqualWidth; 
        BOOL columnsEqualWidthOverridden; 
        NSInteger columnSpace; 
        BOOL columnSpaceOverridden; 
        NSInteger verticalJustification; 
        BOOL verticalJustificationOverridden; 
        BOOL titlePage; 
        BOOL titlePageOverridden; 
        BOOL formattingChanged; 
        BOOL formattingChangedOverridden; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        BOOL indexToAuthorIDOfFormattingChangeOverridden; 
        NSDate *formattingChangeDate; 
        BOOL formattingChangeDateOverridden; 
    } mTrackedProperties;
}


- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (NSInteger)resolveMode;
- (void)setResolveMode:(NSInteger)arg1;
- (id)document;
- (id)text;
- (id)oddPageHeader;
- (id)evenPageHeader;
- (id)firstPageHeader;
- (id)oddPageFooter;
- (id)evenPageFooter;
- (id)firstPageFooter;
- (NSInteger)breakType;
- (void)setBreakType:(NSInteger)arg1;
- (BOOL)isBreakTypeOverridden;
- (unsigned long)pageWidth;
- (void)setPageWidth:(unsigned long)arg1;
- (BOOL)isPageWidthOverridden;
- (unsigned long)pageHeight;
- (void)setPageHeight:(unsigned long)arg1;
- (BOOL)isPageHeightOverridden;
- (NSInteger)pageOrientation;
- (void)setPageOrientation:(NSInteger)arg1;
- (BOOL)isPageOrientationOverridden;
- (unsigned long)leftMargin;
- (void)setLeftMargin:(unsigned long)arg1;
- (BOOL)isLeftMarginOverridden;
- (unsigned long)rightMargin;
- (void)setRightMargin:(unsigned long)arg1;
- (BOOL)isRightMarginOverridden;
- (unsigned long)topMargin;
- (void)setTopMargin:(unsigned long)arg1;
- (BOOL)isTopMarginOverridden;
- (unsigned long)bottomMargin;
- (void)setBottomMargin:(unsigned long)arg1;
- (BOOL)isBottomMarginOverridden;
- (unsigned long)headerMargin;
- (void)setHeaderMargin:(unsigned long)arg1;
- (BOOL)isHeaderMarginOverridden;
- (unsigned long)footerMargin;
- (void)setFooterMargin:(unsigned long)arg1;
- (BOOL)isFooterMarginOverridden;
- (unsigned long)gutterMargin;
- (void)setGutterMargin:(unsigned long)arg1;
- (BOOL)isGutterMarginOverridden;
- (id)topBorder;
- (id)mutableTopBorder;
- (BOOL)isTopBorderOverridden;
- (id)leftBorder;
- (id)mutableLeftBorder;
- (BOOL)isLeftBorderOverridden;
- (id)bottomBorder;
- (id)mutableBottomBorder;
- (BOOL)isBottomBorderOverridden;
- (id)rightBorder;
- (id)mutableRightBorder;
- (BOOL)isRightBorderOverridden;
- (NSInteger)borderDepth;
- (void)setBorderDepth:(NSInteger)arg1;
- (BOOL)isBorderDepthOverridden;
- (NSInteger)borderDisplay;
- (void)setBorderDisplay:(NSInteger)arg1;
- (BOOL)isBorderDisplayOverridden;
- (NSInteger)borderOffset;
- (void)setBorderOffset:(NSInteger)arg1;
- (BOOL)isBorderOffsetOverridden;
- (short)lineNumberStart;
- (void)setLineNumberStart:(short)arg1;
- (BOOL)isLineNumberStartOverridden;
- (unsigned short)lineNumberIncrement;
- (void)setLineNumberIncrement:(unsigned short)arg1;
- (BOOL)isLineNumberIncrementOverridden;
- (short)lineNumberDistance;
- (void)setLineNumberDistance:(short)arg1;
- (BOOL)isLineNumberDistanceOverridden;
- (NSInteger)lineNumberRestart;
- (void)setLineNumberRestart:(NSInteger)arg1;
- (BOOL)isLineNumberRestartOverridden;
- (NSInteger)pageNumberFormat;
- (void)setPageNumberFormat:(NSInteger)arg1;
- (BOOL)isPageNumberFormatOverridden;
- (unsigned short)pageNumberStart;
- (void)setPageNumberStart:(unsigned short)arg1;
- (BOOL)isPageNumberStartOverridden;
- (BOOL)pageNumberRestart;
- (void)setPageNumberRestart:(BOOL)arg1;
- (BOOL)isPageNumberRestartOverridden;
- (NSInteger)chapterNumberSeparator;
- (void)setChapterNumberSeparator:(NSInteger)arg1;
- (BOOL)isChapterNumberSeparatorOverridden;
- (unsigned short)columnCount;
- (void)setColumnCount:(unsigned short)arg1;
- (BOOL)isColumnCountOverridden;
- (unsigned long)columnWidthAt:(NSUInteger)arg1;
- (void)appendColumnWidth:(unsigned long)arg1;
- (BOOL)isLastColumnWidthDefined;
- (unsigned long)columnSpaceAt:(NSUInteger)arg1;
- (void)appendColumnSpace:(unsigned long)arg1;
- (BOOL)columnsEqualWidth;
- (void)setColumnsEqualWidth:(BOOL)arg1;
- (BOOL)isColumnsEqualWidthOverridden;
- (long)columnSpace;
- (void)setColumnSpace:(long)arg1;
- (BOOL)isColumnSpaceOverridden;
- (NSInteger)verticalJustification;
- (void)setVerticalJustification:(NSInteger)arg1;
- (BOOL)isVerticalJustificationOverridden;
- (BOOL)titlePage;
- (void)setTitlePage:(BOOL)arg1;
- (BOOL)isTitlePageOverridden;
- (BOOL)formattingChanged;
- (void)setFormattingChanged:(BOOL)arg1;
- (BOOL)isFormattingChangedOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (id)formattingChangeDate;
- (void)setFormattingChangeDate:(id)arg1;
- (BOOL)isFormattingChangeDateOverridden;

@end
