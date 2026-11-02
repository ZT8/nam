/* Address: 0009e0c4 | Name: instance_DLAACAudioConverter__showImagePickerWithDelegate_ | Body bytes: 348 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLAACAudioConverter::instance_DLAACAudioConverter__showImagePickerWithDelegate_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  if (param_3 != 0) {
    *(ID *)(param_1 + 8) = param_3;
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIImagePickerController);
    IVar1 = UIImagePickerController::init(IVar1,"init");
    UIImagePickerController::setDelegate_(IVar1,"setDelegate:",param_1);
    UIImagePickerController::setSourceType_(IVar1,"setSourceType:",0);
    local_40 = *(undefined8 *)PTR__kUTTypeMovie_000e82c8;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_40,1);
    UIImagePickerController::setMediaTypes_(IVar1,"setMediaTypes:",IVar2);
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

