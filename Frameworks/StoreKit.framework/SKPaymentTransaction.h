/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSError, NSDate, SKPayment, SKPaymentTransaction, NSString, NSData, NSArray;

@interface SKPaymentTransaction : NSObject  {
    id _internal;
}

@property(readonly) NSError * error;
@property(readonly) SKPaymentTransaction * originalTransaction;
@property(readonly) SKPayment * payment;
@property(readonly) NSArray * downloads;
@property(readonly) NSDate * transactionDate;
@property(readonly) NSString * transactionIdentifier;
@property(readonly) NSData * transactionReceipt;
@property(readonly) int transactionState;


- (id)downloads;
- (void)dealloc;
- (id)init;
- (id)transactionIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)transactionDate;
- (void)_setTransactionState:(int)arg1;
- (void)_setTransactionReceipt:(id)arg1;
- (void)_setTransactionIdentifier:(id)arg1;
- (void)_setTransactionDate:(id)arg1;
- (void)_setTemporaryIdentifier:(id)arg1;
- (void)_setOriginalTransaction:(id)arg1;
- (id)transactionReceipt;
- (id)originalTransaction;
- (void)_setDownloads:(id)arg1;
- (BOOL)mergeWithTransaction:(id)arg1;
- (BOOL)canMergeWithTransaction:(id)arg1;
- (id)_transactionIdentifier;
- (id)matchingIdentifier;
- (int)transactionState;
- (id)initWithPayment:(id)arg1;
- (id)payment;
- (void)_setError:(id)arg1;
- (id)error;

@end
