/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface WKLayer : CALayer 
{

  /* Error parsing encoded ivar type info: ^{LCLayer=^^?{String="m_impl"{RefPtr<WebCore::StringImpl>="m_ptr"^{StringImpl}}}{FloatPoint="m_x"f"m_y"f}{FloatPoint="m_x"f"m_y"f}{FloatRect="m_location"{FloatPoint="m_x"f"m_y"f}"m_size"{FloatSize="m_width"f"m_height"f}}{Transform3D="m_matrix"[4[4f]]}{Transform3D="m_matrix"[4[4f]]}f{Color="m_color"I"m_valid"b1}BBfB^{RenderLayer}I{Vector<WebCore::LCLayer*,0ul>="m_size"I"m_buffer"{VectorBuffer<WebCore::LCLayer*,0ul>="m_buffer"^^{LCLayer}"m_capacity"I}}^{LCLayer}@"WKLayer"@"WKLayer"@"WKLayer"BBBf^v{Vector<WebCore::LCLayer::AnimationEntry,0ul>="m_size"I"m_buffer"{VectorBuffer<WebCore::LCLayer::AnimationEntry,0ul>="m_buffer"^{AnimationEntry}"m_capacity"I}}i} */
    struct LCLayer { int (**x1)(); struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x2; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x3; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x4; struct FloatRect { 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } m_location; 
            struct FloatSize { 
                float m_width; 
                float m_height; 
            } m_size; 
        } x5; struct Transform3D { 
            float m_matrix[4][4]; 
        } x6; struct Transform3D { 
            float m_matrix[4][4]; 
        } x7; float x8; struct Color { 
            NSUInteger m_color; 
            unsigned int m_valid : 1; 
        } x9; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; void*x11; float x12; void*x13; struct RenderLayer {} *x14; NSUInteger x15; struct Vector<WebCore::LCLayer*,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::LCLayer*,0ul> { 
                struct LCLayer {} **m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x16; struct LCLayer {} *x17; id x18; void*x19; void*x20; void*x21; unsigned long x22; void*x23; void*x24; void*x25; const void*x26; id x27; void*x28; void*x29; void*x30; unsigned long x31; void*x32; void*x33; void*x34; const void*x35; id x36; void*x37; void*x38; void*x39; unsigned long x40; void*x41; void*x42; void*x43; const void*x44; void*x45; void*x46; void*x47; float x48; void *x49; struct Vector<WebCore::LCLayer::AnimationEntry,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::LCLayer::AnimationEntry,0ul> { 
                struct AnimationEntry {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x50; NSInteger x51; } *_layerOwner;

    float _contentsScale;
}


- (id)init;
- (id)actionForKey:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)display;
- (void)drawScaledContentsInContext:(struct CGContext { }*)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)ignoresHitTesting;
- (id)descriptionWithPrefix:(id)arg1;
- (void)setLayerOwner:(struct LCLayer { int (**x1)(); struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct FloatPoint { float x_3_1_1; float x_3_1_2; } x3; struct FloatPoint { float x_4_1_1; float x_4_1_2; } x4; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; struct Transform3D { float x_6_1_1[4][4]; } x6; struct Transform3D { float x_7_1_1[4][4]; } x7; float x8; struct Color { NSUInteger x_9_1_1; unsigned int x_9_1_2 : 1; } x9; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; void*x11; float x12; void*x13; struct RenderLayer {} *x14; NSUInteger x15; struct Vector<WebCore::LCLayer*,0ul> { NSUInteger x_16_1_1; struct VectorBuffer<WebCore::LCLayer*,0ul> { struct LCLayer {} **x_2_2_1; NSUInteger x_2_2_2; } x_16_1_2; } x16; struct LCLayer {} *x17; id x18; id x19; id x20; void*x21; void*x22; void*x23; float x24; void *x25; struct Vector<WebCore::LCLayer::AnimationEntry,0ul> { NSUInteger x_26_1_1; struct VectorBuffer<WebCore::LCLayer::AnimationEntry,0ul> { struct AnimationEntry {} *x_2_2_1; NSUInteger x_2_2_2; } x_26_1_2; } x26; NSInteger x27; }*)arg1;
     /* Encoded args for previous method: v12@0:4^{LCLayer=^^?{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{FloatPoint=ff}{FloatPoint=ff}{FloatRect={FloatPoint=ff}{FloatSize=ff}}{Transform3D=[4[4f]]}{Transform3D=[4[4f]]}f{Color=Ib1}BBfB^{RenderLayer}I{Vector<WebCore::LCLayer*,0ul>=I{VectorBuffer<WebCore::LCLayer*,0ul>=^^{LCLayer}I}}^{LCLayer}@@@BBBf^v{Vector<WebCore::LCLayer::AnimationEntry,0ul>=I{VectorBuffer<WebCore::LCLayer::AnimationEntry,0ul>=^{AnimationEntry}I}}i}8 */

- (struct LCLayer { int (**x1)(); struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct FloatPoint { float x_3_1_1; float x_3_1_2; } x3; struct FloatPoint { float x_4_1_1; float x_4_1_2; } x4; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; struct Transform3D { float x_6_1_1[4][4]; } x6; struct Transform3D { float x_7_1_1[4][4]; } x7; float x8; struct Color { NSUInteger x_9_1_1; unsigned int x_9_1_2 : 1; } x9; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; void*x11; float x12; void*x13; struct RenderLayer {} *x14; NSUInteger x15; struct Vector<WebCore::LCLayer*,0ul> { NSUInteger x_16_1_1; struct VectorBuffer<WebCore::LCLayer*,0ul> { struct LCLayer {} **x_2_2_1; NSUInteger x_2_2_2; } x_16_1_2; } x16; struct LCLayer {} *x17; id x18; id x19; id x20; void*x21; void*x22; void*x23; float x24; void *x25; struct Vector<WebCore::LCLayer::AnimationEntry,0ul> { NSUInteger x_26_1_1; struct VectorBuffer<WebCore::LCLayer::AnimationEntry,0ul> { struct AnimationEntry {} *x_2_2_1; NSUInteger x_2_2_2; } x_26_1_2; } x26; NSInteger x27; }*)layerOwner;
     /* Encoded args for previous method: ^{LCLayer=^^?{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{FloatPoint=ff}{FloatPoint=ff}{FloatRect={FloatPoint=ff}{FloatSize=ff}}{Transform3D=[4[4f]]}{Transform3D=[4[4f]]}f{Color=Ib1}BBfB^{RenderLayer}I{Vector<WebCore::LCLayer*,0ul>=I{VectorBuffer<WebCore::LCLayer*,0ul>=^^{LCLayer}I}}^{LCLayer}@@@BBBf^v{Vector<WebCore::LCLayer::AnimationEntry,0ul>=I{VectorBuffer<WebCore::LCLayer::AnimationEntry,0ul>=^{AnimationEntry}I}}i}8@0:4 */

- (float)contentsScale;
- (void)setContentsScale:(float)arg1;

@end
