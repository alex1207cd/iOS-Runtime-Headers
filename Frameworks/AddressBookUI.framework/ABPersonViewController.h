/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonViewControllerDelegate>;



@interface ABPersonViewController : UIViewController 
{
    <ABPersonViewControllerDelegate> *_personViewDelegate;
    BOOL _allowsActions;
    BOOL _allowsDeletion;
    BOOL _animatedRight;
    struct __CFArray { } *_displayedProperties;
    id _personView;
    id _helper;
}

@property <ABPersonViewControllerDelegate> *personViewDelegate;
@property void *addressBook;
@property void *displayedPerson;
@property(copy) NSArray *displayedProperties;
@property BOOL allowsEditing;
@property BOOL allowsCancel;
@property(retain) ABModel *model;
@property BOOL allowsActions; /* unknown property attribute: V_allowsActions */
@property BOOL allowsDeletion; /* unknown property attribute: V_allowsDeletion */

+ (id)arrayByWrappingIntegersInCFArray:(struct __CFArray { }*)arg1;
+ (struct __CFArray { }*)createCFArrayByUnwrappingIntegersInArray:(id)arg1;

- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsCancel;
- (void)setAllowsCancel:(BOOL)arg1;
- (id)personViewDelegate;
- (void)setPersonViewDelegate:(id)arg1;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (void*)displayedPerson;
- (void)setDisplayedPerson:(void*)arg1;
- (id)displayedProperties;
- (void)setDisplayedProperties:(id)arg1;
- (void)setDisplayedPropertiesAsIntegers:(struct __CFArray { }*)arg1;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 important:(BOOL)arg3;
- (id)model;
- (void)setModel:(id)arg1;
- (void)modelDatabaseChange:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)cardViewer:(id)arg1 selectedPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)cardViewer:(id)arg1 presentActionsSheet:(id)arg2;
- (void)cardViewer:(id)arg1 dismissActionsSheet:(id)arg2;
- (BOOL)allowsActions;
- (void)setAllowsActions:(BOOL)arg1;
- (BOOL)allowsDeletion;
- (void)setAllowsDeletion:(BOOL)arg1;

@end
