/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MessageUI.framework/MessageUI
 */

@class UITextInputTraits, ComposeRecipient;



@interface ComposeRecipientAtom : AtomView 
{
    ComposeRecipient *_recipient;
    UITextInputTraits *_traits;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 recipient:(id)arg2;
- (void)dealloc;
- (id)title;
- (void)setDelegate:(id)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)setMarkedText:(id)arg1;
- (void)deleteBackward;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)textInputTraits;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;

@end
