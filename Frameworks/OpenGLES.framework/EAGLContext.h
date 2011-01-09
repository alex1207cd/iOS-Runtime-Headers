/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EAGLContext : NSObject 
{

  /* Error parsing encoded ivar type info: ^{_EAGLContextPrivate=@"EAGLSharegroup"^v} */
    struct _EAGLContextPrivate { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; void*x3; void*x4; void*x5; unsigned long x6; unsigned short x7; void*x8; void*x9; const void*x10; void*x11; const out void*x12; void*x13; void*x14; void *x15; } *_private;

}

@property(readonly) NSUInteger API;
@property(readonly) EAGLSharegroup *sharegroup;

+ (BOOL)setCurrentContext:(id)arg1;
+ (id)currentContext;

- (id)initWithAPI:(NSUInteger)arg1;
- (id)initWithAPI:(NSUInteger)arg1 sharegroup:(id)arg2;
- (void)dealloc;
- (NSUInteger)API;
- (id)sharegroup;
- (BOOL)renderbufferStorage:(NSUInteger)arg1 fromDrawable:(id)arg2;
- (BOOL)presentRenderbuffer:(NSUInteger)arg1;
- (BOOL)attachImage:(NSUInteger)arg1 toCoreSurface:(struct __CoreSurfaceBuffer { }*)arg2 invertedRender:(BOOL)arg3;
- (void)swapNotification:(struct __IOMobileFramebuffer { }*)arg1 forTransaction:(NSUInteger)arg2 onLayer:(NSUInteger)arg3;

@end
