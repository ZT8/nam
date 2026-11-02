/* Address: 00086b6c | Name: FUN_00086b6c | Body bytes: 444 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_00086b6c(ID param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  
  pcVar2 = DAT_00100180;
  if (DAT_00100180 == (code *)0x0) {
    pcVar2 = (code *)_class_getMethodImplementation(DAT_00100178,"layoutSubviews");
  }
  (*pcVar2)(param_1,param_2);
  IVar3 = _objc_msgSend(param_1,"titleLabel");
  IVar3 = _objc_msgSend(IVar3,"text");
  uVar4 = FUN_0008c218(&cf_ACTION_SEEN);
  IVar3 = _objc_msgSend(IVar3,"isEqualToString:",uVar4);
  if ((int)IVar3 != 0) {
    IVar3 = _objc_msgSend(param_1,"titleLabel");
    IVar3 = _objc_msgSend(IVar3,"textColor");
    IVar3 = _objc_retainAutorelease(IVar3);
    IVar3 = _objc_msgSend(IVar3,"CGColor");
    IVar5 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fdcdcdcdcdcdcdd,0x3fdcdcdcdcdcdcdd,0x3fdcdcdcdcdcdcdd,0x3ff0000000000000);
    IVar5 = _objc_retainAutorelease(IVar5);
    IVar5 = _objc_msgSend(IVar5,"CGColor");
    iVar1 = _CGColorEqualToColor(IVar3,IVar5);
    if (iVar1 != 0) {
      IVar3 = _objc_msgSend(param_1,"setEnabled:",0);
      return IVar3;
    }
  }
  return 0;
}

