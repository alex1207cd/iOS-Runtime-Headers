/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSData, NSMutableDictionary, NSNumber;

@interface SSVGratisRequestBody : NSObject <NSCopying> {
    NSNumber *_accountID;
    NSMutableDictionary *_additionalParameters;
    NSArray *_bundleIdentifiers;
    NSArray *_itemIdentifiers;
    long long _style;
    bool_backgroundRequest;
}

@property(readonly) NSData * JSONBodyData;
@property(copy) NSNumber * accountIdentifier;
@property(getter=isBackgroundRequest) bool backgroundRequest;
@property(readonly) NSMutableDictionary * bodyDictionary;
@property(copy) NSArray * bundleIdentifiers;
@property(copy) NSArray * itemIdentifiers;
@property(readonly) NSData * propertyListBodyData;
@property(readonly) long long requestStyle;

- (void).cxx_destruct;
- (id)JSONBodyData;
- (id)accountIdentifier;
- (id)bodyDictionary;
- (id)bundleIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithRequestStyle:(long long)arg1;
- (bool)isBackgroundRequest;
- (id)itemIdentifiers;
- (id)propertyListBodyData;
- (long long)requestStyle;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBackgroundRequest:(bool)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setValue:(id)arg1 forBodyParameter:(id)arg2;

@end