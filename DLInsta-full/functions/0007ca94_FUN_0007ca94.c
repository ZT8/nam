/* Address: 0007ca94 | Name: FUN_0007ca94 | Body bytes: 212 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007ca94(long param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"authenticationView");
  _objc_msgSend(IVar1,"setAuthenticated:",0);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"authenticationView");
  IVar1 = _objc_msgSend(IVar1,"superview");
  if (IVar1 == 0) {
    return 0;
  }
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"authenticationView");
  _objc_msgSend(IVar1,"removeFromSuperview");
  return 0;
}

