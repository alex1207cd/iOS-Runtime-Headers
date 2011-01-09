/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSDictionary;



@interface ABRingtoneManager : NSObject 
{
    NSDictionary *_nameForIdentifier;
    NSDictionary *_pathForIdentifier;
    NSDictionary *_identifierForPath;
    NSDictionary *_additionalInformation;
    id _delegate;
    BOOL _showRingtones;
}

+ (id)iTunesRingtoneDirectory;
+ (id)systemRingtoneDirectory;
+ (id)userRingtoneDirectory;
+ (id)systemAlarmSoundDirectory;
+ (id)sharedRingtoneManager;

- (id)init;
- (id)initWithAlarmSoundPlistAtPath:(id)arg1;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (void)dealloc;
- (BOOL)shouldShowRingtones;
- (BOOL)shouldShowAlarmSounds;
- (void)setDelegate:(id)arg1;
- (void)loadITunesInfoPlistAtPath:(id)arg1;
- (void)loadAlarmSoundPlistAtPath:(id)arg1;
- (void)iTunesSyncRequestedStart;
- (void)iTunesSyncHasCompleted:(NSInteger)arg1;
- (id)defaultRingtoneIdentifier;
- (id)defaultRingtoneName;
- (id)defaultRingtonePath;
- (id)localizedRingtoneNameWithIdentifier:(id)arg1;
- (id)pathFromIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)nameFromRingtonePath:(id)arg1;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyIdentifierForRingtoneAtPath:(id)arg1 isValid:(BOOL*)arg2;
- (id)createAVItemWithRingtoneIdentifier:(id)arg1;

@end
