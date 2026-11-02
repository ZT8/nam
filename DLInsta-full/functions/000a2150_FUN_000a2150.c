/* Address: 000a2150 | Name: FUN_000a2150 | Body bytes: 16 */

void FUN_000a2150(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}

