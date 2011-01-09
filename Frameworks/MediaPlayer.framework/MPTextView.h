/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIWebDocumentView, UIProgressIndicator, UITextViewLegacy, UITextLabel, UIImageView, UIImage, NSMutableString;



@interface MPTextView : UIView 
{
    id _delegate;
    UIImage *_albumArtwork;
    NSMutableString *_text;
    UIImageView *_background;
    UIImageView *_faderView;
    UIWebDocumentView *_webView;
    UITextViewLegacy *_textView;
    UITextLabel *_loadingLabel;
    UIProgressIndicator *_loadingIndicator;
    BOOL _scrollIndicatorFlashDisabled;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)movedToSuperview:(id)arg1;
- (void)movedFromSuperview:(id)arg1;
- (void)setScrollIndicatorFlashDisabled:(BOOL)arg1;
- (BOOL)hasText;
- (void)noteWillSnapshot;
- (void)noteDidSnapshot;
- (void)setArtwork:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1 willLoad:(BOOL)arg2;
- (void)view:(id)arg1 handleTapWithCount:(NSInteger)arg2 event:(struct __GSEvent { }*)arg3;
- (double)viewDoubleTapDelay:(id)arg1;
- (double)viewRejectAsTapThrehold:(id)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)_addLoadingUI;
- (void)_addTextUI;
- (void)_createTextUIIfNeeded;
- (void)_removeLoadingUI;
- (void)_removeTextUI;
- (struct CGImage { }*)_createFaderImageBackgroundWithSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGImage { }*)_createFaderImage:(BOOL)arg1;
- (void)_updateFaderImage:(BOOL)arg1;

@end
