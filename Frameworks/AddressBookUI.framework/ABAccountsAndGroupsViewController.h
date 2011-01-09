/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABAccountsAndGroupDataSource;



@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate>
{
    ABAccountsAndGroupDataSource *_dataSource;
    BOOL _needsReload;
}

@property(retain) ABModel *model;


- (id)init;
- (void)dealloc;
- (void)reloadData;
- (void)_showMembersWithModel:(id)arg1 animate:(BOOL)arg2;
- (void)showMembersOfGroup:(void*)arg1 animate:(BOOL)arg2;
- (void)showMembersOfGroupWrapper:(id)arg1 animate:(BOOL)arg2;
- (id)model;
- (void)setModel:(id)arg1;
- (void)_refreshIfNeeded;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)modelDatabaseChange:(id)arg1;
- (void)updateNavigationButtons;
- (void)cancel:(id)arg1;

@end
