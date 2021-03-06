/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLCorrelation, NSSQLRow;

@interface NSSQLAdapterOperation : NSObject  {
    unsigned int _adapterOperator;
    NSSQLRow *_row;
    NSSQLCorrelation *_correlation;
}


- (id)entity;
- (id)description;
- (void)dealloc;
- (int)compareAdapterOperation:(id)arg1;
- (id)correlation;
- (void)setAdapterOperator:(unsigned int)arg1;
- (id)initWithAdapterOperator:(unsigned int)arg1 correlation:(id)arg2;
- (id)_opString;
- (unsigned int)adapterOperator;
- (id)initWithAdapterOperator:(unsigned int)arg1 row:(id)arg2;
- (id)row;

@end
