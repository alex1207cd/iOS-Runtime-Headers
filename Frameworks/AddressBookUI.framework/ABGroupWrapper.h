/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString;



@interface ABGroupWrapper : NSObject 
{
    void *_addressBook;
    NSString *_accountIdentifier;
    void *_store;
    void *_group;
    NSString *_cachedName;
}

@property(readonly) NSString *name;
@property(readonly) void *storeForNewRecords;
@property(readonly) void *group; /* unknown property attribute: V_group */
@property(readonly) void *store; /* unknown property attribute: V_store */
@property(readonly) void *addressBook; /* unknown property attribute: V_addressBook */
@property(readonly) NSString *accountIdentifier; /* unknown property attribute: V_accountIdentifier */

+ (id)createGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2;
+ (id)createGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;

- (id)initWithAddressBook:(void*)arg1 accountIdentifier:(id)arg2 store:(void*)arg3 group:(void*)arg4;
- (void)dealloc;
- (BOOL)isGlobalWrapper;
- (BOOL)isContainerWrapper;
- (BOOL)isDirectoryWrapper;
- (id)name;
- (NSInteger)compareToGroupWrapper:(id)arg1;
- (void*)storeForNewRecords;
- (id)_accountDescriptionBasedOnIdentifier;
- (id)copyDictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void*)group;
- (void*)store;
- (void*)addressBook;
- (id)accountIdentifier;

@end
