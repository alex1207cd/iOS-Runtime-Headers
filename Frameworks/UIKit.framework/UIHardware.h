/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIHardware : NSObject 
{
}

+ (float)statusBarHeight;
+ (void)_setStatusBarHeight:(float)arg1;
+ (struct CGSize { float x1; float x2; })mainScreenSize;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullScreenApplicationContentRect;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullScreenApplicationContentRectForDeviceOrientation:(NSInteger)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullScreenApplicationContentRectForCurrentDeviceOrientation;
+ (NSInteger)ringerState;
+ (NSInteger)deviceOrientation:(BOOL)arg1;
+ (BOOL)setSpeakerPhoneEnabled:(BOOL)arg1;
+ (BOOL)isTTYEnabled;
+ (struct CGSize { float x1; float x2; })TVScreenSize;
+ (float)TVHorizontalPixelScale;
+ (BOOL)_TVOutStatus:(BOOL)arg1;
+ (BOOL)TVOutCapableAndPreferred;
+ (BOOL)TVOutCapable;
+ (void)TVOutResetPreferred;
+ (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
+ (void)accessoryAvailabilityChanged;
+ (id)deviceName;
+ (id)localizedDeviceName;
+ (void)_updateSystemSoundActiveStatus:(id)arg1;
+ (void)_registerForSystemSounds:(id)arg1;
+ (void)_unregisterForSystemSounds:(id)arg1;
+ (void)_playSystemSound:(unsigned long)arg1;


@end
