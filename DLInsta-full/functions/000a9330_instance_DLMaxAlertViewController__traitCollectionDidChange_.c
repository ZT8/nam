/* Address: 000a9330 | Name: instance_DLMaxAlertViewController__traitCollectionDidChange_ | Body bytes: 644 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__traitCollectionDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined **ppuVar1;
  int iVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::DLMaxAlertViewController;
  local_70 = param_1;
  UIViewController::traitCollectionDidChange_((ID)&local_70,"traitCollectionDidChange:",param_3);
  iVar2 = FUN_000bd0fc(2,0xd,0,0);
  if (iVar2 != 0) {
    IVar4 = _objc_msgSend(param_1,"traitCollection");
    IVar4 = _objc_msgSend(IVar4,"performSelector:withObject:",
                          "hasDifferentColorAppearanceComparedToTraitCollection:",param_3);
    if (IVar4 != 0) {
      bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if (bVar3 == 0) {
        uVar6 = 0x3ff0000000000000;
      }
      else {
        uVar6 = 0x3fc3131313131313;
      }
      IVar4 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar6,uVar6,
                         uVar6,0x3ff0000000000000);
      IVar5 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
      _objc_msgSend(IVar5,"setBackgroundColor:",IVar4);
      bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      ppuVar1 = &PTR_s_whiteColor_000fb648;
      if (bVar3 == 0) {
        ppuVar1 = &PTR_s_blackColor_000fbc88;
      }
      IVar4 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
      IVar5 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
      _objc_msgSend(IVar5,"setTextColor:",IVar4);
      bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if (bVar3 == 0) {
        uVar6 = 0x3fdcdd2f1a9fbe77;
      }
      else {
        uVar6 = 0x3fe516872b020c4a;
      }
      IVar4 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar6,uVar6,
                         uVar6,0x3ff0000000000000);
      IVar5 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
      _objc_msgSend(IVar5,"setTextColor:",IVar4);
    }
  }
  return;
}

