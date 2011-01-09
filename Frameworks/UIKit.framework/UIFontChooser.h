/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextField, UITable;



@interface UIFontChooser : UIView <UITextFieldDelegate>
{
    UITable *_nameTable;
    UITable *_sizeTable;
    UITextField *_sizeField;
    struct __CFArray { } *_familyNames;
    id _delegate;
    NSUInteger _sizes[15];
    NSUInteger _sizeBeforeEditing;
}

+ (id)sharedFontChooser;

- (id)_tableWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_nameTableFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_separatorFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_fieldBackgroundFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sizeFieldFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sizeTableFrame;
- (void)_updateSublayerFrames;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)numberOfRowsInTable:(id)arg1;
- (id)table:(id)arg1 cellForRow:(NSInteger)arg2 column:(id)arg3;
- (void)selectFamilyName:(id)arg1;
- (void)selectSize:(float)arg1;
- (void)selectFont:(id)arg1;
- (void)acceptSizeFromSizeField;
- (void)_finishedEditing:(id)arg1;
- (void)tableSelectionDidChange:(id)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (id)selectedFamilyName;
- (float)selectedSize;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
