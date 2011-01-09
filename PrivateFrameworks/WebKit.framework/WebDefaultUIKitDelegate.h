/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */



@interface WebDefaultUIKitDelegate : NSObject 
{
}

+ (id)sharedUIKitDelegate;

- (struct CGPoint { float x1; float x2; })contentsPointForWebView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleRectForWebView:(id)arg1;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(NSInteger)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didPreventDefaultForEvent:(struct __GSEvent { }*)arg2;
- (BOOL)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint { float x1; float x2; })arg2 forFrame:(id)arg3;
- (void)webViewDidSimulateClick:(id)arg1;
- (void)webViewWillSimulateClick:(id)arg1;
- (void)webViewDidNotSimulateClick:(id)arg1;
- (void)webView:(id)arg1 didReceiveDocTypeForFrame:(id)arg2;
- (void)webViewWillIgnoreDrag:(id)arg1;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (id)contentsHostingLayerForWebView:(id)arg1;
- (void)webView:(id)arg1 eventRegionsChanged:(id)arg2;

@end
