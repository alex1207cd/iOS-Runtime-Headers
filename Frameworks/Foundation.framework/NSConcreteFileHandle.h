/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSConcreteFileHandle : NSFileHandle 
{
    NSInteger _fd;
    void *_nativeHandle;
    void *_avars;
    unsigned short _flags;
    BOOL _padding[2];
    struct __CFRunLoopSource { } *_source;
    struct __CFRunLoop { } *_rl;
    unsigned short _activity;
    BOOL _padding2[2];
    NSInteger _error;
    void *_resultBytes;
    NSUInteger _resultLength;
    NSInteger _resultSocket;
}


- (NSInteger)fileDescriptor;
- (id)initWithFileDescriptor:(NSInteger)arg1 closeOnDealloc:(BOOL)arg2;
- (id)initWithFileDescriptor:(NSInteger)arg1;
- (id)initWithPath:(id)arg1 flags:(NSInteger)arg2 createMode:(NSInteger)arg3;
- (id)availableData;
- (NSUInteger)readDataOfLength:(NSUInteger)arg1 buffer:(char *)arg2;
- (id)readDataOfLength:(NSUInteger)arg1;
- (id)readDataToEndOfFile;
- (void)writeData:(id)arg1;
- (unsigned long long)offsetInFile;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (void)closeFile;
- (id)port;
- (void)setPort:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)performActivity:(NSInteger)arg1 modes:(id)arg2;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)readInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (void)waitForDataInBackgroundAndNotify;

@end
