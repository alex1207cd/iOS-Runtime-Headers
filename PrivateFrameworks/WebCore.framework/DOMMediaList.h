/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface DOMMediaList : DOMObject 
{
}

@property(copy) NSString *mediaText;
@property(readonly) NSUInteger length;

+ (id)_wrapMediaList:(struct MediaList { int (**x1)(); NSInteger x2; struct StyleBase {} *x3; struct Vector<WebCore::MediaQuery*,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WebCore::MediaQuery*,0ul> { struct MediaQuery {} **x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{MediaList=^^?i^{StyleBase}{Vector<WebCore::MediaQuery*,0ul>=I{VectorBuffer<WebCore::MediaQuery*,0ul>=^^{MediaQuery}I}}B}8 */


- (void)dealloc;
- (void)finalize;
- (id)mediaText;
- (void)setMediaText:(id)arg1;
- (NSUInteger)length;
- (id)item:(NSUInteger)arg1;
- (void)deleteMedium:(id)arg1;
- (void)appendMedium:(id)arg1;
- (struct MediaList { int (**x1)(); NSInteger x2; struct StyleBase {} *x3; struct Vector<WebCore::MediaQuery*,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WebCore::MediaQuery*,0ul> { struct MediaQuery {} **x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; }*)_mediaList;
     /* Encoded args for previous method: ^{MediaList=^^?i^{StyleBase}{Vector<WebCore::MediaQuery*,0ul>=I{VectorBuffer<WebCore::MediaQuery*,0ul>=^^{MediaQuery}I}}B}8@0:4 */

- (id)_initWithMediaList:(struct MediaList { int (**x1)(); NSInteger x2; struct StyleBase {} *x3; struct Vector<WebCore::MediaQuery*,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WebCore::MediaQuery*,0ul> { struct MediaQuery {} **x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{MediaList=^^?i^{StyleBase}{Vector<WebCore::MediaQuery*,0ul>=I{VectorBuffer<WebCore::MediaQuery*,0ul>=^^{MediaQuery}I}}B}8 */


@end
