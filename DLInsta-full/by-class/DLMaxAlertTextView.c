/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMaxAlertTextView layoutSubviews] | encoding v16@0:8 */
/* Address: 000a79ec | Name: instance_DLMaxAlertTextView__layoutSubviews | Body bytes: 140 */

/* Function Stack Size: 0x10 bytes */

void DLMaxAlertTextView::instance_DLMaxAlertTextView__layoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  double in_d2;
  double in_d3;
  CGSize CVar2;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLMaxAlertTextView;
  local_40 = param_1;
  UITextView::layoutSubviews((ID)&local_40,"layoutSubviews");
  _objc_msgSend(param_1,"bounds");
  CVar2 = instance_DLMaxAlertTextView__intrinsicContentSize(param_1,"intrinsicContentSize");
  bVar1 = false;
  if ((in_d2 == CVar2.field0_0x0) && (bVar1 = false, !NAN(in_d3) && !NAN(CVar2.field1_0x8))) {
    bVar1 = in_d3 == CVar2.field1_0x8;
  }
  if (!bVar1) {
    _objc_msgSend(param_1,"invalidateIntrinsicContentSize");
  }
  return;
}


/* -[DLMaxAlertTextView intrinsicContentSize] | encoding {CGSize=dd}16@0:8 */
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

