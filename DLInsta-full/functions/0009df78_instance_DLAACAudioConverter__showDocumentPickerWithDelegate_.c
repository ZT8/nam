/* Address: 0009df78 | Name: instance_DLAACAudioConverter__showDocumentPickerWithDelegate_ | Body bytes: 332 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLAACAudioConverter::instance_DLAACAudioConverter__showDocumentPickerWithDelegate_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *local_48;
  cfstringStruct *pcStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  if (param_3 != 0) {
    *(ID *)(param_1 + 8) = param_3;
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIDocumentPickerViewController);
    local_48 = &cf_public_mpeg_4;
    pcStack_40 = &cf_public_audio;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_48,2);
    IVar1 = UIDocumentPickerViewController::initWithDocumentTypes_inMode_
                      (IVar1,"initWithDocumentTypes:inMode:",IVar2,0);
    UIDocumentPickerViewController::setDelegate_(IVar1,"setDelegate:",param_1);
    IVar2 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    _objc_msgSend(IVar2,"presentViewController:animated:completion:",IVar1,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

