/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UIColor, NSMutableArray, UISegment;

@interface UISegmentedControl : UIControl <NSCoding> {
    NSMutableArray *_segments;
    int _selectedSegment;
    int _highlightedSegment;
    UIView *_removedSegment;
    id _delegate;
    UIColor *_tintColor;
    int _barStyle;
    id _appearanceStorage;
    UIView *_backgroundBarView;
    float _enabledAlpha;
    struct { 
        unsigned int style : 3; 
        unsigned int size : 2; 
        unsigned int showsDisclosure : 1; 
        unsigned int delegateSelectedSegmentChanged : 1; 
        unsigned int delegateDisclosureButtonClicked : 1; 
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks : 1; 
        unsigned int momentaryClick : 1; 
        unsigned int dontAlwaysToggleForTwoSegments : 1; 
        unsigned int tracking : 1; 
        unsigned int mouseInside : 1; 
        unsigned int autosizeToFitSegments : 1; 
        unsigned int isSizingToFit : 1; 
        unsigned int autosizeText : 1; 
        unsigned int transparentBackground : 1; 
        unsigned int useProportionalWidthSegments : 1; 
        unsigned int translucentBackground : 1; 
        unsigned int appearanceNeedsUpdate : 1; 
    } _segmentedControlFlags;
}

@property(retain) UISegment * removedSegment;
@property int segmentedControlStyle;
@property(getter=isMomentary) BOOL momentary;
@property(readonly) unsigned int numberOfSegments;
@property BOOL apportionsSegmentWidthsByContent;
@property int selectedSegmentIndex;
@property(retain) UIColor * tintColor;

+ (float)defaultHeight;
+ (float)defaultHeightForStyle:(int)arg1;
+ (float)defaultHeightForStyle:(int)arg1 size:(int)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (int)selectedSegment;
- (BOOL)isEnabledForSegment:(unsigned int)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(unsigned int)arg2;
- (struct CGSize { float x1; float x2; })contentOffsetForSegment:(unsigned int)arg1;
- (void)setContentOffset:(struct CGSize { float x1; float x2; })arg1 forSegment:(unsigned int)arg2;
- (float)widthForSegment:(unsigned int)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned int)arg2;
- (id)imageForSegment:(unsigned int)arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned int)arg2;
- (id)titleForSegment:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned int)arg2;
- (void)removeSegment:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)insertSegment:(unsigned int)arg1 withImage:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegment:(unsigned int)arg1 withTitle:(id)arg2 animated:(BOOL)arg3;
- (void)addSegmentWithTitle:(id)arg1;
- (void)setImagePadding:(struct CGSize { float x1; float x2; })arg1 forSegment:(unsigned int)arg2;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)arg1;
- (void)setMomentaryClick:(BOOL)arg1;
- (void)setShowsDisclosure:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(int)arg2 withItems:(id)arg3;
- (void)setSelectedSegment:(int)arg1;
- (id)infoViewForSegment:(int)arg1;
- (void)selectSegment:(int)arg1;
- (void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)_badgeValueForSegmentAtIndex:(unsigned int)arg1;
- (struct UIOffset { float x1; float x2; })contentPositionAdjustmentForSegmentType:(int)arg1 barMetrics:(int)arg2;
- (void)setContentPositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forSegmentType:(int)arg2 barMetrics:(int)arg3;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_setOptionsBackgroundImage:(id)arg1;
- (int)selectedSegmentIndex;
- (unsigned int)numberOfSegments;
- (BOOL)isEnabledForSegmentAtIndex:(unsigned int)arg1;
- (void)setEnabled:(BOOL)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (struct CGSize { float x1; float x2; })contentOffsetForSegmentAtIndex:(unsigned int)arg1;
- (void)setContentOffset:(struct CGSize { float x1; float x2; })arg1 forSegmentAtIndex:(unsigned int)arg2;
- (float)widthForSegmentAtIndex:(unsigned int)arg1;
- (void)setWidth:(float)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)imageForSegmentAtIndex:(unsigned int)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)_attributedTitleForSegmentAtIndex:(unsigned int)arg1;
- (void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)titleForSegmentAtIndex:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)removeSegmentAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (BOOL)transparentBackground;
- (void)setTransparentBackground:(BOOL)arg1;
- (void)_setTranslucentOptionsBackground:(BOOL)arg1;
- (void)_setAutosizeText:(BOOL)arg1;
- (void)setAlwaysToggleForTwoSegments:(BOOL)arg1;
- (void)setSegmentControlStyle:(int)arg1;
- (int)segmentControlStyle;
- (void)_setAppearanceIsTiled:(BOOL)arg1 leftCapWidth:(unsigned int)arg2 rightCapWidth:(unsigned int)arg3;
- (void)_setSegmentedControlAppearance:(struct { id x1; float x2; float x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_4_1_6; } x4; struct { id x_5_1_1; id x_5_1_2; id x_5_1_3; id x_5_1_4; id x_5_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_5_1_6; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_6_1_6; } x6; struct { id x_7_1_1; id x_7_1_2; id x_7_1_3; id x_7_1_4; id x_7_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_7_1_6; } x7; BOOL x8; }*)arg1;
- (void)_setOptionsShadowHidden:(BOOL)arg1;
- (BOOL)_optionsShadowHidden;
- (id)initWithItems:(id)arg1;
- (void)setApportionsSegmentWidthsByContent:(BOOL)arg1;
- (BOOL)apportionsSegmentWidthsByContent;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (void)highlightSegment:(int)arg1;
- (void)_clearSelectedSegment;
- (void)_resetForAppearanceChange;
- (BOOL)_shouldSelectSegmentAtIndex:(int)arg1;
- (void)_setSelectedSegmentIndex:(int)arg1 notify:(BOOL)arg2;
- (void)_removeSegmentAnimationFinished:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(BOOL)arg3;
- (int)segmentedControlStyle;
- (void)_setControlSize:(int)arg1 andInvalidate:(BOOL)arg2;
- (void)_setNeedsAppearanceUpdate;
- (void)_updateDividerImageForSegmentAtIndex:(unsigned int)arg1;
- (void)_updateOptionsBackground;
- (void)removeAllSegments;
- (void)_setEnabled:(BOOL)arg1 forcePropagateToSegments:(BOOL)arg2;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)setSegmentedControlStyle:(int)arg1;
- (id)_createSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (void)_commonSegmentedControlInit;
- (id)removedSegment;
- (void)setRemovedSegment:(id)arg1;
- (void)setMomentary:(BOOL)arg1;
- (BOOL)isMomentary;
- (float)_barHeight;
- (BOOL)_isInTranslucentToolbar;
- (BOOL)_isInMiniBar;
- (id)_optionsBackgroundImage;
- (id)viewForBaselineLayout;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)shouldTrack;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (int)controlSize;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (int)barStyle;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setBarStyle:(int)arg1;
- (void)setControlSize:(int)arg1;
- (void)updateForMiniBarState:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)sizeToFit;
- (BOOL)useBlockyMagnificationInClassic;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)scriptingInfoWithChildren;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAlpha:(float)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_gkApplyTheme:(id)arg1;
- (void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2;

@end
