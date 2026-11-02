/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLPopupViewController showController] | encoding v16@0:8 */
/* Address: 000acdc8 | Name: instance_DLPopupViewController__showController | Body bytes: 196 */

/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__showController(ID param_1,SEL param_2)

{
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  UIView::setAnimationsEnabled_((ID)&_OBJC_CLASS___UIView,"setAnimationsEnabled:",1);
  local_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_000ace8c;
  puStack_40 = &DAT_000e9798;
  local_38 = param_1;
  UIView::
  animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
            ((ID)&_OBJC_CLASS___UIView,
             "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:"
             ,0x3fe19999a0000000,0x3fa99999a0000000,0x3feb333340000000,0x3f847ae147ae147b,0x30000,
             &local_58,0);
  UIView::setAnimationsEnabled_((ID)&_OBJC_CLASS___UIView,"setAnimationsEnabled:",0);
  return;
}


/* -[DLPopupViewController hideController:] | encoding v24@0:8@?16 */
/* Address: 000acf14 | Name: instance_DLPopupViewController__hideController_ | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLPopupViewController::instance_DLPopupViewController__hideController_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  undefined *puStack_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_000acff4;
  puStack_40 = &DAT_000e9798;
  local_80 = PTR___NSConcreteStackBlock_000e80d8;
  local_78 = 0xc2000000;
  local_70 = FUN_000ad094;
  puStack_68 = &DAT_000e9bd8;
  local_60 = param_3;
  local_38 = param_1;
  UIView::
  animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
            ((ID)&_OBJC_CLASS___UIView,
             "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:"
             ,0x3fe19999a0000000,0x3fa99999a0000000,0x3feb333340000000,0x3f947ae147ae147b,0x30000,
             &puStack_58,&local_80);
  return;
}


/* -[DLPopupViewController panGestureRecognizerHandler:] | encoding v24@0:8@16 */
/* Address: 000ad0a0 | Name: instance_DLPopupViewController__panGestureRecognizerHandler_ | Body bytes: 636 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLPopupViewController::instance_DLPopupViewController__panGestureRecognizerHandler_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  double extraout_d0;
  double extraout_d0_00;
  double in_d1;
  double dVar3;
  double in_d3;
  CGPoint CVar4;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  ID local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(param_3,"locationInView:",IVar1);
  dVar3 = in_d1;
  IVar1 = _objc_msgSend(param_3,"state");
  if (IVar1 == 1) {
    CVar4.field1_0x8 = in_d1;
    CVar4.field0_0x0 = extraout_d0;
    instance_DLPopupViewController__setInitialTouchPoint_(param_1,"setInitialTouchPoint:",CVar4);
  }
  else {
    IVar1 = _objc_msgSend(param_3,"state");
    if (IVar1 == 2) {
      lVar2 = (long)blurView;
      _objc_msgSend(*(ID *)(param_1 + lVar2),"frame");
      IVar1 = _objc_msgSend(param_1,"view");
      _objc_msgSend(IVar1,"safeAreaInsets");
      if (0.0 <= dVar3 - extraout_d0_00) {
        CVar4 = instance_DLPopupViewController__initialTouchPoint(param_1,"initialTouchPoint");
        in_d1 = in_d1 - CVar4.field1_0x8;
        dVar3 = 0.4;
        if (0.0 <= in_d1) {
          dVar3 = 1.0;
        }
        _CGAffineTransformMakeTranslation(&local_70,0,in_d1 * dVar3);
        uStack_98 = uStack_68;
        local_a0 = local_70;
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        uStack_78 = uStack_48;
        local_80 = local_50;
        _objc_msgSend(*(ID *)(param_1 + lVar2),"setTransform:",&local_a0);
      }
    }
    else {
      IVar1 = _objc_msgSend(param_3,"state");
      if ((IVar1 == 3) || (IVar1 = _objc_msgSend(param_3,"state"), IVar1 == 4)) {
        CVar4 = instance_DLPopupViewController__initialTouchPoint(param_1,"initialTouchPoint");
        IVar1 = _objc_msgSend(*(ID *)(param_1 + (long)blurView),"contentView",CVar4.field0_0x0);
        _objc_msgSend(IVar1,"frame");
        if (in_d1 - CVar4.field1_0x8 <= in_d3 / 3.0) {
          local_c8 = PTR___NSConcreteStackBlock_000e80d8;
          local_c0 = 0xc2000000;
          local_b8 = FUN_000ad31c;
          puStack_b0 = &DAT_000e9798;
          local_a8 = param_1;
          UIView::animateWithDuration_animations_
                    ((ID)&_OBJC_CLASS___UIView,"animateWithDuration:animations:",0x3fd3333333333333,
                     &local_c8);
        }
        else {
          instance_DLPopupViewController__dismissPopup(param_1,"dismissPopup");
        }
      }
    }
  }
  return;
}


/* -[DLPopupViewController supportedInterfaceOrientations] | encoding Q16@0:8 */
/* Address: 000ad370 | Name: instance_DLPopupViewController__supportedInterfaceOrientations | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long
DLPopupViewController::instance_DLPopupViewController__supportedInterfaceOrientations
          (ID param_1,SEL param_2)

{
  return 2;
}


/* -[DLPopupViewController preferredInterfaceOrientationForPresentation] | encoding q16@0:8 */
/* Address: 000ad378 | Name: instance_DLPopupViewController__preferredInterfaceOrientationForPresentation | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

long_long DLPopupViewController::
          instance_DLPopupViewController__preferredInterfaceOrientationForPresentation
                    (ID param_1,SEL param_2)

{
  return 1;
}


/* -[DLPopupViewController initWithCustomHeight:] | encoding @24@0:8d16 */
/* Address: 000ad514 | Name: instance_DLPopupViewController__initWithCustomHeight_ | Body bytes: 140 */

/* Function Stack Size: 0x18 bytes */

ID DLPopupViewController::instance_DLPopupViewController__initWithCustomHeight_
             (ID param_1,SEL param_2,double param_3)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::DLPopupViewController;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    *(double *)(self + (long)_customHeight) = param_3;
    _objc_msgSend(self,"setModalPresentationStyle:",5);
    UIView::setAnimationsEnabled_((ID)&_OBJC_CLASS___UIView,"setAnimationsEnabled:",0);
  }
  return self;
}


/* -[DLPopupViewController popupViewHeight] | encoding d16@0:8 */
/* Address: 000ad5a0 | Name: instance_DLPopupViewController__popupViewHeight | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

double DLPopupViewController::instance_DLPopupViewController__popupViewHeight
                 (ID param_1,SEL param_2)

{
  ID self;
  double dVar1;
  double in_d3;
  
  dVar1 = instance_DLPopupViewController__customHeight(param_1,"customHeight");
  if (dVar1 == 0.0) {
    self = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
    UIScreen::bounds(self,"bounds");
    return in_d3 * 0.5;
  }
  dVar1 = instance_DLPopupViewController__customHeight(param_1,"customHeight");
  return dVar1;
}


/* -[DLPopupViewController viewDidLayoutSubviews] | encoding v16@0:8 */
/* Address: 000ad634 | Name: instance_DLPopupViewController__viewDidLayoutSubviews | Body bytes: 624 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__viewDidLayoutSubviews
               (ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID self;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::DLPopupViewController;
  local_60.receiver = param_1;
  _objc_msgSendSuper2(&local_60,"viewDidLayoutSubviews");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    uVar5 = 0x3ff0000000000000;
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
    uVar4 = 0x3feccccccccccccd;
  }
  else {
    uVar5 = 0x3fb4141414141414;
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa8181818181818,0x3fb0101010101010,0x3fb4141414141414,0x3ff0000000000000);
    uVar4 = 0x3fe999999999999a;
  }
  IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",uVar4);
  lVar3 = (long)blurView;
  _objc_msgSend(*(ID *)(param_1 + lVar3),"setBackgroundColor:",IVar2);
  IVar2 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar2,"bounds");
  _objc_msgSend(*(ID *)(param_1 + (long)backgroundView),"setFrame:");
  IVar2 = instance_DLPopupViewController__blurWidthLayoutConstraint
                    (param_1,"blurWidthLayoutConstraint");
  _objc_msgSend(IVar2,"setActive:",0);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + lVar3),"widthAnchor");
  self = _objc_msgSend(param_1,"view");
  _objc_msgSend(self,"bounds");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToConstant:",uVar5);
  instance_DLPopupViewController__setBlurWidthLayoutConstraint_
            (param_1,"setBlurWidthLayoutConstraint:",IVar2);
  IVar2 = instance_DLPopupViewController__blurWidthLayoutConstraint
                    (param_1,"blurWidthLayoutConstraint");
  _objc_msgSend(IVar2,"setActive:",1);
  return;
}


/* -[DLPopupViewController viewDidLoad] | encoding v16@0:8 */
/* Address: 000ad8a4 | Name: instance_DLPopupViewController__viewDidLoad | Body bytes: 112 */

/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__viewDidLoad(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::DLPopupViewController;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLoad");
  instance_DLPopupViewController__setupBackgroundView(param_1,"setupBackgroundView");
  instance_DLPopupViewController__setupBlurView(param_1,"setupBlurView");
  instance_DLPopupViewController__setupPopupView(param_1,"setupPopupView");
  return;
}


/* -[DLPopupViewController viewWillAppear:] | encoding v20@0:8B16 */
/* Address: 000ad914 | Name: instance_DLPopupViewController__viewWillAppear_ | Body bytes: 80 */

/* Function Stack Size: 0x14 bytes */

void DLPopupViewController::instance_DLPopupViewController__viewWillAppear_
               (ID param_1,SEL param_2,bool param_3)

{
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::DLPopupViewController;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewWillAppear:",(ulong)param_3);
  instance_DLPopupViewController__showController(param_1,"showController");
  return;
}


/* -[DLPopupViewController viewDidAppear:] | encoding v20@0:8B16 */
/* Address: 000ad964 | Name: instance_DLPopupViewController__viewDidAppear_ | Body bytes: 76 */

/* Function Stack Size: 0x14 bytes */

void DLPopupViewController::instance_DLPopupViewController__viewDidAppear_
               (ID param_1,SEL param_2,bool param_3)

{
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::DLPopupViewController;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,"viewDidAppear:",(ulong)param_3);
  UIView::setAnimationsEnabled_((ID)&_OBJC_CLASS___UIView,"setAnimationsEnabled:",1);
  return;
}


/* -[DLPopupViewController setupBackgroundView] | encoding v16@0:8 */
/* Address: 000ad9b0 | Name: instance_DLPopupViewController__setupBackgroundView | Body bytes: 496 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__setupBackgroundView
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  lVar4 = (long)backgroundView;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(ID *)(param_1 + lVar4) = IVar1;
  IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor",uVar3);
  IVar2 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
  IVar1 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setBackgroundColor:",IVar1);
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setAlpha:",0);
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"bounds");
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setFrame:");
  IVar2 = *(ID *)(param_1 + lVar4);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
  IVar1 = UITapGestureRecognizer::initWithTarget_action_
                    (IVar1,"initWithTarget:action:",param_1,"dismissPopup");
  _objc_msgSend(IVar2,"addGestureRecognizer:",IVar1);
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"addSubview:",*(undefined8 *)(param_1 + lVar4));
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"sendSubviewToBack:",*(undefined8 *)(param_1 + lVar4));
  return;
}


/* -[DLPopupViewController setupBlurView] | encoding v16@0:8 */
/* Address: 000adba0 | Name: instance_DLPopupViewController__setupBlurView | Body bytes: 1068 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__setupBlurView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  double dVar5;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  IVar1 = _objc_alloc(&objc::class_t::DLVisualEffectView);
  IVar1 = _objc_msgSend(IVar1,"init");
  lVar4 = (long)blurView;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(ID *)(param_1 + lVar4) = IVar1;
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setTranslatesAutoresizingMaskIntoConstraints:",uVar2,0);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"layer");
  _objc_msgSend(IVar1,"setCornerRadius:",0x402e000000000000);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"layer");
  _objc_msgSend(IVar1,"setMaskedCorners:",3);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"layer");
  _objc_msgSend(IVar1,"setMasksToBounds:",1);
  IVar3 = *(ID *)(param_1 + lVar4);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);
  IVar1 = UIPanGestureRecognizer::initWithTarget_action_
                    (IVar1,"initWithTarget:action:",param_1,"panGestureRecognizerHandler:");
  _objc_msgSend(IVar3,"addGestureRecognizer:",IVar1);
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"addSubview:",*(undefined8 *)(param_1 + lVar4));
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"widthAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"bounds");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",in_d2);
  instance_DLPopupViewController__setBlurWidthLayoutConstraint_
            (param_1,"setBlurWidthLayoutConstraint:",IVar1);
  IVar1 = instance_DLPopupViewController__blurWidthLayoutConstraint
                    (param_1,"blurWidthLayoutConstraint");
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"heightAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"bounds");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",in_d3);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"bottomAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  IVar3 = _objc_msgSend(IVar3,"layoutMarginsGuide");
  IVar3 = _objc_msgSend(IVar3,"bottomAnchor");
  self = _objc_msgSend(param_1,"view");
  _objc_msgSend(self,"bounds");
  dVar5 = instance_DLPopupViewController__popupViewHeight(param_1,"popupViewHeight");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",in_d3 - dVar5,IVar3);
  _objc_msgSend(IVar1,"setActive:",1);
  dVar5 = instance_DLPopupViewController__popupViewHeight(param_1,"popupViewHeight");
  _CGAffineTransformMakeTranslation(&local_a0,0,dVar5);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  local_b0 = local_80;
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setTransform:",&local_d0);
  return;
}


/* -[DLPopupViewController setupPopupView] | encoding v16@0:8 */
/* Address: 000adfcc | Name: instance_DLPopupViewController__setupPopupView | Body bytes: 1116 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__setupPopupView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  instance_DLPopupViewController__setPopupView_(param_1,"setPopupView:",IVar1);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  lVar3 = (long)blurView;
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar3),"contentView");
  IVar2 = instance_DLPopupViewController__popupView(param_1,"popupView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + lVar3),"contentView");
  IVar2 = _objc_msgSend(IVar2,"topAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar1 = _objc_msgSend(IVar1,"leadingAnchor");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + lVar3),"contentView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar1 = _objc_msgSend(IVar1,"trailingAnchor");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + lVar3),"contentView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar1 = _objc_msgSend(IVar1,"bottomAnchor");
  IVar2 = _objc_msgSend(param_1,"view");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}


/* -[DLPopupViewController dismissPopup] | encoding v16@0:8 */
/* Address: 000ae428 | Name: instance_DLPopupViewController__dismissPopup | Body bytes: 88 */

/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__dismissPopup(ID param_1,SEL param_2)

{
  undefined4 in_w3;
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_000e80d8;
  local_30 = 0xc2000000;
  local_28 = FUN_000ae480;
  puStack_20 = &DAT_000e9138;
  local_18 = param_1;
  instance_DLPopupViewController__hideController_(param_1,"hideController:",(ID)&local_38,in_w3);
  return;
}


/* -[DLPopupViewController popupView] | encoding @16@0:8 */
/* Address: 000ae4f8 | Name: instance_DLPopupViewController__popupView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLPopupViewController::instance_DLPopupViewController__popupView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_popupView);
}


/* -[DLPopupViewController setPopupView:] | encoding v24@0:8@16 */
/* Address: 000ae508 | Name: instance_DLPopupViewController__setPopupView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLPopupViewController::instance_DLPopupViewController__setPopupView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_popupView) = param_3;
  return;
}


/* -[DLPopupViewController initialTouchPoint] | encoding {CGPoint=dd}16@0:8 */
/* Address: 000ae51c | Name: instance_DLPopupViewController__initialTouchPoint | Body bytes: 20 */

/* Function Stack Size: 0x10 bytes */

CGPoint DLPopupViewController::instance_DLPopupViewController__initialTouchPoint
                  (ID param_1,SEL param_2)

{
  return *(CGPoint *)(param_1 + (long)_initialTouchPoint);
}


/* -[DLPopupViewController setInitialTouchPoint:] | encoding v32@0:8{CGPoint=dd}16 */
/* Address: 000ae530 | Name: instance_DLPopupViewController__setInitialTouchPoint_ | Body bytes: 20 */

/* Function Stack Size: 0x20 bytes */

void DLPopupViewController::instance_DLPopupViewController__setInitialTouchPoint_
               (ID param_1,SEL param_2,CGPoint param_3)

{
  long lVar1;
  
  lVar1 = (long)_initialTouchPoint;
  *(double *)(param_1 + lVar1) = param_3.field0_0x0;
  ((double *)(param_1 + lVar1))[1] = param_3.field1_0x8;
  return;
}


/* -[DLPopupViewController blurWidthLayoutConstraint] | encoding @16@0:8 */
/* Address: 000ae544 | Name: instance_DLPopupViewController__blurWidthLayoutConstraint | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLPopupViewController::instance_DLPopupViewController__blurWidthLayoutConstraint
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_blurWidthLayoutConstraint);
}


/* -[DLPopupViewController setBlurWidthLayoutConstraint:] | encoding v24@0:8@16 */
/* Address: 000ae554 | Name: instance_DLPopupViewController__setBlurWidthLayoutConstraint_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLPopupViewController::instance_DLPopupViewController__setBlurWidthLayoutConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_blurWidthLayoutConstraint) = param_3;
  return;
}


/* -[DLPopupViewController customHeight] | encoding d16@0:8 */
/* Address: 000ae568 | Name: instance_DLPopupViewController__customHeight | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

double DLPopupViewController::instance_DLPopupViewController__customHeight(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_customHeight);
}


/* -[DLPopupViewController setCustomHeight:] | encoding v24@0:8d16 */
/* Address: 000ae578 | Name: instance_DLPopupViewController__setCustomHeight_ | Body bytes: 16 */

/* Function Stack Size: 0x18 bytes */

void DLPopupViewController::instance_DLPopupViewController__setCustomHeight_
               (ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_customHeight) = param_3;
  return;
}


/* -[DLPopupViewController .cxx_destruct] | encoding v16@0:8 */
/* Address: 000ae588 | Name: instance_DLPopupViewController___cxx_destruct | Body bytes: 104 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_blurWidthLayoutConstraint) = 0;
  *(undefined8 *)(param_1 + (long)_popupView) = 0;
  *(undefined8 *)(param_1 + (long)blurView) = 0;
  *(undefined8 *)(param_1 + (long)backgroundView) = 0;
  return;
}

