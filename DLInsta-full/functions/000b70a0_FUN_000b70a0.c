/* Address: 000b70a0 | Name: FUN_000b70a0 | Body bytes: 20 */

void FUN_000b70a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000b70b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),1);
  return;
}

