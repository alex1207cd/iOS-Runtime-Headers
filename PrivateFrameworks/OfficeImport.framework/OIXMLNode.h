/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;



@interface OIXMLNode : NSObject <NSCopying>
{
    NSUInteger _kind;
    NSString *_name;
    id _value;
}

+ (id)textWithStringValue:(id)arg1;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString { }*)arg3;
+ (void)_escapeCharacters:(const unsigned short*)arg1 amount:(NSUInteger)arg2 inString:(id)arg3 appendingToString:(struct __CFString { }*)arg4;

- (id)initWithKind:(NSUInteger)arg1;
- (id)initWithKind:(NSUInteger)arg1 name:(id)arg2 stringValue:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (NSUInteger)kind;
- (void)setName:(id)arg1;
- (id)name;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (id)description;
- (id)XMLString;
- (void)_appendXMLStringToString:(struct __CFString { }*)arg1;

@end
