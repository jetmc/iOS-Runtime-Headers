/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class WLCardFieldTemplate, UILabel, WLField, WLCardDiffView;

@interface WLCardFieldView : UIView  {
    WLField *_field;
    WLCardFieldTemplate *_fieldTemplate;
    WLCardDiffView *_cardDiffView;
    UILabel *_labelLabel;
    UILabel *_valueLabel;
}

@property(retain) WLField * field;
@property(retain) WLCardFieldTemplate * fieldTemplate;
@property(readonly) UILabel * labelLabel;
@property(readonly) UILabel * valueLabel;
@property(retain) WLCardDiffView * cardDiffView;

+ (id)newViewForField:(id)arg1 fieldTemplate:(id)arg2;

- (id)valueLabel;
- (id)fieldTemplate;
- (id)cardDiffView;
- (void)setCardDiffView:(id)arg1;
- (id)_valueAttributedString;
- (id)_labelAttributedString;
- (id)_textAttributesWithTextColor:(id)arg1 alignment:(int)arg2 lineBreakMode:(int)arg3;
- (void)setFieldTemplate:(id)arg1;
- (BOOL)fitsInSize:(struct CGSize { float x1; float x2; })arg1;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(id)arg3;
- (id)labelLabel;
- (void)setColorProfile:(id)arg1 background:(int)arg2;
- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)field;
- (void)setField:(id)arg1;

@end
