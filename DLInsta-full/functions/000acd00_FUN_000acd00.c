/* Address: 000acd00 | Name: FUN_000acd00 | Body bytes: 16 */

void FUN_000acd00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000acd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}

