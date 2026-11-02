/* Address: 0004f38c | Name: FUN_0004f38c | Body bytes: 128 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0004f38c(long param_1)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = DLAACAudioConverter::class_DLAACAudioConverter__sharedInstance
                    ((ID)&objc::class_t::DLAACAudioConverter,"sharedInstance");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"buttonDelegate");
  DLAACAudioConverter::instance_DLAACAudioConverter__showImagePickerWithDelegate_
            (IVar1,"showImagePickerWithDelegate:",IVar2);
  return 0;
}

