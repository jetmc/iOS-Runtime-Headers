/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSCoding> {
    NSString *_property;
    int _direction;
    NSString *_collation;
}

@property(readonly) NSString * property;
@property(readonly) int direction;
@property(readonly) NSString * collation;


- (id)description;
- (unsigned int)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)collation;
- (id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3;
- (id)initWithProperty:(id)arg1 direction:(int)arg2;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)property;
- (id)initWithProperty:(id)arg1;
- (int)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
