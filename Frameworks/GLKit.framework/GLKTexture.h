/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTexture : NSObject {
    unsigned int _GLTextureName;
    unsigned int _bindTarget;
    unsigned int _bitsPerPixel;
    struct CGImageBlockSet { } *_blockSet;
    struct __CFData { } *_cfData;
    int _dataCategory;
    unsigned int _format;
    BOOL _hasAlpha;
    BOOL _hasPremultipliedAlpha;
    unsigned int _height;
    NSData *_imageData;
    unsigned int _index;
    unsigned int _internalFormat;
    BOOL _isCubeMap;
    BOOL _isMipmapped;
    BOOL _isPowerOfTwo;
    BOOL _isVerticalFlipped;
    NSString *_label;
    int _loadMode;
    unsigned int _nComponents;
    unsigned int _nPrimarySurfaces;
    unsigned int _nSurfaces;
    unsigned int _numMipMapLevels;
    unsigned int _orientation;
    unsigned int _primarySurfaceLength;
    BOOL _reOrient;
    BOOL _requestIssuedForAlphaPremultiplication;
    BOOL _requestIssuedForMipmapGeneration;
    BOOL _requestIssuedForSRGB;
    BOOL _requestIssuedToInterpretGrayAsAlpha;
    BOOL _requestIssuedToReorientToGL;
    unsigned int _rowBytes;
    int _texelFormat;
    unsigned int _textureTarget;
    unsigned int _type;
    int _unpackAlignment;
    unsigned int _width;
}

@property (nonatomic) unsigned int GLTextureName;
@property (nonatomic) unsigned int bindTarget;
@property (nonatomic) unsigned int bitsPerPixel;
@property (nonatomic) int dataCategory;
@property (nonatomic) unsigned int format;
@property (nonatomic) BOOL hasAlpha;
@property (readonly) BOOL hasPremultipliedAlpha;
@property (nonatomic) unsigned int height;
@property (readonly) NSData *imageData;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int internalFormat;
@property (nonatomic) BOOL isCubeMap;
@property (nonatomic) BOOL isMipmapped;
@property (nonatomic) BOOL isPowerOfTwo;
@property (nonatomic) BOOL isVerticalFlipped;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) int loadMode;
@property (nonatomic) unsigned int nComponents;
@property (nonatomic) unsigned int nPrimarySurfaces;
@property (nonatomic) unsigned int nSurfaces;
@property (nonatomic) unsigned int numMipMapLevels;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) BOOL reOrient;
@property (nonatomic) unsigned int rowBytes;
@property (nonatomic) int texelFormat;
@property (nonatomic) unsigned int textureTarget;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int width;

- (unsigned int)GLTextureName;
- (BOOL)_uploadToGLTexture:(unsigned int)arg1 data:(id)arg2 width:(int)arg3 height:(int)arg4 dataCategory:(int)arg5 cubeMapIndex:(int)arg6 mipMapIndex:(int)arg7 error:(id*)arg8;
- (void*)alignmentFix:(unsigned int)arg1 data:(const void*)arg2;
- (unsigned int)bindTarget;
- (unsigned int)bitsPerPixel;
- (BOOL)canHonorSRGBrequest;
- (int)dataCategory;
- (void)dealloc;
- (BOOL)decodeCGImage:(struct CGImage { }*)arg1;
- (BOOL)decodeCGImageDataProvider:(struct CGImage { }*)arg1;
- (BOOL)decodeCGImageImageProvider:(struct CGImage { }*)arg1 CGImageProvider:(struct CGImageProvider { }*)arg2;
- (BOOL)determineCGImageBlockFormatWithComponentType:(int)arg1 andPixelSize:(unsigned long)arg2 andColorModel:(int)arg3;
- (BOOL)determinePVRFormat:(unsigned int)arg1;
- (unsigned int)format;
- (BOOL)hasAlpha;
- (BOOL)hasPremultipliedAlpha;
- (unsigned int)height;
- (id)imageData;
- (unsigned int)index;
- (id)init;
- (id)initWithCGImage:(struct CGImage { }*)arg1 forceCubeMap:(BOOL)arg2 wasCubeMap:(BOOL*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6;
- (id)initWithData:(id)arg1 forceCubeMap:(BOOL)arg2 wasCubeMap:(BOOL*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6;
- (id)initWithDecodedData:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 rowBytes:(unsigned int)arg4 texture:(id)arg5 cubeMapIndex:(int)arg6 options:(id)arg7 error:(id*)arg8;
- (unsigned int)internalFormat;
- (BOOL)isCubeMap;
- (BOOL)isMipmapped;
- (BOOL)isPowerOfTwo;
- (BOOL)isVerticalFlipped;
- (id)label;
- (BOOL)loadCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (int)loadMode;
- (BOOL)loadPVRTCData:(id)arg1 error:(id*)arg2;
- (BOOL)loadWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned int)nComponents;
- (unsigned int)nPrimarySurfaces;
- (unsigned int)nSurfaces;
- (unsigned int)numMipMapLevels;
- (unsigned int)orientation;
- (BOOL)premultiplyWithAlpha:(void*)arg1 source:(void*)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id*)arg6;
- (BOOL)reOrient;
- (BOOL)reorientToGL:(void*)arg1 source:(void*)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id*)arg6;
- (unsigned int)rowBytes;
- (void)setBindTarget:(unsigned int)arg1;
- (void)setBitsPerPixel:(unsigned int)arg1;
- (void)setDataCategory:(int)arg1;
- (void)setFormat:(unsigned int)arg1;
- (void)setGLTextureName:(unsigned int)arg1;
- (void)setHasAlpha:(BOOL)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setInternalFormat:(unsigned int)arg1;
- (void)setIsCubeMap:(BOOL)arg1;
- (void)setIsMipmapped:(BOOL)arg1;
- (void)setIsPowerOfTwo:(BOOL)arg1;
- (void)setIsVerticalFlipped:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLoadMode:(int)arg1;
- (void)setNComponents:(unsigned int)arg1;
- (void)setNPrimarySurfaces:(unsigned int)arg1;
- (void)setNSurfaces:(unsigned int)arg1;
- (void)setNumMipMapLevels:(unsigned int)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setReOrient:(BOOL)arg1;
- (void)setRowBytes:(unsigned int)arg1;
- (void)setTexelFormat:(int)arg1;
- (void)setTextureTarget:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (BOOL)shouldApplyPremultiplication;
- (BOOL)shouldApplyReorientToGL;
- (int)texelFormat;
- (unsigned int)textureTarget;
- (unsigned int)type;
- (void)updateRequestedOperationsFromOptions:(id)arg1;
- (BOOL)uploadToGLTexture:(unsigned int)arg1 error:(id*)arg2;
- (unsigned int)width;

@end
