/* Address: 00083554 | Name: FUN_00083554 | Body bytes: 432 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_00083554(undefined8 param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  code *pcVar2;
  ID IVar3;
  ID self;
  
  IVar1 = _objc_msgSend(param_4,"row");
  if (IVar1 == 0) {
    pcVar2 = DAT_001000f0;
    if (DAT_001000f0 == (code *)0x0) {
      pcVar2 = (code *)_class_getMethodImplementation
                                 (DAT_001000e8,"tableView:cellForRowAtIndexPath:");
    }
    IVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    IVar3 = _objc_msgSend(IVar1,"textLabel");
    _objc_msgSend(IVar3,"setText:",&cf_DLInsta);
    IVar3 = DLHelper::class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",0xecb28);
    IVar3 = _objc_msgSend(IVar3,"imageWithRenderingMode:",2);
    self = _objc_msgSend(IVar1,"imageView");
    _objc_msgSend(self,"setImage:",IVar3);
  }
  else {
    pcVar2 = DAT_001000f0;
    if (DAT_001000f0 == (code *)0x0) {
      pcVar2 = (code *)_class_getMethodImplementation
                                 (DAT_001000e8,"tableView:cellForRowAtIndexPath:");
    }
    IVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
  }
  return IVar1;
}

