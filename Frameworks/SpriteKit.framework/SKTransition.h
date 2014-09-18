/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class CIFilter;

@interface SKTransition : NSObject {
    struct { 
        int type; 
        float duration; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } color; 
    } _data;
    CIFilter *_filter;
    bool_pauseIncoming;
    bool_pauseOutgoing;
}

@property bool pausesIncomingScene;
@property bool pausesOutgoingScene;

+ (id)crossFadeWithDuration:(double)arg1;
+ (id)doorsCloseHorizontalWithDuration:(double)arg1;
+ (id)doorsCloseVerticalWithDuration:(double)arg1;
+ (id)doorsOpenHorizontalWithDuration:(double)arg1;
+ (id)doorsOpenVerticalWithDuration:(double)arg1;
+ (id)doorwayWithDuration:(double)arg1;
+ (id)fadeWithColor:(id)arg1 duration:(double)arg2;
+ (id)fadeWithDuration:(double)arg1;
+ (id)flipHorizontalWithDuration:(double)arg1;
+ (id)flipVerticalWithDuration:(double)arg1;
+ (id)moveInDownWithDuration:(double)arg1;
+ (id)moveInLeftWithDuration:(double)arg1;
+ (id)moveInRightWithDuration:(double)arg1;
+ (id)moveInUpWithDuration:(double)arg1;
+ (id)moveInWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)pushDownWithDuration:(double)arg1;
+ (id)pushLeftWithDuration:(double)arg1;
+ (id)pushRightWithDuration:(double)arg1;
+ (id)pushUpWithDuration:(double)arg1;
+ (id)pushWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)revealDownWithDuration:(double)arg1;
+ (id)revealLeftWithDuration:(double)arg1;
+ (id)revealRightWithDuration:(double)arg1;
+ (id)revealUpWithDuration:(double)arg1;
+ (id)revealWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)transitionWithCIFilter:(id)arg1 duration:(double)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { int x1; float x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; })_data;
- (id)_filter;
- (id)init;
- (bool)pausesIncomingScene;
- (bool)pausesOutgoingScene;
- (void)setPausesIncomingScene:(bool)arg1;
- (void)setPausesOutgoingScene:(bool)arg1;

@end