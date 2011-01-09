/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class NSMutableDictionary;



@interface MKCache : NSObject 
{
    NSMutableDictionary *_itemCache;
    struct __CFBinaryHeap { } *_itemLRUHeap;
    NSUInteger _currentHeapTime;
    float _compactionFactor;
}

@property(readonly) NSArray *allObjects;
@property(readonly) NSUInteger count;
@property float compactionFactor; /* unknown property attribute: V_compactionFactor */


- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;
- (void)dealloc;
- (id)allObjects;
- (NSUInteger)count;
- (void)removeAllObjects;
- (void)compact;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (float)compactionFactor;
- (void)setCompactionFactor:(float)arg1;

@end
