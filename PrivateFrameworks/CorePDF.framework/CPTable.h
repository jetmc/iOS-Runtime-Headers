/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } tableBounds;
    unsigned int rowCount;
    float *rowY;
    unsigned int columnCount;
    float *columnX;
    struct CGColor { } *backgroundColor;
    unsigned int backgroundGraphicCount;
    id *backgroundGraphics;
    unsigned int usedGraphicCount;
    BOOL disposed;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } tableBounds;
@property unsigned int rowCount;
@property(readonly) float* rowY;
@property unsigned int columnCount;
@property(readonly) float* columnX;
@property(readonly) unsigned int backgroundGraphicCount;


- (unsigned int)backgroundGraphicCount;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (void)setBackgroundGraphics:(id)arg1;
- (void)setRowCount:(unsigned int)arg1;
- (float*)columnX;
- (float*)rowY;
- (unsigned int)usedGraphicCount;
- (void)incrementUsedGraphicCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableBounds;
- (void)dispose;
- (void)dealloc;
- (void)setColumnCount:(unsigned int)arg1;
- (unsigned int)columnCount;
- (void)finalize;
- (struct CGColor { }*)backgroundColor;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)rowCount;

@end
