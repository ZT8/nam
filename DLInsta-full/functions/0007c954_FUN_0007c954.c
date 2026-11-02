/* Address: 0007c954 | Name: FUN_0007c954 | Body bytes: 288 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007c954(long param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"authenticationView");
  _objc_msgSend(IVar1,"setAuthenticated:",1);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"authenticationView");
  IVar1 = _objc_msgSend(IVar1,"superview");
  if (IVar1 == 0) {
    return 0;
  }
  IVar1 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
  DLHelper::class_DLHelper__setObject_forKey_
            ((ID)&objc::class_t::DLHelper,"setObject:forKey:",IVar1,0xec088);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"authenticationView");
  _objc_msgSend(IVar1,"removeFromSuperview");
  return 0;
}

