/* Address: 00096e28 | Name: instance_MBProgressHUDRoundedButton2__intrinsicContentSize | Body bytes: 104 */

/* Function Stack Size: 0x10 bytes */

CGSize MBProgressHUDRoundedButton2::instance_MBProgressHUDRoundedButton2__intrinsicContentSize
                 (ID param_1,SEL param_2)

{
  ID IVar1;
  double extraout_d0;
  double dVar2;
  double in_d1;
  CGSize CVar3;
  ID local_30;
  class_t *pcStack_28;
  
  IVar1 = _objc_msgSend(param_1,"allControlEvents");
  if (IVar1 == 0) {
    dVar2 = *(double *)PTR__CGSizeZero_000e8048;
    in_d1 = *(double *)(PTR__CGSizeZero_000e8048 + 8);
  }
  else {
    pcStack_28 = &objc::class_t::MBProgressHUDRoundedButton2;
    local_30 = param_1;
    UIButton::intrinsicContentSize((ID)&local_30,"intrinsicContentSize");
    dVar2 = extraout_d0 + 5.0;
  }
  CVar3.field1_0x8 = in_d1;
  CVar3.field0_0x0 = dVar2;
  return CVar3;
}

