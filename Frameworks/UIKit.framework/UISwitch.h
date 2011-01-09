/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UISwitch : UIControl <NSCoding>
{
    id _control;
}

@property(getter=isOn) BOOL on;


- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1;
- (NSUInteger)state;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(NSUInteger)arg3;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(NSUInteger)arg3;
- (id)_scriptingInfo;
- (void)setAlternateColors:(BOOL)arg1;

@end
