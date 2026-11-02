/* Address: 0009cb38 | Name: FUN_0009cb38 | Body bytes: 276 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0009cb38(long param_1)

{
  ID IVar1;
  undefined8 local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
  local_40 = _objc_msgSend(*(ID *)(param_1 + 0x20),"reason");
  IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_40,&local_48,1);
  IVar1 = NSError::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",
                     &cf_DLAACAudioConverterErrorDomain,0xfffffffffffffffd,IVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,IVar1);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

