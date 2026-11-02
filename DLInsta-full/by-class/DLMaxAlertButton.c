/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMaxAlertButton initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 000a7250 | Name: instance_DLMaxAlertButton__initWithFrame_ | Body bytes: 876 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID DLMaxAlertButton::instance_DLMaxAlertButton__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  ID self;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::DLMaxAlertButton;
  local_70 = param_1;
  self = UIButton::initWithFrame_
                   ((ID)&local_70,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___UIView);
    IVar3 = UIView::init(IVar3,"init");
    lVar6 = (long)_separatorView;
    uVar5 = *(undefined8 *)(self + lVar6);
    *(ID *)(self + lVar6) = IVar3;
    _objc_msgSend(*(ID *)(self + lVar6),"setTranslatesAutoresizingMaskIntoConstraints:",uVar5,0);
    bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar2 & 1) == 0) {
      uVar5 = 0x3feb7b7b7b7b7b7b;
    }
    else {
      uVar5 = 0x3fcb1b1b1b1b1b1b;
    }
    IVar3 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar5,uVar5
                       ,0x3ff0000000000000);
    _objc_msgSend(*(ID *)(self + lVar6),"setBackgroundColor:",IVar3);
    UIButton::addSubview_(self,"addSubview:",*(undefined8 *)(self + lVar6));
    IVar3 = _objc_msgSend(*(ID *)(self + lVar6),"topAnchor");
    IVar4 = UIButton::topAnchor(self,"topAnchor");
    IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
    _objc_msgSend(IVar3,"setActive:",1);
    IVar3 = _objc_msgSend(*(ID *)(self + lVar6),"leadingAnchor");
    IVar4 = UIButton::leadingAnchor(self,"leadingAnchor");
    IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
    _objc_msgSend(IVar3,"setActive:",1);
    IVar3 = _objc_msgSend(*(ID *)(self + lVar6),"trailingAnchor");
    IVar4 = UIButton::trailingAnchor(self,"trailingAnchor");
    IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
    _objc_msgSend(IVar3,"setActive:",1);
    IVar3 = _objc_msgSend(*(ID *)(self + lVar6),"heightAnchor");
    IVar3 = _objc_msgSend(IVar3,"constraintEqualToConstant:",0x3fe54fdf3b645a1d);
    _objc_msgSend(IVar3,"setActive:",1);
    bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    ppuVar1 = &PTR_s_whiteColor_000fb648;
    if (bVar2 == 0) {
      ppuVar1 = &PTR_s_blackColor_000fbc88;
    }
    IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
    UIButton::setTitleColor_forState_(self,"setTitleColor:forState:",IVar3,0);
  }
  return self;
}


/* -[DLMaxAlertButton actionHandler:] | encoding v24@0:8@?16 */
/* Address: 000a75bc | Name: instance_DLMaxAlertButton__actionHandler_ | Body bytes: 152 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertButton::instance_DLMaxAlertButton__actionHandler_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + (long)_handler);
  *(ID *)(param_1 + (long)_handler) = param_3;
  _objc_initWeak(uVar1,auStack_28,param_1,param_3,param_4);
  _objc_msgSend(param_1,"addTarget:action:forControlEvents:",param_1,"didPressButton",0x40);
  _objc_destroyWeak(auStack_28);
  return;
}


/* -[DLMaxAlertButton didPressButton] | encoding v16@0:8 */
/* Address: 000a7668 | Name: instance_DLMaxAlertButton__didPressButton | Body bytes: 124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertButton::instance_DLMaxAlertButton__didPressButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = instance_DLMaxAlertButton__handler(param_1,"handler");
  if (IVar1 == 0) {
    return;
  }
  IVar1 = instance_DLMaxAlertButton__handler(param_1,"handler");
  (**(code **)(IVar1 + 0x10))();
  return;
}


/* -[DLMaxAlertButton traitCollectionDidChange:] | encoding v24@0:8@16 */
/* Address: 000a76e4 | Name: instance_DLMaxAlertButton__traitCollectionDidChange_ | Body bytes: 464 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertButton::instance_DLMaxAlertButton__traitCollectionDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined **ppuVar1;
  int iVar2;
  bool bVar3;
  ID IVar4;
  undefined8 uVar5;
  ID local_60;
  class_t *pcStack_58;
  
  pcStack_58 = &objc::class_t::DLMaxAlertButton;
  local_60 = param_1;
  UIButton::traitCollectionDidChange_((ID)&local_60,"traitCollectionDidChange:",param_3);
  iVar2 = FUN_000bd0fc(2,0xd,0,0);
  if (iVar2 != 0) {
    IVar4 = _objc_msgSend(param_1,"nextResponder");
    IVar4 = _objc_msgSend(IVar4,"traitCollection");
    IVar4 = _objc_msgSend(IVar4,"performSelector:withObject:",
                          "hasDifferentColorAppearanceComparedToTraitCollection:",param_3);
    if (IVar4 != 0) {
      bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if (bVar3 == 0) {
        uVar5 = 0x3feb7b7b7b7b7b7b;
      }
      else {
        uVar5 = 0x3fcb1b1b1b1b1b1b;
      }
      IVar4 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar5,
                         uVar5,0x3ff0000000000000);
      _objc_msgSend(*(ID *)(param_1 + (long)_separatorView),"setBackgroundColor:",IVar4);
      bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      ppuVar1 = &PTR_s_whiteColor_000fb648;
      if (bVar3 == 0) {
        ppuVar1 = &PTR_s_blackColor_000fbc88;
      }
      IVar4 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
      _objc_msgSend(param_1,"setTitleColor:forState:",IVar4,0);
    }
  }
  return;
}


/* -[DLMaxAlertButton handler] | encoding @?16@0:8 */
/* Address: 000a78b4 | Name: instance_DLMaxAlertButton__handler | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertButton::instance_DLMaxAlertButton__handler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_handler);
}


/* -[DLMaxAlertButton .cxx_destruct] | encoding v16@0:8 */
/* Address: 000a78c4 | Name: instance_DLMaxAlertButton___cxx_destruct | Body bytes: 64 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertButton::instance_DLMaxAlertButton___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_handler) = 0;
  *(undefined8 *)(param_1 + (long)_separatorView) = 0;
  return;
}

