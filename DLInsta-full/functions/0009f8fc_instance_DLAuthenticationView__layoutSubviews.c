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

