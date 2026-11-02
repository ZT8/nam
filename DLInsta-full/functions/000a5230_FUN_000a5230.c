/* Address: 000a5230 | Name: FUN_000a5230 | Body bytes: 20 */

void FUN_000a5230(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000a523c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}

