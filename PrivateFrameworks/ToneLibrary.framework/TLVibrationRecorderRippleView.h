/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class EAGLContext, NSMutableArray;

@interface TLVibrationRecorderRippleView : UIView  {
    EAGLContext *_context;
    int _backingWidth;
    int _backingHeight;
    unsigned int _viewFramebuffer;
    unsigned int _viewRenderbuffer;
    unsigned int _shaderProgram;
    int *_uniformsLocations;
    struct { float x1; float x2; float x3; float x4; } *_baseRippleSectionVertices;
    void *_verticesData;
    unsigned long _verticesDataMaximumRipplesCount;
    unsigned int _rippleTexture;
    BOOL _animating;
    float _fingerStillSpeed;
    float _fingerMovingSpeed;
    float _firstRippleInitialRadius;
    float _fadeOutRadius;
    float _darkness;
    BOOL _isTrackingTouch;
    struct { 
        float x; 
        float y; 
    } _currentTouchLocation;
    double _currentTouchStartTime;
    unsigned int _numberOfRipplesForCurrentTouch;
    NSMutableArray *_ripplesContextQueue;
    NSMutableArray *_recentTouchesContextQueue;
    float _currentSpeedCoefficient;
    BOOL _needsCurrentSpeedRefresh;
    NSMutableArray *_reusableTouchContexts;
}

@property float fingerStillSpeed;
@property float fingerMovingSpeed;
@property float firstRippleInitialRadius;
@property float fadeOutRadius;
@property float darkness;
@property(readonly) float _currentSpeed;

+ (Class)layerClass;

- (float)darkness;
- (float)fadeOutRadius;
- (float)firstRippleInitialRadius;
- (float)fingerMovingSpeed;
- (float)fingerStillSpeed;
- (void)_startAnimation;
- (void)_updateTouchLocationCoordinatesWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_refresh:(id)arg1;
- (id)_displayLinkManager;
- (void)_enqueueReusableTouchContextObject:(id)arg1;
- (id)_reusableTouchContextObject;
- (float)_currentSpeed;
- (void)_drawViewWithVertices:(BOOL)arg1;
- (void)_computeBaseRippleSectionVerticesIfNeeded;
- (void)_initializeConfigurationParameters;
- (void)_configureView;
- (BOOL)_prepareVerticesDataArrayForStoringVerticesOfRipplesWithCount:(unsigned long)arg1;
- (void)_tearDownView;
- (BOOL)_setUpView;
- (void)setDarkness:(float)arg1;
- (void)setFadeOutRadius:(float)arg1;
- (void)setFirstRippleInitialRadius:(float)arg1;
- (void)setFingerMovingSpeed:(float)arg1;
- (void)setFingerStillSpeed:(float)arg1;
- (void)_touchEndedAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_touchMovedToLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_touchBeganAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (void)_stopAnimation;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_createFramebuffer;
- (void)_destroyFramebuffer;

@end
