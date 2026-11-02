/* Address: 000950e8 | Name: instance_MBProgressHUD__setFinished_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setFinished_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_finished) = (char)param_3;
  return;
}

