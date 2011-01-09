/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSString, UIImage, NSSet;



@interface UITabBarItem : UIBarItem 
{
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    NSString *_badgeValue;
    UIView *_view;
    NSInteger _tag;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int animatedBadge : 1; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    } _tabBarItemFlags;
}

@property(retain) UIView *view;
@property BOOL viewIsCustom;
@property BOOL animatedBadge;
@property(retain) UIImage *selectedImage;
@property(retain) UIImage *unselectedImage;
@property SEL action;
@property id target;
@property(copy) NSString *badgeValue;
@property NSInteger tag; /* unknown property attribute: V_tag */


- (id)init;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(NSInteger)arg3;
- (id)initWithTabBarSystemItem:(NSInteger)arg1 tag:(NSInteger)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (void)setBadgeValue:(id)arg1;
- (id)badgeValue;
- (NSInteger)tag;
- (void)setTag:(NSInteger)arg1;
- (id)nextResponder;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(BOOL)arg2;
- (void)_updateView;
- (BOOL)isSystemItem;
- (NSInteger)systemItem;
- (void)setView:(id)arg1;
- (id)view;
- (void)setViewIsCustom:(BOOL)arg1;
- (BOOL)viewIsCustom;
- (void)setAnimatedBadge:(BOOL)arg1;
- (BOOL)animatedBadge;
- (void)setSelectedImage:(id)arg1;
- (id)selectedImage;
- (void)setUnselectedImage:(id)arg1;
- (id)unselectedImage;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (id)_internalTitle;
- (id)_internalTemplateImage;

@end
