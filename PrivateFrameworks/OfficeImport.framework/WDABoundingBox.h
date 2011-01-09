/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface WDABoundingBox : NSObject 
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mRect;
    float mRotation;
    BOOL mFlipX;
    BOOL mFlipY;
}


- (id)initWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rect;
- (void)setRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)rotation;
- (void)setRotation:(float)arg1;
- (BOOL)flipX;
- (void)setFlipX:(BOOL)arg1;
- (BOOL)flipY;
- (void)setFlipY:(BOOL)arg1;

@end
