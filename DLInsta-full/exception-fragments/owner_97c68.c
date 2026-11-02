
/* FRAGMENT entry=0x97c74 owner=0x97c68; not a source function; entry state unresolved */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00097c74(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined *puStack0000000000000000;
  undefined8 uStack0000000000000008;
  code *pcStack0000000000000010;
  undefined *puStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  
  puStack0000000000000000 = PTR___NSConcreteStackBlock_000e80d8;
  uStack0000000000000008 = 0xc2000000;
  pcStack0000000000000010 = FUN_000987f8;
  puStack0000000000000018 = &DAT_000e94f8;
  uStack0000000000000020 = param_1;
  uStack0000000000000028 = param_2;
  uVar1 = FUN_000987f8();
                    /* WARNING: Could not recover jumptable at 0x000bdb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000e8698)(uVar1);
  return;
}

