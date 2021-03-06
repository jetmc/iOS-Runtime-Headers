/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSDictionary;

@interface GKDevice : NSObject  {
    NSString *_udid;
    NSString *_deviceName;
    NSString *_osVersion;
    NSString *_buildVersion;
    NSString *_gameKitVersion;
    NSDictionary *_screenCapabilities;
    BOOL _gameCenterSupported;
}

@property(getter=isGameCenterSupported,readonly) BOOL gameCenterSupported;
@property(readonly) NSString * udid;
@property(readonly) NSString * deviceName;
@property(readonly) NSString * osVersion;
@property(readonly) NSString * buildVersion;
@property(readonly) NSString * gameKitVersion;
@property(readonly) NSDictionary * screenCapabilities;

+ (id)currentDevice;

- (BOOL)isGameCenterSupported;
- (id)screenCapabilities;
- (id)udid;
- (id)buildVersionHeader;
- (id)protocolVersionHeader;
- (id)storeUserAgent;
- (id)gameKitVersion;
- (id)processNameHeader;
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;
- (void)_initPlatform;
- (id)userAgent;
- (void)dealloc;
- (id)init;
- (id)buildVersion;
- (id)osVersion;
- (id)deviceName;

@end
