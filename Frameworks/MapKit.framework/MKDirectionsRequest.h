/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapItem;

@interface MKDirectionsRequest : NSObject  {
    MKMapItem *source;
    MKMapItem *destination;
}

@property(retain) MKMapItem * source;
@property(retain) MKMapItem * destination;

+ (BOOL)isDirectionsRequestURL:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1;
- (void)dealloc;
- (void)setDestination:(id)arg1;
- (id)destination;
- (void)setSource:(id)arg1;
- (id)source;
- (id)dictionaryRepresentation;
- (BOOL)writeToURL:(id)arg1 error:(id*)arg2;

@end
