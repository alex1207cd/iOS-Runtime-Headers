/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTOverlapCell, GQDTCell, GQDTTable;



@interface GQSTable : NSObject 
{
    GQDTTable *mTable;
    GQDTOverlapCell *mCurrentOverlapCell;
    GQDTCell *mLastCellRead;
    BOOL mIsStreaming;
    BOOL mAlwaysPutReadCellsInArray;
}


- (id)initWithStreaming:(BOOL)arg1 table:(id)arg2;
- (void)dealloc;
- (id)currentOverlapCell;
- (void)setCurrentOverlapCell:(id)arg1;
- (id)lastCellRead;
- (void)setLastCellRead:(id)arg1;
- (BOOL)isStreaming;
- (id)table;
- (BOOL)alwaysPutReadCellsInArray;
- (void)setAlwaysPutReadCellsInArray:(BOOL)arg1;

@end
