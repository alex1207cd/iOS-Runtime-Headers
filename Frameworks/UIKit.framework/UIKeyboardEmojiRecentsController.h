/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, <UIKeyboardEmojiController>;



@interface UIKeyboardEmojiRecentsController : NSObject 
{
    <UIKeyboardEmojiController> *_controller;
    NSInteger _currentSequence;
    NSMutableArray *_recents;
    NSMutableDictionary *_usageHistory;
}


- (id)initWithController:(id)arg1;
- (void)dealloc;
- (void)readDefaultsDictionary:(id)arg1;
- (BOOL)isAncientSequence:(NSInteger)arg1;
- (double)scoreForSequence:(NSInteger)arg1;
- (double)scoreForEmoji:(id)arg1;
- (void)emojiUsed:(id)arg1;
- (void)clearAncientHistory;
- (id)defaultsDictionary;
- (id)recents;

@end
