/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIToolbar, NSString, PLImageTile, UIView, PLCropOverlay, PLCameraController;



@interface PLCameraView : UIView 
{
    UIToolbar *_cameraButtonBar;
    NSInteger _availablePictureCount;
    NSInteger _captureOrientation;
    NSInteger _photoSavingOptions;
    BOOL _manipulatingCrop;
    UIView *_fourByThreeBackstop;
    PLCameraController *_cameraController;
    UIView *_previewView;
    UIView *_animatedCaptureView;
    UIView *_irisView;
    UIView *_staticIrisView;
    NSInteger _pictureCapacity;
    BOOL _irisIsClosed;
    PLCropOverlay *_cropOverlay;
    PLImageTile *_imageTile;
    id _delegate;
    NSInteger _enabledGestures;
    unsigned int _showsCropOverlay : 1;
    unsigned int _allowsEditing : 1;
    unsigned int _changesStatusBar : 1;
    NSString *_cropTitle;
    NSString *_cropSubtitle;
    NSString *_cropButtonTitle;
}


- (void)_playShutterSound;
- (void)_showCropOverlayWithTitle:(id)arg1 subtitle:(id)arg2 OKButtonTitle:(id)arg3 OKButtonColor:(NSInteger)arg4 OKButtonShowCamera:(BOOL)arg5 cancelButtonTitle:(id)arg6;
- (void)_updateStatusBar;
- (void)_addAdditionalEXIFPropertiesForCurrentState:(id)arg1 date:(id)arg2 toDictionary:(id)arg3;
- (NSInteger)_sensorOrientationForDeviceOrientation:(NSInteger)arg1;
- (void)cameraControllerReadyStateChanged:(id)arg1;
- (void)cameraController:(id)arg1 tookPicture:(id)arg2 withPreview:(id)arg3 jpegData:(struct __CFData { }*)arg4 imageProperties:(id)arg5;
- (void)setupAnimateCameraPreviewDown:(id)arg1;
- (void)animateCameraPreviewDown;
- (void)_storePictureAnimation:(id)arg1 finished:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setEnabledGestures:(NSInteger)arg1;
- (void)setPhotoSavingOptions:(NSInteger)arg1;
- (NSInteger)photoSavingOptions;
- (void)_updateImageEditability;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (void)setChangesStatusBar:(BOOL)arg1;
- (void)setShowsCropOverlay:(BOOL)arg1;
- (void)setCropTitle:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3;
- (BOOL)shouldShowIris;
- (void)setCameraButtonBar:(id)arg1;
- (id)buttonBar;
- (id)imageTile;
- (void)takePictureOpenIrisAnimationFinished;
- (void)takePictureCloseIrisAnimationFinished;
- (void)cameraShutterClicked:(id)arg1;
- (void)viewWillBeDisplayed;
- (void)viewWasDisplayed;
- (void)viewWillBeRemoved;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (BOOL)imageViewIsDisplayingLandscape:(id)arg1;
- (void)willStartGesture:(NSInteger)arg1 inView:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)tearDownIris;
- (void)primeStaticClosedIris;
- (void)showStaticClosedIris;
- (void)hideStaticClosedIris;
- (BOOL)irisIsClosed;
- (void)closeIris:(BOOL)arg1 didFinishSelector:(SEL)arg2;
- (void)openIrisWithDidFinishSelector:(SEL)arg1;
- (void)closeOpenIris;
- (void)openIrisAnimationFinished;
- (void)closeIrisAnimationFinished;
- (void)closeOpenIrisAnimationFinished;

@end
