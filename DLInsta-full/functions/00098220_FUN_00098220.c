/* Address: 00098220 | Name: FUN_00098220 | Body bytes: 216 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_00098220(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  code *local_48;
  code *pcStack_40;
  undefined8 local_38;
  
  puStack_58 = &local_60;
  local_60 = 0;
  local_50 = 0x3032000000;
  local_48 = FUN_00097af4;
  pcStack_40 = FUN_00097b04;
  local_38 = param_1;
  uVar1 = FUN_00098310();
  __Block_object_dispose(&local_60,8);
  return uVar1;
}

