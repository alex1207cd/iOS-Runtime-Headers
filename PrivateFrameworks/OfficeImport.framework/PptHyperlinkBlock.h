/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ESDObject;



@interface PptHyperlinkBlock : NSObject 
{
    ESDObject *mInteractiveInfoAtomHolder;
    ESDObject *mTxInteractiveInfoAtomHolder;
}


- (struct PptInteractiveInfoAtom { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; NSUInteger x7; NSUInteger x8; NSInteger x9; unsigned char x10; NSInteger x11; void*x12; void*x13; void*x14; unsigned char x15; }*)interactiveInfoAtom;
     /* Encoded args for previous method: ^{PptInteractiveInfoAtom=^^?S{EshHeader=iIsSC}^^?iBIIiCiBBBC}8@0:4 */

- (void)setInteractiveInfoAtomHolder:(id)arg1;
- (struct PptTxInteracInfoAtom { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; NSInteger x7; NSInteger x8; }*)txtInteractiveInfoAtom;
     /* Encoded args for previous method: ^{PptTxInteracInfoAtom=^^?S{EshHeader=iIsSC}^^?iBii}8@0:4 */

- (void)setTxInteractiveInfoAtomHolder:(id)arg1;

@end
