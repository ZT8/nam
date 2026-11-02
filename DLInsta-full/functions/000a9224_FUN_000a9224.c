/* Address: 000a9224 | Name: FUN_000a9224 | Body bytes: 128 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000a9224(long param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"actionHandler");
  if (IVar1 != 0) {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"actionHandler");
    (**(code **)(IVar1 + 0x10))();
  }
  _objc_msgSend(*(ID *)(param_1 + 0x28),"dismissAlertController");
  return;
}

