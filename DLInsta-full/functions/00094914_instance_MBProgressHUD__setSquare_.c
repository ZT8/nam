/* Address: 00094914 | Name: instance_MBProgressHUD__setSquare_ | Body bytes: 40 */

/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setSquare_(ID param_1,SEL param_2,bool param_3)

{
  if (*(byte *)(param_1 + (long)_square) == param_3) {
    return;
  }
  *(char *)(param_1 + (long)_square) = (char)param_3;
  _objc_msgSend(param_1,"setNeedsUpdateConstraints");
  return;
}

