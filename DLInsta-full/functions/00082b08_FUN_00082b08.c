/* Address: 00082b08 | Name: FUN_00082b08 | Body bytes: 16 */

void FUN_00082b08(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}

