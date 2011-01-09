/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration>
{
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)array;
+ (id)arrayWithObjects:(const id*)arg1 count:(NSUInteger)arg2;
+ (id)arrayWithObject:(id)arg1;
+ (id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2;

- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)arg1;
- (BOOL)isNSArray__;
- (unsigned long)_cfTypeID;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (id)objectEnumerator;
- (id)reverseObjectEnumerator;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (BOOL)getObject:(id*)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)containsObject:(id)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (NSUInteger)indexOfObject:(id)arg1;
- (NSUInteger)indexOfObjectIdenticalTo:(id)arg1;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)indexOfObject:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)indexOfObject:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 identical:(BOOL)arg3;
- (long)_cfindexOfObject:(id)arg1 range:(struct { NSInteger x1; NSInteger x2; })arg2;
- (long)_cflastIndexOfObject:(id)arg1 inRange:(struct { NSInteger x1; NSInteger x2; })arg2;
- (NSUInteger)indexOf:(id)arg1 :(NSUInteger)arg2 :(BOOL)arg3;
- (NSUInteger)countOccurrences:(id)arg1;
- (id)firstObjectCommonWithArray:(id)arg1;
- (NSUInteger)indexOfAttributeBySelector:(SEL)arg1 equalToObject:(id)arg2;
- (id)lastObject;
- (void)apply:(int (*)())arg1 context:(void*)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)componentsJoinedByString:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(NSUInteger)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (id)description;
- (id)initWithObjects:(id*)arg1 count:(NSUInteger)arg2;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)subarrayWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)arrayByAddingObject:(id)arg1;
- (id)arrayByAddingObjects:(const id*)arg1 count:(NSUInteger)arg2;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)arrayByExcludingObjectsInArray:(id)arg1;
- (id)arrayByExcludingToObjectsInArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)objectsAtIndexes:(id)arg1;
- (id)sortedArrayHint;
- (id)sortedArrayUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (id)sortedArrayUsingFunction:(int (*)())arg1 context:(void*)arg2 hint:(id)arg3;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (id)_stringToWrite;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(NSUInteger)arg2;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(NSUInteger)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(NSUInteger)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(NSUInteger)arg3;
- (BOOL)_validateValue:(id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(NSUInteger)arg3 error:(id*)arg4;
- (id)_sumForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfSetsForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(NSUInteger)arg4 context:(void*)arg5;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(NSUInteger)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)pathsMatchingExtensions:(id)arg1;
- (id)stringsByAppendingPathComponent:(id)arg1;
- (BOOL)isNSArray__;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (void*)CA_copyRenderValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(NSInteger)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)_web_lowercaseStrings;
- (id)initWithObjectsFromArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)_kb_firstObject;
- (BOOL)_kb_firstTwoObjectsEqual;
- (BOOL)_kb_firstObjectsEqual:(NSUInteger)arg1;
- (id)specifierForID:(id)arg1;
- (NSInteger)indexForInsertingAttendeeDisplayString:(id)arg1;
- (id)uncommentedAddressList;
- (NSUInteger)indexOfMailboxDictionaryWithName:(id)arg1;
- (NSInteger)indexOfOldestDate;
- (id)dictionaryWithMessagesSortedByStore;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)indicesOfStringsWithPrefix:(id)arg1;
- (id)arrayByRemovingObject:(id)arg1;
- (NSInteger)indexOfResultGreaterThanLat:(double)arg1;
- (NSInteger)indexOfResultGreaterThanLon:(double)arg1;
- (NSInteger)indexOfResult:(id)arg1;
- (NSInteger)indexOfPinWitResultGreaterThanLon:(double)arg1;
- (id)commaSeparatedRecipientListWithWidth:(float)arg1 forFont:(id)arg2;
- (id)commaSeparatedRecipientListWithWidth:(float)arg1 forFont:(id)arg2 usingSelector:(SEL)arg3;

@end
