/* Address: 000a37e8 | Name: FUN_000a37e8 | Body bytes: 176 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a37e8(long param_1)

{
  ID IVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    _objc_msgSend(*(ID *)(param_1 + 0x28),"didFinishDownloadingToPath:",
                  *(undefined8 *)(param_1 + 0x30));
  }
  _objc_msgSend(*(ID *)(param_1 + 0x28),"setTask:",0);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x28),"minimizeView");
  _objc_msgSend(IVar1,"setHidden:",1);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x28),"minimizeView");
  _objc_msgSend(IVar1,"removeFromSuperview");
  return 0;
}

