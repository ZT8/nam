/* Address: 0008f91c | Name: FUN_0008f91c | Body bytes: 232 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0008f91c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) = param_3;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = param_4;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) = param_2;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  return 0;
}

