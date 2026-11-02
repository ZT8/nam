/* Address: 000869a0 | Name: FUN_000869a0 | Body bytes: 220 */

void FUN_000869a0(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_getClass("IGTapButton");
  DAT_00100178 = _class_getSuperclass();
  FUN_00086a7c(uVar1,"layoutSubviews",FUN_00086b6c,&DAT_00100180);
  uVar1 = _objc_getClass("IGActionableConfirmationToastView");
  DAT_00100188 = _class_getSuperclass();
  FUN_00086a7c(uVar1,"layoutSubviews",FUN_00086d7c,&DAT_00100190);
  uVar1 = _objc_getClass("IGAlertDialogView");
  uVar1 = _objc_allocateClassPair(uVar1,"DLIGAlertDialogView",0);
  DAT_00100198 = _class_getSuperclass();
  FUN_00086a7c(uVar1,"layoutSubviews",FUN_00086fcc,&DAT_001001a0);
  _objc_registerClassPair(uVar1);
  return;
}

