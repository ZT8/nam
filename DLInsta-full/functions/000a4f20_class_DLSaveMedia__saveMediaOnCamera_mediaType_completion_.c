/* Address: 000a4f20 | Name: class_DLSaveMedia__saveMediaOnCamera_mediaType_completion_ | Body bytes: 420 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_completion_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,
               undefined4 param_6)

{
  ID IVar1;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID local_50;
  unsigned_long_long uStack_48;
  
  IVar1 = NSString::class((ID)&_OBJC_CLASS___NSString,"class");
  IVar1 = _objc_msgSend(param_3,"isKindOfClass:",IVar1);
  if ((int)IVar1 == 0 || 1 < param_4 - 1) {
    local_50 = param_3;
  }
  else {
    local_50 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",param_3);
  }
  IVar1 = PHPhotoLibrary::sharedPhotoLibrary((ID)&_OBJC_CLASS___PHPhotoLibrary,"sharedPhotoLibrary")
  ;
  local_78 = PTR___NSConcreteStackBlock_000e80d8;
  local_70 = 0xc2000000;
  local_68 = FUN_000a50c4;
  puStack_60 = &DAT_000e9a08;
  local_a0 = PTR___NSConcreteStackBlock_000e80d8;
  local_98 = 0xc2000000;
  local_90 = FUN_000a5230;
  puStack_88 = &DAT_000e9828;
  local_80 = param_5;
  local_58 = param_3;
  uStack_48 = param_4;
  PHPhotoLibrary::performChanges_completionHandler_
            (IVar1,"performChanges:completionHandler:",&local_78,&local_a0);
  return;
}

