/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoView, UINavigationBar;



@interface MPVideoTransferTransitionController : MPTransitionController 
{
    MPVideoView *_inflightVideoView;
    UINavigationBar *_portraitNavigationBar;
}

@property(retain) UINavigationBar *portraitNavigationBar; /* unknown property attribute: V_portraitNavigationBar */


- (id)init;
- (void)dealloc;
- (void)transition:(NSUInteger)arg1;
- (void)_animationDidStop;
- (void)_prepareViews;
- (void)_transformView:(id)arg1 forOrientation:(NSInteger)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_updateStatusBar;
- (id)portraitNavigationBar;
- (void)setPortraitNavigationBar:(id)arg1;

@end
