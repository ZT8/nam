/* Address: 000a6948 | Name: FUN_000a6948 | Body bytes: 72 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a6948(long param_1)

{
  ID self;
  
  self = _objc_msgSend(*(ID *)(param_1 + 0x20),"dimmingView");
  _objc_msgSend(self,"setAlpha:",0x3ff0000000000000);
  return 0;
}

