/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <GQZArchiveInputStream>;



@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s { 
        char *next_in; 
        NSUInteger avail_in; 
        NSUInteger total_in; 
        char *next_out; 
        NSUInteger avail_out; 
        NSUInteger total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        NSInteger data_type; 
        NSUInteger adler; 
        NSUInteger reserved; 
    } mStream;
    long long mOffset;
    long long mEnd;
    NSUInteger mCalculatedCrc;
    NSUInteger mCheckCrc;
    <GQZArchiveInputStream> *mInput;
    char *mOutBuffer;
    NSUInteger mOutBufferSize;
}


- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long)arg4 input:(id)arg5;
- (void)dealloc;
- (void)readToOwnBuffer:(const char **)arg1 size:(NSUInteger*)arg2;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;

@end
