/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSMutableSet, NSString, NSDictionary, <SetupConnectionDelegate>;

@interface AUSetupController : AssistantCallbackController <SetupUIDelegateResult, AutoGuessSetup, BaseStationSetup> {
    id _context;
    BOOL _autoJoinState;
    struct BSConfigurationContext { } *_configContext;
    NSMutableSet *_setupDelegates;
    id _connectionDelegate;
    NSString *_autoGuessSetupRecommendation;
    NSDictionary *_lastInstrumentation;
}

@property(readonly) NSMutableSet * setupDelegates;
@property <SetupConnectionDelegate> * connectionDelegate;
@property id context;
@property(retain) NSString * autoGuessSetupRecommendation;
@property(retain) NSDictionary * lastInstrumentation;
@property(retain) NSDictionary * bonjourRecord;
@property(retain) NSDictionary * restoreRecommendation;

+ (id)setupController;

- (void)dealloc;
- (id)init;
- (id)targetBaseInfoDict;
- (void)handleSetupComplete;
- (id)autoGuessSetupRecommendation;
- (struct _BaseStation { }*)bsRef;
- (void)setBonjourRecord:(id)arg1;
- (id)bonjourRecord;
- (long)setMonitorForChanges:(BOOL)arg1;
- (long)taskArchiveDiskAsync:(id)arg1;
- (long)taskEraseDiskAsync:(id)arg1;
- (long)taskUploadFirmwareAsync:(id)arg1;
- (long)taskRestoreDefaultsAsync:(BOOL)arg1;
- (long)taskRestartAsync;
- (int)taskState;
- (long)rpcWPSAllowClientAsync:(id)arg1;
- (long)rpcWPSStopAsync;
- (long)rpcWPSStartAsync:(BOOL)arg1 dayPass:(BOOL)arg2;
- (long)rpcRenewDHCPLeaseAsync;
- (long)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1;
- (long)rpcRefreshBSSettingAsync:(int)arg1;
- (long)rpcSystemInterfacesAsync;
- (long)removeKeychainBasePassword;
- (long)updateKeychainWithPasswords;
- (long)readAllPropertiesFromBaseAsync;
- (id)validateAndGetErrors;
- (long)unignoredProblemCount;
- (long)getValue:(id*)arg1 forSettingPath:(id)arg2;
- (long)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2;
- (long)setValue:(id)arg1 forSettingPath:(id)arg2;
- (long)setValue:(id)arg1 forBSSetting:(int)arg2;
- (BOOL)hasACPFeature:(unsigned int)arg1;
- (void)setAutoGuessSetupRecommendation:(id)arg1;
- (long)getValue:(id*)arg1 forBSSetting:(int)arg2;
- (long)readPropertyListFromBaseAsync:(id)arg1;
- (int)stateForProblem:(unsigned int)arg1;
- (id)connectionDelegate;
- (void)setupConnectionStatusUpdatedResult:(long)arg1 withOptions:(id)arg2;
- (long)cancelSetup;
- (long)updateSettingsAsync;
- (BOOL)dirty;
- (long)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)setConnectionDelegate:(id)arg1;
- (id)setupDelegates;
- (long)subclassAssistantCallback:(struct AssistantCallbackContext { struct AssistantContext {} *x1; int x2; struct __CFDictionary {} *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; void *x8; }*)arg1;
- (void)setLastInstrumentation:(id)arg1;
- (id)lastInstrumentation;
- (BOOL)isMonitoring;
- (void)setContext:(id)arg1;
- (id)context;

@end
