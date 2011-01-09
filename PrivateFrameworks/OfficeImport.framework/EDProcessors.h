/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface EDProcessors : NSObject 
{
    NSMutableArray *mProcessors;
}


- (id)init;
- (void)dealloc;
- (void)addProcessorClass:(Class)arg1;
- (void)removeAllObjects;
- (void)markObject:(id)arg1 processor:(Class)arg2;
- (void)applyProcessorsWithWorkbook:(id)arg1;

@end
