/* Address: 000a7a78 | Name: instance_DLMaxAlertTextView__intrinsicContentSize | Body bytes: 160 */

/* Function Stack Size: 0x10 bytes */

CGSize DLMaxAlertTextView::instance_DLMaxAlertTextView__intrinsicContentSize(ID param_1,SEL param_2)

{
  double extraout_d0;
  double extraout_d0_00;
  double in_d1;
  double dVar1;
  double in_d2;
  double in_d3;
  CGSize CVar2;
  
  _objc_msgSend(param_1,"contentSize");
  dVar1 = in_d1;
  _objc_msgSend(param_1,"textContainerInset");
  _objc_msgSend(param_1,"textContainerInset");
  _objc_msgSend(param_1,"textContainerInset");
  _objc_msgSend(param_1,"textContainerInset");
  CVar2.field1_0x8 = in_d1 + (extraout_d0_00 + in_d2) * 0.5;
  CVar2.field0_0x0 = extraout_d0 + (dVar1 + in_d3) * 0.5;
  return CVar2;
}

