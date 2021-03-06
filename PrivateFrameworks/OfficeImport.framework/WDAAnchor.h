/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAAnchor : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    int mTextWrappingMode;
    int mTextWrappingModeType;
    double mWrapDistanceLeft;
    double mWrapDistanceTop;
    double mWrapDistanceRight;
    double mWrapDistanceBottom;
    int mHorizontalPosition;
    int mRelativeHorizontalPosition;
    int mVerticalPosition;
    int mRelativeVerticalPosition;
    BOOL mIsBehindText;
    BOOL mAllowOverlap;
    BOOL mMoveWithText;
    int mZIndexTotal;
    int mZIndex;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property int textWrappingMode;
@property int textWrappingModeType;
@property BOOL allowOverlap;


- (id).cxx_construct;
- (id)init;
- (void)setZIndex:(int)arg1;
- (int)zIndex;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setZIndexTotal:(int)arg1;
- (int)zIndexTotal;
- (int)textWrappingModeType;
- (double)wrapDistanceBottom;
- (double)wrapDistanceRight;
- (double)wrapDistanceTop;
- (double)wrapDistanceLeft;
- (BOOL)allowOverlap;
- (void)setBehindText:(BOOL)arg1;
- (void)setAllowOverlap:(BOOL)arg1;
- (void)setWrapDistanceBottom:(double)arg1;
- (void)setWrapDistanceRight:(double)arg1;
- (void)setWrapDistanceTop:(double)arg1;
- (void)setWrapDistanceLeft:(double)arg1;
- (void)setVerticalPosition:(int)arg1;
- (void)setHorizontalPosition:(int)arg1;
- (void)setTextWrappingModeType:(int)arg1;
- (void)setTextWrappingMode:(int)arg1;
- (void)setRelativeVerticalPosition:(int)arg1;
- (void)setRelativeHorizontalPosition:(int)arg1;
- (int)verticalPosition;
- (int)horizontalPosition;
- (int)relativeHorizontalPosition;
- (int)textWrappingMode;
- (BOOL)isBehindText;
- (int)relativeVerticalPosition;

@end
