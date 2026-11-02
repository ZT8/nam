// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLCrashViewController : UIViewController
{
@private
    NSDictionary * _infoDict; // offset 8, size 8; encoding @"NSDictionary"
    NSString * _appName; // offset 16, size 8; encoding @"NSString"
    NSString * _appVersion; // offset 24, size 8; encoding @"NSString"
}
// Property appName | attributes: T@"NSString",&,N,V_appName
// Property appVersion | attributes: T@"NSString",&,N,V_appVersion
// Property infoDict | attributes: T@"NSDictionary",&,N,V_infoDict
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0x8991c | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0x8b8a4 | runtime encoding: v16@0:8
- (void)dismiss;
// Implementation 0x8b8b8 | runtime encoding: v24@0:8@16
- (void)sendCrash:(id)arg1;
// Implementation 0x8bdac | runtime encoding: v40@0:8@16q24@32
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
// Implementation 0x8c158 | runtime encoding: @16@0:8
- (id)infoDict;
// Implementation 0x8c168 | runtime encoding: v24@0:8@16
- (void)setInfoDict:(id)arg1;
// Implementation 0x8c17c | runtime encoding: @16@0:8
- (id)appName;
// Implementation 0x8c18c | runtime encoding: v24@0:8@16
- (void)setAppName:(id)arg1;
// Implementation 0x8c1a0 | runtime encoding: @16@0:8
- (id)appVersion;
// Implementation 0x8c1b0 | runtime encoding: v24@0:8@16
- (void)setAppVersion:(id)arg1;
// Implementation 0x8c1c4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLHelper : NSObject
// Implementation 0x8d0ec | runtime encoding: v24@0:8Q16
+ (void)HUDWithState:(unsigned long long)arg1;
// Implementation 0x8d8c8 | runtime encoding: @24@0:8@16
+ (id)getFile:(id)arg1;
// Implementation 0x8d984 | runtime encoding: v48@0:8@16Q24@32d40
+ (void)addLine:(id)arg1 atPosition:(unsigned long long)arg2 withColor:(id)arg3 lineHeight:(double)arg4;
// Implementation 0x8dbec | runtime encoding: B16@0:8
+ (BOOL)is_iPhoneX;
// Implementation 0x8dc4c | runtime encoding: @16@0:8
+ (id)topWindow;
// Implementation 0x8dcd0 | runtime encoding: @24@0:8@16
+ (id)imageIcon:(id)arg1;
// Implementation 0x8ddd0 | runtime encoding: @32@0:8@16@24
+ (id)image:(id)arg1 color:(id)arg2;
// Implementation 0x8def0 | runtime encoding: @40@0:8@16{CGSize=dd}24
+ (id)resizeImageView:(id)arg1 size:(struct CGSize)arg2;
// Implementation 0x8e080 | runtime encoding: v32@0:8@16@24
+ (void)showMessageWithTitle:(id)arg1 message:(id)arg2;
// Implementation 0x8eb1c | runtime encoding: v40@0:8@16@24@32
+ (void)showMessageWithTitle:(id)arg1 message:(id)arg2 viewController:(id)arg3;
// Implementation 0x8eec8 | runtime encoding: v32@0:8@?16@?24
+ (void)showConfirmMessageSave:(id /* block; signature not encoded here */)arg1 share:(id /* block; signature not encoded here */)arg2;
// Implementation 0x8f6ac | runtime encoding: @40@0:8@16^@24^@32
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
// Implementation 0x8faa8 | runtime encoding: q24@0:8@16
+ (long long)DLMediaSize:(id)arg1;
// Implementation 0x8fb8c | runtime encoding: q24@0:8@16
+ (long long)getStatusCodeFromURL:(id)arg1;
// Implementation 0x8fc64 | runtime encoding: v24@0:8@16
+ (void)switchToRTL:(id)arg1;
// Implementation 0x8fcb8 | runtime encoding: B16@0:8
+ (BOOL)isDarkMode;
// Implementation 0x8fd58 | runtime encoding: @48@0:8@16@24@32q40
+ (id)cellWithTitle:(id)arg1 key:(id)arg2 defaultValue:(id)arg3 statusMode:(long long)arg4;
// Implementation 0x8fef4 | runtime encoding: @56@0:8@16@24@32@40q48
+ (id)cellWithTitle:(id)arg1 detail:(id)arg2 image:(id)arg3 url:(id)arg4 statusMode:(long long)arg5;
// Implementation 0x90010 | runtime encoding: v24@0:8@16
+ (void)saveMediaIdForStory:(id)arg1;
// Implementation 0x902b0 | runtime encoding: @24@0:8@16
+ (id)findViewController:(id)arg1;
// Implementation 0x90388 | runtime encoding: @16@0:8
+ (id)topMostController;
// Implementation 0x90480 | runtime encoding: @16@0:8
+ (id)keyWindow;
// Implementation 0x90600 | runtime encoding: v20@0:8i16
+ (void)vibration:(int)arg1;
// Implementation 0x9064c | runtime encoding: B16@0:8
+ (BOOL)isDeviceLanguageArabic;
// Implementation 0x906d0 | runtime encoding: v28@0:8B16@20
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
// Implementation 0x9077c | runtime encoding: v32@0:8@16@24
+ (void)setObject:(id)arg1 forKey:(id)arg2;
// Implementation 0x9083c | runtime encoding: B24@0:8@16
+ (BOOL)boolForKey:(id)arg1;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLInsta : NSObject
// Implementation 0x908b8 | runtime encoding: @16@0:8
+ (id)sharedInstance;
// Implementation 0x90968 | runtime encoding: v32@0:8@16@?24
+ (void)featcAllInfoByUserPK:(id)arg1 completion:(id /* block; signature not encoded here */)arg2;
// Implementation 0x90cd4 | runtime encoding: v24@0:8@16
+ (void)openUsernameInApp:(id)arg1;
@end

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

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MBRoundProgressView : UIView
{
@private
    BOOL _annular; // offset 8, size 1; encoding B
    float _progress; // offset 12, size 4; encoding f
    UIColor * _progressTintColor; // offset 16, size 8; encoding @"UIColor"
    UIColor * _backgroundTintColor; // offset 24, size 8; encoding @"UIColor"
}
// Property progress | attributes: Tf,N,V_progress
// Property progressTintColor | attributes: T@"UIColor",&,N,V_progressTintColor
// Property backgroundTintColor | attributes: T@"UIColor",&,N,V_backgroundTintColor
// Property annular | attributes: TB,N,GisAnnular,V_annular
// Implementation 0x95434 | runtime encoding: @16@0:8
- (id)init;
// Implementation 0x95454 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x95578 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// Implementation 0x95588 | runtime encoding: v20@0:8f16
- (void)setProgress:(float)arg1;
// Implementation 0x955b0 | runtime encoding: v24@0:8@16
- (void)setProgressTintColor:(id)arg1;
// Implementation 0x956e0 | runtime encoding: v24@0:8@16
- (void)setBackgroundTintColor:(id)arg1;
// Implementation 0x95810 | runtime encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawRect:(struct CGRect)arg1;
// Implementation 0x95bc8 | runtime encoding: f16@0:8
- (float)progress;
// Implementation 0x95bd8 | runtime encoding: @16@0:8
- (id)progressTintColor;
// Implementation 0x95be8 | runtime encoding: @16@0:8
- (id)backgroundTintColor;
// Implementation 0x95bf8 | runtime encoding: B16@0:8
- (BOOL)isAnnular;
// Implementation 0x95c08 | runtime encoding: v20@0:8B16
- (void)setAnnular:(BOOL)arg1;
// Implementation 0x95c18 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MBBarProgressView : UIView
{
@private
    float _progress; // offset 8, size 4; encoding f
    UIColor * _lineColor; // offset 16, size 8; encoding @"UIColor"
    UIColor * _progressRemainingColor; // offset 24, size 8; encoding @"UIColor"
    UIColor * _progressColor; // offset 32, size 8; encoding @"UIColor"
}
// Property progress | attributes: Tf,N,V_progress
// Property lineColor | attributes: T@"UIColor",&,N,V_lineColor
// Property progressRemainingColor | attributes: T@"UIColor",&,N,V_progressRemainingColor
// Property progressColor | attributes: T@"UIColor",&,N,V_progressColor
// Implementation 0x95c58 | runtime encoding: @16@0:8
- (id)init;
// Implementation 0x95c78 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x95db4 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// Implementation 0x95dc4 | runtime encoding: v20@0:8f16
- (void)setProgress:(float)arg1;
// Implementation 0x95dec | runtime encoding: v24@0:8@16
- (void)setProgressColor:(id)arg1;
// Implementation 0x95f1c | runtime encoding: v24@0:8@16
- (void)setProgressRemainingColor:(id)arg1;
// Implementation 0x9604c | runtime encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawRect:(struct CGRect)arg1;
// Implementation 0x9644c | runtime encoding: f16@0:8
- (float)progress;
// Implementation 0x9645c | runtime encoding: @16@0:8
- (id)lineColor;
// Implementation 0x9646c | runtime encoding: v24@0:8@16
- (void)setLineColor:(id)arg1;
// Implementation 0x96480 | runtime encoding: @16@0:8
- (id)progressRemainingColor;
// Implementation 0x96490 | runtime encoding: @16@0:8
- (id)progressColor;
// Implementation 0x964a0 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MBBackgroundView : UIView
{
@private
    long long _style; // offset 8, size 8; encoding q
    long long _blurEffectStyle; // offset 16, size 8; encoding q
    UIColor * _color; // offset 24, size 8; encoding @"UIColor"
    UIVisualEffectView * _effectView; // offset 32, size 8; encoding @"UIVisualEffectView"
}
// Property effectView | attributes: T@"UIVisualEffectView",&,V_effectView
// Property style | attributes: Tq,N,V_style
// Property blurEffectStyle | attributes: Tq,N,V_blurEffectStyle
// Property color | attributes: T@"UIColor",&,N,V_color
// Implementation 0x964f4 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x965c0 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// Implementation 0x965d0 | runtime encoding: v24@0:8q16
- (void)setStyle:(long long)arg1;
// Implementation 0x965f8 | runtime encoding: v24@0:8@16
- (void)setColor:(id)arg1;
// Implementation 0x9672c | runtime encoding: v24@0:8q16
- (void)setBlurEffectStyle:(long long)arg1;
// Implementation 0x96754 | runtime encoding: v16@0:8
- (void)updateForBackgroundStyle;
// Implementation 0x9693c | runtime encoding: v24@0:8@16
- (void)updateViewsForColor:(id)arg1;
// Implementation 0x96998 | runtime encoding: q16@0:8
- (long long)style;
// Implementation 0x969a8 | runtime encoding: q16@0:8
- (long long)blurEffectStyle;
// Implementation 0x969b8 | runtime encoding: @16@0:8
- (id)color;
// Implementation 0x969c8 | runtime encoding: @16@0:8
- (id)effectView;
// Implementation 0x969d8 | runtime encoding: v24@0:8@16
- (void)setEffectView:(id)arg1;
// Implementation 0x969e4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MBProgressHUDRoundedButton : UIButton
// Implementation 0x96a24 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x96aa0 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0x96b3c | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// Implementation 0x96ba4 | runtime encoding: v32@0:8@16Q24
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
// Implementation 0x96c84 | runtime encoding: v20@0:8B16
- (void)setHighlighted:(BOOL)arg1;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MBProgressHUDRoundedButton2 : UIButton
// Implementation 0x96d58 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x96d8c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0x96e28 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// Implementation 0x96e90 | runtime encoding: v32@0:8@16Q24
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
// Implementation 0x96f70 | runtime encoding: v20@0:8B16
- (void)setHighlighted:(BOOL)arg1;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface ABMenuActionItem : NSObject
// Implementation 0x9ab38 | runtime encoding: @40@0:8@16q24@32
+ (id)actionItemWithTitle:(id)arg1 style:(long long)arg2 action:(id)arg3;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface ABMenuViewController : UIViewController
{
@private
    NSString * _actionTitle; // offset 8, size 8; encoding @"NSString"
    NSArray * _items; // offset 16, size 8; encoding @"NSArray"
    id _delegate; // offset 24, size 8; encoding @
}
// Property actionTitle | attributes: T@"NSString",&,N,V_actionTitle
// Property items | attributes: T@"NSArray",&,N,V_items
// Property delegate | attributes: T@,W,N,V_delegate
// Implementation 0x9ac90 | runtime encoding: @32@0:8@16@24
- (id)initWithTitle:(id)arg1 actionItems:(id)arg2;
// Implementation 0x9ad14 | runtime encoding: @24@0:8@16
- (id)initWithActionItems:(id)arg1;
// Implementation 0x9ad48 | runtime encoding: v36@0:8@16B24@?28
- (void)presentedFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block; signature not encoded here */)arg3;
// Implementation 0x9b228 | runtime encoding: @16@0:8
- (id)actionTitle;
// Implementation 0x9b238 | runtime encoding: v24@0:8@16
- (void)setActionTitle:(id)arg1;
// Implementation 0x9b24c | runtime encoding: @16@0:8
- (id)items;
// Implementation 0x9b25c | runtime encoding: v24@0:8@16
- (void)setItems:(id)arg1;
// Implementation 0x9b270 | runtime encoding: @16@0:8
- (id)delegate;
// Implementation 0x9b290 | runtime encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// Implementation 0x9b2a4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLSystemAlertController : UIAlertController
// Implementation 0x9b2f4 | runtime encoding: v24@0:8@16
- (void)traitCollectionDidChange:(id)arg1;
// Implementation 0x9b3b8 | runtime encoding: v16@0:8
- (void)updateActionColors;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLAACAudioConverter : NSObject
{
@private
    IGDirectThreadViewController * _threadViewController; // offset 8, size 8; encoding @"IGDirectThreadViewController"
}
// Property threadViewController | attributes: T@"IGDirectThreadViewController",&,V_threadViewController
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0x9df78 | runtime encoding: v24@0:8@16
- (void)showDocumentPickerWithDelegate:(id)arg1;
// Implementation 0x9e0c4 | runtime encoding: v24@0:8@16
- (void)showImagePickerWithDelegate:(id)arg1;
// Implementation 0x9e220 | runtime encoding: v32@0:8@16@24
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
// Implementation 0x9edfc | runtime encoding: v32@0:8@16@24
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
// Implementation 0x9f600 | runtime encoding: @16@0:8
- (id)threadViewController;
// Implementation 0x9f60c | runtime encoding: v24@0:8@16
- (void)setThreadViewController:(id)arg1;
// Implementation 0x9f614 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0x9ded0 | runtime encoding: @16@0:8
+ (id)sharedInstance;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLButton : UIButton
{
@private
    id /* block; signature not encoded here */ _handler; // offset 8, size 8; encoding @?
}
// Implementation 0x9f620 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x9f688 | runtime encoding: v24@0:8@?16
- (void)actionHandler:(id /* block; signature not encoded here */)arg1;
// Implementation 0x9f6c0 | runtime encoding: v24@0:8@16
- (void)didPressButton:(id)arg1;
// Implementation 0x9f6dc | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLTapGestureRecognizer : UITapGestureRecognizer
{
@private
    id /* block; signature not encoded here */ _handler; // offset 8, size 8; encoding @?
}
// Implementation 0x9f6f0 | runtime encoding: @24@0:8@?16
- (id)initWithAction:(id /* block; signature not encoded here */)arg1;
// Implementation 0x9f75c | runtime encoding: v24@0:8@16
- (void)didTap:(id)arg1;
// Implementation 0x9f778 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLBarButtonItem : UIBarButtonItem
{
@private
    id /* block; signature not encoded here */ onPressHandler; // offset 8, size 8; encoding @?
}
// Implementation 0x9f78c | runtime encoding: @40@0:8@16q24@?32
- (id)initWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block; signature not encoded here */)arg3;
// Implementation 0x9f82c | runtime encoding: @40@0:8@16q24@?32
- (id)initWithImage:(id)arg1 style:(long long)arg2 action:(id /* block; signature not encoded here */)arg3;
// Implementation 0x9f8cc | runtime encoding: v24@0:8@16
- (void)didPressBarButton:(id)arg1;
// Implementation 0x9f8e8 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLAuthenticationView : UIView
{
@private
    BOOL _authenticated; // offset 8, size 1; encoding B
    LAContext * _context; // offset 16, size 8; encoding @"LAContext"
    UIVisualEffectView * _dlBlurView; // offset 24, size 8; encoding @"UIVisualEffectView"
}
// Property dlBlurView | attributes: T@"UIVisualEffectView",&,N,V_dlBlurView
// Property context | attributes: T@"LAContext",&,N,V_context
// Property authenticated | attributes: TB,N,GisAuthenticated,V_authenticated
// Implementation 0x9f8fc | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0x9fa50 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x9faa8 | runtime encoding: v16@0:8
- (void)setupBlurView;
// Implementation 0x9fcb4 | runtime encoding: v24@0:8@?16
- (void)contextAuthenticated:(id /* block; signature not encoded here */)arg1;
// Implementation 0x9fec4 | runtime encoding: @16@0:8
- (id)context;
// Implementation 0x9fed4 | runtime encoding: v24@0:8@16
- (void)setContext:(id)arg1;
// Implementation 0x9fee8 | runtime encoding: B16@0:8
- (BOOL)isAuthenticated;
// Implementation 0x9fef8 | runtime encoding: v20@0:8B16
- (void)setAuthenticated:(BOOL)arg1;
// Implementation 0x9ff08 | runtime encoding: @16@0:8
- (id)dlBlurView;
// Implementation 0x9ff18 | runtime encoding: v24@0:8@16
- (void)setDlBlurView:(id)arg1;
// Implementation 0x9ff2c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLDownloadManager : NSObject
// Implementation 0x9ff6c | runtime encoding: v24@0:8@16
+ (void)mergeVideosAsOneVideoWithHud:(id)arg1;
// Implementation 0xa0788 | runtime encoding: v36@0:8@16B24@28
+ (void)exportVideoAfterMerged:(id)arg1 isSupportAudio:(BOOL)arg2 withHud:(id)arg3;
// Implementation 0xa09cc | runtime encoding: v32@0:8@16@?24
+ (void)removeAudioFromVideoURL:(id)arg1 handler:(id /* block; signature not encoded here */)arg2;
// Implementation 0xa0d80 | runtime encoding: B16@0:8
+ (BOOL)isAnyMediaHaveAudio;
// Implementation 0xa0f60 | runtime encoding: @16@0:8
+ (id)allMultiMediaFiles;
// Implementation 0xa0ff8 | runtime encoding: v16@0:8
+ (void)removeAllMultiFilesInFolder;
// Implementation 0xa120c | runtime encoding: @16@0:8
+ (id)multiMediaPath;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLDownloaderMinimizeView : UIView
{
@private
    UILabel * _percentLabel; // offset 8, size 8; encoding @"UILabel"
}
// Property percentLabel | attributes: T@"UILabel",&,N,V_percentLabel
// Implementation 0xa1348 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0xa13a0 | runtime encoding: v16@0:8
- (void)setupViews;
// Implementation 0xa1788 | runtime encoding: @16@0:8
- (id)percentLabel;
// Implementation 0xa1798 | runtime encoding: v24@0:8@16
- (void)setPercentLabel:(id)arg1;
// Implementation 0xa17ac | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLInstaDownloader : NSObject
{
@private
    MBProgressHUD * _hud; // offset 8, size 8; encoding @"MBProgressHUD"
    NSURLSessionDownloadTask * _task; // offset 16, size 8; encoding @"NSURLSessionDownloadTask"
    DLDownloaderMinimizeView * _minimizeView; // offset 24, size 8; encoding @"DLDownloaderMinimizeView"
    unsigned long long _mediaType; // offset 32, size 8; encoding Q
}
// Property hud | attributes: T@"MBProgressHUD",&,N,V_hud
// Property task | attributes: T@"NSURLSessionDownloadTask",&,N,V_task
// Property minimizeView | attributes: T@"DLDownloaderMinimizeView",&,N,V_minimizeView
// Property mediaType | attributes: TQ,N,V_mediaType
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xa17c0 | runtime encoding: v36@0:8@16B24@?28
- (void)downloadMultibileItems:(id)arg1 isNeedMerge:(BOOL)arg2 completion:(id /* block; signature not encoded here */)arg3;
// Implementation 0xa2518 | runtime encoding: v32@0:8@16Q24
- (void)downloadMediaURLString:(id)arg1 mediaType:(unsigned long long)arg2;
// Implementation 0xa3184 | runtime encoding: v16@0:8
- (void)setupMinimizeView;
// Implementation 0xa33c4 | runtime encoding: v16@0:8
- (void)cancel;
// Implementation 0xa342c | runtime encoding: v16@0:8
- (void)DLHUDHide;
// Implementation 0xa3484 | runtime encoding: v16@0:8
- (void)whenHideHUD;
// Implementation 0xa3514 | runtime encoding: v16@0:8
- (void)showHUDAgain;
// Implementation 0xa3598 | runtime encoding: v16@0:8
- (void)hideHUDIfNeeded;
// Implementation 0xa35dc | runtime encoding: v16@0:8
- (void)removeViewAndHideHUD;
// Implementation 0xa366c | runtime encoding: v40@0:8@16@24@32
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
// Implementation 0xa3898 | runtime encoding: v24@0:8@16
- (void)didFinishDownloadingToPath:(id)arg1;
// Implementation 0xa3a4c | runtime encoding: v56@0:8@16@24q32q40q48
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
// Implementation 0xa42e8 | runtime encoding: @16@0:8
- (id)hud;
// Implementation 0xa42f0 | runtime encoding: v24@0:8@16
- (void)setHud:(id)arg1;
// Implementation 0xa42fc | runtime encoding: @16@0:8
- (id)task;
// Implementation 0xa4304 | runtime encoding: v24@0:8@16
- (void)setTask:(id)arg1;
// Implementation 0xa4310 | runtime encoding: @16@0:8
- (id)minimizeView;
// Implementation 0xa4318 | runtime encoding: v24@0:8@16
- (void)setMinimizeView:(id)arg1;
// Implementation 0xa4324 | runtime encoding: Q16@0:8
- (unsigned long long)mediaType;
// Implementation 0xa432c | runtime encoding: v24@0:8Q16
- (void)setMediaType:(unsigned long long)arg1;
// Implementation 0xa4334 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xa3c8c | runtime encoding: v40@0:8@16@24@?32
+ (void)downloadMedia:(id)arg1 filePath:(id)arg2 completion:(id /* block; signature not encoded here */)arg3;
// Implementation 0xa405c | runtime encoding: @16@0:8
+ (id)documentsDirectoryPath;
// Implementation 0xa40b8 | runtime encoding: @24@0:8@16
+ (id)imageTypeFromData:(id)arg1;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMediaData : NSObject
{
@private
    BOOL _fetching; // offset 8, size 1; encoding B
    BOOL _select; // offset 9, size 1; encoding B
    NSString * _coverUrl; // offset 16, size 8; encoding @"NSString"
    NSString * _url; // offset 24, size 8; encoding @"NSString"
    UIImage * _coverImage; // offset 32, size 8; encoding @"UIImage"
    unsigned long long _mediaType; // offset 40, size 8; encoding Q
    double _duration; // offset 48, size 8; encoding d
    double _takenAtDate; // offset 56, size 8; encoding d
}
// Property coverUrl | attributes: T@"NSString",&,N,V_coverUrl
// Property url | attributes: T@"NSString",&,N,V_url
// Property coverImage | attributes: T@"UIImage",&,N,V_coverImage
// Property mediaType | attributes: TQ,N,V_mediaType
// Property duration | attributes: Td,N,V_duration
// Property takenAtDate | attributes: Td,N,V_takenAtDate
// Property fetching | attributes: TB,N,GisFetching,V_fetching
// Property select | attributes: TB,N,GisSelected,V_select
// Implementation 0xa4370 | runtime encoding: v32@0:8@16@?24
- (void)downloadImageFromUrl:(id)arg1 completion:(id /* block; signature not encoded here */)arg2;
// Implementation 0xa45c8 | runtime encoding: @24@0:8d16
- (id)convertTimeToString:(double)arg1;
// Implementation 0xa467c | runtime encoding: @16@0:8
- (id)coverUrl;
// Implementation 0xa4684 | runtime encoding: v24@0:8@16
- (void)setCoverUrl:(id)arg1;
// Implementation 0xa4690 | runtime encoding: @16@0:8
- (id)url;
// Implementation 0xa4698 | runtime encoding: v24@0:8@16
- (void)setUrl:(id)arg1;
// Implementation 0xa46a4 | runtime encoding: @16@0:8
- (id)coverImage;
// Implementation 0xa46ac | runtime encoding: v24@0:8@16
- (void)setCoverImage:(id)arg1;
// Implementation 0xa46b8 | runtime encoding: Q16@0:8
- (unsigned long long)mediaType;
// Implementation 0xa46c0 | runtime encoding: v24@0:8Q16
- (void)setMediaType:(unsigned long long)arg1;
// Implementation 0xa46c8 | runtime encoding: d16@0:8
- (double)duration;
// Implementation 0xa46d0 | runtime encoding: v24@0:8d16
- (void)setDuration:(double)arg1;
// Implementation 0xa46d8 | runtime encoding: d16@0:8
- (double)takenAtDate;
// Implementation 0xa46e0 | runtime encoding: v24@0:8d16
- (void)setTakenAtDate:(double)arg1;
// Implementation 0xa46e8 | runtime encoding: B16@0:8
- (BOOL)isFetching;
// Implementation 0xa46f0 | runtime encoding: v20@0:8B16
- (void)setFetching:(BOOL)arg1;
// Implementation 0xa46f8 | runtime encoding: B16@0:8
- (BOOL)isSelected;
// Implementation 0xa4700 | runtime encoding: v20@0:8B16
- (void)setSelect:(BOOL)arg1;
// Implementation 0xa4708 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLSaveMedia : NSObject
// Implementation 0xa4744 | runtime encoding: v24@0:8@16
+ (void)shareMediaFile:(id)arg1;
// Implementation 0xa4a64 | runtime encoding: v36@0:8@16Q24B32
+ (void)saveMediaOnCamera:(id)arg1 mediaType:(unsigned long long)arg2 needShare:(BOOL)arg3;
// Implementation 0xa4e88 | runtime encoding: v36@0:8@16Q24B32
+ (void)saveMediaOnCamera:(id)arg1 mediaType:(unsigned long long)arg2 showSuccess:(BOOL)arg3;
// Implementation 0xa4eb0 | runtime encoding: v32@0:8@16Q24
+ (void)saveMediaOnCamera:(id)arg1 mediaType:(unsigned long long)arg2;
// Implementation 0xa4f20 | runtime encoding: v40@0:8@16Q24@?32
+ (void)saveMediaOnCamera:(id)arg1 mediaType:(unsigned long long)arg2 completion:(id /* block; signature not encoded here */)arg3;
// Implementation 0xa5244 | runtime encoding: v24@0:8Q16
+ (void)showHUDInThreadWithState:(unsigned long long)arg1;
// Implementation 0xa52d0 | runtime encoding: v16@0:8
+ (void)clearCacheIfNeeded;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLInfoSheetViewController : UIViewController
{
@private
    NSString * _titleInfo; // offset 8, size 8; encoding @"NSString"
    NSString * _info; // offset 16, size 8; encoding @"NSString"
    UILabel * _titleLabel; // offset 24, size 8; encoding @"UILabel"
    UILabel * _infoLabel; // offset 32, size 8; encoding @"UILabel"
    UIImageView * _iconImageView; // offset 40, size 8; encoding @"UIImageView"
}
// Property titleInfo | attributes: T@"NSString",&,N,V_titleInfo
// Property info | attributes: T@"NSString",&,N,V_info
// Property titleLabel | attributes: T@"UILabel",&,N,V_titleLabel
// Property infoLabel | attributes: T@"UILabel",&,N,V_infoLabel
// Property iconImageView | attributes: T@"UIImageView",&,N,V_iconImageView
// Implementation 0xa5418 | runtime encoding: @32@0:8@16@24
- (id)initWithTitle:(id)arg1 info:(id)arg2;
// Implementation 0xa54cc | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xa5e6c | runtime encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// Implementation 0xa6204 | runtime encoding: @16@0:8
- (id)titleInfo;
// Implementation 0xa6214 | runtime encoding: v24@0:8@16
- (void)setTitleInfo:(id)arg1;
// Implementation 0xa6228 | runtime encoding: @16@0:8
- (id)info;
// Implementation 0xa6238 | runtime encoding: v24@0:8@16
- (void)setInfo:(id)arg1;
// Implementation 0xa624c | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xa625c | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xa6270 | runtime encoding: @16@0:8
- (id)infoLabel;
// Implementation 0xa6280 | runtime encoding: v24@0:8@16
- (void)setInfoLabel:(id)arg1;
// Implementation 0xa6294 | runtime encoding: @16@0:8
- (id)iconImageView;
// Implementation 0xa62a4 | runtime encoding: v24@0:8@16
- (void)setIconImageView:(id)arg1;
// Implementation 0xa62b8 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLInfoSheetPresentationController : UIPresentationController
{
@private
    UIView * _dimmingView; // offset 8, size 8; encoding @"UIView"
}
// Property dimmingView | attributes: T@"UIView",&,N,V_dimmingView
// Implementation 0xa6334 | runtime encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)frameOfPresentedViewInContainerView;
// Implementation 0xa63fc | runtime encoding: @32@0:8@16@24
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
// Implementation 0xa6538 | runtime encoding: v16@0:8
- (void)containerViewWillLayoutSubviews;
// Implementation 0xa67bc | runtime encoding: v16@0:8
- (void)presentationTransitionWillBegin;
// Implementation 0xa6990 | runtime encoding: v16@0:8
- (void)dismissalTransitionWillBegin;
// Implementation 0xa6a88 | runtime encoding: v24@0:8@16
- (void)dismissCustomVC:(id)arg1;
// Implementation 0xa6afc | runtime encoding: d16@0:8
- (double)bottomHeight;
// Implementation 0xa6b50 | runtime encoding: @16@0:8
- (id)dimmingView;
// Implementation 0xa6b60 | runtime encoding: v24@0:8@16
- (void)setDimmingView:(id)arg1;
// Implementation 0xa6b74 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLInfoSheetControllerDelegate : NSObject
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xa6b88 | runtime encoding: @40@0:8@16@24@32
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MyCustomPresentationController : UIPresentationController
{
@private
    UIView * _dimmingView; // offset 8, size 8; encoding @"UIView"
}
// Property dimmingView | attributes: T@"UIView",&,V_dimmingView
// Implementation 0xa6cb4 | runtime encoding: v16@0:8
- (void)presentationTransitionWillBegin;
// Implementation 0xa6e60 | runtime encoding: v16@0:8
- (void)containerViewWillLayoutSubviews;
// Implementation 0xa6f98 | runtime encoding: v20@0:8B16
- (void)presentationTransitionDidEnd:(BOOL)arg1;
// Implementation 0xa7010 | runtime encoding: v16@0:8
- (void)dismissalTransitionWillBegin;
// Implementation 0xa71a8 | runtime encoding: v20@0:8B16
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
// Implementation 0xa7220 | runtime encoding: @16@0:8
- (id)dimmingView;
// Implementation 0xa7230 | runtime encoding: v24@0:8@16
- (void)setDimmingView:(id)arg1;
// Implementation 0xa723c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMaxAlertButton : UIButton
{
@private
    UIView * _separatorView; // offset 8, size 8; encoding @"UIView"
    id /* block; signature not encoded here */ _handler; // offset 16, size 8; encoding @?
}
// Property handler | attributes: T@?,R,C,N,V_handler
// Implementation 0xa7250 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0xa75bc | runtime encoding: v24@0:8@?16
- (void)actionHandler:(id /* block; signature not encoded here */)arg1;
// Implementation 0xa7668 | runtime encoding: v16@0:8
- (void)didPressButton;
// Implementation 0xa76e4 | runtime encoding: v24@0:8@16
- (void)traitCollectionDidChange:(id)arg1;
// Implementation 0xa78b4 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)handler;
// Implementation 0xa78c4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMaxAlertAction : NSObject
{
@private
    NSString * _title; // offset 8, size 8; encoding @"NSString"
    id /* block; signature not encoded here */ _actionHandler; // offset 16, size 8; encoding @?
}
// Property title | attributes: T@"NSString",R,N,V_title
// Property actionHandler | attributes: T@?,R,C,N,V_actionHandler
// Implementation 0xa7904 | runtime encoding: @32@0:8@16@?24
- (id)initWithTitle:(id)arg1 action:(id /* block; signature not encoded here */)arg2;
// Implementation 0xa79ac | runtime encoding: @16@0:8
- (id)title;
// Implementation 0xa79b4 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)actionHandler;
// Implementation 0xa79bc | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMaxAlertTextView : UITextView
// Implementation 0xa79ec | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xa7a78 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMaxAlertViewController : UIViewController
{
@private
    double _cornerRadius; // offset 8, size 8; encoding d
    UIView * _containerView; // offset 16, size 8; encoding @"UIView"
    UILabel * _titleLabel; // offset 24, size 8; encoding @"UILabel"
    NSString * _tweakName; // offset 32, size 8; encoding @"NSString"
    NSString * _message; // offset 40, size 8; encoding @"NSString"
    DLMaxAlertTextView * _bodyText; // offset 48, size 8; encoding @"DLMaxAlertTextView"
    NSArray * _actions; // offset 56, size 8; encoding @"NSArray"
    NSLayoutConstraint * _containerViewHeightConstraint; // offset 64, size 8; encoding @"NSLayoutConstraint"
    NSLayoutConstraint * _containerViewWidthConstraint; // offset 72, size 8; encoding @"NSLayoutConstraint"
}
// Property containerView | attributes: T@"UIView",&,V_containerView
// Property titleLabel | attributes: T@"UILabel",&,V_titleLabel
// Property tweakName | attributes: T@"NSString",&,V_tweakName
// Property message | attributes: T@"NSString",&,V_message
// Property bodyText | attributes: T@"DLMaxAlertTextView",&,V_bodyText
// Property actions | attributes: T@"NSArray",&,V_actions
// Property containerViewHeightConstraint | attributes: T@"NSLayoutConstraint",&,V_containerViewHeightConstraint
// Property containerViewWidthConstraint | attributes: T@"NSLayoutConstraint",&,V_containerViewWidthConstraint
// Property cornerRadius | attributes: Td,V_cornerRadius
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xa7b18 | runtime encoding: v16@0:8
- (void)viewWillLayoutSubviews;
// Implementation 0xa7e14 | runtime encoding: @40@0:8@16@24@32
- (id)initWithTweakName:(id)arg1 message:(id)arg2 actions:(id)arg3;
// Implementation 0xa7f18 | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xa92a4 | runtime encoding: @40@0:8@16@24@32
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
// Implementation 0xa931c | runtime encoding: v16@0:8
- (void)dismissAlertController;
// Implementation 0xa9330 | runtime encoding: v24@0:8@16
- (void)traitCollectionDidChange:(id)arg1;
// Implementation 0xa95b4 | runtime encoding: v16@0:8
- (void)applyCustomFontForBodyText;
// Implementation 0xa9af8 | runtime encoding: d16@0:8
- (double)cornerRadius;
// Implementation 0xa9b0c | runtime encoding: v24@0:8d16
- (void)setCornerRadius:(double)arg1;
// Implementation 0xa9b20 | runtime encoding: @16@0:8
- (id)containerView;
// Implementation 0xa9b30 | runtime encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// Implementation 0xa9b3c | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xa9b4c | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xa9b58 | runtime encoding: @16@0:8
- (id)tweakName;
// Implementation 0xa9b68 | runtime encoding: v24@0:8@16
- (void)setTweakName:(id)arg1;
// Implementation 0xa9b74 | runtime encoding: @16@0:8
- (id)message;
// Implementation 0xa9b84 | runtime encoding: v24@0:8@16
- (void)setMessage:(id)arg1;
// Implementation 0xa9b90 | runtime encoding: @16@0:8
- (id)bodyText;
// Implementation 0xa9ba0 | runtime encoding: v24@0:8@16
- (void)setBodyText:(id)arg1;
// Implementation 0xa9bac | runtime encoding: @16@0:8
- (id)actions;
// Implementation 0xa9bbc | runtime encoding: v24@0:8@16
- (void)setActions:(id)arg1;
// Implementation 0xa9bc8 | runtime encoding: @16@0:8
- (id)containerViewHeightConstraint;
// Implementation 0xa9bd8 | runtime encoding: v24@0:8@16
- (void)setContainerViewHeightConstraint:(id)arg1;
// Implementation 0xa9be4 | runtime encoding: @16@0:8
- (id)containerViewWidthConstraint;
// Implementation 0xa9bf4 | runtime encoding: v24@0:8@16
- (void)setContainerViewWidthConstraint:(id)arg1;
// Implementation 0xa9c00 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMentionViewCell : UITableViewCell
{
@private
    id /* block; signature not encoded here */ _avatarImageTapAction; // offset 8, size 8; encoding @?
    UIImageView * _avatarImageView; // offset 16, size 8; encoding @"UIImageView"
    UILabel * _usernameLabel; // offset 24, size 8; encoding @"UILabel"
    UILabel * _fullnameLabel; // offset 32, size 8; encoding @"UILabel"
}
// Property avatarImageTapAction | attributes: T@?,C,N,V_avatarImageTapAction
// Property avatarImageView | attributes: T@"UIImageView",&,N,V_avatarImageView
// Property usernameLabel | attributes: T@"UILabel",&,N,V_usernameLabel
// Property fullnameLabel | attributes: T@"UILabel",&,N,V_fullnameLabel
// Implementation 0xa9cb8 | runtime encoding: @32@0:8q16@24
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
// Implementation 0xa9d44 | runtime encoding: v16@0:8
- (void)prepareForReuse;
// Implementation 0xa9db8 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xaa238 | runtime encoding: v16@0:8
- (void)setupViews;
// Implementation 0xab180 | runtime encoding: v24@0:8@16
- (void)avatarImageTapped:(id)arg1;
// Implementation 0xab214 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)avatarImageTapAction;
// Implementation 0xab224 | runtime encoding: v24@0:8@?16
- (void)setAvatarImageTapAction:(id /* block; signature not encoded here */)arg1;
// Implementation 0xab230 | runtime encoding: @16@0:8
- (id)avatarImageView;
// Implementation 0xab240 | runtime encoding: v24@0:8@16
- (void)setAvatarImageView:(id)arg1;
// Implementation 0xab254 | runtime encoding: @16@0:8
- (id)usernameLabel;
// Implementation 0xab264 | runtime encoding: v24@0:8@16
- (void)setUsernameLabel:(id)arg1;
// Implementation 0xab278 | runtime encoding: @16@0:8
- (id)fullnameLabel;
// Implementation 0xab288 | runtime encoding: v24@0:8@16
- (void)setFullnameLabel:(id)arg1;
// Implementation 0xab29c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMentionsViewController : DLPopupViewController
{
@private
    UITableView * _tableView; // offset 24, size 8; encoding @"UITableView"
    NSArray * _users; // offset 32, size 8; encoding @"NSArray"
    UILabel * _titleLabel; // offset 40, size 8; encoding @"UILabel"
    UILabel * _emptyLabel; // offset 48, size 8; encoding @"UILabel"
}
// Property tableView | attributes: T@"UITableView",&,N,V_tableView
// Property users | attributes: T@"NSArray",&,N,V_users
// Property titleLabel | attributes: T@"UILabel",&,N,V_titleLabel
// Property emptyLabel | attributes: T@"UILabel",&,N,V_emptyLabel
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xab304 | runtime encoding: @24@0:8@16
- (id)initWithUsers:(id)arg1;
// Implementation 0xab388 | runtime encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// Implementation 0xab56c | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xac198 | runtime encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// Implementation 0xac2c4 | runtime encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// Implementation 0xac2d0 | runtime encoding: q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg1;
// Implementation 0xac2d8 | runtime encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// Implementation 0xac324 | runtime encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// Implementation 0xac908 | runtime encoding: @16@0:8
- (id)tableView;
// Implementation 0xac918 | runtime encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// Implementation 0xac92c | runtime encoding: @16@0:8
- (id)users;
// Implementation 0xac93c | runtime encoding: v24@0:8@16
- (void)setUsers:(id)arg1;
// Implementation 0xac950 | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xac960 | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xac974 | runtime encoding: @16@0:8
- (id)emptyLabel;
// Implementation 0xac984 | runtime encoding: v24@0:8@16
- (void)setEmptyLabel:(id)arg1;
// Implementation 0xac998 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLUser : NSObject
{
@private
    NSString * _pk; // offset 8, size 8; encoding @"NSString"
    NSString * _fullname; // offset 16, size 8; encoding @"NSString"
    NSString * _username; // offset 24, size 8; encoding @"NSString"
    NSString * _avatarURL; // offset 32, size 8; encoding @"NSString"
    UIImage * _avatarImage; // offset 40, size 8; encoding @"UIImage"
}
// Property pk | attributes: T@"NSString",&,N,V_pk
// Property fullname | attributes: T@"NSString",&,N,V_fullname
// Property username | attributes: T@"NSString",&,N,V_username
// Property avatarURL | attributes: T@"NSString",&,N,V_avatarURL
// Property avatarImage | attributes: T@"UIImage",&,N,V_avatarImage
// Implementation 0xaca00 | runtime encoding: v32@0:8@16@?24
- (void)downloadAvatarFromUrl:(id)arg1 completion:(id /* block; signature not encoded here */)arg2;
// Implementation 0xacd10 | runtime encoding: @16@0:8
- (id)pk;
// Implementation 0xacd18 | runtime encoding: v24@0:8@16
- (void)setPk:(id)arg1;
// Implementation 0xacd24 | runtime encoding: @16@0:8
- (id)fullname;
// Implementation 0xacd2c | runtime encoding: v24@0:8@16
- (void)setFullname:(id)arg1;
// Implementation 0xacd38 | runtime encoding: @16@0:8
- (id)username;
// Implementation 0xacd40 | runtime encoding: v24@0:8@16
- (void)setUsername:(id)arg1;
// Implementation 0xacd4c | runtime encoding: @16@0:8
- (id)avatarURL;
// Implementation 0xacd54 | runtime encoding: v24@0:8@16
- (void)setAvatarURL:(id)arg1;
// Implementation 0xacd60 | runtime encoding: @16@0:8
- (id)avatarImage;
// Implementation 0xacd68 | runtime encoding: v24@0:8@16
- (void)setAvatarImage:(id)arg1;
// Implementation 0xacd74 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLVisualEffectView : UIVisualEffectView
// Implementation 0xad380 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLPopupViewController : UIViewController
{
@private
    UIView * backgroundView; // offset 8, size 8; encoding @"UIView"
    DLVisualEffectView * blurView; // offset 16, size 8; encoding @"DLVisualEffectView"
    UIView * _popupView; // offset 24, size 8; encoding @"UIView"
    NSLayoutConstraint * _blurWidthLayoutConstraint; // offset 32, size 8; encoding @"NSLayoutConstraint"
    double _customHeight; // offset 40, size 8; encoding d
    struct CGPoint _initialTouchPoint; // offset 48, size 16; encoding {CGPoint="x"d"y"d}
}
// Property blurWidthLayoutConstraint | attributes: T@"NSLayoutConstraint",&,N,V_blurWidthLayoutConstraint
// Property customHeight | attributes: Td,N,V_customHeight
// Property popupView | attributes: T@"UIView",&,N,V_popupView
// Property initialTouchPoint | attributes: T{CGPoint=dd},N,V_initialTouchPoint
// Implementation 0xacdc8 | runtime encoding: v16@0:8
- (void)showController;
// Implementation 0xacf14 | runtime encoding: v24@0:8@?16
- (void)hideController:(id /* block; signature not encoded here */)arg1;
// Implementation 0xad0a0 | runtime encoding: v24@0:8@16
- (void)panGestureRecognizerHandler:(id)arg1;
// Implementation 0xad370 | runtime encoding: Q16@0:8
- (unsigned long long)supportedInterfaceOrientations;
// Implementation 0xad378 | runtime encoding: q16@0:8
- (long long)preferredInterfaceOrientationForPresentation;
// Implementation 0xad514 | runtime encoding: @24@0:8d16
- (id)initWithCustomHeight:(double)arg1;
// Implementation 0xad5a0 | runtime encoding: d16@0:8
- (double)popupViewHeight;
// Implementation 0xad634 | runtime encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// Implementation 0xad8a4 | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xad914 | runtime encoding: v20@0:8B16
- (void)viewWillAppear:(BOOL)arg1;
// Implementation 0xad964 | runtime encoding: v20@0:8B16
- (void)viewDidAppear:(BOOL)arg1;
// Implementation 0xad9b0 | runtime encoding: v16@0:8
- (void)setupBackgroundView;
// Implementation 0xadba0 | runtime encoding: v16@0:8
- (void)setupBlurView;
// Implementation 0xadfcc | runtime encoding: v16@0:8
- (void)setupPopupView;
// Implementation 0xae428 | runtime encoding: v16@0:8
- (void)dismissPopup;
// Implementation 0xae4f8 | runtime encoding: @16@0:8
- (id)popupView;
// Implementation 0xae508 | runtime encoding: v24@0:8@16
- (void)setPopupView:(id)arg1;
// Implementation 0xae51c | runtime encoding: {CGPoint=dd}16@0:8
- (struct CGPoint)initialTouchPoint;
// Implementation 0xae530 | runtime encoding: v32@0:8{CGPoint=dd}16
- (void)setInitialTouchPoint:(struct CGPoint)arg1;
// Implementation 0xae544 | runtime encoding: @16@0:8
- (id)blurWidthLayoutConstraint;
// Implementation 0xae554 | runtime encoding: v24@0:8@16
- (void)setBlurWidthLayoutConstraint:(id)arg1;
// Implementation 0xae568 | runtime encoding: d16@0:8
- (double)customHeight;
// Implementation 0xae578 | runtime encoding: v24@0:8d16
- (void)setCustomHeight:(double)arg1;
// Implementation 0xae588 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPCell : UITableViewCell
{
@private
    int _height; // offset 8, size 4; encoding i
    UIColor * _tintUIColor; // offset 16, size 8; encoding @"UIColor"
    FRPSettings * _setting; // offset 24, size 8; encoding @"FRPSettings"
    NSString * _title; // offset 32, size 8; encoding @"NSString"
    NSString * _postNotification; // offset 40, size 8; encoding @"NSString"
    id /* block; signature not encoded here */ _valueChanged; // offset 48, size 8; encoding @?
}
// Property tintUIColor | attributes: T@"UIColor",&,N,V_tintUIColor
// Property setting | attributes: T@"FRPSettings",&,N,V_setting
// Property title | attributes: T@"NSString",&,N,V_title
// Property postNotification | attributes: T@"NSString",&,N,V_postNotification
// Property valueChanged | attributes: T@?,C,N,V_valueChanged
// Property height | attributes: Ti,N,V_height
// Implementation 0xae664 | runtime encoding: @32@0:8@16@24
- (id)initWithTitle:(id)arg1 setting:(id)arg2;
// Implementation 0xae784 | runtime encoding: v24@0:8@16
- (void)didSelectFromTable:(id)arg1;
// Implementation 0xae788 | runtime encoding: @16@0:8
- (id)tintUIColor;
// Implementation 0xae798 | runtime encoding: v24@0:8@16
- (void)setTintUIColor:(id)arg1;
// Implementation 0xae7ac | runtime encoding: @16@0:8
- (id)setting;
// Implementation 0xae7bc | runtime encoding: v24@0:8@16
- (void)setSetting:(id)arg1;
// Implementation 0xae7d0 | runtime encoding: @16@0:8
- (id)title;
// Implementation 0xae7e0 | runtime encoding: v24@0:8@16
- (void)setTitle:(id)arg1;
// Implementation 0xae7f4 | runtime encoding: @16@0:8
- (id)postNotification;
// Implementation 0xae804 | runtime encoding: v24@0:8@16
- (void)setPostNotification:(id)arg1;
// Implementation 0xae818 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)valueChanged;
// Implementation 0xae828 | runtime encoding: v24@0:8@?16
- (void)setValueChanged:(id /* block; signature not encoded here */)arg1;
// Implementation 0xae834 | runtime encoding: i16@0:8
- (int)height;
// Implementation 0xae844 | runtime encoding: v20@0:8i16
- (void)setHeight:(int)arg1;
// Implementation 0xae854 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xae5f0 | runtime encoding: @32@0:8@16@24
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPDeveloperCell : FRPCell
{
@private
    NSString * _url; // offset 8, size 8; encoding @"NSString"
    UIImage * _image; // offset 16, size 8; encoding @"UIImage"
}
// Property url | attributes: T@"NSString",&,N,V_url
// Property image | attributes: T@"UIImage",&,N,V_image
// Implementation 0xae998 | runtime encoding: @48@0:8@16@24@32@40
- (id)cellWithTitle:(id)arg1 detail:(id)arg2 image:(id)arg3 url:(id)arg4;
// Implementation 0xaec3c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xaecb0 | runtime encoding: v24@0:8@16
- (void)didSelectFromTable:(id)arg1;
// Implementation 0xaee08 | runtime encoding: @16@0:8
- (id)url;
// Implementation 0xaee18 | runtime encoding: v24@0:8@16
- (void)setUrl:(id)arg1;
// Implementation 0xaee2c | runtime encoding: @16@0:8
- (id)image;
// Implementation 0xaee3c | runtime encoding: v24@0:8@16
- (void)setImage:(id)arg1;
// Implementation 0xaee50 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xae8d0 | runtime encoding: @48@0:8@16@24@32@40
+ (id)cellWithTitle:(id)arg1 detail:(id)arg2 image:(id)arg3 url:(id)arg4;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPLinkCell : FRPCell
// Implementation 0xaef18 | runtime encoding: @32@0:8@16@?24
- (id)cellWithTitle:(id)arg1 selectedBlock:(id /* block; signature not encoded here */)arg2;
// Implementation 0xaefb4 | runtime encoding: v24@0:8@16
- (void)didSelectFromTable:(id)arg1;
// Implementation 0xaf0c4 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xaee90 | runtime encoding: @32@0:8@16@?24
+ (id)cellWithTitle:(id)arg1 selectedBlock:(id /* block; signature not encoded here */)arg2;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPListCell : FRPCell
{
@private
    BOOL _popView; // offset 8, size 1; encoding B
    NSArray * _items; // offset 16, size 8; encoding @"NSArray"
    NSArray * _values; // offset 24, size 8; encoding @"NSArray"
}
// Property items | attributes: T@"NSArray",&,N,V_items
// Property values | attributes: T@"NSArray",&,N,V_values
// Property popView | attributes: TB,N,V_popView
// Implementation 0xaf210 | runtime encoding: @68@0:8@16@24@32@40B48@52@?60
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 items:(id)arg3 value:(id)arg4 popViewOnSelect:(BOOL)arg5 postNotification:(id)arg6 changedBlock:(id /* block; signature not encoded here */)arg7;
// Implementation 0xaf5b0 | runtime encoding: v24@0:8@16
- (void)didSelectFromTable:(id)arg1;
// Implementation 0xafb20 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xafb54 | runtime encoding: @16@0:8
- (id)items;
// Implementation 0xafb64 | runtime encoding: v24@0:8@16
- (void)setItems:(id)arg1;
// Implementation 0xafb78 | runtime encoding: @16@0:8
- (id)values;
// Implementation 0xafb88 | runtime encoding: v24@0:8@16
- (void)setValues:(id)arg1;
// Implementation 0xafb9c | runtime encoding: B16@0:8
- (BOOL)popView;
// Implementation 0xafbac | runtime encoding: v20@0:8B16
- (void)setPopView:(BOOL)arg1;
// Implementation 0xafbbc | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xaf0f8 | runtime encoding: @68@0:8@16@24@32@40B48@52@?60
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 items:(id)arg3 value:(id)arg4 popViewOnSelect:(BOOL)arg5 postNotification:(id)arg6 changedBlock:(id /* block; signature not encoded here */)arg7;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSection : UITableViewCell
{
@private
    NSString * _headerTitle; // offset 8, size 8; encoding @"NSString"
    NSString * _footerTitle; // offset 16, size 8; encoding @"NSString"
    NSMutableArray * _cells; // offset 24, size 8; encoding @"NSMutableArray"
    UIColor * _tintUIColor; // offset 32, size 8; encoding @"UIColor"
}
// Property headerTitle | attributes: T@"NSString",&,N,V_headerTitle
// Property footerTitle | attributes: T@"NSString",&,N,V_footerTitle
// Property cells | attributes: T@"NSMutableArray",&,N,V_cells
// Property tintUIColor | attributes: T@"UIColor",&,N,V_tintUIColor
// Implementation 0xafc70 | runtime encoding: @32@0:8@16@24
- (id)initWithTitle:(id)arg1 footer:(id)arg2;
// Implementation 0xafd4c | runtime encoding: v24@0:8@16
- (void)addCell:(id)arg1;
// Implementation 0xafdb8 | runtime encoding: v24@0:8@16
- (void)removeCell:(id)arg1;
// Implementation 0xafe24 | runtime encoding: v24@0:8@16
- (void)addCells:(id)arg1;
// Implementation 0xafe90 | runtime encoding: @16@0:8
- (id)headerTitle;
// Implementation 0xafea0 | runtime encoding: v24@0:8@16
- (void)setHeaderTitle:(id)arg1;
// Implementation 0xafeb4 | runtime encoding: @16@0:8
- (id)footerTitle;
// Implementation 0xafec4 | runtime encoding: v24@0:8@16
- (void)setFooterTitle:(id)arg1;
// Implementation 0xafed8 | runtime encoding: @16@0:8
- (id)cells;
// Implementation 0xafee8 | runtime encoding: v24@0:8@16
- (void)setCells:(id)arg1;
// Implementation 0xafefc | runtime encoding: @16@0:8
- (id)tintUIColor;
// Implementation 0xaff0c | runtime encoding: v24@0:8@16
- (void)setTintUIColor:(id)arg1;
// Implementation 0xaff20 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xafbfc | runtime encoding: @32@0:8@16@24
+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSegmentCell : FRPCell
{
@private
    UISegmentedControl * _segment; // offset 8, size 8; encoding @"UISegmentedControl"
    NSArray * _values; // offset 16, size 8; encoding @"NSArray"
    NSArray * _displayedValues; // offset 24, size 8; encoding @"NSArray"
}
// Property segment | attributes: T@"UISegmentedControl",&,N,V_segment
// Property values | attributes: T@"NSArray",&,N,V_values
// Property displayedValues | attributes: T@"NSArray",&,N,V_displayedValues
// Implementation 0xb0270 | runtime encoding: @64@0:8@16@24@32@40@48@?56
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 values:(id)arg3 displayedValues:(id)arg4 postNotification:(id)arg5 changeBlock:(id /* block; signature not encoded here */)arg6;
// Implementation 0xb05a4 | runtime encoding: v24@0:8@16
- (void)segmentAction:(id)arg1;
// Implementation 0xb0728 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb07c0 | runtime encoding: @16@0:8
- (id)segment;
// Implementation 0xb07d0 | runtime encoding: v24@0:8@16
- (void)setSegment:(id)arg1;
// Implementation 0xb07e4 | runtime encoding: @16@0:8
- (id)values;
// Implementation 0xb07f4 | runtime encoding: v24@0:8@16
- (void)setValues:(id)arg1;
// Implementation 0xb0808 | runtime encoding: @16@0:8
- (id)displayedValues;
// Implementation 0xb0818 | runtime encoding: v24@0:8@16
- (void)setDisplayedValues:(id)arg1;
// Implementation 0xb082c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xaff88 | runtime encoding: @56@0:8@16@24@32@40@?48
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 items:(id)arg3 postNotification:(id)arg4 changeBlock:(id /* block; signature not encoded here */)arg5;
// Implementation 0xb0078 | runtime encoding: @64@0:8@16@24@32@40@48@?56
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 values:(id)arg3 displayedValues:(id)arg4 postNotification:(id)arg5 changeBlock:(id /* block; signature not encoded here */)arg6;
// Implementation 0xb0180 | runtime encoding: @56@0:8@16@24@32@40@?48
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 values:(id)arg3 postNotification:(id)arg4 changeBlock:(id /* block; signature not encoded here */)arg5;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLRadioSelectView : UIView
{
@private
    BOOL _checked; // offset 8, size 1; encoding B
    CALayer * _checkedDotLayer; // offset 16, size 8; encoding @"CALayer"
}
// Property checked | attributes: TB,N,V_checked
// Property checkedDotLayer | attributes: T@"CALayer",&,N,V_checkedDotLayer
// Implementation 0xb0880 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb0d70 | runtime encoding: B16@0:8
- (BOOL)checked;
// Implementation 0xb0d80 | runtime encoding: v20@0:8B16
- (void)setChecked:(BOOL)arg1;
// Implementation 0xb0d90 | runtime encoding: @16@0:8
- (id)checkedDotLayer;
// Implementation 0xb0da0 | runtime encoding: v24@0:8@16
- (void)setCheckedDotLayer:(id)arg1;
// Implementation 0xb0db4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSelectListTable : UITableViewController
{
@private
    NSArray * listItems; // offset 8, size 8; encoding @"NSArray"
    NSArray * listValues; // offset 16, size 8; encoding @"NSArray"
    NSString * currentValue; // offset 24, size 8; encoding @"NSString"
    NSString * pageTitle; // offset 32, size 8; encoding @"NSString"
    BOOL popView; // offset 40, size 1; encoding B
    id /* block; signature not encoded here */ _itemChanged; // offset 48, size 8; encoding @?
    UIColor * _tintUIColor; // offset 56, size 8; encoding @"UIColor"
}
// Property itemChanged | attributes: T@?,C,N,V_itemChanged
// Property tintUIColor | attributes: T@"UIColor",C,N,V_tintUIColor
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xb0dc8 | runtime encoding: v16@0:8
- (void)viewWillLayoutSubviews;
// Implementation 0xb0eb8 | runtime encoding: @68@0:8q16@24@32@40@48B56@?60
- (id)initWithStyle:(long long)arg1 title:(id)arg2 items:(id)arg3 values:(id)arg4 currentValue:(id)arg5 popViewOnSelect:(BOOL)arg6 changeBlock:(id /* block; signature not encoded here */)arg7;
// Implementation 0xb10a0 | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xb1294 | runtime encoding: q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg1;
// Implementation 0xb129c | runtime encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// Implementation 0xb12b4 | runtime encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// Implementation 0xb1588 | runtime encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// Implementation 0xb1594 | runtime encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// Implementation 0xb1790 | runtime encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// Implementation 0xb1a08 | runtime encoding: v16@0:8
- (void)didReceiveMemoryWarning;
// Implementation 0xb1a3c | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)itemChanged;
// Implementation 0xb1a4c | runtime encoding: v24@0:8@?16
- (void)setItemChanged:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb1a58 | runtime encoding: @16@0:8
- (id)tintUIColor;
// Implementation 0xb1a68 | runtime encoding: v24@0:8@16
- (void)setTintUIColor:(id)arg1;
// Implementation 0xb1a74 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSettings : NSObject
{
@private
    NSString * _key; // offset 8, size 8; encoding @"NSString"
    NSString * _fileSave; // offset 16, size 8; encoding @"NSString"
    id /* block; signature not encoded here */ _valueDidChangeBlock; // offset 24, size 8; encoding @?
}
// Property valueDidChangeBlock | attributes: T@?,C,N,V_valueDidChangeBlock
// Property key | attributes: T@"NSString",&,N,V_key
// Property value | attributes: T@,&,N
// Property fileSave | attributes: T@"NSString",&,N,V_fileSave
// Implementation 0xb1b78 | runtime encoding: @32@0:8@16@24
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2;
// Implementation 0xb1cd8 | runtime encoding: v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
// Implementation 0xb1d54 | runtime encoding: @16@0:8
- (id)value;
// Implementation 0xb1de8 | runtime encoding: v24@0:8@16
- (void)setValue:(id)arg1;
// Implementation 0xb1f2c | runtime encoding: v24@0:8@16
- (void)saveValue:(id)arg1;
// Implementation 0xb2050 | runtime encoding: @16@0:8
- (id)key;
// Implementation 0xb2058 | runtime encoding: v24@0:8@16
- (void)setKey:(id)arg1;
// Implementation 0xb2064 | runtime encoding: @16@0:8
- (id)fileSave;
// Implementation 0xb206c | runtime encoding: v24@0:8@16
- (void)setFileSave:(id)arg1;
// Implementation 0xb2078 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)valueDidChangeBlock;
// Implementation 0xb2080 | runtime encoding: v24@0:8@?16
- (void)setValueDidChangeBlock:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb2088 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb1b04 | runtime encoding: @32@0:8@16@24
+ (id)settingsWithKey:(id)arg1 defaultValue:(id)arg2;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSliderCell : FRPCell
{
@private
    float _min; // offset 8, size 4; encoding f
    float _max; // offset 12, size 4; encoding f
    UISlider * _sliderCell; // offset 16, size 8; encoding @"UISlider"
    UILabel * _lLabel; // offset 24, size 8; encoding @"UILabel"
    UILabel * _rLabel; // offset 32, size 8; encoding @"UILabel"
    UILabel * _cLabel; // offset 40, size 8; encoding @"UILabel"
    UILabel * _vLabel; // offset 48, size 8; encoding @"UILabel"
}
// Property sliderCell | attributes: T@"UISlider",&,N,V_sliderCell
// Property lLabel | attributes: T@"UILabel",&,N,V_lLabel
// Property rLabel | attributes: T@"UILabel",&,N,V_rLabel
// Property cLabel | attributes: T@"UILabel",&,N,V_cLabel
// Property vLabel | attributes: T@"UILabel",&,N,V_vLabel
// Property min | attributes: Tf,N,V_min
// Property max | attributes: Tf,N,V_max
// Implementation 0xb21a4 | runtime encoding: @56@0:8@16@24f32f36@40@?48
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 min:(float)arg3 max:(float)arg4 postNotification:(id)arg5 changeBlock:(id /* block; signature not encoded here */)arg6;
// Implementation 0xb2a6c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb2f24 | runtime encoding: v24@0:8@16
- (void)sliderChanged:(id)arg1;
// Implementation 0xb310c | runtime encoding: @16@0:8
- (id)sliderCell;
// Implementation 0xb311c | runtime encoding: v24@0:8@16
- (void)setSliderCell:(id)arg1;
// Implementation 0xb3130 | runtime encoding: @16@0:8
- (id)lLabel;
// Implementation 0xb3140 | runtime encoding: v24@0:8@16
- (void)setLLabel:(id)arg1;
// Implementation 0xb3154 | runtime encoding: @16@0:8
- (id)rLabel;
// Implementation 0xb3164 | runtime encoding: v24@0:8@16
- (void)setRLabel:(id)arg1;
// Implementation 0xb3178 | runtime encoding: @16@0:8
- (id)cLabel;
// Implementation 0xb3188 | runtime encoding: v24@0:8@16
- (void)setCLabel:(id)arg1;
// Implementation 0xb319c | runtime encoding: @16@0:8
- (id)vLabel;
// Implementation 0xb31ac | runtime encoding: v24@0:8@16
- (void)setVLabel:(id)arg1;
// Implementation 0xb31c0 | runtime encoding: f16@0:8
- (float)min;
// Implementation 0xb31d0 | runtime encoding: v20@0:8f16
- (void)setMin:(float)arg1;
// Implementation 0xb31e0 | runtime encoding: f16@0:8
- (float)max;
// Implementation 0xb31f0 | runtime encoding: v20@0:8f16
- (void)setMax:(float)arg1;
// Implementation 0xb3200 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb20c4 | runtime encoding: @56@0:8@16@24f32f36@40@?48
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 min:(float)arg3 max:(float)arg4 postNotification:(id)arg5 changeBlock:(id /* block; signature not encoded here */)arg6;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSwitchCell : FRPCell
{
@private
    UISwitch * _switchView; // offset 8, size 8; encoding @"UISwitch"
}
// Property switchView | attributes: T@"UISwitch",&,N,V_switchView
// Implementation 0xb3344 | runtime encoding: @48@0:8@16@24@32@?40
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 postNotification:(id)arg3 changeBlock:(id /* block; signature not encoded here */)arg4;
// Implementation 0xb35a8 | runtime encoding: v24@0:8@16
- (void)switchChanged:(id)arg1;
// Implementation 0xb3704 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb38c4 | runtime encoding: @16@0:8
- (id)switchView;
// Implementation 0xb38d4 | runtime encoding: v24@0:8@16
- (void)setSwitchView:(id)arg1;
// Implementation 0xb38e8 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb327c | runtime encoding: @48@0:8@16@24@32@?40
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 postNotification:(id)arg3 changeBlock:(id /* block; signature not encoded here */)arg4;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPTextFieldCell : FRPCell
{
@private
    UITextField * _textField; // offset 8, size 8; encoding @"UITextField"
}
// Property textField | attributes: T@"UITextField",&,N,V_textField
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xb39e8 | runtime encoding: @56@0:8@16@24@32@40@?48
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 placeholder:(id)arg3 postNotification:(id)arg4 changeBlock:(id /* block; signature not encoded here */)arg5;
// Implementation 0xb3d1c | runtime encoding: v24@0:8@16
- (void)textFieldChanged:(id)arg1;
// Implementation 0xb3e5c | runtime encoding: B24@0:8@16
- (BOOL)textFieldShouldReturn:(id)arg1;
// Implementation 0xb3e80 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb3f18 | runtime encoding: @16@0:8
- (id)textField;
// Implementation 0xb3f28 | runtime encoding: v24@0:8@16
- (void)setTextField:(id)arg1;
// Implementation 0xb3f3c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb38fc | runtime encoding: @56@0:8@16@24@32@40@?48
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 placeholder:(id)arg3 postNotification:(id)arg4 changeBlock:(id /* block; signature not encoded here */)arg5;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPValueCell : FRPCell
// Implementation 0xb3fd8 | runtime encoding: @32@0:8@16@24
- (id)cellWithTitle:(id)arg1 detail:(id)arg2;
// Implementation 0xb3f50 | runtime encoding: @32@0:8@16@24
+ (id)cellWithTitle:(id)arg1 detail:(id)arg2;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPViewCell : FRPCell
{
@private
    BOOL _hideSeperators; // offset 8, size 1; encoding B
    id /* block; signature not encoded here */ _layoutBlock; // offset 16, size 8; encoding @?
}
// Property layoutBlock | attributes: T@?,C,N,V_layoutBlock
// Property hideSeperators | attributes: TB,N,V_hideSeperators
// Implementation 0xb4138 | runtime encoding: @36@0:8i16@?20@?28
- (id)cellWithHeight:(int)arg1 initBlock:(id /* block; signature not encoded here */)arg2 layoutBlock:(id /* block; signature not encoded here */)arg3;
// Implementation 0xb423c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb42d8 | runtime encoding: v24@0:8@16
- (void)addSubview:(id)arg1;
// Implementation 0xb43b0 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)layoutBlock;
// Implementation 0xb43c0 | runtime encoding: v24@0:8@?16
- (void)setLayoutBlock:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb43cc | runtime encoding: B16@0:8
- (BOOL)hideSeperators;
// Implementation 0xb43dc | runtime encoding: v20@0:8B16
- (void)setHideSeperators:(BOOL)arg1;
// Implementation 0xb43ec | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb40a8 | runtime encoding: @36@0:8i16@?20@?28
+ (id)cellWithHeight:(int)arg1 initBlock:(id /* block; signature not encoded here */)arg2 layoutBlock:(id /* block; signature not encoded here */)arg3;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPViewSection : FRPSection
{
@private
    id /* block; signature not encoded here */ _cellBlock; // offset 8, size 8; encoding @?
}
// Property cellBlock | attributes: T@?,C,N,V_cellBlock
// Implementation 0xb447c | runtime encoding: @36@0:8i16@?20@?28
- (id)initWithHeight:(int)arg1 initBlock:(id /* block; signature not encoded here */)arg2 layoutBlock:(id /* block; signature not encoded here */)arg3;
// Implementation 0xb4628 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)cellBlock;
// Implementation 0xb4638 | runtime encoding: v24@0:8@?16
- (void)setCellBlock:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb4644 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb4400 | runtime encoding: @36@0:8i16@?20@?28
+ (id)sectionWithHeight:(int)arg1 initBlock:(id /* block; signature not encoded here */)arg2 layoutBlock:(id /* block; signature not encoded here */)arg3;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPreferences : UITableViewController
{
@private
    NSArray * _sections; // offset 8, size 8; encoding @"NSArray"
    NSString * _plistPath; // offset 16, size 8; encoding @"NSString"
    UIColor * _tintUIColor; // offset 24, size 8; encoding @"UIColor"
}
// Property tintUIColor | attributes: T@"UIColor",&,N,V_tintUIColor
// Property sections | attributes: T@"NSArray",&,N,V_sections
// Property plistPath | attributes: T@"NSString",&,N,V_plistPath
// Implementation 0xb4708 | runtime encoding: @24@0:8@16
- (id)initTableWithSections:(id)arg1;
// Implementation 0xb4780 | runtime encoding: v16@0:8
- (void)updateTintColors;
// Implementation 0xb4ad4 | runtime encoding: v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg1;
// Implementation 0xb4b08 | runtime encoding: v20@0:8B16
- (void)viewWillAppear:(BOOL)arg1;
// Implementation 0xb5138 | runtime encoding: @24@0:8@16
- (id)cellForIndexPath:(id)arg1;
// Implementation 0xb5230 | runtime encoding: q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg1;
// Implementation 0xb527c | runtime encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
// Implementation 0xb5300 | runtime encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// Implementation 0xb53a0 | runtime encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// Implementation 0xb541c | runtime encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// Implementation 0xb552c | runtime encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// Implementation 0xb559c | runtime encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
// Implementation 0xb5620 | runtime encoding: v40@0:8@16@24q32
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
// Implementation 0xb5830 | runtime encoding: v40@0:8@16@24q32
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
// Implementation 0xb5904 | runtime encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// Implementation 0xb5b20 | runtime encoding: v16@0:8
- (void)reloadTableView;
// Implementation 0xb5b60 | runtime encoding: @16@0:8
- (id)sections;
// Implementation 0xb5b70 | runtime encoding: v24@0:8@16
- (void)setSections:(id)arg1;
// Implementation 0xb5b84 | runtime encoding: @16@0:8
- (id)plistPath;
// Implementation 0xb5b94 | runtime encoding: v24@0:8@16
- (void)setPlistPath:(id)arg1;
// Implementation 0xb5ba8 | runtime encoding: @16@0:8
- (id)tintUIColor;
// Implementation 0xb5bb8 | runtime encoding: v24@0:8@16
- (void)setTintUIColor:(id)arg1;
// Implementation 0xb5bcc | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb4658 | runtime encoding: @40@0:8@16@24@32
+ (id)tableWithSections:(id)arg1 title:(id)arg2 tintColor:(id)arg3;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLSSProfileViewController : UIViewController
{
@private
    UIActivityIndicatorView * indecatorView; // offset 8, size 8; encoding @"UIActivityIndicatorView"
    NSURL * _HDProfilePicURL; // offset 16, size 8; encoding @"NSURL"
    NSString * _userPK; // offset 24, size 8; encoding @"NSString"
    UIImageView * _imageView; // offset 32, size 8; encoding @"UIImageView"
    UIScrollView * _scrollView; // offset 40, size 8; encoding @"UIScrollView"
    UILabel * _errorLabel; // offset 48, size 8; encoding @"UILabel"
}
// Property HDProfilePicURL | attributes: T@"NSURL",&,N,V_HDProfilePicURL
// Property userPK | attributes: T@"NSString",&,N,V_userPK
// Property imageView | attributes: T@"UIImageView",&,N,V_imageView
// Property scrollView | attributes: T@"UIScrollView",&,N,V_scrollView
// Property errorLabel | attributes: T@"UILabel",&,N,V_errorLabel
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xb5c20 | runtime encoding: @24@0:8@16
- (id)initWithProfilePicURL:(id)arg1;
// Implementation 0xb5c94 | runtime encoding: @24@0:8@16
- (id)initWithProfilePicByUserPK:(id)arg1;
// Implementation 0xb5d08 | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xb6730 | runtime encoding: v16@0:8
- (void)prepareImageToDownload;
// Implementation 0xb6de0 | runtime encoding: v24@0:8@?16
- (void)downloadImage:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb70b4 | runtime encoding: v16@0:8
- (void)dismissCV;
// Implementation 0xb70c8 | runtime encoding: v16@0:8
- (void)shareNow;
// Implementation 0xb71f0 | runtime encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// Implementation 0xb71fc | runtime encoding: @24@0:8@16
- (id)viewForZoomingInScrollView:(id)arg1;
// Implementation 0xb7208 | runtime encoding: v24@0:8@16
- (void)scrollViewDidZoom:(id)arg1;
// Implementation 0xb7214 | runtime encoding: v16@0:8
- (void)centerContentInScrollViewIfNeeded;
// Implementation 0xb7424 | runtime encoding: @16@0:8
- (id)HDProfilePicURL;
// Implementation 0xb7434 | runtime encoding: v24@0:8@16
- (void)setHDProfilePicURL:(id)arg1;
// Implementation 0xb7448 | runtime encoding: @16@0:8
- (id)userPK;
// Implementation 0xb7458 | runtime encoding: v24@0:8@16
- (void)setUserPK:(id)arg1;
// Implementation 0xb746c | runtime encoding: @16@0:8
- (id)imageView;
// Implementation 0xb747c | runtime encoding: v24@0:8@16
- (void)setImageView:(id)arg1;
// Implementation 0xb7490 | runtime encoding: @16@0:8
- (id)scrollView;
// Implementation 0xb74a0 | runtime encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// Implementation 0xb74b4 | runtime encoding: @16@0:8
- (id)errorLabel;
// Implementation 0xb74c4 | runtime encoding: v24@0:8@16
- (void)setErrorLabel:(id)arg1;
// Implementation 0xb74d8 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLCollectionViewFlowLayout : UICollectionViewFlowLayout
// Implementation 0xb7568 | runtime encoding: B16@0:8
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMultiMediaOptionCell : UITableViewCell
{
@private
    UIView * _containerView; // offset 8, size 8; encoding @"UIView"
    UILabel * _titleLabel; // offset 16, size 8; encoding @"UILabel"
}
// Property containerView | attributes: T@"UIView",&,N,V_containerView
// Property titleLabel | attributes: T@"UILabel",&,N,V_titleLabel
// Implementation 0xb7570 | runtime encoding: @32@0:8q16@24
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
// Implementation 0xb7604 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb77ec | runtime encoding: v16@0:8
- (void)setupViews;
// Implementation 0xb800c | runtime encoding: @16@0:8
- (id)containerView;
// Implementation 0xb801c | runtime encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// Implementation 0xb8030 | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xb8040 | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xb8054 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMultiMediaViewCell : UICollectionViewCell
{
@private
    UIView * _containerViewCell; // offset 8, size 8; encoding @"UIView"
    UIActivityIndicatorView * _indicatorView; // offset 16, size 8; encoding @"UIActivityIndicatorView"
    UIImageView * _mediaImageView; // offset 24, size 8; encoding @"UIImageView"
    UIImage * _mediaImage; // offset 32, size 8; encoding @"UIImage"
    UILabel * _durationLabel; // offset 40, size 8; encoding @"UILabel"
    UIView * _checkmarkView; // offset 48, size 8; encoding @"UIView"
    UIImageView * _checkmarkImageView; // offset 56, size 8; encoding @"UIImageView"
    UILabel * _errorLabel; // offset 64, size 8; encoding @"UILabel"
}
// Property containerViewCell | attributes: T@"UIView",&,N,V_containerViewCell
// Property indicatorView | attributes: T@"UIActivityIndicatorView",&,N,V_indicatorView
// Property mediaImageView | attributes: T@"UIImageView",&,N,V_mediaImageView
// Property mediaImage | attributes: T@"UIImage",&,N,V_mediaImage
// Property durationLabel | attributes: T@"UILabel",&,N,V_durationLabel
// Property checkmarkView | attributes: T@"UIView",&,N,V_checkmarkView
// Property checkmarkImageView | attributes: T@"UIImageView",&,N,V_checkmarkImageView
// Property errorLabel | attributes: T@"UILabel",&,N,V_errorLabel
// Implementation 0xb8094 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0xb813c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb82fc | runtime encoding: v16@0:8
- (void)prepareForReuse;
// Implementation 0xb8370 | runtime encoding: v16@0:8
- (void)setupContainerViewCell;
// Implementation 0xb86e8 | runtime encoding: v16@0:8
- (void)setupIndicatorView;
// Implementation 0xb8960 | runtime encoding: v16@0:8
- (void)setupMediaImageView;
// Implementation 0xb8c34 | runtime encoding: v16@0:8
- (void)setupErrorLabel;
// Implementation 0xb8f68 | runtime encoding: v16@0:8
- (void)setupDurationLabel;
// Implementation 0xb92a4 | runtime encoding: v16@0:8
- (void)setupCheckmarkView;
// Implementation 0xb9824 | runtime encoding: @16@0:8
- (id)containerViewCell;
// Implementation 0xb9834 | runtime encoding: v24@0:8@16
- (void)setContainerViewCell:(id)arg1;
// Implementation 0xb9848 | runtime encoding: @16@0:8
- (id)indicatorView;
// Implementation 0xb9858 | runtime encoding: v24@0:8@16
- (void)setIndicatorView:(id)arg1;
// Implementation 0xb986c | runtime encoding: @16@0:8
- (id)mediaImageView;
// Implementation 0xb987c | runtime encoding: v24@0:8@16
- (void)setMediaImageView:(id)arg1;
// Implementation 0xb9890 | runtime encoding: @16@0:8
- (id)mediaImage;
// Implementation 0xb98a0 | runtime encoding: v24@0:8@16
- (void)setMediaImage:(id)arg1;
// Implementation 0xb98b4 | runtime encoding: @16@0:8
- (id)durationLabel;
// Implementation 0xb98c4 | runtime encoding: v24@0:8@16
- (void)setDurationLabel:(id)arg1;
// Implementation 0xb98d8 | runtime encoding: @16@0:8
- (id)checkmarkView;
// Implementation 0xb98e8 | runtime encoding: v24@0:8@16
- (void)setCheckmarkView:(id)arg1;
// Implementation 0xb98fc | runtime encoding: @16@0:8
- (id)checkmarkImageView;
// Implementation 0xb990c | runtime encoding: v24@0:8@16
- (void)setCheckmarkImageView:(id)arg1;
// Implementation 0xb9920 | runtime encoding: @16@0:8
- (id)errorLabel;
// Implementation 0xb9930 | runtime encoding: v24@0:8@16
- (void)setErrorLabel:(id)arg1;
// Implementation 0xb9944 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end

// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMultiMediaViewController : DLPopupViewController
{
@private
    NSMutableArray * _posts; // offset 24, size 8; encoding @"NSMutableArray"
    UIView * _containerMediaCollectionView; // offset 32, size 8; encoding @"UIView"
    UICollectionView * _mediaCollectionView; // offset 40, size 8; encoding @"UICollectionView"
    UILabel * _titleLabel; // offset 48, size 8; encoding @"UILabel"
    NSMutableArray * _allSelectedMedia; // offset 56, size 8; encoding @"NSMutableArray"
    UITableView * _optionTableView; // offset 64, size 8; encoding @"UITableView"
    struct CGSize _collectionCellSize; // offset 72, size 16; encoding {CGSize="width"d"height"d}
}
// Property containerMediaCollectionView | attributes: T@"UIView",&,N,V_containerMediaCollectionView
// Property mediaCollectionView | attributes: T@"UICollectionView",&,N,V_mediaCollectionView
// Property titleLabel | attributes: T@"UILabel",&,N,V_titleLabel
// Property allSelectedMedia | attributes: T@"NSMutableArray",&,N,V_allSelectedMedia
// Property collectionCellSize | attributes: T{CGSize=dd},N,V_collectionCellSize
// Property optionTableView | attributes: T@"UITableView",&,N,V_optionTableView
// Property posts | attributes: T@"NSMutableArray",&,N,V_posts
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xb99fc | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xb9d6c | runtime encoding: v16@0:8
- (void)setupMediaCollectionView;
// Implementation 0xbab0c | runtime encoding: v32@0:8{CGSize=dd}16
- (void)updateCollectionViewForSize:(struct CGSize)arg1;
// Implementation 0xbaba0 | runtime encoding: q32@0:8@16q24
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
// Implementation 0xbabec | runtime encoding: @32@0:8@16@24
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
// Implementation 0xbb32c | runtime encoding: {CGSize=dd}40@0:8@16@24@32
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
// Implementation 0xbb338 | runtime encoding: v32@0:8@16@24
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
// Implementation 0xbb71c | runtime encoding: v16@0:8
- (void)setupOptionTableView;
// Implementation 0xbbd68 | runtime encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// Implementation 0xbbd70 | runtime encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// Implementation 0xbc054 | runtime encoding: v40@0:8@16@24@32
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
// Implementation 0xbc0f0 | runtime encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// Implementation 0xbc2b8 | runtime encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// Implementation 0xbc2c4 | runtime encoding: v16@0:8
- (void)didPressSelectAllMedia;
// Implementation 0xbc5b0 | runtime encoding: v16@0:8
- (void)didPressUnselectAllMedia;
// Implementation 0xbc7b8 | runtime encoding: v16@0:8
- (void)didPressDownloadMedia;
// Implementation 0xbce7c | runtime encoding: @16@0:8
- (id)posts;
// Implementation 0xbce8c | runtime encoding: v24@0:8@16
- (void)setPosts:(id)arg1;
// Implementation 0xbcea0 | runtime encoding: @16@0:8
- (id)containerMediaCollectionView;
// Implementation 0xbceb0 | runtime encoding: v24@0:8@16
- (void)setContainerMediaCollectionView:(id)arg1;
// Implementation 0xbcec4 | runtime encoding: @16@0:8
- (id)mediaCollectionView;
// Implementation 0xbced4 | runtime encoding: v24@0:8@16
- (void)setMediaCollectionView:(id)arg1;
// Implementation 0xbcee8 | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xbcef8 | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xbcf0c | runtime encoding: @16@0:8
- (id)allSelectedMedia;
// Implementation 0xbcf1c | runtime encoding: v24@0:8@16
- (void)setAllSelectedMedia:(id)arg1;
// Implementation 0xbcf30 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)collectionCellSize;
// Implementation 0xbcf44 | runtime encoding: v32@0:8{CGSize=dd}16
- (void)setCollectionCellSize:(struct CGSize)arg1;
// Implementation 0xbcf58 | runtime encoding: @16@0:8
- (id)optionTableView;
// Implementation 0xbcf68 | runtime encoding: v24@0:8@16
- (void)setOptionTableView:(id)arg1;
// Implementation 0xbcf7c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
