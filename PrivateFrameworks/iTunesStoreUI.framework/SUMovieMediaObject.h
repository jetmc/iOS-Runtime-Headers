/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSArray;

@interface SUMovieMediaObject : SUMediaObject  {
    NSMutableArray *_remakerOutputs;
}

@property(readonly) NSArray * remadeVariants;


- (id)_activeRemadeVariant;
- (id)_newSnapshotImageWithMaximumSize:(float)arg1;
- (id)newComposeImageWithMaximumSize:(float)arg1;
- (id)newInputSource;
- (id)inputSourceMIMEType;
- (id)copyPreparationOperations;
- (id)_fullSizeImage;
- (id)remadeVariants;
- (void)addRemadeVariant:(id)arg1;
- (id)newThumbnailImageWithMaximumSize:(float)arg1;
- (void)saveToLibraryWithCompletionBlock:(id)arg1;
- (void)dealloc;

@end
