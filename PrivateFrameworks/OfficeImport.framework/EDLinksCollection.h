/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;



@interface EDLinksCollection : NSObject 
{
    NSMutableArray *mLinks;
    NSMutableArray *mReferences;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsModified;

}


- (id)init;
- (void)dealloc;
- (NSUInteger)linksCount;
- (id)linkAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfFirstLinkWithType:(NSInteger)arg1;
- (NSUInteger)addLink:(id)arg1;
- (NSUInteger)referencesCount;
- (id)referenceAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfReference:(id)arg1;
- (NSUInteger)addReference:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isModified;
     /* Encoded args for previous method: B8@0:4 */

- (void)setIsModified:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */


@end
