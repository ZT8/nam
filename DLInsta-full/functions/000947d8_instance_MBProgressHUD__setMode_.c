/* Address: 000947d8 | Name: instance_MBProgressHUD__setMode_ | Body bytes: 40 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setMode_(ID param_1,SEL param_2,long_long param_3)

{
  if (*(long_long *)(param_1 + (long)_mode) == param_3) {
    return;
  }
  *(long_long *)(param_1 + (long)_mode) = param_3;
  instance_MBProgressHUD__updateIndicators(param_1,"updateIndicators");
  return;
}

