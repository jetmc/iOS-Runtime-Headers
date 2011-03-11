/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMutableDictionary;

@interface AdSheetGeoAlert : NSObject  {
    NSMutableDictionary *_approvedAds;
}

+ (id)sharedGeoAlert;
+ (id)_cacheFile;

- (void)iAdCanUseGeoLocation:(id)arg1 givenTitle:(id)arg2 withBlock:(id)arg3;
- (void)appWillTerminate:(id)arg1;
- (void)cleanCache;
- (void)saveCache;
- (void)loadCache;
- (void)showAlertPanelWithGuid:(id)arg1 forGivenAdTitle:(id)arg2 usingBlock:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)init;
- (void)dealloc;

@end