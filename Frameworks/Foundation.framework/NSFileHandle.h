/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSFileHandle : NSObject 
{
}

+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithNullDevice;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;
+ (id)createFileAtPath:(id)arg1 flags:(NSInteger)arg2 mode:(NSInteger)arg3;
+ (id)fileHandleForUniqueFile:(id*)arg1 atPath:(id)arg2 mode:(NSInteger)arg3 extension:(id)arg4;
+ (id)fileHandleForUniqueFile:(id*)arg1 atPath:(id)arg2 mode:(NSInteger)arg3;
+ (id)fileHandleForTempFile:(id*)arg1 atPath:(id)arg2 mode:(NSInteger)arg3;

- (id)initWithPath:(id)arg1 flags:(NSInteger)arg2 createMode:(NSInteger)arg3;
- (id)availableData;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(NSUInteger)arg1;
- (void)writeData:(id)arg1;
- (unsigned long long)offsetInFile;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (void)closeFile;
- (NSInteger)fileDescriptor;

@end
