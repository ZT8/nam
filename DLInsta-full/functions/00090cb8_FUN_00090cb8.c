/* Address: 00090cb8 | Name: FUN_00090cb8 | Body bytes: 28 */

void FUN_00090cb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00090ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,1);
  return;
}

