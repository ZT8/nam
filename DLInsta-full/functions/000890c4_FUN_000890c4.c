/* Address: 000890c4 | Name: FUN_000890c4 | Body bytes: 16 */

void FUN_000890c4(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x22) = 0;
  *(undefined8 *)((long)param_1 + 0x1a) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

