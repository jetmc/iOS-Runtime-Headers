/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString;

@interface MFHeaderLabelView : UIView  {
    NSString *_label;
    unsigned int _highlighted : 1;
    unsigned int _drawsLetterPress : 1;
}


- (struct CGColor { }*)labelColor;
- (void)dealloc;
- (void)setLabel:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabelHighlighted:(BOOL)arg1;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 withLetterpress:(BOOL)arg2;

@end
