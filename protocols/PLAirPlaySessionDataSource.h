/* Generated by RuntimeBrowser.
 */

@protocol PLAirPlaySessionDataSource <NSObject>

@required

- (void)airPlaySession:(PLAirPlaySession *)arg1 didFailToStreamPhotoWithError:(NSError *)arg2;
- (PLManagedAsset *)airPlaySession:(PLAirPlaySession *)arg1 nextPhotoForPhoto:(PLManagedAsset *)arg2;
- (PLManagedAsset *)airPlaySession:(PLAirPlaySession *)arg1 previousPhotoForPhoto:(PLManagedAsset *)arg2;

@end
