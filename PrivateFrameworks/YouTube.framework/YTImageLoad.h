/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableData, NSString, NSURLConnection, NSURL;



@interface YTImageLoad : NSObject 
{
    NSURL *_URL;
    NSURLConnection *_connection;
    NSMutableData *_imageData;
    NSString *_videoID;
}


- (void)dealloc;
- (void)start;
- (void)_loadFinished;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)_createImage;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;

@end
