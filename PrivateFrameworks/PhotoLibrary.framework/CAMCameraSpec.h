/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface CAMCameraSpec : NSObject {
}

@property(readonly) int bottomBarOrientation;
@property(readonly) int modeDialOrientation;
@property(readonly) BOOL shouldCreateAvalancheIndicator;
@property(readonly) BOOL shouldCreateBottomBar;
@property(readonly) BOOL shouldCreateElapsedTimeView;
@property(readonly) BOOL shouldCreateFiltersButton;
@property(readonly) BOOL shouldCreateFlashButton;
@property(readonly) BOOL shouldCreateFlipButton;
@property(readonly) BOOL shouldCreateHDRButton;
@property(readonly) BOOL shouldCreateImageWell;
@property(readonly) BOOL shouldCreateModeDial;
@property(readonly) BOOL shouldCreatePanoramaView;
@property(readonly) BOOL shouldCreateShutterButton;
@property(readonly) BOOL shouldCreateSlalomIndicator;
@property(readonly) BOOL shouldCreateStillDuringVideo;
@property(readonly) BOOL shouldCreateTopBar;
@property(readonly) BOOL shouldCreateZoomSlider;

+ (id)specForCurrentPlatform;
+ (id)specForPad;
+ (id)specForPhone;

- (int)bottomBarOrientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialFrameForOrientation:(int)arg1;
- (BOOL)isCameraApp;
- (BOOL)isPad;
- (BOOL)isPhone;
- (int)modeDialOrientation;
- (int)rotationStyle;
- (BOOL)shouldCreateAvalancheIndicator;
- (BOOL)shouldCreateBottomBar;
- (BOOL)shouldCreateElapsedTimeView;
- (BOOL)shouldCreateFiltersButton;
- (BOOL)shouldCreateFlashButton;
- (BOOL)shouldCreateFlipButton;
- (BOOL)shouldCreateHDRButton;
- (BOOL)shouldCreateImageWell;
- (BOOL)shouldCreateModeDial;
- (BOOL)shouldCreatePanoramaView;
- (BOOL)shouldCreateShutterButton;
- (BOOL)shouldCreateSlalomIndicator;
- (BOOL)shouldCreateStillDuringVideo;
- (BOOL)shouldCreateTopBar;
- (BOOL)shouldCreateZoomSlider;

@end
