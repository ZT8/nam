/* Address: 000950d8 | Name: instance_MBProgressHUD__hasFinished | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool MBProgressHUD::instance_MBProgressHUD__hasFinished(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_finished);
}

