/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, <GQZArchiveInputStream>;



@interface GQZArchive : NSObject 
{
    NSMutableDictionary *mEntries;
    <GQZArchiveInputStream> *mInput;
}


- (id)initWithPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)entryWithName:(id)arg1;
- (id)entryNames;
- (void)readEntries;
- (struct GQZEndOfCentralDirectory { unsigned long long x1; unsigned long long x2; unsigned long long x3; })readEndOfCentralDirectory;
- (const char *)searchForEndOfCentralDirectory;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long)arg2;

@end
