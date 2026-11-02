/* Address: 0009a8ec | Name: FUN_0009a8ec | Body bytes: 32 */

void FUN_0009a8ec(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0009a908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1);
  return;
}

