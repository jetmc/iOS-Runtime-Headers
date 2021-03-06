/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class <NSURLAuthenticationChallengeSender>, NSString;

@interface ISAuthenticationChallenge : NSObject  {
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}

@property(retain) NSString * localizedMessage;
@property(retain) NSString * localizedTitle;
@property(readonly) BOOL hasPassword;
@property(readonly) NSString * password;
@property(readonly) NSString * user;
@property(readonly) int failureCount;
@property(readonly) BOOL userNameIsEditable;
@property(readonly) BOOL userNameIsEmail;
@property(readonly) <NSURLAuthenticationChallengeSender> * sender;


- (void)cancelAuthentication;
- (void)setLocalizedTitle:(id)arg1;
- (id)localizedTitle;
- (void)dealloc;
- (id)localizedMessage;
- (id)user;
- (id)password;
- (id)sender;
- (BOOL)userNameIsEmail;
- (BOOL)userNameIsEditable;
- (int)failureCount;
- (void)setLocalizedMessage:(id)arg1;
- (void)useCredential:(id)arg1;
- (BOOL)hasPassword;

@end
