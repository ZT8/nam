/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLAuthenticationView layoutSubviews] | encoding v16@0:8 */
/* Address: 0009f8fc | Name: instance_DLAuthenticationView__layoutSubviews | Body bytes: 340 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLAuthenticationView::instance_DLAuthenticationView__layoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID self;
  undefined8 uVar3;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLAuthenticationView;
  local_40 = param_1;
  UIView::layoutSubviews((ID)&local_40,"layoutSubviews");
  IVar2 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar2 = UIApplication::delegate(IVar2,"delegate");
  IVar2 = UIApplication::window(IVar2,"window");
  UIApplication::bounds(IVar2,"bounds");
  _objc_msgSend(param_1,"setFrame:");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  IVar2 = UIBlurEffect::effectWithStyle_((ID)&_OBJC_CLASS___UIBlurEffect,"effectWithStyle:",uVar3);
  self = instance_DLAuthenticationView__dlBlurView(param_1,"dlBlurView");
  _objc_msgSend(self,"setEffect:",IVar2);
  return;
}


/* -[DLAuthenticationView initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 0009fa50 | Name: instance_DLAuthenticationView__initWithFrame_ | Body bytes: 88 */

/* Function Stack Size: 0x30 bytes */

ID DLAuthenticationView::instance_DLAuthenticationView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLAuthenticationView;
  local_30 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    UIView::setupBlurView(self,"setupBlurView");
  }
  return self;
}


/* -[DLAuthenticationView setupBlurView] | encoding v16@0:8 */
/* Address: 0009faa8 | Name: instance_DLAuthenticationView__setupBlurView | Body bytes: 524 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLAuthenticationView::instance_DLAuthenticationView__setupBlurView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);
  IVar1 = UIVisualEffectView::init(IVar1,"init");
  instance_DLAuthenticationView__setDlBlurView_(param_1,"setDlBlurView:",IVar1);
  IVar1 = instance_DLAuthenticationView__dlBlurView(param_1,"dlBlurView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLAuthenticationView__dlBlurView(param_1,"dlBlurView");
  _objc_msgSend(param_1,"addSubview:",IVar1);
  IVar1 = instance_DLAuthenticationView__dlBlurView(param_1,"dlBlurView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = _objc_msgSend(param_1,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLAuthenticationView__dlBlurView(param_1,"dlBlurView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar2 = _objc_msgSend(param_1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}


/* -[DLAuthenticationView contextAuthenticated:] | encoding v24@0:8@?16 */
/* Address: 0009fcb4 | Name: instance_DLAuthenticationView__contextAuthenticated_ | Body bytes: 404 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void DLAuthenticationView::instance_DLAuthenticationView__contextAuthenticated_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  undefined8 local_48;
  
  IVar2 = _objc_alloc(&_OBJC_CLASS___LAContext,param_2,param_3,param_4);
  IVar2 = LAContext::init(IVar2,"init");
  instance_DLAuthenticationView__setContext_(param_1,"setContext:",IVar2);
  IVar2 = instance_DLAuthenticationView__context(param_1,"context");
  local_48 = 0;
  IVar2 = _objc_msgSend(IVar2,"canEvaluatePolicy:error:",2,&local_48);
  uVar1 = local_48;
  if ((int)IVar2 == 0) {
    DLHelper::class_DLHelper__setBool_forKey_
              ((ID)&objc::class_t::DLHelper,"setBool:forKey:",0,0xec0c8);
    (**(code **)(param_3 + 0x10))(param_3,0,uVar1);
  }
  else {
    IVar2 = instance_DLAuthenticationView__context(param_1,"context");
    local_70 = PTR___NSConcreteStackBlock_000e80d8;
    local_68 = 0xc2000000;
    local_60 = FUN_0009fe48;
    puStack_58 = &DAT_000e9828;
    local_50 = param_3;
    _objc_msgSend(IVar2,"evaluatePolicy:localizedReason:reply:",2,&cf_space_s_,&local_70);
  }
  return;
}


/* -[DLAuthenticationView context] | encoding @16@0:8 */
/* Address: 0009fec4 | Name: instance_DLAuthenticationView__context | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLAuthenticationView::instance_DLAuthenticationView__context(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_context);
}


/* -[DLAuthenticationView setContext:] | encoding v24@0:8@16 */
/* Address: 0009fed4 | Name: instance_DLAuthenticationView__setContext_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLAuthenticationView::instance_DLAuthenticationView__setContext_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_context) = param_3;
  return;
}


/* -[DLAuthenticationView isAuthenticated] | encoding B16@0:8 */
/* Address: 0009fee8 | Name: instance_DLAuthenticationView__isAuthenticated | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool DLAuthenticationView::instance_DLAuthenticationView__isAuthenticated(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_authenticated);
}


/* -[DLAuthenticationView setAuthenticated:] | encoding v20@0:8B16 */
/* Address: 0009fef8 | Name: instance_DLAuthenticationView__setAuthenticated_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void DLAuthenticationView::instance_DLAuthenticationView__setAuthenticated_
               (ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_authenticated) = (char)param_3;
  return;
}


/* -[DLAuthenticationView dlBlurView] | encoding @16@0:8 */
/* Address: 0009ff08 | Name: instance_DLAuthenticationView__dlBlurView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLAuthenticationView::instance_DLAuthenticationView__dlBlurView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_dlBlurView);
}


/* -[DLAuthenticationView setDlBlurView:] | encoding v24@0:8@16 */
/* Address: 0009ff18 | Name: instance_DLAuthenticationView__setDlBlurView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLAuthenticationView::instance_DLAuthenticationView__setDlBlurView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_dlBlurView) = param_3;
  return;
}


/* -[DLAuthenticationView .cxx_destruct] | encoding v16@0:8 */
/* Address: 0009ff2c | Name: instance_DLAuthenticationView___cxx_destruct | Body bytes: 64 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLAuthenticationView::instance_DLAuthenticationView___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_dlBlurView) = 0;
  *(undefined8 *)(param_1 + (long)_context) = 0;
  return;
}

