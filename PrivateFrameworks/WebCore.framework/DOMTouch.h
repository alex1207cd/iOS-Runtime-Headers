/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMTouch : DOMObject 
{
}

@property(retain,readonly) <DOMEventTarget> *target;
@property(readonly) NSUInteger identifier;
@property(readonly) NSInteger clientX;
@property(readonly) NSInteger clientY;
@property(readonly) NSInteger pageX;
@property(readonly) NSInteger pageY;
@property(readonly) NSInteger screenX;
@property(readonly) NSInteger screenY;

+ (id)_wrapTouch:(struct Touch { NSInteger x1; struct RefPtr<WebCore::DOMWindow> { struct DOMWindow {} *x_2_1_1; } x2; struct RefPtr<WebCore::EventTarget> { struct EventTarget {} *x_3_1_1; } x3; NSUInteger x4; NSInteger x5; NSInteger x6; NSInteger x7; NSInteger x8; NSInteger x9; NSInteger x10; }*)arg1;

- (void)dealloc;
- (void)finalize;
- (id)target;
- (NSUInteger)identifier;
- (NSInteger)clientX;
- (NSInteger)clientY;
- (NSInteger)pageX;
- (NSInteger)pageY;
- (NSInteger)screenX;
- (NSInteger)screenY;
- (struct Touch { NSInteger x1; struct RefPtr<WebCore::DOMWindow> { struct DOMWindow {} *x_2_1_1; } x2; struct RefPtr<WebCore::EventTarget> { struct EventTarget {} *x_3_1_1; } x3; NSUInteger x4; NSInteger x5; NSInteger x6; NSInteger x7; NSInteger x8; NSInteger x9; NSInteger x10; }*)_touch;
- (id)_initWithTouch:(struct Touch { NSInteger x1; struct RefPtr<WebCore::DOMWindow> { struct DOMWindow {} *x_2_1_1; } x2; struct RefPtr<WebCore::EventTarget> { struct EventTarget {} *x_3_1_1; } x3; NSUInteger x4; NSInteger x5; NSInteger x6; NSInteger x7; NSInteger x8; NSInteger x9; NSInteger x10; }*)arg1;

@end
