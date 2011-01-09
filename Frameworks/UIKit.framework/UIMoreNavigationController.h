/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIViewController, UIMoreListController, UINavigationController;



@interface UIMoreNavigationController : UINavigationController 
{
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property(retain) NSArray *moreViewControllers;
@property BOOL allowsCustomizing;


- (id)init;
- (void)dealloc;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)moreViewControllers;
- (void)setMoreViewControllers:(id)arg1;
- (BOOL)allowsCustomizing;
- (void)setAllowsCustomizing:(BOOL)arg1;

@end
