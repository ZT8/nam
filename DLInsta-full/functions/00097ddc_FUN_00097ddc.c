/* Address: 00097ddc | Name: FUN_00097ddc | Body bytes: 284 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00097ddc(long param_1)

{
  undefined8 uVar1;
  ID IVar2;
  char acStack_150 [128];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e8260;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  _strncpy(acStack_150,*(char **)(param_1 + 0x20),0x80);
  ___strcpy_chk(&local_d0,acStack_150,0x80);
  uVar1 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_000e8270,&local_d0,0x80);
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::setObject_forKey_(IVar2,"setObject:forKey:",uVar1,DAT_001006b0);
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::synchronize(IVar2,"synchronize");
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

