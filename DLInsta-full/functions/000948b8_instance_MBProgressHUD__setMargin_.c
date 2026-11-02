/* Address: 000948b8 | Name: instance_MBProgressHUD__setMargin_ | Body bytes: 40 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setMargin_(ID param_1,SEL param_2,double param_3)

{
  if (*(double *)(param_1 + (long)_margin) == param_3) {
    return;
  }
  *(double *)(param_1 + (long)_margin) = param_3;
  _objc_msgSend(param_1,"setNeedsUpdateConstraints");
  return;
}

