/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class UITextLabel;



@interface CalendarEventDetailNotesCell : CalendarEventDetailCell 
{
    UITextLabel *_notesTitleView;
    UITextLabel *_notesView;
}

+ (BOOL)shouldDisplayForEditModel:(id)arg1;

- (id)initWithEditModel:(id)arg1;
- (void)dealloc;
- (BOOL)setEditModel:(id)arg1;
- (id)_notesTitleView;
- (id)_notesView;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;

@end
