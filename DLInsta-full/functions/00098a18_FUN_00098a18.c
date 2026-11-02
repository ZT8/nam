/* Address: 00098a18 | Name: FUN_00098a18 | Body bytes: 284 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00098a18(long param_1)

{
  ID IVar1;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  code *local_48;
  code *pcStack_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)(param_1 + 0x20);
  puStack_58 = &local_60;
  local_60 = 0;
  local_50 = 0x3032000000;
  local_48 = FUN_00097af4;
  pcStack_40 = FUN_00097b04;
  IVar1 = FUN_00098310();
  __Block_object_dispose(&local_60,8);
  IVar1 = _objc_msgSend(IVar1,"componentsSeparatedByString:",DAT_001005e0);
  *(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = IVar1;
  return 0;
}

