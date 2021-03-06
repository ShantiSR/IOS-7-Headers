/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "EKCalendarItemEditItemDelegate.h"
#import "UIActionSheetDelegate.h"

@class EKCalendarItem, EKCalendarItemEditItem, EKEventStore, NSArray, NSMutableSet, UIActionSheet, UIBarButtonItem, UIResponder, _UIAccessDeniedView;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate>
{
    NSArray *_editItems;
    id _revertState;
    NSArray *_currentItems;
    UIActionSheet *_alertSheet;
    EKCalendarItemEditItem *_currentEditItem;
    BOOL _giveTitleCellKeyboardFocus;
    int _editItemVisibility;
    BOOL _isIgnoringCellHeightChange;
    BOOL _needsCellHeightChange;
    NSMutableSet *_editItemsDisablingDoneButton;
    int _lastAuthorizationStatus;
    BOOL _hasAppeared;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    BOOL _scrollToNotes;
    BOOL _showsTimeZone;
    BOOL _canHideDoneAndCancelButtons;
    id <EKCalendarItemEditorDelegate> _editorDelegate;
    EKEventStore *_store;
    EKCalendarItem *_calendarItem;
    UIResponder *_responderToRestoreOnAppearence;
    int _visibleSectionToRestoreOnAppearence;
    _UIAccessDeniedView *_accessDeniedView;
}

@property(retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(readonly) EKCalendarItemEditItem *currentEditItem; // @synthesize currentEditItem=_currentEditItem;
@property(nonatomic) BOOL canHideDoneAndCancelButtons; // @synthesize canHideDoneAndCancelButtons=_canHideDoneAndCancelButtons;
@property(nonatomic) BOOL showsTimeZone; // @synthesize showsTimeZone=_showsTimeZone;
@property(nonatomic) int visibleSectionToRestoreOnAppearence; // @synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence;
@property(retain, nonatomic) UIResponder *responderToRestoreOnAppearence; // @synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence;
@property(nonatomic) BOOL scrollToNotes; // @synthesize scrollToNotes=_scrollToNotes;
@property(retain, nonatomic) EKCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property(retain, nonatomic) EKEventStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <EKCalendarItemEditorDelegate> editorDelegate; // @synthesize editorDelegate=_editorDelegate;
- (void).cxx_destruct;
- (void)_deleteRecurringSheetButtonPressed:(int)arg1;
- (void)_deleteSheetButtonPressed:(int)arg1;
- (void)_detachSheetButtonPressed:(int)arg1;
- (void)_cancelSheetButtonPressed:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_presentDetachSheet;
- (id)_viewForSheet;
- (id)_nameForDeleteButton;
- (BOOL)_canDetachSingleOccurrence;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_performDelete:(int)arg1;
- (void)deleteClicked:(id)arg1;
- (BOOL)allowsDeletingFutureOccurrences;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)tableViewDidStartReload:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_getEditItem:(id *)arg1 andSubsection:(int *)arg2 forSection:(int)arg3;
- (id)defaultAlertTitleForEditItem:(id)arg1;
- (void)editItemRequiresPopoverSizeUpdate:(id)arg1;
- (void)editItemRequiresHeightChange:(id)arg1;
- (void)editItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned int)arg2 inSubsection:(unsigned int)arg3 actions:(id)arg4;
- (void)_reallyHandleCellHeightChange;
- (void)_tableViewDidUpdateHeights;
- (void)_tableViewWillUpdateHeights;
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(BOOL)arg2;
- (BOOL)_canEnableDoneButton;
- (void)editItem:(id)arg1 wantsKeyboardPinned:(BOOL)arg2;
- (id)viewControllerForEditItem:(id)arg1;
- (void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;
- (void)editItemTextChanged:(id)arg1;
- (void)editItemDidEndEditing:(id)arg1;
- (void)editItem:(id)arg1 didCommitFromDetailViewController:(BOOL)arg2;
- (void)editItemDidStartEditing:(id)arg1;
- (void)_revertEvent;
- (void)_copyEventForPossibleRevert;
- (void)_setWantsToEnableDoneButton:(BOOL)arg1;
- (void)_setDoneAndCancelButtonVisible:(BOOL)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide;
- (void)_pinKeyboard:(BOOL)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)didReceiveMemoryWarning;
- (void)refreshStartAndEndDates;
- (void)_setShowingAccessDeniedView:(BOOL)arg1 showSettingsInstructions:(BOOL)arg2;
- (void)storeChanged:(id)arg1;
- (void)setupForEvent;
- (unsigned int)entityType;
- (id)notificationNamesForLocaleChange;
- (void)customizeActionSheet:(id)arg1;
- (id)defaultAlertTitle;
- (void)setupDeleteButton;
- (id)defaultTitleForCalendarItem;
- (id)preferredTitle;
- (BOOL)saveCalendarItemWithSpan:(int)arg1 error:(id *)arg2;
- (void)prepareEditItems;
- (void)_setCalendarItemOnEditItems;
- (void)_configureVisibleItems;
- (BOOL)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;
- (void)_completeWithAction:(int)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3;
- (void)completeWithAction:(int)arg1 animated:(BOOL)arg2;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (void)handleTapOutside;
- (void)done:(id)arg1;
- (void)cancelEditingWithDelegateNotification:(BOOL)arg1;
- (void)cancel:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)applicationDidResume;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)sectionsForEditItem:(id)arg1;
- (unsigned int)firstSectionForEditItem:(id)arg1;
- (int)editItemVisibility;
- (void)setEditItemVisibility:(int)arg1 animated:(BOOL)arg2;
- (void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(BOOL)arg3;
- (void)_localeChanged;
- (id)_editItems;
- (void)dealloc;
- (id)init;

@end

