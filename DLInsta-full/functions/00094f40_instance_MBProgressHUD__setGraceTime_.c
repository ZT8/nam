/* Address: 00094f40 | Name: instance_MBProgressHUD__setGraceTime_ | Body bytes: 16 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setGraceTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_graceTime) = param_3;
  return;
}

