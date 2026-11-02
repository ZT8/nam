// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MBProgressHUD : UIView
{
@private
    BOOL _removeFromSuperViewOnHide; // offset 8, size 1; encoding B
    BOOL _square; // offset 9, size 1; encoding B
    BOOL _defaultMotionEffectsEnabled; // offset 10, size 1; encoding B
    BOOL _useAnimation; // offset 11, size 1; encoding B
    BOOL _finished; // offset 12, size 1; encoding B
    float _progress; // offset 16, size 4; encoding f
    id<MBProgressHUDDelegate> _delegate; // offset 24, size 8; encoding @"<MBProgressHUDDelegate>"
    id /* block; signature not encoded here */ _completionBlock; // offset 32, size 8; encoding @?
    double _graceTime; // offset 40, size 8; encoding d
    double _minShowTime; // offset 48, size 8; encoding d
    long long _mode; // offset 56, size 8; encoding q
    UIColor * _contentColor; // offset 64, size 8; encoding @"UIColor"
    long long _animationType; // offset 72, size 8; encoding q
    double _margin; // offset 80, size 8; encoding d
    NSProgress * _progressObject; // offset 88, size 8; encoding @"NSProgress"
    MBBackgroundView * _bezelView; // offset 96, size 8; encoding @"MBBackgroundView"
    MBBackgroundView * _backgroundView; // offset 104, size 8; encoding @"MBBackgroundView"
    UIView * _customView; // offset 112, size 8; encoding @"UIView"
    UILabel * _label; // offset 120, size 8; encoding @"UILabel"
    UILabel * _detailsLabel; // offset 128, size 8; encoding @"UILabel"
    UIButton * _button; // offset 136, size 8; encoding @"UIButton"
    UIButton * _hideButton; // offset 144, size 8; encoding @"UIButton"
    UIView * _indicator; // offset 152, size 8; encoding @"UIView"
    NSDate * _showStarted; // offset 160, size 8; encoding @"NSDate"
    NSArray * _paddingConstraints; // offset 168, size 8; encoding @"NSArray"
    NSArray * _bezelConstraints; // offset 176, size 8; encoding @"NSArray"
    UIView * _topSpacer; // offset 184, size 8; encoding @"UIView"
    UIView * _bottomSpacer; // offset 192, size 8; encoding @"UIView"
    NSTimer * _graceTimer; // offset 200, size 8; encoding @"NSTimer"
    NSTimer * _minShowTimer; // offset 208, size 8; encoding @"NSTimer"
    NSTimer * _hideDelayTimer; // offset 216, size 8; encoding @"NSTimer"
    CADisplayLink * _progressObjectDisplayLink; // offset 224, size 8; encoding @"CADisplayLink"
    struct CGPoint _offset; // offset 232, size 16; encoding {CGPoint="x"d"y"d}
    struct CGSize _minSize; // offset 248, size 16; encoding {CGSize="width"d"height"d}
}
// Property useAnimation | attributes: TB,N,V_useAnimation
// Property finished | attributes: TB,N,GhasFinished,V_finished
// Property indicator | attributes: T@"UIView",&,N,V_indicator
// Property showStarted | attributes: T@"NSDate",&,N,V_showStarted
// Property paddingConstraints | attributes: T@"NSArray",&,N,V_paddingConstraints
// Property bezelConstraints | attributes: T@"NSArray",&,N,V_bezelConstraints
// Property topSpacer | attributes: T@"UIView",&,N,V_topSpacer
// Property bottomSpacer | attributes: T@"UIView",&,N,V_bottomSpacer
// Property graceTimer | attributes: T@"NSTimer",W,N,V_graceTimer
// Property minShowTimer | attributes: T@"NSTimer",W,N,V_minShowTimer
// Property hideDelayTimer | attributes: T@"NSTimer",W,N,V_hideDelayTimer
// Property progressObjectDisplayLink | attributes: T@"CADisplayLink",W,N,V_progressObjectDisplayLink
// Property delegate | attributes: T@"<MBProgressHUDDelegate>",W,N,V_delegate
// Property completionBlock | attributes: T@?,C,V_completionBlock
// Property graceTime | attributes: Td,N,V_graceTime
// Property minShowTime | attributes: Td,N,V_minShowTime
// Property removeFromSuperViewOnHide | attributes: TB,N,V_removeFromSuperViewOnHide
// Property mode | attributes: Tq,N,V_mode
// Property contentColor | attributes: T@"UIColor",&,N,V_contentColor
// Property animationType | attributes: Tq,N,V_animationType
// Property offset | attributes: T{CGPoint=dd},N,V_offset
// Property margin | attributes: Td,N,V_margin
// Property minSize | attributes: T{CGSize=dd},N,V_minSize
// Property square | attributes: TB,N,GisSquare,V_square
// Property defaultMotionEffectsEnabled | attributes: TB,N,GareDefaultMotionEffectsEnabled,V_defaultMotionEffectsEnabled
// Property progress | attributes: Tf,N,V_progress
// Property progressObject | attributes: T@"NSProgress",&,N,V_progressObject
// Property bezelView | attributes: T@"MBBackgroundView",R,N,V_bezelView
// Property backgroundView | attributes: T@"MBBackgroundView",R,N,V_backgroundView
// Property customView | attributes: T@"UIView",&,N,V_customView
// Property label | attributes: T@"UILabel",R,N,V_label
// Property detailsLabel | attributes: T@"UILabel",R,N,V_detailsLabel
// Property button | attributes: T@"UIButton",R,N,V_button
// Property hideButton | attributes: T@"UIButton",R,N,V_hideButton
// Implementation 0x91098 | runtime encoding: v16@0:8
- (void)commonInit;
// Implementation 0x91200 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x91258 | runtime encoding: @24@0:8@16
- (id)initWithCoder:(id)arg1;
// Implementation 0x912b0 | runtime encoding: @24@0:8@16
- (id)initWithView:(id)arg1;
// Implementation 0x913c0 | runtime encoding: v16@0:8
- (void)dealloc;
// Implementation 0x9140c | runtime encoding: v20@0:8B16
- (void)showAnimated:(BOOL)arg1;
// Implementation 0x91640 | runtime encoding: v20@0:8B16
- (void)hideAnimated:(BOOL)arg1;
// Implementation 0x91920 | runtime encoding: v28@0:8B16d20
- (void)hideAnimated:(BOOL)arg1 afterDelay:(double)arg2;
// Implementation 0x91a48 | runtime encoding: v24@0:8@16
- (void)handleGraceTimer:(id)arg1;
// Implementation 0x91aa0 | runtime encoding: v24@0:8@16
- (void)handleMinShowTimer:(id)arg1;
// Implementation 0x91ad8 | runtime encoding: v24@0:8@16
- (void)handleHideTimer:(id)arg1;
// Implementation 0x91b34 | runtime encoding: v16@0:8
- (void)didMoveToSuperview;
// Implementation 0x91b44 | runtime encoding: v20@0:8B16
- (void)showUsingAnimation:(BOOL)arg1;
// Implementation 0x91d50 | runtime encoding: v20@0:8B16
- (void)hideUsingAnimation:(BOOL)arg1;
// Implementation 0x91ef8 | runtime encoding: v36@0:8B16q20@?28
- (void)animateIn:(BOOL)arg1 withType:(long long)arg2 completion:(id /* block; signature not encoded here */)arg3;
// Implementation 0x92240 | runtime encoding: v16@0:8
- (void)done;
// Implementation 0x92348 | runtime encoding: v16@0:8
- (void)setupViews;
// Implementation 0x92b58 | runtime encoding: v16@0:8
- (void)updateIndicators;
// Implementation 0x92f18 | runtime encoding: v24@0:8@16
- (void)updateViewsForColor:(id)arg1;
// Implementation 0x93388 | runtime encoding: v16@0:8
- (void)updateBezelMotionEffects;
// Implementation 0x936c8 | runtime encoding: v16@0:8
- (void)updateConstraints;
// Implementation 0x9441c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0x9447c | runtime encoding: v16@0:8
- (void)updatePaddingConstraints;
// Implementation 0x946b8 | runtime encoding: v28@0:8f16@20
- (void)applyPriority:(float)arg1 toConstraints:(id)arg2;
// Implementation 0x947d8 | runtime encoding: v24@0:8q16
- (void)setMode:(long long)arg1;
// Implementation 0x94800 | runtime encoding: v24@0:8@16
- (void)setCustomView:(id)arg1;
// Implementation 0x94884 | runtime encoding: v32@0:8{CGPoint=dd}16
- (void)setOffset:(struct CGPoint)arg1;
// Implementation 0x948b8 | runtime encoding: v24@0:8d16
- (void)setMargin:(double)arg1;
// Implementation 0x948e0 | runtime encoding: v32@0:8{CGSize=dd}16
- (void)setMinSize:(struct CGSize)arg1;
// Implementation 0x94914 | runtime encoding: v20@0:8B16
- (void)setSquare:(BOOL)arg1;
// Implementation 0x9493c | runtime encoding: v24@0:8@16
- (void)setProgressObjectDisplayLink:(id)arg1;
// Implementation 0x94a18 | runtime encoding: v24@0:8@16
- (void)setProgressObject:(id)arg1;
// Implementation 0x94a88 | runtime encoding: v20@0:8f16
- (void)setProgress:(float)arg1;
// Implementation 0x94b60 | runtime encoding: v24@0:8@16
- (void)setContentColor:(id)arg1;
// Implementation 0x94be4 | runtime encoding: v20@0:8B16
- (void)setDefaultMotionEffectsEnabled:(BOOL)arg1;
// Implementation 0x94c0c | runtime encoding: v20@0:8B16
- (void)setNSProgressDisplayLinkEnabled:(BOOL)arg1;
// Implementation 0x94ce0 | runtime encoding: v16@0:8
- (void)updateProgressFromProgressObject;
// Implementation 0x94d38 | runtime encoding: v16@0:8
- (void)registerForNotifications;
// Implementation 0x94da0 | runtime encoding: v16@0:8
- (void)unregisterFromNotifications;
// Implementation 0x94e00 | runtime encoding: v24@0:8@16
- (void)statusBarOrientationDidChange:(id)arg1;
// Implementation 0x94e50 | runtime encoding: v20@0:8B16
- (void)updateForCurrentOrientationAnimated:(BOOL)arg1;
// Implementation 0x94ee0 | runtime encoding: @16@0:8
- (id)delegate;
// Implementation 0x94f00 | runtime encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// Implementation 0x94f14 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)completionBlock;
// Implementation 0x94f24 | runtime encoding: v24@0:8@?16
- (void)setCompletionBlock:(id /* block; signature not encoded here */)arg1;
// Implementation 0x94f30 | runtime encoding: d16@0:8
- (double)graceTime;
// Implementation 0x94f40 | runtime encoding: v24@0:8d16
- (void)setGraceTime:(double)arg1;
// Implementation 0x94f50 | runtime encoding: d16@0:8
- (double)minShowTime;
// Implementation 0x94f60 | runtime encoding: v24@0:8d16
- (void)setMinShowTime:(double)arg1;
// Implementation 0x94f70 | runtime encoding: B16@0:8
- (BOOL)removeFromSuperViewOnHide;
// Implementation 0x94f80 | runtime encoding: v20@0:8B16
- (void)setRemoveFromSuperViewOnHide:(BOOL)arg1;
// Implementation 0x94f90 | runtime encoding: q16@0:8
- (long long)mode;
// Implementation 0x94fa0 | runtime encoding: @16@0:8
- (id)contentColor;
// Implementation 0x94fb0 | runtime encoding: q16@0:8
- (long long)animationType;
// Implementation 0x94fc0 | runtime encoding: v24@0:8q16
- (void)setAnimationType:(long long)arg1;
// Implementation 0x94fd0 | runtime encoding: {CGPoint=dd}16@0:8
- (struct CGPoint)offset;
// Implementation 0x94fe4 | runtime encoding: d16@0:8
- (double)margin;
// Implementation 0x94ff4 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)minSize;
// Implementation 0x95008 | runtime encoding: B16@0:8
- (BOOL)isSquare;
// Implementation 0x95018 | runtime encoding: B16@0:8
- (BOOL)areDefaultMotionEffectsEnabled;
// Implementation 0x95028 | runtime encoding: f16@0:8
- (float)progress;
// Implementation 0x95038 | runtime encoding: @16@0:8
- (id)progressObject;
// Implementation 0x95048 | runtime encoding: @16@0:8
- (id)bezelView;
// Implementation 0x95058 | runtime encoding: @16@0:8
- (id)backgroundView;
// Implementation 0x95068 | runtime encoding: @16@0:8
- (id)customView;
// Implementation 0x95078 | runtime encoding: @16@0:8
- (id)label;
// Implementation 0x95088 | runtime encoding: @16@0:8
- (id)detailsLabel;
// Implementation 0x95098 | runtime encoding: @16@0:8
- (id)button;
// Implementation 0x950a8 | runtime encoding: @16@0:8
- (id)hideButton;
// Implementation 0x950b8 | runtime encoding: B16@0:8
- (BOOL)useAnimation;
// Implementation 0x950c8 | runtime encoding: v20@0:8B16
- (void)setUseAnimation:(BOOL)arg1;
// Implementation 0x950d8 | runtime encoding: B16@0:8
- (BOOL)hasFinished;
// Implementation 0x950e8 | runtime encoding: v20@0:8B16
- (void)setFinished:(BOOL)arg1;
// Implementation 0x950f8 | runtime encoding: @16@0:8
- (id)indicator;
// Implementation 0x95108 | runtime encoding: v24@0:8@16
- (void)setIndicator:(id)arg1;
// Implementation 0x9511c | runtime encoding: @16@0:8
- (id)showStarted;
// Implementation 0x9512c | runtime encoding: v24@0:8@16
- (void)setShowStarted:(id)arg1;
// Implementation 0x95140 | runtime encoding: @16@0:8
- (id)paddingConstraints;
// Implementation 0x95150 | runtime encoding: v24@0:8@16
- (void)setPaddingConstraints:(id)arg1;
// Implementation 0x95164 | runtime encoding: @16@0:8
- (id)bezelConstraints;
// Implementation 0x95174 | runtime encoding: v24@0:8@16
- (void)setBezelConstraints:(id)arg1;
// Implementation 0x95188 | runtime encoding: @16@0:8
- (id)topSpacer;
// Implementation 0x95198 | runtime encoding: v24@0:8@16
- (void)setTopSpacer:(id)arg1;
// Implementation 0x951ac | runtime encoding: @16@0:8
- (id)bottomSpacer;
// Implementation 0x951bc | runtime encoding: v24@0:8@16
- (void)setBottomSpacer:(id)arg1;
// Implementation 0x951d0 | runtime encoding: @16@0:8
- (id)graceTimer;
// Implementation 0x951f0 | runtime encoding: v24@0:8@16
- (void)setGraceTimer:(id)arg1;
// Implementation 0x95204 | runtime encoding: @16@0:8
- (id)minShowTimer;
// Implementation 0x95224 | runtime encoding: v24@0:8@16
- (void)setMinShowTimer:(id)arg1;
// Implementation 0x95238 | runtime encoding: @16@0:8
- (id)hideDelayTimer;
// Implementation 0x95258 | runtime encoding: v24@0:8@16
- (void)setHideDelayTimer:(id)arg1;
// Implementation 0x9526c | runtime encoding: @16@0:8
- (id)progressObjectDisplayLink;
// Implementation 0x9528c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0x90de4 | runtime encoding: @28@0:8@16B24
+ (id)showHUDAddedTo:(id)arg1 animated:(BOOL)arg2;
// Implementation 0x90e78 | runtime encoding: B28@0:8@16B24
+ (BOOL)hideHUDForView:(id)arg1 animated:(BOOL)arg2;
// Implementation 0x90eec | runtime encoding: @24@0:8@16
+ (id)HUDForView:(id)arg1;
@end
