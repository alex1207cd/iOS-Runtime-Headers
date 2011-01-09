/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPItem, MPTransitionController, NSTimer, MPViewController;



@interface MPViewController : UIViewController 
{
    id _delegate;
    MPItem *_item;
    NSInteger _orientation;
    MPViewController *_pushedViewController;
    MPTransitionController *_pushedTransitionController;
    NSTimer *_idleTimerDisablerTimer;
    unsigned int _appearing : 1;
    unsigned int _observesApplicationSuspendResumeEventsOnly : 1;
}

@property BOOL observesApplicationSuspendResumeEventsOnly;
@property id delegate;
@property(getter=idleTimerDisabled) BOOL idleTimerDisabled; /* unknown property attribute: SsetIdleTimerDisabled: */
@property NSInteger orientation; /* unknown property attribute: V_orientation */
@property(retain) MPItem *item; /* unknown property attribute: V_item */


- (id)init;
- (void)dealloc;
- (void)beginIgnoringChangeTypes:(NSUInteger)arg1;
- (BOOL)canDisplayItem:(id)arg1 withOrientation:(NSInteger)arg2;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (void)didChangeToOrientation:(NSInteger)arg1;
- (void)endIgnoringChangeTypes:(NSUInteger)arg1;
- (BOOL)isAppearing;
- (void)startTicking;
- (void)stopTicking;
- (void)applicationDidSuspendEventsOnly;
- (void)applicationDidResumeEventsOnly;
- (BOOL)observesApplicationSuspendResumeEventsOnly;
- (void)setObservesApplicationSuspendResumeEventsOnly:(BOOL)arg1;
- (void)noteIgnoredChangeTypes:(NSUInteger)arg1;
- (void)restoreOverlayViewAfterTransition:(id)arg1;
- (void)pushViewController:(id)arg1 withTransition:(id)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)willChangeToOrientation:(NSInteger)arg1;
- (void)_disableIdleTimer:(id)arg1;
- (BOOL)idleTimerDisabled;
- (void)setAppearing:(BOOL)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)setOrientation:(NSInteger)arg1 animate:(BOOL)arg2;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setView:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)_popTransitionEnded:(id)arg1;
- (void)_pushTransitionEnded:(id)arg1;
- (NSInteger)orientation;
- (id)item;
- (void)setItem:(id)arg1;

@end
