/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptTextFieldDelegate, NSString;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property int autocapitalizationType;
@property int autocorrectionType;
@property int keyboardType;
@property(copy) NSString * placeholder;
@property(copy) NSString * value;
@property float width;


- (void)_sendScriptDidChange;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (void)_setNativeObjectDelegate:(id)arg1;
- (id)_nativeObjectDelegate;
- (void)setupNativeObject;
- (void)destroyNativeObject;
- (void)setAutocapitalizationType:(int)arg1;
- (int)autocapitalizationType;
- (void)dealloc;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (int)keyboardType;
- (int)autocorrectionType;
- (id)placeholder;
- (void)setKeyboardType:(int)arg1;
- (void)setAutocorrectionType:(int)arg1;
- (void)setWidth:(float)arg1;
- (float)width;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;

@end
