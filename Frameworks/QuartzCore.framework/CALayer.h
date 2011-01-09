/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer;



@interface CALayer : NSObject <CAMediaTiming, CAPropertyInfo>
{
    struct _CALayerIvars { 
        NSInteger refcount; 
        NSUInteger flags; 
        NSUInteger parent; 
        void *sublayers; 
        CALayer *mask; 
        struct _CALayerState {} *state; 
        struct _CALayerState {} *previous_state; 
        struct _CALayerAnimation {} *animations; 
        NSUInteger slots[3]; 
    } _attr;
}

@property(readonly) CGRect visibleRect;
@property(getter=isFlipped) BOOL flipped;
@property float anchorPointZ;
@property BOOL clearsContext;
@property CGAffineTransform contentsTransform;
@property float minificationFilterBias;
@property BOOL sortsSublayers;
@property CGRect bounds;
@property CGPoint position;
@property float zPosition;
@property CGPoint anchorPoint;
@property CATransform3D transform;
@property CGRect frame;
@property(getter=isHidden) BOOL hidden;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(readonly) CALayer *superlayer;
@property(copy) NSArray *sublayers;
@property CATransform3D sublayerTransform;
@property BOOL masksToBounds;
@property(retain) id contents;
@property CGRect contentsRect;
@property(copy) NSString *contentsGravity;
@property(copy) NSString *minificationFilter;
@property(copy) NSString *magnificationFilter;
@property(getter=isOpaque) BOOL opaque;
@property BOOL needsDisplayOnBoundsChange;
@property NSUInteger edgeAntialiasingMask;
@property CGColor *backgroundColor;
@property float opacity;
@property(retain) id compositingFilter;
@property(copy) NSArray *filters;
@property(copy) NSArray *backgroundFilters;
@property(copy) NSDictionary *actions;
@property(copy) NSString *name;
@property id delegate;
@property(copy) NSDictionary *style;
@property(copy) NSString *fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double duration;
@property double beginTime;

+ (id)defaultValueForKey:(id)arg1;
+ (id)layer;
+ (id)defaultActionForKey:(id)arg1;
+ (id)properties;
+ (int (*)())CA_setterForType:(NSInteger)arg1;
+ (int (*)())CA_getterForType:(NSInteger)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;

- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithLayer:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)willChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })position;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (void)setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (BOOL)isOpaque;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)needsDisplayOnBoundsChange;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (NSUInteger)edgeAntialiasingMask;
- (void)setEdgeAntialiasingMask:(NSUInteger)arg1;
- (id)contentsGravity;
- (void)setContentsGravity:(id)arg1;
- (BOOL)masksToBounds;
- (void)setMasksToBounds:(BOOL)arg1;
- (id)sublayers;
- (void)setSublayers:(id)arg1;
- (id)superlayer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)removeFromSuperlayer;
- (void)insertSublayer:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (id)actionForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (BOOL)_scheduleAnimationTimer;
- (void)_cancelAnimationTimer;
- (id)presentationLayer;
- (id)modelLayer;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)display;
- (void)_display;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setNeedsLayout;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (void)layoutIfNeeded;
- (void)layoutSublayers;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)timeOffset;
- (void)setTimeOffset:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (float)speed;
- (void)setSpeed:(float)arg1;
- (float)repeatCount;
- (void)setRepeatCount:(float)arg1;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (BOOL)autoreverses;
- (void)setAutoreverses:(BOOL)arg1;
- (id)fillMode;
- (void)setFillMode:(id)arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)zPosition;
- (void)setZPosition:(float)arg1;
- (BOOL)isDoubleSided;
- (void)setDoubleSided:(BOOL)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (void)setTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })sublayerTransform;
- (void)setSublayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)magnificationFilter;
- (void)setMagnificationFilter:(id)arg1;
- (id)minificationFilter;
- (void)setMinificationFilter:(id)arg1;
- (float)opacity;
- (void)setOpacity:(float)arg1;
- (struct CGColor { }*)backgroundColor;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (id)filters;
- (void)setFilters:(id)arg1;
- (id)backgroundFilters;
- (void)setBackgroundFilters:(id)arg1;
- (id)compositingFilter;
- (void)setCompositingFilter:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (BOOL)hasBeenCommitted;
- (BOOL)clearsContext;
- (void)setClearsContext:(BOOL)arg1;
- (BOOL)sortsSublayers;
- (void)setSortsSublayers:(BOOL)arg1;
- (BOOL)isFlipped;
- (void)setFlipped:(BOOL)arg1;
- (BOOL)contentsAreFlipped;
- (void)invalidateContents;
- (void)setContentsChanged;
- (void*)regionBeingDrawn;
- (BOOL)needsDisplay;
- (void)displayIfNeeded;
- (BOOL)_shouldSmoothFonts;
- (BOOL)needsLayout;
- (BOOL)layoutIsActive;
- (BOOL)ignoresHitTesting;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (BOOL)isDescendantOf:(id)arg1;
- (id)ancestorSharedWithLayer:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)animationKeys;
- (struct _CARenderLayer { struct { NSInteger x_1_1_1; } x1; NSUInteger x2; struct _CARenderHandle {} *x3; void *x4; struct CGPoint { float x_5_1_1; float x_5_1_2; } x5; struct CGSize { float x_6_1_1; float x_6_1_2; } x6; struct _CARenderArray {} *x7; struct _CARenderArray {} *x8; }*)_copyRenderLayer:(struct _CATransaction { void *x1; struct _CATransactionLevel {} *x2; struct _CATransactionLevel { struct _CATransactionLevel {} *x_3_1_1; struct _CAAttrList {} *x_3_1_2; } x3; struct __CFRunLoop {} *x4; struct __CFRunLoopObserver {} *x5; struct _CATransactionDeleted {} *x6; struct _CATransactionCommand {} *x7; struct _CATransactionCommand {} *x8; struct x_heap_struct {} *x9; struct x_pool_struct {} *x10; struct x_hash_table_struct {} *x11; double x12; double x13; NSUInteger x14; struct x_list_struct {} *x15; void *x16; NSUInteger x17; struct x_hash_table_struct {} *x18; struct x_list_struct {} *x19; struct x_hash_table_struct {} *x20; struct x_hash_table_struct {} *x21; NSUInteger x22; unsigned int x23 : 16; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; }*)arg1 flags:(NSUInteger*)arg2;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)_renderLayerDefinesProperty:(NSUInteger)arg1;
     /* Encoded args for previous method: B12@0:4I8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)_renderLayerPropertyAffectsGeometry:(NSUInteger)arg1;
     /* Encoded args for previous method: B12@0:4I8 */

- (void)layerDidBecomeVisible:(BOOL)arg1;
- (BOOL)hidden;
- (BOOL)opaque;
- (BOOL)doubleSided;
- (float)anchorPointZ;
- (void)setAnchorPointZ:(float)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })contentsTransform;
- (void)setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (float)minificationFilterBias;
- (void)setMinificationFilterBias:(float)arg1;
- (void)_scrollPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_scrollRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (NSInteger)compareTextEffectsOrdering:(id)arg1;
- (id)description;
- (BOOL)synchronizeWithAnimationForKey:(id)arg1 shouldStop:(BOOL)arg2;
- (void)freezeAnimationForKey:(id)arg1;
- (void)synchronizeWithAnimationForKey:(id)arg1;

@end
