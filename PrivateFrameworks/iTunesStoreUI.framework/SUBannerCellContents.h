/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;



@interface SUBannerCellContents : SUCellContentView 
{
    NSMutableArray *_buttons;
    NSMutableArray *_haveRealImage;
}

+ (BOOL)cellDrawsBackground;
+ (float)defaultHeightForPosition:(struct { NSUInteger x1; NSUInteger x2; })arg1;
+ (NSUInteger)artworkFormat;
+ (id)placeholderImage;

- (void)dealloc;
- (void)clearButtonHighlights;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 forURL:(id)arg2;
- (void)setItem:(id)arg1;
- (BOOL)showPriceButton;
- (void)_buttonTapped:(id)arg1;
- (void)_reloadButtons;

@end
