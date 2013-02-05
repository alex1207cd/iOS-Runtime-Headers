/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSData, NSDictionary, NSMutableDictionary;

@interface MRMediaRemoteState : NSObject {
    BOOL _canBeNowPlayingApp;
    id _commandHandlerBlock;
    NSMutableDictionary *_commandHandlerBlocks;
    BOOL _isOverrideApp;
    BOOL _keepAlive;
    int _notifyDidLaunchToken;
    int _notifyRestoreClientStateForLaunch;
    NSData *_nowPlayingArtworkData;
    NSDictionary *_nowPlayingInfo;
    unsigned int _routeDiscoveryCount;
}

@property BOOL canBeNowPlayingApp;
@property(copy) id commandHandlerBlock;
@property(readonly) NSArray * commandHandlerBlocks;
@property BOOL isOverrideApp;
@property BOOL keepAlive;
@property(retain) NSData * nowPlayingArtworkData;
@property(retain) NSDictionary * nowPlayingInfo;

- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
- (void)addCommandHandlerBlock:(id)arg1 forKey:(id)arg2;
- (void)beginRouteDiscovery;
- (BOOL)canBeNowPlayingApp;
- (id)commandHandlerBlock;
- (id)commandHandlerBlocks;
- (void)dealloc;
- (void)endRouteDiscovery;
- (id)init;
- (BOOL)isOverrideApp;
- (BOOL)keepAlive;
- (id)nowPlayingArtworkData;
- (id)nowPlayingInfo;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)setCanBeNowPlayingApp:(BOOL)arg1;
- (void)setCommandHandlerBlock:(id)arg1;
- (void)setIsOverrideApp:(BOOL)arg1;
- (void)setKeepAlive:(BOOL)arg1;
- (void)setNowPlayingArtworkData:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;

@end