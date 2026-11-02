/* Address: 00013b78 | Name: FUN_00013b78 | Body bytes: 36 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_00013b78(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_getAssociatedObject(param_1,&DAT_000ffc79);
  return uVar1;
}

