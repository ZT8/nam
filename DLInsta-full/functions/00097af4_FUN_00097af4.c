/* Address: 00097af4 | Name: FUN_00097af4 | Body bytes: 16 */

void FUN_00097af4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}

