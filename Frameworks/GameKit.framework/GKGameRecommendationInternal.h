/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKGameInternal;

@interface GKGameRecommendationInternal : GKInternalRepresentation  {
    GKGameInternal *_game;
    NSString *_reason;
    NSString *_engineID;
}

@property(retain) GKGameInternal * game;
@property(retain) NSString * reason;
@property(retain) NSString * engineID;

+ (id)codedPropertyKeys;

- (void)setEngineID:(id)arg1;
- (id)engineID;
- (void)setReason:(id)arg1;
- (id)serverRepresentation;
- (void)setGame:(id)arg1;
- (id)game;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)reason;

@end
