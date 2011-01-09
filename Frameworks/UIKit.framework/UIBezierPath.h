/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIBezierPath : NSObject 
{
    struct CGPath { } *_pathRef;
    float _width;
}

+ (id)bezierPath;
+ (id)bezierPathKnockingOutTopOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCornerRadius:(float)arg2;
+ (id)bezierPathKnockingOutBottomOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCornerRadius:(float)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedEdges:(NSInteger)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(NSInteger)arg2 withCornerRadius:(float)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(NSInteger)arg2 withCornerRadii:(id)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(NSInteger)arg2 visibleEdges:(NSInteger)arg3 cornerRadius:(float)arg4;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTopCornerRadius:(float)arg2 withBottomCornerRadius:(float)arg3;
+ (id)shadowBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedEdges:(NSInteger)arg2;

- (id)init;
- (void)dealloc;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)lineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (void)closePath;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)setLineWidth:(float)arg1;
- (void)fill;
- (void)stroke;
- (void)clip;
- (struct CGPath { }*)_pathRef;

@end
