/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppInstallMonitor : NSObject {
    _ATXAppInfoManager *_appInfoManager;
    int _applicationsChangedNotificationToken;
    NSDictionary *_assetData;
    BOOL _includeSystemApps;
    NSObject<OS_dispatch_queue> *_installQueue;
    id /* block */ _updateCompletionBlock;
}

- (void).cxx_destruct;
- (void)_cancelAnyExistingNotification;
- (void)dealloc;
- (id)fetchInstalledApps;
- (id)initForTestingWithAppInfoManager:(id)arg1;
- (id)initWithAppInfoManager:(id)arg1;
- (id)initWithAppInfoManager:(id)arg1 includingSystemApps:(BOOL)arg2;
- (void)monitorApplicationsDirectory;
- (void)noSyncUpdateWithWaitTime:(unsigned int)arg1 andBackdate:(BOOL)arg2;
- (BOOL)recentlyRestoredBackupWithRestoreDate:(id)arg1 andTimeWindow:(unsigned int)arg2;
- (id)removeIntersectionBetweenSet:(id)arg1 set:(id)arg2;
- (void)setUpdateCompletionBlock:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (void)synchronousUpdateAndBackdate:(BOOL)arg1;
- (void)synchronousUpdateWithUninstallWaitTime:(unsigned int)arg1 andBackdate:(BOOL)arg2;
- (void)trackSystemAppsForTesting;
- (void)updateAndBackdate:(BOOL)arg1;

@end
