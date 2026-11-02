/* Address: 0001126c | Name: FUN_0001126c | Body bytes: 188 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0001126c(long param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x28),"styledString");
  IVar1 = _objc_msgSend(IVar1,"attributedString");
  IVar1 = _objc_msgSend(IVar1,"string");
  _objc_msgSend(*(ID *)(param_1 + 0x20),"setString:",IVar1);
  DLHelper::class_DLHelper__HUDWithState_((ID)&objc::class_t::DLHelper,"HUDWithState:",2);
  return;
}

