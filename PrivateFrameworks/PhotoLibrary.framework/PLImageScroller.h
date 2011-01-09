/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImageTile, PLImageView;



@interface PLImageScroller : UIScroller 
{
    PLImageView *_imageView;
    PLImageTile *_imageTile;
    struct CGPoint { 
        float x; 
        float y; 
    } _grabLoc;
    BOOL _locked;
    BOOL _isZooming;
    struct CGSize { 
        float width; 
        float height; 
    } _padding;
    struct { 
        unsigned int delegateImplementsSiblingForDirection : 1; 
        unsigned int allowNegativeOffsets : 1; 
        unsigned int reserved : 30; 
    } _imageScrollerFlags;
    PLImageView *_leftView;
    PLImageView *_rightView;
}


- (struct CGSize { float x1; float x2; })_contentSizeForView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)canHandleSwipes;
- (void)setDelegate:(id)arg1;
- (void)_adjustPositionOfView:(id)arg1 forContentSize:(struct CGSize { float x1; float x2; })arg2 offset:(struct CGPoint { float x1; float x2; })arg3;
- (void)updateSideViews;
- (void)_clearSideViews;
- (id)_createSideViewWithImageView:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_showSideViewInDirection:(NSInteger)arg1;
- (void)_showLeftView;
- (void)_showRightView;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAllowNegativeOffsets:(BOOL)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLockedOnImage:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })padding;
- (void)setPadding:(struct CGSize { float x1; float x2; })arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)imageTile;
- (void)setImageTile:(id)arg1;
- (BOOL)canFlick;
- (BOOL)shouldAdvance;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)zoomToScale:(float)arg1;
- (void)imageView:(id)arg1 didStartGesture:(NSInteger)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (struct CGImage { }*)createImageWithCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 croppedImageData:(id*)arg2 fullSizeImageData:(id*)arg3 fullScreenImageData:(id*)arg4 imageCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 padWithBlack:(BOOL)arg6;

@end
