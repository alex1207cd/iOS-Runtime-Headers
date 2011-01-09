/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface WBOfficeArtClient : NSObject <OABClient>
{
}

+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (BOOL)escherIsFullySupported;
+ (BOOL)tablesAreAllowed;
+ (void)readFrom:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1 to:(id)arg2;
+ (void)readBoundingBox:(id)arg1 fromProperties:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2;
+ (void)readBoundingBox:(id)arg1 fromGroupLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)id:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)behindText:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{EshContentProperties=^^?S^{EshContentData}}8 */

+ (NSInteger)horizontalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (NSInteger)relativeHorizontalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (NSInteger)verticalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (NSInteger)relativeVerticalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceLeft:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceTop:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceRight:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceBottom:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (void)adjustZIndexesForGroup:(id)arg1;


@end
