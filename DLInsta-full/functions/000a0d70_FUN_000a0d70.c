/* Address: 000a0d70 | Name: FUN_000a0d70 | Body bytes: 16 */

void FUN_000a0d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000a0d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}

