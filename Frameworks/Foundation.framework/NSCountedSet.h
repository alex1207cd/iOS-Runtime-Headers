/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSCountedSet : NSMutableSet 
{
    id _table;
    void *_reserved;
}


- (NSUInteger)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (Class)classForCoder;
- (void)intersectSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)removeAllObjects;
- (NSUInteger)countForObject:(id)arg1;
- (id)init;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithObjects:(id*)arg1 count:(NSUInteger)arg2;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithSet:(id)arg1;
- (void)dealloc;

@end
