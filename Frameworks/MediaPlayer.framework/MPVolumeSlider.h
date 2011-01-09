/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSTimer, NSString;



@interface MPVolumeSlider : UISlider 
{
    NSTimer *_commitTimer;
    NSString *_volumeAudioCategory;
}

@property(retain) NSString *volumeAudioCategory;

+ (void)_disableSystemVolumeHUDForAudioCategory:(id)arg1;
+ (void)_enableSystemVolumeHUDForAudioCategory:(id)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (float)minimumValue;
- (float)maximumValue;
- (id)createThumbView;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (id)volumeAudioCategory;
- (void)setVolumeAudioCategory:(id)arg1;
- (void)_updateVolumeFromAVSystemController;
- (void)_commitVolumeChange;
- (void)_systemVolumeDidChange:(id)arg1;

@end
