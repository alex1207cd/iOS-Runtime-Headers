/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface OADAngleArcPathElement : OADPathElement 
{
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } y; 
    } mCenter;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } y; 
    } mSemiaxes;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mStartAngle;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mAngleLength;
    BOOL mConnectedToPrevious;
}


- (id)initWithCenter:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })arg1 semiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })arg2 startAngle:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg3 angleLength:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg4 connectedToPrevious:(BOOL)arg5;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })center;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })semiaxes;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })startAngle;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })angleLength;
- (BOOL)connectedToPrevious;

@end
