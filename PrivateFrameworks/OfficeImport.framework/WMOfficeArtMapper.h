/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDAContent;



@interface WMOfficeArtMapper : CMDrawableMapper 
{
    BOOL mFloating;
    BOOL mIsMapped;
    BOOL mIsInsideGroup;
    WDAContent *mContent;
}


- (id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2;
- (id)initWithOadDrawable:(id)arg1 asFloating:(BOOL)arg2 origin:(struct CGPoint { float x1; float x2; })arg3 parent:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setWithClientData:(id)arg1;
- (id)blipAtIndex:(NSUInteger)arg1;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)setBoundingBox;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;

@end
