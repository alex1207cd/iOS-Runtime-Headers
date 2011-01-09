/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCropOverlay, PLImageTile, MLPhoto;



@interface PLImageViewController : UIViewController 
{
    MLPhoto *_photo;
    PLCropOverlay *_cropOverlay;
    PLImageTile *_imageTile;
    unsigned int _allowEditing : 1;
}


- (id)initWithPhoto:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)setParentViewController:(id)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)_editabilityChanged:(id)arg1;
- (void)_updateGestureSettings;
- (void)_updateTitles;
- (void)willStartGesture:(NSInteger)arg1 inView:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;

@end
