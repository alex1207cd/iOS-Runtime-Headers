/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicDownloadProgressButton : UIControl {
    UIImageView *_addToLibraryOrDownloadImageView;
    int _contentsHorizontalAlignment;
    float _currentAnimatedProgress;
    CADisplayLink *_displayLink;
    UIImageView *_finishedImageView;
    float _initialAnimatedProgress;
    BOOL _isAnimatingProgress;
    SKUIItemOfferButton *_itemOfferButton;
    struct CGSize { 
        float width; 
        float height; 
    } _lastLayoutSize;
    float _progress;
    double _progressAnimationEndTime;
    double _progressAnimationStartTime;
    CAMediaTimingFunction *_progressAnimationTimingFunction;
    int _progressType;
    int _style;
}

@property (nonatomic, readonly) int contentsHorizontalAlignment;
@property (nonatomic) float progress;
@property (nonatomic) int progressType;
@property (nonatomic, readonly) int style;

+ (id)_finishedImageForLayoutSize:(struct CGSize { float x1; float x2; })arg1 traitCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_addToLibraryOrDownloadImage;
- (void)_handleDisplayLinkDidFire:(id)arg1;
- (BOOL)_needsAddToLibraryOrDownloadImageViewForProgressType:(int)arg1;
- (BOOL)_needsFinishedImageViewForProgressType:(int)arg1;
- (void)_reloadForCurrentStateForInitialSetup:(BOOL)arg1 previousProgressType:(int)arg2;
- (void)_stopProgressAnimation;
- (BOOL)_usesDrawingForProgressType:(int)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (int)contentsHorizontalAlignment;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1 contentsHorizontalAlignment:(int)arg2;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (float)progress;
- (int)progressType;
- (void)setHighlighted:(BOOL)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)setProgressType:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
