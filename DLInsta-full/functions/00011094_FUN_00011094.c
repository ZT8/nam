/* Address: 00011094 | Name: FUN_00011094 | Body bytes: 156 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00011094(long param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x28),"user");
  IVar1 = _objc_msgSend(IVar1,"username");
  _objc_msgSend(*(ID *)(param_1 + 0x20),"setString:",IVar1);
  DLHelper::class_DLHelper__HUDWithState_((ID)&objc::class_t::DLHelper,"HUDWithState:",2);
  return;
}

