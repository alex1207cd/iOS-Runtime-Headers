/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIFont;



@interface UITableViewIndex : UIControl 
{
    NSArray *_titles;
    UIFont *_font;
    NSInteger _selectedSection;
    BOOL _pastTop;
    BOOL _pastBottom;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedSize;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedSizeToFit;
}

@property(retain) NSArray *titles;
@property(retain) UIFont *font;
@property(readonly) NSString *selectedSectionTitle;
@property(readonly) BOOL pastBottom; /* unknown property attribute: V_pastBottom */
@property(readonly) BOOL pastTop; /* unknown property attribute: V_pastTop */
@property(readonly) NSInteger selectedSection; /* unknown property attribute: V_selectedSection */


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitles:(id)arg1;
- (id)titles;
- (void)setFont:(id)arg1;
- (id)font;
- (id)selectedSectionTitle;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_selectSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)_createTouchesWithMouseEvent:(struct __GSEvent { }*)arg1 phase:(NSInteger)arg2;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)pastBottom;
- (BOOL)pastTop;
- (NSInteger)selectedSection;

@end
