/* Address: 00048f48 | Name: FUN_00048f48 | Body bytes: 620 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_00048f48(undefined1 param_1 [16],double param_2,double param_3,double param_4,ID param_5,
            undefined8 param_6)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  double extraout_d0;
  
  pcVar1 = DAT_000ffd98;
  if (DAT_000ffd98 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ffd90,"layoutSubviews");
  }
  (*pcVar1)(param_5,param_6);
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_KeepDeletedDM);
  if ((IVar2 & 1) == 0) {
    return 0;
  }
  uVar3 = FUN_00097ef8();
  uVar3 = FUN_00097a54(uVar3);
  IVar2 = _objc_msgSend(DAT_001006a8,"length");
  IVar2 = FUN_00097c68(uVar3,IVar2);
  IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
  if ((int)IVar2 != 0) {
    IVar2 = _objc_msgSend(param_5,"dlDeleteInfo");
    IVar2 = _objc_msgSend(IVar2,"superview");
    if (IVar2 != 0) {
      IVar2 = _objc_msgSend(param_5,"valueForKey:",&cf__messageContentContainerView);
      _objc_msgSend(IVar2,"frame");
      IVar2 = _objc_msgSend(param_5,"valueForKey:",&cf__forwardShortcutIcon);
      if (IVar2 == 0) {
        uVar3 = 0x3fe0000000000000;
        param_4 = (param_4 + -24.0) * 0.5;
        param_2 = param_2 + param_4;
      }
      else {
        param_4 = param_2 + param_4;
        uVar3 = 0xc038000000000000;
        param_2 = param_4 + -24.0;
      }
      IVar2 = _objc_msgSend(param_5,"dlDeleteInfo",param_4,uVar3);
      _objc_msgSend(IVar2,"setFrame:",extraout_d0 + param_3 + 8.0,param_2,0x4038000000000000,
                    0x4038000000000000);
      return 0;
    }
  }
  return 0;
}

