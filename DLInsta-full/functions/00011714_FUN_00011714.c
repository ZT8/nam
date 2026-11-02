/* Address: 00011714 | Name: FUN_00011714 | Body bytes: 140 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00011714(long param_1)

{
  ID self;
  undefined8 uVar1;
  
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  self = UIPasteboard::generalPasteboard((ID)&_OBJC_CLASS___UIPasteboard,"generalPasteboard");
  UIPasteboard::setString_(self,"setString:",uVar1);
  DLHelper::class_DLHelper__HUDWithState_((ID)&objc::class_t::DLHelper,"HUDWithState:",2);
  return;
}

