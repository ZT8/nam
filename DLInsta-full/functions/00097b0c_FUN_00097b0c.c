/* Address: 00097b0c | Name: FUN_00097b0c | Body bytes: 348 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00097b0c(long param_1,ID param_2)

{
  undefined8 uVar1;
  
  FUN_000984fc();
  _objc_msgSend(param_2,"length");
  uVar1 = FUN_000987f8();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = uVar1;
  return 0;
}

