/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class <CNFRegCreateAccountControllerDelegate>;

@interface CNFRegCreateAccountController : CNFRegAccountWebViewController  {
    <CNFRegCreateAccountControllerDelegate> *_delegate;
}

@property <CNFRegCreateAccountControllerDelegate> * delegate;


- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)bagKey;
- (void)cancelTapped;
- (id)logName;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
