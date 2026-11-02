/* Address: 000bc0f0 | Name: instance_DLMultiMediaViewController__tableView_didSelectRowAtIndexPath_ | Body bytes: 456 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLMultiMediaViewController::
     instance_DLMultiMediaViewController__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  char *pcVar4;
  
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  IVar1 = _objc_msgSend(param_3,"cellForRowAtIndexPath:",param_4);
  IVar1 = _objc_msgSend(IVar1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"text");
  uVar2 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
  IVar1 = _objc_msgSend(IVar1,"isEqualToString:",uVar2);
  if ((int)IVar1 == 0) {
    IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
    IVar1 = _objc_msgSend(IVar1,"count");
    IVar3 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    IVar3 = _objc_msgSend(IVar3,"count");
    if (IVar1 == IVar3) {
      pcVar4 = "didPressUnselectAllMedia";
    }
    else {
      pcVar4 = "didPressSelectAllMedia";
    }
  }
  else {
    pcVar4 = "didPressDownloadMedia";
  }
  instance_DLMultiMediaViewController__didPressSelectAllMedia(param_1,pcVar4);
  _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",param_4,1);
  return;
}

