/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMTouchList : DOMObject 
{
}

@property(readonly) NSUInteger length;

+ (id)_wrapTouchList:(struct TouchList { int (**x1)(); NSInteger x2; struct Vector<WTF::RefPtr<WebCore::Touch>,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::Touch>,0ul> { struct RefPtr<WebCore::Touch> {} *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; }*)arg1;

- (void)dealloc;
- (void)finalize;
- (NSUInteger)length;
- (id)item:(NSUInteger)arg1;
- (struct TouchList { int (**x1)(); NSInteger x2; struct Vector<WTF::RefPtr<WebCore::Touch>,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::Touch>,0ul> { struct RefPtr<WebCore::Touch> {} *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; }*)_touchList;
- (id)_initWithTouchList:(struct TouchList { int (**x1)(); NSInteger x2; struct Vector<WTF::RefPtr<WebCore::Touch>,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::Touch>,0ul> { struct RefPtr<WebCore::Touch> {} *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; }*)arg1;

@end
