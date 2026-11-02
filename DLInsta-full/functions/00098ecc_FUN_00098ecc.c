/* Address: 00098ecc | Name: FUN_00098ecc | Body bytes: 56 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00098ecc(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  return 0;
}

