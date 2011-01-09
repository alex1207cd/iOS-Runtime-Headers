/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADPath : NSObject 
{
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    NSMutableArray *mElements;
    NSInteger mFillMode;
    BOOL mStroked;
}


- (id)init;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })size;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)addElement:(id)arg1;
- (NSUInteger)elementCount;
- (id)elementAtIndex:(NSUInteger)arg1;
- (NSInteger)fillMode;
- (void)setFillMode:(NSInteger)arg1;
- (BOOL)stroked;
- (void)setStroked:(BOOL)arg1;

@end
