/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLInfoSheetPresentationController frameOfPresentedViewInContainerView] | encoding {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8 */
/* Address: 000a6334 | Name: instance_DLInfoSheetPresentationController__frameOfPresentedViewInContainerView | Body bytes: 200 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

CGRect DLInfoSheetPresentationController::
       instance_DLInfoSheetPresentationController__frameOfPresentedViewInContainerView
                 (ID param_1,SEL param_2)

{
  undefined1 auVar1 [32];
  ID self;
  double dVar2;
  undefined8 extraout_d0;
  double dVar3;
  undefined8 uVar4;
  undefined8 in_d2;
  undefined8 in_d3;
  
  dVar2 = instance_DLInfoSheetPresentationController__bottomHeight(param_1,"bottomHeight");
  uVar4 = 0x4053000000000000;
  self = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(self,"bounds");
  dVar3 = (double)_CGRectGetHeight(extraout_d0,uVar4,in_d2,in_d3,0);
  uVar4 = _CGRectGetWidth(extraout_d0,uVar4,in_d2,in_d3);
  auVar1._16_8_ = dVar2 + 76.0;
  auVar1._8_8_ = uVar4;
  auVar1._0_8_ = dVar3 - (dVar2 + 76.0);
  auVar1._24_8_ = 0;
  return (CGRect)(auVar1 << 0x40);
}


/* -[DLInfoSheetPresentationController initWithPresentedViewController:presentingViewController:] | encoding @32@0:8@16@24 */
/* Address: 000a63fc | Name: instance_DLInfoSheetPresentationController__initWithPresentedViewController_presentingViewController_ | Body bytes: 316 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLInfoSheetPresentationController::
   instance_DLInfoSheetPresentationController__initWithPresentedViewController_presentingViewController_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLInfoSheetPresentationController;
  local_40 = param_1;
  IVar1 = UIPresentationController::initWithPresentedViewController_presentingViewController_
                    ((ID)&local_40,"initWithPresentedViewController:presentingViewController:");
  if (IVar1 != 0) {
    IVar2 = _objc_alloc(&_OBJC_CLASS___UIView);
    IVar2 = UIView::init(IVar2,"init");
    lVar4 = (long)_dimmingView;
    uVar3 = *(undefined8 *)(IVar1 + lVar4);
    *(ID *)(IVar1 + lVar4) = IVar2;
    IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor",uVar3);
    IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3feccccccccccccd);
    _objc_msgSend(*(ID *)(IVar1 + lVar4),"setBackgroundColor:",IVar2);
    _objc_msgSend(*(ID *)(IVar1 + lVar4),"setAlpha:",0);
    IVar2 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
    IVar2 = UITapGestureRecognizer::initWithTarget_action_
                      (IVar2,"initWithTarget:action:",IVar1,"dismissCustomVC:");
    _objc_msgSend(*(ID *)(IVar1 + lVar4),"addGestureRecognizer:",IVar2);
  }
  return IVar1;
}


/* -[DLInfoSheetPresentationController containerViewWillLayoutSubviews] | encoding v16@0:8 */
/* Address: 000a6538 | Name: instance_DLInfoSheetPresentationController__containerViewWillLayoutSubviews | Body bytes: 644 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetPresentationController::
     instance_DLInfoSheetPresentationController__containerViewWillLayoutSubviews
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  double dVar2;
  double dVar3;
  undefined8 in_d3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  CGRect CVar9;
  ID local_90;
  class_t *pcStack_88;
  
  pcStack_88 = &objc::class_t::DLInfoSheetPresentationController;
  local_90 = param_1;
  UIPresentationController::containerViewWillLayoutSubviews
            ((ID)&local_90,"containerViewWillLayoutSubviews");
  IVar1 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar1,"bounds");
  IVar1 = instance_DLInfoSheetPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar1,"setFrame:",extraout_d0,in_d1,in_d2,in_d3);
  CVar9 = instance_DLInfoSheetPresentationController__frameOfPresentedViewInContainerView
                    (param_1,"frameOfPresentedViewInContainerView");
  dVar4 = CVar9.field1_0x10.field1_0x8;
  dVar2 = CVar9.field1_0x10.field0_0x0;
  dVar3 = dVar2;
  dVar5 = dVar4;
  IVar1 = _objc_msgSend(param_1,"containerView",CVar9.field0_0x0.field0_0x0,
                        CVar9.field0_0x0.field1_0x8);
  _objc_msgSend(IVar1,"bounds");
  dVar6 = dVar5;
  IVar1 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar1,"bounds");
  dVar7 = dVar6;
  IVar1 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar1,"bounds");
  dVar8 = dVar7;
  IVar1 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar1,"bounds");
  if (dVar7 <= dVar3) {
    IVar1 = _objc_msgSend(param_1,"containerView",dVar2 - dVar5);
    _objc_msgSend(IVar1,"bounds");
    IVar1 = _objc_msgSend(param_1,"presentedView");
    _objc_msgSend(IVar1,"setFrame:",(dVar2 - dVar5) * 0.5,dVar6 - dVar4,dVar8,dVar4);
  }
  else {
    IVar1 = _objc_msgSend(param_1,"presentedView");
    _objc_msgSend(IVar1,"setFrame:",CVar9.field0_0x0.field0_0x0,CVar9.field0_0x0.field1_0x8,dVar2,
                  dVar4);
  }
  return;
}


/* -[DLInfoSheetPresentationController presentationTransitionWillBegin] | encoding v16@0:8 */
/* Address: 000a67bc | Name: instance_DLInfoSheetPresentationController__presentationTransitionWillBegin | Body bytes: 396 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetPresentationController::
     instance_DLInfoSheetPresentationController__presentationTransitionWillBegin
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  ID IVar2;
  undefined8 extraout_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  
  IVar1 = _objc_msgSend(param_1,"containerView");
  self = _objc_msgSend(param_1,"presentedViewController");
  _objc_msgSend(IVar1,"bounds");
  IVar2 = instance_DLInfoSheetPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar2,"setFrame:",extraout_d0,in_d1,in_d2,in_d3);
  IVar2 = instance_DLInfoSheetPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar1,"insertSubview:atIndex:",IVar2,0);
  IVar1 = _objc_msgSend(self,"transitionCoordinator");
  local_88 = PTR___NSConcreteStackBlock_000e80d8;
  local_80 = 0xc2000000;
  local_78 = FUN_000a6948;
  puStack_70 = &DAT_000e9b18;
  local_68 = param_1;
  _objc_msgSend(IVar1,"animateAlongsideTransition:completion:",&local_88,0);
  return;
}


/* -[DLInfoSheetPresentationController dismissalTransitionWillBegin] | encoding v16@0:8 */
/* Address: 000a6990 | Name: instance_DLInfoSheetPresentationController__dismissalTransitionWillBegin | Body bytes: 176 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetPresentationController::
     instance_DLInfoSheetPresentationController__dismissalTransitionWillBegin
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar1 = _objc_msgSend(param_1,"presentedViewController");
  IVar1 = _objc_msgSend(IVar1,"transitionCoordinator");
  local_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_000a6a40;
  puStack_40 = &DAT_000e9b18;
  local_38 = param_1;
  _objc_msgSend(IVar1,"animateAlongsideTransition:completion:",&local_58,0);
  return;
}


/* -[DLInfoSheetPresentationController dismissCustomVC:] | encoding v24@0:8@16 */
/* Address: 000a6a88 | Name: instance_DLInfoSheetPresentationController__dismissCustomVC_ | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInfoSheetPresentationController::instance_DLInfoSheetPresentationController__dismissCustomVC_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_3,"state");
  if (IVar1 == 3) {
    IVar1 = _objc_msgSend(param_1,"presentingViewController");
    _objc_msgSend(IVar1,"dismissViewControllerAnimated:completion:",1,0);
    return;
  }
  return;
}


/* -[DLInfoSheetPresentationController bottomHeight] | encoding d16@0:8 */
/* Address: 000a6afc | Name: instance_DLInfoSheetPresentationController__bottomHeight | Body bytes: 84 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

double DLInfoSheetPresentationController::instance_DLInfoSheetPresentationController__bottomHeight
                 (ID param_1,SEL param_2)

{
  ID self;
  double in_d2;
  
  self = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(self,"safeAreaInsets");
  return in_d2;
}


/* -[DLInfoSheetPresentationController dimmingView] | encoding @16@0:8 */
/* Address: 000a6b50 | Name: instance_DLInfoSheetPresentationController__dimmingView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLInfoSheetPresentationController::instance_DLInfoSheetPresentationController__dimmingView
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_dimmingView);
}


/* -[DLInfoSheetPresentationController setDimmingView:] | encoding v24@0:8@16 */
/* Address: 000a6b60 | Name: instance_DLInfoSheetPresentationController__setDimmingView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInfoSheetPresentationController::instance_DLInfoSheetPresentationController__setDimmingView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_dimmingView) = param_3;
  return;
}


/* -[DLInfoSheetPresentationController .cxx_destruct] | encoding v16@0:8 */
/* Address: 000a6b74 | Name: instance_DLInfoSheetPresentationController___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetPresentationController::instance_DLInfoSheetPresentationController___cxx_destruct
               (ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_dimmingView) = 0;
  return;
}

