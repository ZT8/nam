/* Address: 0008f904 | Name: FUN_0008f904 | Body bytes: 16 */

void FUN_0008f904(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}

