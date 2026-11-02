/* Address: 00094f60 | Name: instance_MBProgressHUD__setMinShowTime_ | Body bytes: 16 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setMinShowTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_minShowTime) = param_3;
  return;
}

