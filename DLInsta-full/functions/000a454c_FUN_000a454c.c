/* Address: 000a454c | Name: FUN_000a454c | Body bytes: 124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000a454c(long param_1)

{
  ID IVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    IVar1 = UIImage::imageWithData_((ID)&_OBJC_CLASS___UIImage,"imageWithData:",lVar2);
    _objc_msgSend(*(ID *)(param_1 + 0x28),"setCoverImage:",IVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000a45c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar2 != 0);
  return;
}

