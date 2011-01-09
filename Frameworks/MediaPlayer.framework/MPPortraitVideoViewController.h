/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, MPPortraitInfoOverlay, MPReflectionImageView, MPPortraitTransportControls;



@interface MPPortraitVideoViewController : MPVideoViewController 
{
    MPPortraitInfoOverlay *_overlayView;
    MPReflectionImageView *_imageView;
    UINavigationBar *_navigationBar;
    MPPortraitTransportControls *_transportControls;
    unsigned int _ownsTransportControls : 1;
}

@property(readonly) BOOL ownsTransportControls;
@property(retain) UINavigationBar *navigationBar; /* unknown property attribute: V_navigationBar */


- (id)init;
- (id)initWithTransportControls:(BOOL)arg1;
- (void)dealloc;
- (void)showOverlayView;
- (BOOL)canDisplayItem:(id)arg1 withOrientation:(NSInteger)arg2;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (id)createAlternateTracksTransition;
- (id)createChapterFlipTransition;
- (void)displayVideoViewOnScreen;
- (void)loadView;
- (void)restoreOverlayViewAfterTransition:(id)arg1;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)startTicking;
- (void)stopTicking;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)showChaptersController;
- (BOOL)ownsTransportControls;
- (void)setItem:(id)arg1;
- (void)setOrientation:(NSInteger)arg1 animate:(BOOL)arg2;
- (void)setTVOutEnabled:(BOOL)arg1;
- (BOOL)backstopView:(id)arg1 swipedInDirection:(NSInteger)arg2;
- (void)backstopView:(id)arg1 tappedWithCount:(NSInteger)arg2;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(NSUInteger)arg2;
- (id)createOverlayViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_overlayView;
- (void)_handleSwipeRight;
- (void)_reloadImageView;
- (void)_removeOverlayView;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg1;

@end
