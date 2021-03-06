/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SSAuthenticationContext, SUObjectPool, SUDelayedNavigationItem, SUWebViewManager, SUStorePageProtocol, SUWebView, NSURL, SSMutableAuthenticationContext, ISURLRequestPerformance;

@interface SUWebViewController : SUViewController <SUWebViewManagerDelegate, SUWebViewDelegate> {
    SUWebView *_webView;
    SSMutableAuthenticationContext *_authenticationContext;
    SUDelayedNavigationItem *_delayedNavigationItem;
    BOOL _hasEverAppeared;
    int _lastKnownOrientation;
    SUObjectPool *_objectPool;
    ISURLRequestPerformance *_performanceMetrics;
    int _scheduledOrientation;
    SUStorePageProtocol *_storePageProtocol;
    int _style;
    NSURL *_url;
    BOOL _viewIsReady;
    SUWebViewManager *_webViewManager;
}

@property int style;
@property(copy) SSAuthenticationContext * authenticationContext;
@property BOOL viewIsReady;
@property(readonly) SUWebView * webView;
@property(getter=_performanceMetrics,setter=_setPerformanceMetrics:,retain) ISURLRequestPerformance * _performanceMetrics;


- (void)_setLastKnownOrientation:(int)arg1;
- (void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)webViewManagerDidStartLoad:(id)arg1;
- (void)webViewManagerDidFinishLoad:(id)arg1;
- (void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2;
- (void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2;
- (void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2;
- (id)viewControllerForWebViewManager:(id)arg1;
- (id)newScriptInterfaceForWebViewManager:(id)arg1;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(int)arg1;
- (void)_reloadUI;
- (void)_reloadObjectPool;
- (void)_removePlaceholderBackgroundView;
- (void)setViewIsReady:(BOOL)arg1;
- (void)_addPlaceholderBackgroundView;
- (void)_reloadPlaceholderBackgroundView;
- (id)_placeholderBackgroundView;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (void)_applyScriptProperties:(id)arg1;
- (id)_defaultBackgroundColor;
- (id)newScriptInterface;
- (void)setStorePageProtocol:(id)arg1;
- (id)_performanceMetrics;
- (void)storePageCleanupBeforeTearDown;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (BOOL)viewIsReady;
- (void)_setPerformanceMetrics:(id)arg1;
- (id)navigationItemForScriptInterface;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)newRotationController;
- (void)storePageProtocolDidChange;
- (id)storePageProtocol;
- (void)parentViewControllerHierarchyDidChange;
- (void)setScriptProperties:(id)arg1;
- (id)copyScriptProperties;
- (id)copyDefaultScriptProperties;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (id)copyArchivableContext;
- (void)invalidate;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)webView;
- (int)style;
- (void)setStyle:(int)arg1;

@end
