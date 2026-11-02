/* Address: 00097f04 | Name: FUN_00097f04 | Body bytes: 304 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

cfstringStruct * FUN_00097f04(void)

{
  ID IVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::objectForKey_(IVar1,"objectForKey:",DAT_001006b0);
  if (IVar1 == 0) {
    pcVar3 = &cf___;
  }
  else {
    IVar1 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar1 = NSUserDefaults::objectForKey_(IVar1,"objectForKey:",DAT_001006b0);
    uVar2 = _CFDataGetLength(IVar1);
    _CFDataGetBytes(IVar1,0,uVar2,auStack_c8);
    pcVar3 = (cfstringStruct *)
             NSString::stringWithCString_encoding_
                       ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",auStack_c8,4);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pcVar3;
}

