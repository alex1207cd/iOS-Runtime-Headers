/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceRequestOptions : NSObject <NSCopying> {
    BOOL _networkAccessAllowed;
    id /* block */ _progressHandler;
}

@property (getter=isNetworkAccessAllowed, nonatomic) BOOL networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isNetworkAccessAllowed;
- (id /* block */)progressHandler;
- (void)setNetworkAccessAllowed:(BOOL)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
