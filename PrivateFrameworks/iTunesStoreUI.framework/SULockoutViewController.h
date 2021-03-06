/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSBundle, UIImage;

@interface SULockoutViewController : SUViewController  {
    UIImage *_image;
    NSBundle *_localizationBundle;
    NSString *_messageBody;
    NSString *_messageTitle;
}

@property(retain) UIImage * image;
@property(retain) NSString * messageBody;
@property(retain) NSString * messageTitle;
@property(retain) NSBundle * localizationBundle;


- (void)setMessageTitle:(id)arg1;
- (void)setLocalizationBundle:(id)arg1;
- (id)messageTitle;
- (id)localizationBundle;
- (id)copyArchivableContext;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (id)image;
- (void)setImage:(id)arg1;
- (id)messageBody;
- (void)setMessageBody:(id)arg1;

@end
