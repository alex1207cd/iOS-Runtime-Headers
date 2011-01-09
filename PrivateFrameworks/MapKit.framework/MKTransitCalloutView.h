/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class MKRouteStep, UIImageView;



@interface MKTransitCalloutView : UIImageView <MKOverlayItem>
{
    MKRouteStep *_step;
    NSInteger _calloutType;
    UIImageView *_iconView;
    BOOL _isPressed;
}

@property(retain) UIImage *icon;
@property(readonly) CGRect significantRect;
@property(readonly) CGPoint calloutAnchorPoint;
@property(readonly) NSString *calloutSubtitle;
@property(readonly) NSString *calloutTitle;
@property(readonly) NSInteger overlayItemType;
@property BOOL isPressed; /* unknown property attribute: V_isPressed */
@property(readonly) MKRouteStep *step; /* unknown property attribute: V_step */
@property NSInteger calloutType; /* unknown property attribute: V_calloutType */

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForMapPosition:(struct CGPoint { float x1; float x2; })arg1 calloutType:(NSInteger)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bubbleFrameForType:(NSInteger)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bubbleFrameForOrigin:(struct CGPoint { float x1; float x2; })arg1 calloutType:(NSInteger)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bubbleFrameForMapPosition:(struct CGPoint { float x1; float x2; })arg1 calloutType:(NSInteger)arg2;
+ (id)_imageForType:(NSInteger)arg1;

- (id)initWithStep:(id)arg1;
- (void)dealloc;
- (NSInteger)overlayItemType;
- (id)calloutTitle;
- (id)calloutSubtitle;
- (struct CGPoint { float x1; float x2; })calloutAnchorPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })significantRect;
- (void)_layoutIcon;
- (void)setCalloutType:(NSInteger)arg1;
- (void)setIcon:(id)arg1;
- (id)icon;
- (NSInteger)compareLatitudeToTransitCalloutView:(id)arg1;
- (BOOL)isPressed;
- (void)setIsPressed:(BOOL)arg1;
- (id)step;
- (NSInteger)calloutType;

@end
