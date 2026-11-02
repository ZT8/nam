/* Address: 000890d4 | Name: FUN_000890d4 | Body bytes: 16 */

void FUN_000890d4(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

