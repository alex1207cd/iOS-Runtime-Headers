/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMapTable, NSMutableDictionary, NSMutableArray;



@interface ECMappingContext : NSObject 
{
    NSMapTable *mIndexToMappedIndex;
    NSMutableDictionary *mSheetNameToMappedIndex;
    NSMapTable *mObjectToMappingInfo;
    NSMutableArray *mMappingInfos;
}


- (id)init;
- (void)dealloc;
- (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)mappedSheetNames;
- (NSUInteger)mappedSheetIndexForSheetIndex:(NSUInteger)arg1;
- (NSUInteger)mappedSheetIndexForSheetName:(id)arg1;
- (id)mappingInfoForObject:(id)arg1;
- (NSUInteger)mappingInfoCount;
- (id)mappingInfoAtIndex:(NSUInteger)arg1;
- (void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(NSUInteger)arg3 andObject:(id)arg4;

@end
