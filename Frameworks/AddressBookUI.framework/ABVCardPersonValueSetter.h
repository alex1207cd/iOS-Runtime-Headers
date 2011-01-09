/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */



@interface ABVCardPersonValueSetter : ABVCardValueSetter 
{
    void *_person;
    struct __CFArray { } *_properties;
}

+ (struct __CFArray { }*)supportedProperties;

- (id)initWithPerson:(void*)arg1;
- (struct __CFArray { }*)foundProperties;
- (void)dealloc;
- (BOOL)setValue:(void*)arg1 forProperty:(NSUInteger)arg2;
- (void*)valueForProperty:(NSUInteger)arg1;
- (BOOL)setImageData:(id)arg1;
- (id)fullName;
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(NSUInteger)arg2;

@end
