/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUDebugMapExtractor : VMUSymbolExtractor 
{
}

+ (id)debugMapExtractorWithMachOHeader:(id)arg1;

- (id)initWithMachOHeader:(id)arg1;
- (void)readDebugMapsFromMachOHeader:(id)arg1 nsyms:(NSUInteger)arg2 nlist:(id)arg3 stringTable:(id)arg4;
- (void)readDSymFileForHeader:(id)arg1;

@end
