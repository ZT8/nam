/* Address: 000117b4 | Name: FUN_000117b4 | Body bytes: 48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_000117b4(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  return *(undefined8 *)(param_2 + 0x28);
}

