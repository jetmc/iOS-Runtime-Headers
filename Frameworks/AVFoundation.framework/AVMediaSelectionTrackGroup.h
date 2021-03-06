/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVMediaSelectionOption, NSDictionary, AVAsset;

@interface AVMediaSelectionTrackGroup : AVMediaSelectionGroup  {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_trackIDs;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
}


- (id)tracks;
- (id)dictionary;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)asset;
- (id)options;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (id)_defaultOption;
- (BOOL)_isAlternateTrackGroup;
- (id)trackIDs;

@end
