/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UILabel, UITabBarButtonBadge, UITabBarSelectionIndicatorView;



@interface UITabBarButton : UIControl 
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _hitRect;
    UIView *_info;
    UILabel *_label;
    UITabBarButtonBadge *_badge;
    UITabBarSelectionIndicatorView *_selectedIndicator;
    BOOL _onState;
    BOOL _barHeight;
    BOOL _badgeAnimated;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _infoInsets;
}

+ (id)_defaultLabelFont;
+ (id)_defaultLabelColor;
+ (id)_donePushButton;

- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (void)_setTabBarHitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tabBarHitRect;
- (void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2;
- (void)_setSelected:(BOOL)arg1;
- (void)_positionBadge;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_setBadgeAnimated:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_setOn:(BOOL)arg1;
- (BOOL)_isOn;
- (void)_setBarHeight:(float)arg1;
- (BOOL)_useBarHeight;
- (id)_scriptingInfo;

@end
