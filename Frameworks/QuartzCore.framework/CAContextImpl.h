/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CAContextImpl : CAContext 
{
    NSUInteger _refcount;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _mutex;
    void *_next;
    void *_layer;
    struct _CARenderContext { struct { 
            NSInteger x; 
        } x1; NSUInteger x2; struct __CFDictionary {} *x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } x7; NSUInteger x8; struct _CARenderHandle {} *x9; struct _CARenderLayerNode {} *x10; struct __CFDictionary {} *x11; struct x_list_struct {} *x12; float x13; struct _CARenderFence {} *x14; struct _CARenderLayerHost {} *x15; struct x_list_struct {} *x16; double x17; NSInteger *x18; struct CGSBounds { 
            NSInteger x; 
            NSInteger y; 
            NSInteger w; 
            NSInteger h; 
        } x19; NSUInteger x20; NSUInteger x21; NSUInteger x22; NSUInteger x23; NSInteger *x24; } *_renderCtx;
    struct CGColorSpace { } *_colorspace;
    NSUInteger _serverPort;
    NSUInteger _clientPort;
    struct __CFMachPort { } *_clientPortRef;
    struct __CFRunLoopSource { } *_clientPortSource;
    NSUInteger _clientId;
    NSUInteger _localId;
    struct x_list_struct { void *x1; struct x_list_struct {} *x2; } *_shmems;
    struct x_list_struct { void *x1; struct x_list_struct {} *x2; } *_deletedShmems;
    float _level;
    NSUInteger _fenceName;
    NSUInteger _fenceCount;

  /* Error parsing encoded ivar type info: ^{commitClosure=^{_CATransaction}@"CAContextImpl"dd^{_CARenderCoder}^{_CARenderContext}dB} */
    struct commitClosure { struct _CATransaction {} *x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; unsigned char x4; void*x5; unsigned char x6; out in void*x7; void*x8; void*x9; void*x10; NSUInteger x11; void*x12; void*x13; long x14; void*x15; double x16; double x17; struct _CARenderCoder {} *x18; struct _CARenderContext {} *x19; double x20; void*x21; } *_commit;

    unsigned int _ownsServerPort : 1;
    unsigned int _synchronized : 1;
    unsigned int _serverDied : 1;
}


- (id)initWithOptions:(id)arg1 localContext:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
     /* Encoded args for previous method: @16@0:4@8B12 */

- (id)initRemoteWithOptions:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (NSUInteger)contextId;
- (struct CGColorSpace { }*)colorSpace;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (id)layer;
- (void)setLayer:(id)arg1;
- (void)orderAbove:(NSUInteger)arg1;
- (void)orderBelow:(NSUInteger)arg1;
- (void)setLevel:(float)arg1;
- (float)level;
- (struct _CARenderContext { struct { NSInteger x_1_1_1; } x1; NSUInteger x2; struct __CFDictionary {} *x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; NSUInteger x8; struct _CARenderHandle {} *x9; struct _CARenderLayerNode {} *x10; struct __CFDictionary {} *x11; struct x_list_struct {} *x12; float x13; struct _CARenderFence {} *x14; struct _CARenderLayerHost {} *x15; struct x_list_struct {} *x16; double x17; NSInteger *x18; struct CGSBounds { NSInteger x_19_1_1; NSInteger x_19_1_2; NSInteger x_19_1_3; NSInteger x_19_1_4; } x19; NSUInteger x20; NSUInteger x21; NSUInteger x22; NSUInteger x23; NSInteger *x24; }*)renderContext;
- (BOOL)valid;
- (void)setFence:(NSUInteger)arg1 count:(NSUInteger)arg2;
- (NSUInteger)createSlot;
- (void)deleteSlot:(NSUInteger)arg1;
- (void)setObject:(id)arg1 forSlot:(NSUInteger)arg2;

@end
