/* Address: 00086d7c | Name: FUN_00086d7c | Body bytes: 508 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00086d7c(ID param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_SeeStoryWithoutOtherPartyKnowing);
  if ((int)IVar1 != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      IVar1 = _objc_msgSend(param_1,"valueForKey:",&cf__titleView);
      IVar1 = _objc_msgSend(IVar1,"text");
      uVar2 = FUN_0008c218(&cf_HUD_SEEN_STORY);
      IVar1 = _objc_msgSend(IVar1,"isEqualToString:",uVar2);
      if ((int)IVar1 != 0) {
        IVar1 = UIColor::colorWithRed_green_blue_alpha_
                          ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                           0x3fc3126e978d4fdf,0x3fc3126e978d4fdf,0x3fc3126e978d4fdf,
                           0x3fee666666666666);
        _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
      }
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_00100190;
  if (DAT_00100190 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)_class_getMethodImplementation(DAT_00100188,"layoutSubviews");
  }
                    /* WARNING: Could not recover jumptable at 0x00086f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

