/* Address: 00060728 | Name: FUN_00060728 | Body bytes: 20 */

void FUN_00060728(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00060734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}

