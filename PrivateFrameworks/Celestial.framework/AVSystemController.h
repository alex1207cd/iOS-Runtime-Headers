/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */



@interface AVSystemController : NSObject 
{
    struct AVSystemControllerPrivate { BOOL x1; struct OpaqueFigPlayer {} *x2; } *_priv;
}

+ (void)initialize;
+ (id)sharedAVSystemController;

- (id)init;
- (void)dealloc;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1;
- (BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 fallbackCategory:(id)arg3;
- (BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)activeCategoryVolumeDidChangeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4;
- (BOOL)toggleActiveCategoryMuted;
- (BOOL)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2;
- (BOOL)getActiveCategoryMuted:(BOOL*)arg1;
- (BOOL)getActiveCategoryMuted:(BOOL*)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)changeVolumeBy:(float)arg1 forCategory:(id)arg2;
- (BOOL)setVolumeTo:(float)arg1 forCategory:(id)arg2;
- (BOOL)getVolume:(float*)arg1 forCategory:(id)arg2;
- (id)routeForCategory:(id)arg1;
- (id)volumeCategoryForAudioCategory:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)okToNotifyFromThisThread;
- (void)handleServerDied;

@end
