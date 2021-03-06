/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDStyle, NSMutableArray, WDDocument;

@interface WDListDefinition : NSObject  {
    int mType;
    NSMutableArray *mLevels;
    int mListId;
    WDDocument *mDocument;
    WDStyle *mListStyle;
    WDStyle *mListStyleLink;
}


- (int)type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)setType:(int)arg1;
- (void)setListStyle:(id)arg1;
- (id)listStyle;
- (void)setListId:(int)arg1;
- (void)setListStyleLink:(id)arg1;
- (id)listStyleLink;
- (id)addLevel;
- (int)listId;
- (id)levelAt:(int)arg1;
- (int)levelCount;

@end
