/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIFont, NSString, NSTimer;



@interface TPLockTextView : UIView 
{
    NSString *_label;
    struct CGImage { } *_textCache;
    char *_textData;
    NSTimer *_maskTimer;
    double _maskStartTime;
    UIFont *_labelFont;
    float _fps;
}


- (void)dealloc;
- (void)_cacheLabel:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithLabel:(id)arg1 fontSize:(float)arg2;
- (id)label;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setFPS:(float)arg1;
- (BOOL)isAnimating;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)movedFromWindow:(id)arg1;

@end
