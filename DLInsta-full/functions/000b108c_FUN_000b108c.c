/* Address: 000b108c | Name: FUN_000b108c | Body bytes: 20 */

void FUN_000b108c(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000b1098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}

