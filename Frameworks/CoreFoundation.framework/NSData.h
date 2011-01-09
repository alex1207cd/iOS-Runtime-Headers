/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface NSData : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)data;
+ (id)dataWithBytes:(const void*)arg1 length:(NSUInteger)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
+ (id)dataWithData:(id)arg1;
+ (NSUInteger)quotedPrintableLengthOfHeaderBytes:(const char *)arg1 length:(NSUInteger)arg2;
+ (id)dataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;
+ (id)dataWithHexString:(id)arg1;
+ (id)nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); NSUInteger x2; NSUInteger x3; NSUInteger x4; char *x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; }*)arg1;
     /* Encoded args for previous method: @12@0:4r^{OcBinaryData=^^?III*B}8 */


- (NSUInteger)length;
- (const void*)bytes;
- (unsigned long)_cfTypeID;
- (id)description;
- (id)_asciiDescription;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (BOOL)_bytesAreVM;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(NSUInteger)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (BOOL)isEqualToData:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)writeToFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithBytes:(void*)arg1 length:(NSUInteger)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (id)initWithBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1;
- (BOOL)isNSData__;
- (id)_web_guessedMIMETypeForXML;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_parseRFC822HeaderFields;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (BOOL)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (id)_webkit_parseRFC822HeaderFields;
- (id)_webkit_guessedMIMETypeForXML;
- (id)_webkit_guessedMIMEType;
- (id)md5Digest;
- (id)sha1Digest;
- (id)hexStringValue;
- (id)base64Encoded;
- (id)base64Decoded;
- (id)abStringAtRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 inEncoding:(NSUInteger)arg2;
- (BOOL)abIsUTF16EntourageVCard;
- (id)abDecodeBase64;
- (id)abEncodeBase64DataBreakLines:(BOOL)arg1 allowSlash:(BOOL)arg2 padChar:(BOOL)arg3;
- (id)abDecodedUTF7;
- (id)decodeQuotedPrintableForText:(BOOL)arg1;
- (id)encodeQuotedPrintableForText:(BOOL)arg1;
- (id)encodeQuotedPrintableForText:(BOOL)arg1 allowCancel:(BOOL)arg2;
- (id)decodeBase64;
- (id)decodeBase64InRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1;
- (BOOL)isValidBase64Data;
- (id)encodeBase64WithoutLineBreaks;
- (id)encodeBase64WithoutLineBreaksOrPadding;
- (id)encodeBase64;
- (id)encodeBase64AllowCancel:(BOOL)arg1;
- (id)decodeModifiedBase64;
- (id)encodeModifiedBase64;
- (id)encodeBase64HeaderData;
- (void)appendBase64EncodedDataToData:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfRFC822HeaderData;
- (id)subdataToIndex:(NSUInteger)arg1;
- (id)subdataFromIndex:(NSUInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfData:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfData:(id)arg1 options:(NSUInteger)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfData:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfByteFromSet:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfByteFromSet:(id)arg1 options:(NSUInteger)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfByteFromSet:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfCString:(const char *)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfCString:(const char *)arg1 options:(NSUInteger)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfCString:(const char *)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)componentsSeparatedByData:(id)arg1;
- (id)dataByConvertingUnixNewlinesToNetwork;
- (id)hexString;
- (id)uppercaseHexStringWithoutSpaces;
- (id)uudecodedDataIntoFile:(id*)arg1 mode:(NSUInteger*)arg2;
- (id)uuencodedDataWithFile:(id)arg1 mode:(NSUInteger)arg2;
- (id)MD5Digest;
- (id)webSafeBase64Data;

@end
