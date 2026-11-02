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

