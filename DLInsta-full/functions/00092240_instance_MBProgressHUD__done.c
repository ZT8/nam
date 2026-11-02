/* Address: 00092240 | Name: instance_MBProgressHUD__done | Body bytes: 264 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__done(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  instance_MBProgressHUD__setNSProgressDisplayLinkEnabled_
            (param_1,"setNSProgressDisplayLinkEnabled:",0);
  bVar1 = instance_MBProgressHUD__hasFinished(param_1,"hasFinished");
  if (bVar1 != 0) {
    _objc_msgSend(param_1,"setAlpha:",0);
    bVar1 = instance_MBProgressHUD__removeFromSuperViewOnHide(param_1,"removeFromSuperViewOnHide");
    if (bVar1 != 0) {
      _objc_msgSend(param_1,"removeFromSuperview");
    }
  }
  IVar2 = instance_MBProgressHUD__completionBlock(param_1,"completionBlock");
  if (IVar2 != 0) {
    (**(code **)(IVar2 + 0x10))(IVar2);
  }
  IVar2 = instance_MBProgressHUD__delegate(param_1,"delegate");
  IVar3 = _objc_msgSend(IVar2,"respondsToSelector:","hudWasHidden:");
  if ((int)IVar3 != 0) {
    _objc_msgSend(IVar2,"performSelector:withObject:","hudWasHidden:",param_1);
  }
  return;
}

