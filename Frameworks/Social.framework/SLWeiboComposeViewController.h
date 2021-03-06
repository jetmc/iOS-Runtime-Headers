/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSMutableArray, SLWeiboSession, UILabel, UIAlertView, UITextView, UIButton, UITableView, UIView, NSDictionary, UIPopoverController, SLWeiboSheetLocationAssembly, UIPickerView, NSCache, NSString, UIImageView, UISearchBar;

@interface SLWeiboComposeViewController : SLComposeViewController <WEWeiboSheetLocationAssemblyDelegate> {
    UIView *_textViewWrapper;
    UITextView *_textView;
    UILabel *_countLabel;
    UIView *_backgroundView;
    UIImageView *_paperclipView;
    UIButton *_cancelButton;
    UIButton *_mentionCancelButton;
    UIButton *_sendButton;
    UIImageView *_vignetteView;
    NSString *_lastVignetteName;
    UIButton *_fromLabelButton;
    UIButton *_accountLabelButton;
    UIPickerView *_accountPicker;
    UIView *_grayPerfView;
    UIView *_redPerfView;
    UILabel *_weiboTitleLabel;
    UISearchBar *_searchField;
    NSString *_previousSearchText;
    UITableView *_mentionsTableView;
    UIPopoverController *_accountsPopoverController;
    id _completionHandler;
    NSCache *_imageCache;
    SLWeiboSheetLocationAssembly *_locationAssembly;
    NSMutableArray *_previewViews;
    NSMutableArray *_lines;
    SLWeiboSession *_session;
    NSDictionary *_sessionInfo;
    NSDictionary *_selectedAccountEntry;
    NSString *_text;
    NSMutableArray *_attachments;
    int _attachmentDisplay;
    NSMutableArray *_mentions;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _mentionRange;
    int _maxImageSize;
    int _maxMediaCount;
    int _shortenedURLCost;
    int _urlMaxLength;
    int _savedStatusBarStyle;
    UIAlertView *_noAccountsAlertView;
    unsigned int _keepEnumeratingMentions : 1;
    unsigned int _rotatedDuringAccountsPopover : 1;
    unsigned int _showingMentionsPanel : 1;
    unsigned int _isSending : 1;
    unsigned int _searchBarCleared : 1;
    unsigned int _isVisible : 1;
    unsigned int _usingLocationOverride : 1;
}


- (id)session;
- (BOOL)addURL:(id)arg1 withPreviewImage:(id)arg2;
- (BOOL)removeAllURLs;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)addURL:(id)arg1;
- (BOOL)addAttachment:(id)arg1;
- (id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1;
- (BOOL)setInitialText:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)removeAllImages;
- (BOOL)addImage:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_useCustomDimmingView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)completionHandler;
- (id)_title;
- (void)viewWillLayoutSubviews;
- (id)contentView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)setText:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)serviceType;
- (void)accountButtonTapped:(id)arg1;
- (id)accountEntryWithIdentifier:(id)arg1;
- (void)showIPhoneAccountsPicker;
- (void)showIPadAccountsPicker;
- (void)hideIPadAccountsPicker;
- (void)presentNoAccountsDialog;
- (void)setSelectedAccountEntry:(id)arg1;
- (void)switchToSettingsAndCancel;
- (id)selectedAccountEntry;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accountLabelFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fromLabelFrame;
- (id)_currentResults;
- (void)_clearResults;
- (void)_chooseRow:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_applyMention:(id)arg1;
- (void)_noteMentionsResultsChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_searchFieldFrame;
- (void)_hideMentionPanelAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)_buildMentionsTableView;
- (void)_buildSearchField;
- (void)_updateCancelButtonsVisibility:(BOOL)arg1;
- (void)sendButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)locationEnabledButtonTapped:(id)arg1;
- (void)restoreSelectionState;
- (void)saveSelectionState;
- (id)addURLWithProxyPreviewImage:(id)arg1;
- (id)addImageByProxy;
- (void)locationAssemblyGeotagStatusDidChange:(id)arg1;
- (void)_animateCardSend:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_handleDownsampledImageData:(id)arg1 forAttachment:(id)arg2;
- (id)cachedImageNamed:(id)arg1 leftCapWidth:(float)arg2 topCapHeight:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_locationAssemblyRectForOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_characterCounterRectForOrientation:(int)arg1;
- (void)_updateAttachment:(id)arg1 withPreviewImage:(id)arg2;
- (void)_animateCardSendOrientation:(int)arg1;
- (void)_noteCheckedInWithDaemon;
- (void)fetchSessionInfo;
- (void)_send:(id)arg1;
- (void)complete:(int)arg1;
- (void)hideMentionPanel:(BOOL)arg1;
- (BOOL)_isShowingMentions;
- (BOOL)isShowingMentionPanel;
- (id)cachedImageNamed:(id)arg1;
- (int)characterCountForEnteredText:(id)arg1 attachments:(id)arg2 allImagesDownsampled:(BOOL*)arg3;
- (id)_enteredText;
- (int)_shortenedURLCost;
- (id)_completeText:(id)arg1 withAttachments:(id)arg2;
- (BOOL)shouldShowPreview;
- (BOOL)showAccountFieldForOrientation:(int)arg1;
- (BOOL)_addPayload:(id)arg1 type:(int)arg2 previewImage:(id)arg3 attachment:(id*)arg4;
- (void)showMentionPanel:(BOOL)arg1;
- (BOOL)_addImage:(id)arg1 previewImage:(id)arg2;
- (void)_removeAllAttachmentsWithType:(int)arg1;
- (BOOL)_validateProposedWeiboWithText:(id)arg1 attachments:(id)arg2;
- (void)_resetSheetSettings;
- (void)updateGeotagStatus;
- (void)_updateAttachmentImages;
- (void)noteLocationInfoChanged:(id)arg1;
- (void)_updateURLLimitations;
- (void)updateActiveAccount;
- (id)_clientInfo;
- (void)showManualKeyboardIfNeeded:(BOOL)arg1;
- (void)noteStatusChanged;
- (void)_setupCommonUI;
- (void)_throwOnUnsupportedPresentationStyle;
- (void)showAccountsPicker;
- (void)updateSearchField;
- (void)updateAttachmentsForOrientation:(int)arg1;
- (void)_updateCharacterCounterForOrientation:(int)arg1;
- (void)_updateLocationAssemblyForOrientation:(int)arg1;
- (void)updateAccountLabelsForOrientation:(int)arg1;
- (void)updateRedPerfViewForOrientation:(int)arg1;
- (void)updateGrayPerfView;
- (void)_updateTitleBarForOrientation:(int)arg1;
- (void)updateTextViewAndPaperClipForOrientation:(int)arg1;
- (int)currentCardViewOptionsForOrientation:(int)arg1;
- (void)buildLineRulesForOrientation:(int)arg1;
- (void)tearDownSession;
- (void)_cleanUpAfterInterfaceBuilder;
- (void)_appWillMoveToBackground:(id)arg1;
- (void)searchBarWillClear:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_previewFrame;
- (void)accountsViewController:(id)arg1 didChooseAccountEntry:(id)arg2;
- (id)accountEntries;
- (int)indexOfSelectedAccountEntry;
- (void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3;
- (void)keyboardWillShow:(id)arg1;
- (void)_updateVignetteToOrientation:(int)arg1;

@end
