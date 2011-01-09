/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSObject <NSObject>
{
    Class isa;
}

@property(readonly) BOOL hasPanoramaID;

+ (void)load;
+ (void)initialize;
+ (id)self;
+ (Class)class;
+ (Class)superclass;
+ (BOOL)isMemberOfClass:(Class)arg1;
+ (BOOL)isKindOfClass:(Class)arg1;
+ (BOOL)isSubclassOfClass:(Class)arg1;
+ (BOOL)isAncestorOfObject:(id)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (NSUInteger)hash;
+ (BOOL)isEqual:(id)arg1;
+ (BOOL)isFault;
+ (BOOL)isProxy;
+ (int (*)())instanceMethodForSelector:(SEL)arg1;
+ (int (*)())methodForSelector:(SEL)arg1;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (id)performSelector:(SEL)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (id)description;
+ (id)debugDescription;
+ (id)new;
+ (id)retain;
+ (oneway void)release;
+ (id)autorelease;
+ (NSUInteger)retainCount;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)dealloc;
+ (void)finalize;
+ (struct _NSZone { }*)zone;
+ (id)copy;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (id)mutableCopy;
+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (BOOL)_shouldAddObservationForwardersForKey:(id)arg1;
+ (void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2;
+ (id)_keysForValuesAffectingValueForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)classForKeyedUnarchiver;
+ (id)classFallbacksForKeyedArchiver;
+ (id)_copyDescription;
+ (void)initialize;
+ (void)load;
+ (BOOL)instancesImplementSelector:(SEL)arg1;
+ (BOOL)implementsSelector:(SEL)arg1;
+ (void)setVersion:(NSInteger)arg1;
+ (NSInteger)version;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (int (*)())CA_setterForType:(NSInteger)arg1;
+ (int (*)())CA_getterForType:(NSInteger)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (void)performSelectorWithNonRetainedTarget:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 afterDelay:(double)arg4;
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)arg1;
+ (void)clearLocks;
+ (BOOL)overridesClassMethod:(SEL)arg1;

- (id)self;
- (Class)class;
- (Class)superclass;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFault;
- (BOOL)isProxy;
- (int (*)())methodForSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (id)debugDescription;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (NSUInteger)retainCount;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (struct _NSZone { }*)zone;
- (id)copy;
- (id)mutableCopy;
- (Class)classForArchiver;
- (id)replacementObjectForArchiver:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)validateValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (id)mutableSetValueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (BOOL)_isKVOA;
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;
- (void)_willChangeValuesForKeys:(id)arg1;
- (void)_didChangeValuesForKeys:(id)arg1;
- (id)_implicitObservationInfo;
- (void)setObservationInfo:(void*)arg1;
- (void*)observationInfo;
- (void)willChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChange:(NSUInteger)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChange:(NSUInteger)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(NSUInteger)arg2 usingObjects:(id)arg3;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(NSUInteger)arg2 usingObjects:(id)arg3;
- (void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(NSUInteger)arg3 context:(void*)arg4;
- (void)_removeObserver:(id)arg1 forProperty:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(NSUInteger)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (Class)classForKeyedArchiver;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)autorelease;
- (id)_copyDescription;
- (void)dealloc;
- (id)awakeAfterUsingCoder:(id)arg1;
- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)arg1;
- (BOOL)implementsSelector:(SEL)arg1;
- (BOOL)isNSArray__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSSet__;
- (BOOL)isNSNumber__;
- (BOOL)isNSData__;
- (BOOL)isNSDate__;
- (BOOL)isNSString__;
- (BOOL)isNSValue__;
- (unsigned long)_cfTypeID;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 modes:(id)arg5;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 modes:(id)arg4;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void*)CA_copyRenderValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(NSInteger)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (float)CA_distanceToValue:(id)arg1;
- (void)releaseOnMainThread;
- (void)awakeFromNib;
- (void)_vers_dyna_maptop_setid:(id)arg1;
- (void)_vers_dyna_maptop_fin;
- (void)postNotificationWithDescription:(id)arg1;
- (void)allowSafePerformSelector;
- (void)disallowSafePerformSelector;
- (BOOL)okToNotifyFromThisThread;
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (long)becomeActive;
- (long)becomeInactive;
- (void)_nonRetainingPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)lock;
- (BOOL)tryLock;
- (void)lockWithPriority;
- (BOOL)tryLockWithPriority;
- (void)unlock;
- (void)yieldLock;
- (BOOL)isLocked;
- (void)performSelectorInMainThread:(SEL)arg1;
- (void)performSelectorInMainThread:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2;
- (void)performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (BOOL)hasPanoramaID;

@end
