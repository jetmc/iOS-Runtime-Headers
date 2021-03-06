/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSIndexSet;

@interface NSKeyValueChangeDictionary : NSDictionary  {
    struct { 
        unsigned int kind; 
        NSObject *oldValue; 
        NSObject *newValue; 
        NSIndexSet *indexes; 
        id extraData; 
    } _details;
    NSObject *_originalObservable;
    BOOL _isPriorNotification;
    BOOL _isRetainingObjects;
}


- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (unsigned int)count;
- (id)keyEnumerator;
- (void)retainObjects;
- (id)initWithDetailsNoCopy:(struct { unsigned int x1; id x2; id x3; id x4; id x5; })arg1 originalObservable:(id)arg2 isPriorNotification:(BOOL)arg3;
- (void)setDetailsNoCopy:(struct { unsigned int x1; id x2; id x3; id x4; id x5; })arg1 originalObservable:(id)arg2;
- (void)setOriginalObservable:(id)arg1;

@end
