/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSDate, NSString, MappedData;



@interface IMAPFetchResult : NSObject 
{
    NSInteger _itemType;
    union { 
        NSArray *envelope; 
        NSDate *internalDate; 
        NSUInteger messageSize; 
        NSArray *bodyStructure; 
        struct { 
            NSString *section; 
            NSUInteger startOffset; 
            MappedData *sectionData; 
        } bodySectionInfo; 
        NSUInteger uid; 
        struct { 
            NSUInteger messageFlags; 
            NSArray *customFlags; 
        } flags; 
    } _typeSpecific;
}


- (id)initWithType:(NSInteger)arg1;
- (void)dealloc;
- (NSInteger)type;
- (id)envelope;
- (void)setEnvelope:(id)arg1;
- (id)internalDate;
- (void)setInternalDate:(id)arg1;
- (id)fetchData;
- (void)setFetchData:(id)arg1;
- (unsigned long)messageSize;
- (void)setMessageSize:(unsigned long)arg1;
- (id)bodyStructure;
- (void)setBodyStructure:(id)arg1;
- (unsigned long)startOffset;
- (void)setStartOffset:(unsigned long)arg1;
- (id)section;
- (void)setSection:(id)arg1;
- (unsigned long)uid;
- (void)setUid:(unsigned long)arg1;
- (id)flagsArray;
- (void)setFlagsArray:(id)arg1;
- (void)setMessageFlags:(unsigned long)arg1;
- (unsigned long)messageFlags;
- (void)setCustomFlagsArray:(id)arg1;
- (id)customFlagsArray;
- (unsigned long)encoding;
- (id)description;

@end
