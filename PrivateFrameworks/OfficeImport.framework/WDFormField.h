/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;



@interface WDFormField : WDRun 
{
    NSUInteger mPosition;
    BOOL mLinkAbsolute;
    BOOL mLinkSpecifyingNamedLocation;
    NSString *mNamedLocation;
    NSString *mURI;
    NSString *mMacName;
    NSString *mDosName;
}


- (id)initWithParagraph:(id)arg1;
- (void)dealloc;
- (unsigned long)position;
- (void)setPosition:(unsigned long)arg1;
- (BOOL)linkAbsolute;
- (void)setLinkAbsolute:(BOOL)arg1;
- (BOOL)linkSpecifyingNamedLocation;
- (void)setLinkSpecifyingNamedLocation:(BOOL)arg1;
- (id)namedLocation;
- (void)setNamedLocation:(id)arg1;
- (id)URI;
- (void)setURI:(id)arg1;
- (id)macName;
- (void)setMacName:(id)arg1;
- (id)dosName;
- (void)setDosName:(id)arg1;
- (NSInteger)runType;

@end
