/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMWebKitCSSMatrix : DOMObject 
{
}

@property float m11;
@property float m12;
@property float m13;
@property float m14;
@property float m21;
@property float m22;
@property float m23;
@property float m24;
@property float m31;
@property float m32;
@property float m33;
@property float m34;
@property float m41;
@property float m42;
@property float m43;
@property float m44;

+ (id)_wrapWebKitCSSMatrix:(struct WebKitCSSMatrix { int (**x1)(); NSInteger x2; struct StyleBase {} *x3; struct Transform3D { float x_4_1_1[4][4]; } x4; }*)arg1;

- (void)dealloc;
- (void)finalize;
- (float)m11;
- (void)setM11:(float)arg1;
- (float)m12;
- (void)setM12:(float)arg1;
- (float)m13;
- (void)setM13:(float)arg1;
- (float)m14;
- (void)setM14:(float)arg1;
- (float)m21;
- (void)setM21:(float)arg1;
- (float)m22;
- (void)setM22:(float)arg1;
- (float)m23;
- (void)setM23:(float)arg1;
- (float)m24;
- (void)setM24:(float)arg1;
- (float)m31;
- (void)setM31:(float)arg1;
- (float)m32;
- (void)setM32:(float)arg1;
- (float)m33;
- (void)setM33:(float)arg1;
- (float)m34;
- (void)setM34:(float)arg1;
- (float)m41;
- (void)setM41:(float)arg1;
- (float)m42;
- (void)setM42:(float)arg1;
- (float)m43;
- (void)setM43:(float)arg1;
- (float)m44;
- (void)setM44:(float)arg1;
- (void)setMatrixValue:(id)arg1;
- (id)multiply:(id)arg1;
- (id)inverse;
- (id)translate:(float)arg1 y:(float)arg2 z:(float)arg3;
- (id)scale:(float)arg1 scaleY:(float)arg2 scaleZ:(float)arg3;
- (id)rotate:(float)arg1 rotY:(float)arg2 rotZ:(float)arg3;
- (id)rotateAxisAngle:(float)arg1 y:(float)arg2 z:(float)arg3 angle:(float)arg4;
- (id)toString;
- (struct WebKitCSSMatrix { int (**x1)(); NSInteger x2; struct StyleBase {} *x3; struct Transform3D { float x_4_1_1[4][4]; } x4; }*)_webKitCSSMatrix;
- (id)_initWithWebKitCSSMatrix:(struct WebKitCSSMatrix { int (**x1)(); NSInteger x2; struct StyleBase {} *x3; struct Transform3D { float x_4_1_1[4][4]; } x4; }*)arg1;

@end
