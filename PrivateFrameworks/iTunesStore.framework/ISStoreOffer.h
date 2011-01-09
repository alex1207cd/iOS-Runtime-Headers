/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSURL, NSSet;



@interface ISStoreOffer : NSObject <NSCopying>
{
    NSString *_actionDisplayName;
    NSURL *_assetURL;
    NSString *_buyParameters;
    NSSet *_dsIDs;
    NSUInteger _durationInMS;
    NSString *_incompatibleDeviceMessage;
    NSString *_incompatibleDeviceTitle;
    NSURL *_incompatibleDeviceURL;
    NSString *_incompatibleDeviceURLTitle;
    NSString *_incompatibleSoftwareMessage;
    NSString *_incompatibleSoftwareTitle;
    NSURL *_incompatibleSoftwareURL;
    NSString *_incompatibleSoftwareURLTitle;
    long long _mediaFileSize;
    NSInteger _mediaType;
    NSString *_minimumProductVersion;
    NSUInteger _previewDuration;
    NSURL *_previewURL;
    NSString *_price;
    NSInteger _supportedDeviceType;
}

@property NSInteger mediaType; /* unknown property attribute: V_mediaType */


- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)actionDisplayName;
- (id)assetURL;
- (id)buyParameters;
- (id)dialogForIncompatibleDeviceType;
- (id)dialogForIncompatibleProductVersion;
- (id)dsIDs;
- (long long)downloadFileSize;
- (NSUInteger)durationInMS;
- (id)minimumProductVersion;
- (NSUInteger)previewDurationInMS;
- (id)previewURL;
- (id)priceDisplay;
- (BOOL)supportsDeviceType:(NSInteger)arg1;
- (NSInteger)mediaType;
- (void)setMediaType:(NSInteger)arg1;

@end
