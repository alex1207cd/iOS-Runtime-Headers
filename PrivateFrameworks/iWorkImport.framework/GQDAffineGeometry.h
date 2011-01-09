/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDAffineGeometry : NSObject <GQDNameMappable>
{
    struct CGSize { 
        float width; 
        float height; 
    } mNaturalSize;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    BOOL mSizesLocked;
    BOOL mAspectRatioLocked;
    struct CGPoint { 
        float x; 
        float y; 
    } mPosition;
    float mAngle;
    BOOL mHorizontalFlip;
    BOOL mVerticalFlip;
    float mShearXAngle;
    float mShearYAngle;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (struct CGSize { float x1; float x2; })naturalSize;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)sizesLocked;
- (BOOL)aspectRatioLocked;
- (struct CGPoint { float x1; float x2; })position;
- (float)angle;
- (BOOL)horizontalFlip;
- (BOOL)verticalFlip;
- (float)shearXAngle;
- (float)shearYAngle;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
