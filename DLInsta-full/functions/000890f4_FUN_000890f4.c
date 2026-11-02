/* Address: 000890f4 | Name: FUN_000890f4 | Body bytes: 20 */

void FUN_000890f4(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x33) = 0;
  *(undefined8 *)((long)param_1 + 0x2b) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

