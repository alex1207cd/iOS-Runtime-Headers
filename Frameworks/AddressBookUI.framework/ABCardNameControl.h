/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIView, NSString, ABCardController;



@interface ABCardNameControl : UIControl 
{
    ABCardController *_cardController;
    void *_displayedPerson;
    UIView *_backgroundView;
    UIView *_nameView;
    NSString *_tagLine;
    BOOL _editable;
}

+ (id)createNameFont;
+ (id)createNameColor;
+ (id)createNameBevelColor;
+ (id)createTagLineFont;

- (id)initWithCardController:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeToFitWithMinimumHeight:(float)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setTagLine:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEditable:(BOOL)arg1;
- (id)copyTagLine;
- (id)copyCompositeNameWithTagLine:(id)arg1 isPlaceholder:(BOOL*)arg2;
- (id)fontForName:(id)arg1 withWidth:(float)arg2;
- (float)verticalOffsetForNameWithTextSize:(struct CGSize { float x1; float x2; })arg1 tagLines:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })usableNameBounds;
- (void)drawNameInView:(id)arg1 withClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)beginTrackingAt:(struct CGPoint { float x1; float x2; })arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)setNeedsDisplay;
- (struct __CFArray { }*)copyNamePropertiesForEditing:(BOOL)arg1;

@end
