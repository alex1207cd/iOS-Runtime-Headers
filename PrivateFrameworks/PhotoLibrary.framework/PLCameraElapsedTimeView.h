/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDate, NSTimer, UILabel;

@interface PLCameraElapsedTimeView : UIImageView {
    BOOL _autorotationEnabled;
    UILabel *_minutes;
    int _orientation;
    UILabel *_seconds;
    NSDate *_startTime;
    NSTimer *_timer;
    BOOL _watchingOrientationChanges;
}

@property BOOL autorotationEnabled;

- (id)_createTimeLabelWithFont:(id)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_setDeviceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_startWatchingDeviceOrientationChanges;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_update:(id)arg1;
- (BOOL)autorotationEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAutorotationEnabled:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (void)startTimer;
- (void)stopTimer;

@end