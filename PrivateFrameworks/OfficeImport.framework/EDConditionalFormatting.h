/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, EDReferenceCollection;



@interface EDConditionalFormatting : NSObject 
{
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
}

+ (id)conditionalFormatting;

- (id)init;
- (void)dealloc;
- (NSUInteger)ruleCount;
- (id)ruleAtIndex:(NSUInteger)arg1;
- (void)addRule:(id)arg1;
- (void)insertRule:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)sortRulesByPriority;
- (NSUInteger)rangeCount;
- (id)rangeAtIndex:(NSUInteger)arg1;
- (void)addRange:(id)arg1;

@end
