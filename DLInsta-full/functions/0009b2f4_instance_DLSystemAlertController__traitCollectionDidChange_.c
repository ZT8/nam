/* Address: 0009b2f4 | Name: instance_DLSystemAlertController__traitCollectionDidChange_ | Body bytes: 196 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLSystemAlertController::instance_DLSystemAlertController__traitCollectionDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLSystemAlertController;
  local_40 = param_1;
  UIAlertController::traitCollectionDidChange_((ID)&local_40,"traitCollectionDidChange:",param_3);
  iVar1 = FUN_000bd0fc(2,0xd,0,0);
  if (iVar1 != 0) {
    IVar2 = _objc_msgSend(param_1,"traitCollection");
    IVar2 = _objc_msgSend(IVar2,"hasDifferentColorAppearanceComparedToTraitCollection:",param_3);
    if ((int)IVar2 != 0) {
      instance_DLSystemAlertController__updateActionColors(param_1,"updateActionColors");
    }
  }
  return;
}

