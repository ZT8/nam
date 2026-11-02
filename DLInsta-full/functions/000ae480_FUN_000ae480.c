/* Address: 000ae480 | Name: FUN_000ae480 | Body bytes: 100 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000ae480(long param_1,int param_2)

{
  ID self;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    self = *(ID *)(param_1 + 0x20);
    _objc_initWeak(auStack_28,self);
    _objc_msgSend(self,"dismissViewControllerAnimated:completion:",0,0);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

