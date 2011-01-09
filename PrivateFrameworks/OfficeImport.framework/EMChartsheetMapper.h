/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDChartSheet, EDChart;



@interface EMChartsheetMapper : EMSheetMapper 
{
    EDChartSheet *mChartSheet;
    EDChart *mChart;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBox;
}


- (id)initWithChartSheet:(id)arg1 parent:(id)arg2;
- (NSInteger)width;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
