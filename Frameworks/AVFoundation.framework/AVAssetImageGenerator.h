/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVAssetImageGeneratorInternal, AVVideoComposition, AVAsset;

@interface AVAssetImageGenerator : NSObject  {
    AVAssetImageGeneratorInternal *_priv;
}

@property(readonly) AVAsset * asset;
@property BOOL appliesPreferredTrackTransform;
@property struct CGSize { float x1; float x2; } maximumSize;
@property(copy) NSString * apertureMode;
@property(copy) AVVideoComposition * videoComposition;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } requestedTimeToleranceBefore;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } requestedTimeToleranceAfter;

+ (id)assetImageGeneratorWithAsset:(id)arg1;

- (void)setRequestedTimeToleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRequestedTimeToleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)cancelAllCGImageGeneration;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)asset;
- (void)finalize;
- (struct CGImage { }*)copyCGImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 error:(id*)arg3;
- (void)setMaximumSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAppliesPreferredTrackTransform:(BOOL)arg1;
- (id)initWithAsset:(id)arg1;
- (struct CGSize { float x1; float x2; })maximumSize;
- (void)_serverDied;
- (void)_failedToGenerateCGImage:(id)arg1;
- (void)_didGenerateCGImage:(id)arg1;
- (void)setApertureMode:(id)arg1;
- (id)_requestWithRequestID:(id)arg1;
- (id)_NSErrorForError:(long)arg1;
- (void)_ensureFigAssetImageGenerator;
- (id)_optionsDictionary;
- (struct CGImage { }*)_copyCGImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingAssetReader:(id)arg2 error:(id*)arg3;
- (id)_makeAutoreleasedAssetReader;
- (void)setVideoComposition:(id)arg1;
- (struct __CFDictionary { }*)_createPixelBufferAttributesWithSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_scaledSizeForRenderSize:(struct CGSize { float x1; float x2; })arg1;
- (id)videoComposition;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestedTimeToleranceAfter;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestedTimeToleranceBefore;
- (id)apertureMode;
- (BOOL)appliesPreferredTrackTransform;

@end
