/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPPlayingIndicatorTableCell : UITableCell 
{
    unsigned int _isCurrent : 1;
}


- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)setCurrent:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })indicatorPoint;
- (struct CGColor { }*)indicatorColor;
- (struct CGColor { }*)selectedIndicatorColor;

@end
