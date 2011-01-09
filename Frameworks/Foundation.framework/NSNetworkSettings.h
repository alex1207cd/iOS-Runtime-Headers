/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSNetworkSettingsInternal;



@interface NSNetworkSettings : NSObject 
{
    NSNetworkSettingsInternal *_internal;
}

+ (id)sharedNetworkSettings;

- (id)init;
- (void)dealloc;
- (id)proxyDictionary;
- (id)proxyPropertiesForURL:(id)arg1;
- (BOOL)isProxyNeededForURL:(id)arg1;
- (void)setProxyPropertiesForURL:(id)arg1 onStream:(struct __CFReadStream { }*)arg2;
- (BOOL)connectedToInternet:(BOOL)arg1;
- (void)setProxyDictionary:(id)arg1;
- (void)_updateProxySettings;
- (void)_listenForProxySettingChanges;
- (id)_init;

@end
