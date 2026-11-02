/* Address: 00041648 | Name: FUN_00041648 | Body bytes: 600 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00041648(ID param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  code *pcVar5;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_SeeDMWithoutOtherPartyKnowing);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      IVar1 = _objc_msgSend(param_3,"mutableCopy");
      IVar3 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);
      IVar4 = DLHelper::class_DLHelper__imageIcon_
                        ((ID)&objc::class_t::DLHelper,"imageIcon:",0xeb7c8);
      IVar3 = UIBarButtonItem::initWithImage_style_target_action_
                        (IVar3,"initWithImage:style:target:action:",IVar4,0,param_1,
                         "d_didPressSeenButton");
      _objc_msgSend(param_1,"setSeenBtn:",IVar3);
      IVar3 = _objc_msgSend(param_1,"seenBtn");
      _objc_msgSend(IVar1,"addObject:",IVar3);
      pcVar5 = DAT_000ffca0;
      if (DAT_000ffca0 == (code *)0x0) {
        pcVar5 = (code *)_class_getMethodImplementation(DAT_000ffc98,"setRightBarButtonItems:");
      }
      (*pcVar5)(param_1,param_2,IVar1);
      return 0;
    }
  }
  pcVar5 = DAT_000ffca0;
  if (DAT_000ffca0 == (code *)0x0) {
    pcVar5 = (code *)_class_getMethodImplementation(DAT_000ffc98,"setRightBarButtonItems:");
  }
  (*pcVar5)(param_1,param_2,param_3);
  return 0;
}

