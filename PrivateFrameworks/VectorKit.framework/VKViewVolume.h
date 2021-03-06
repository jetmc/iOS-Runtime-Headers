/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKViewVolume : NSObject  {
    struct { 
        double x; 
        double y; 
        double z; 
    } _corners[8];
    struct { 
        struct { 
            double x; 
            double y; 
            double z; 
        } p; 
        struct { 
            double x; 
            double y; 
            double z; 
        } n; 
    } _faces[6];
}

@property(readonly) const struct { double x1; double x2; double x3; }* corners;
@property(readonly) const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; }* faces;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } farPlane;


- (const struct { double x1; double x2; double x3; }*)corners;
- (const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; }*)faces;
- (struct { double x1; double x2; double x3; })lerpPoint:(float*)arg1;
- (BOOL)distanceClipsPoint:(struct { double x1; double x2; double x3; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })farPlane;
- (BOOL)rejectsRect:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)updateWithFrustum:(struct { BOOL x1; double x2; double x3; double x4; double x5; })arg1 matrix:(const struct { double x1[4][4]; }*)arg2;

@end
