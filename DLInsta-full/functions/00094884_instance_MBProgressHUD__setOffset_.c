/* Address: 00094884 | Name: instance_MBProgressHUD__setOffset_ | Body bytes: 52 */

/* Function Stack Size: 0x20 bytes */

void MBProgressHUD::instance_MBProgressHUD__setOffset_(ID param_1,SEL param_2,CGPoint param_3)

{
  double *pdVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = param_3.field1_0x8;
  pdVar1 = (double *)(param_1 + (long)_offset);
  bVar2 = false;
  if ((param_3.field0_0x0 == *pdVar1) && (bVar2 = false, !NAN(dVar3) && !NAN(pdVar1[1]))) {
    bVar2 = dVar3 == pdVar1[1];
  }
  if (bVar2) {
    return;
  }
  *pdVar1 = param_3.field0_0x0;
  pdVar1[1] = dVar3;
  _objc_msgSend(param_1,"setNeedsUpdateConstraints");
  return;
}

