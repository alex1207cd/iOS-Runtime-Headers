/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, UISearchField, ABGroupWrapper, <ABSearchHelperDelegate>, UIView, UIImageView, UITableView;



@interface ABSearchHelper : NSObject <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_containerTableView;
    UIView *_searchOverlayView;
    UIView *_searchView;
    UISearchField *_searchField;
    UIView *_dimmingView;
    UITableView *_searchResultsView;
    UIImageView *_searchResultsShadowView;
    NSString *_placeholder;
    BOOL _searching;
    BOOL _isEndingEditingWithAnimation;
    BOOL _clearResultsAfterAnimation;
    BOOL _searchingEnabled;
    BOOL _deferredFirstResponder;
    BOOL _didDeferFirstResponder;
    ABGroupWrapper *_groupWrapper;
    void *_addressBook;
    struct __CFArray { } *_searchResults;
    <ABSearchHelperDelegate> *_delegate;
}

@property(retain,readonly) UISearchField *searchField;
@property(retain,readonly) UIView *searchView;
@property(retain,readonly) UIView *searchOverlayView; /* unknown property attribute: V_searchOverlayView */
@property(readonly) __CFArray *searchResults; /* unknown property attribute: V_searchResults */
@property(retain) UITableView *containerTableView; /* unknown property attribute: V_containerTableView */
@property(copy) NSString *placeholder; /* unknown property attribute: V_placeholder */
@property <ABSearchHelperDelegate> *delegate; /* unknown property attribute: V_delegate */
@property void *addressBook; /* unknown property attribute: V_addressBook */
@property(retain) ABGroupWrapper *groupWrapper; /* unknown property attribute: V_groupWrapper */

+ (id)createBannerWithWidth:(float)arg1 hasTableIndex:(BOOL)arg2 andCopySearchField:(id*)arg3;
+ (id)createBannerWithWidth:(float)arg1 andCopySearchField:(id*)arg2;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (BOOL)isSearching;
- (void)updateSearchField;
- (id)searchField;
- (id)searchView;
- (void)setSearchingEnabled:(BOOL)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)_endSearchAnimated:(BOOL)arg1;
- (void)clearSearchResultsAnimated:(BOOL)arg1;
- (void)_removeSearchResults;
- (void)deselectAllRowsAnimated:(BOOL)arg1;
- (void)_dimmingAnimationDidFinishAndShouldRemoveResults:(BOOL)arg1;
- (void)_dimmingAnimationDidFinishAndRemoveResults;
- (void)_dimmingAnimationDidFinishAndDoNotRemoveResults;
- (BOOL)_searchForWords:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_searchResultsViewFrameWithKeyboardShowing:(BOOL)arg1;
- (void)_showKeyboard;
- (void)_hideKeyboardAndEndSearching:(BOOL)arg1;
- (void)tapInsideDimmingView:(id)arg1;
- (void)_searchFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)searchOverlayView;
- (struct __CFArray { }*)searchResults;
- (id)containerTableView;
- (void)setContainerTableView:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void*)addressBook;
- (id)groupWrapper;
- (void)setGroupWrapper:(id)arg1;

@end
