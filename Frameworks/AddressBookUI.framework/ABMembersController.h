/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray, UIView, ABSearchHelper, ABBannerView, NSString, <ABMembersControllerDelegate>;



@interface ABMembersController : ABContentController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, ABSearchHelperDelegate>
{
    NSMutableArray *_afterTransitionSublayers;
    NSMutableArray *_flipTransitionSublayers;
    NSUInteger _foldIndex;
    BOOL _pendingSorting;
    NSUInteger _cellsCreated;
    NSUInteger _memberCount;
    UIView *_tableAccessoryView;
    NSMutableArray *_sectionIndexTitles;
    struct __CFDictionary { } *_sectionHeaderToSortingIndex;
    struct __CFDictionary { } *_displayableSectionHeaderToSectionHeader;
    struct __CFDictionary { } *_sectionHeaderToDisplayableSectionHeader;
    struct __CFDictionary { } *_displayableSectionIndexToSectionIndex;
    struct __CFDictionary { } *_sectionIndexToDisplayableSectionIndex;
    ABSearchHelper *_searchHelper;
    ABBannerView *_bannerView;
    NSString *_bannerTitle;
    NSString *_bannerValue;
    <ABMembersControllerDelegate> *_membersControllerDelegate;
    BOOL _showingCardFromSearch;
    BOOL _loadedFromPhoneCall;
    void *_selectedPersonFromSearch;
}


- (void)dealloc;
- (void)setMembersControllerDelegate:(id)arg1;
- (BOOL)isSearching;
- (BOOL)shouldShowIndex;
- (id)tableView;
- (id)contentView;
- (void)playClick;
- (void)foldNext;
- (void)flipToNewSorting:(NSUInteger)arg1;
- (void)transitionViewDidComplete:(id)arg1;
- (void)segmentedControl:(id)arg1 selectedSegmentChanged:(NSInteger)arg2;
- (void)stopScrolling;
- (void)scrollTableViewToSearchField:(id)arg1 animated:(BOOL)arg2;
- (void)scrollTableViewToSearchFieldIfNotAlreadyScrolled;
- (BOOL)scrollMemberVisible:(void*)arg1;
- (void)restoreScrollPosition;
- (void)saveScrollPosition;
- (void)loadState;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;
- (NSUInteger)cellsCreated;
- (void)setCellsCreated:(NSUInteger)arg1;
- (id)selectedCell;
- (id)accessoryView;
- (void)relayoutAccessoryView;
- (void)setAllowsSearching:(BOOL)arg1;
- (void)cancelSearchingAnimated:(BOOL)arg1;
- (void)cancelSearching:(id)arg1;
- (void)searchHelperWillStartSearching:(id)arg1;
- (void)searchHelperWillEndSearching:(id)arg1;
- (id)navigationBarTitleWithModel:(id)arg1 searchResults:(struct __CFArray { }*)arg2;
- (id)navigationBarTitleWithModel:(id)arg1;
- (void)searchHelper:(id)arg1 didSelectSearchResults:(struct __CFArray { }*)arg2;
- (void)searchHelper:(id)arg1 didSelectPerson:(void*)arg2 withSearchResults:(struct __CFArray { }*)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)displayedMembersListChanged;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)showCardForPerson:(void*)arg1 animated:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)createAllDisplayableSectionIndexAndHeaderCaches;
- (id)displayableSectionIndexFromSectionIndex:(id)arg1;
- (id)sectionIndexFromDisplayableSectionIndex:(id)arg1;
- (id)displayableSectionHeaderFromSectionHeader:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (struct __CFDictionary { }*)sectionHeaderSortingIndices;
- (NSInteger)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(NSInteger)arg3;
- (struct CGPoint { float x1; float x2; })scroller:(id)arg1 adjustSmoothScrollEnd:(struct CGPoint { float x1; float x2; })arg2 velocity:(struct CGSize { float x1; float x2; })arg3;
- (void)_setSearchingEnabled:(BOOL)arg1;
- (void)_enableSearching;
- (void)_updateNoContactsView;
- (void)_updateCountString;
- (void)_deselectAllRowsWithAnimation;

@end
