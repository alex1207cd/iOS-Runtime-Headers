/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADParagraph;



@interface PMParagraphMapper : CMMapper 
{
    OADParagraph *mParagraph;
}


- (id)initWithOadParagraph:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (NSInteger)firstTextRunFontSize;
- (id)createParagraphStyleWithState:(id)arg1;
- (id)fontScheme;
- (void)addEndCharacterStyleToStyle:(id)arg1;

@end
