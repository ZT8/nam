/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* +[DLSaveMedia shareMediaFile:] | encoding v24@0:8@16 */
/* Address: 000a4744 | Name: class_DLSaveMedia__shareMediaFile_ | Body bytes: 148 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLSaveMedia::class_DLSaveMedia__shareMediaFile_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_48 = PTR___NSConcreteStackBlock_000e80d8;
  local_40 = 0xc2000000;
  local_38 = FUN_000a47d8;
  puStack_30 = &DAT_000e9798;
  local_28 = param_3;
  _dispatch_async(puVar1,&local_48);
  return;
}


/* +[DLSaveMedia saveMediaOnCamera:mediaType:needShare:] | encoding v36@0:8@16Q24B32 */
/* Address: 000a4a64 | Name: class_DLSaveMedia__saveMediaOnCamera_mediaType_needShare_ | Body bytes: 252 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

void __thiscall
DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_needShare_
          (DLSaveMedia *this,ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
          bool param_5)

{
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  SEL local_78;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  SEL local_50;
  ID IStack_48;
  
  if ((int)param_4 == 0) {
    class_DLSaveMedia__saveMediaOnCamera_mediaType_
              ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:",(ID)param_2,param_3);
  }
  else {
    local_70 = PTR___NSConcreteStackBlock_000e80d8;
    local_68 = 0xc2000000;
    local_60 = FUN_000a4b60;
    puStack_58 = &DAT_000e9ac8;
    local_98 = PTR___NSConcreteStackBlock_000e80d8;
    local_90 = 0xc2000000;
    local_88 = FUN_000a4b7c;
    puStack_80 = &DAT_000e9798;
    local_78 = param_2;
    local_50 = param_2;
    IStack_48 = param_3;
    DLHelper::class_DLHelper__showConfirmMessageSave_share_
              ((ID)&objc::class_t::DLHelper,"showConfirmMessageSave:share:",(ID)&local_70,
               (int)&local_98,param_4,param_5);
  }
  return;
}


/* +[DLSaveMedia saveMediaOnCamera:mediaType:showSuccess:] | encoding v36@0:8@16Q24B32 */
/* Address: 000a4e88 | Name: class_DLSaveMedia__saveMediaOnCamera_mediaType_showSuccess_ | Body bytes: 40 */

/* Function Stack Size: 0x24 bytes */

void __thiscall
DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_showSuccess_
          (DLSaveMedia *this,ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
          bool param_5)

{
  if ((int)param_4 == 0) {
    class_DLSaveMedia__saveMediaOnCamera_mediaType_completion_
              ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:completion:",(ID)param_2
               ,param_3,0,param_5);
    return;
  }
  class_DLSaveMedia__saveMediaOnCamera_mediaType_
            ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:",(ID)param_2,param_3);
  return;
}


/* +[DLSaveMedia saveMediaOnCamera:mediaType:] | encoding v32@0:8@16Q24 */
/* Address: 000a4eb0 | Name: class_DLSaveMedia__saveMediaOnCamera_mediaType_ | Body bytes: 28 */

/* Function Stack Size: 0x20 bytes */

void DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined4 in_w5;
  
  class_DLSaveMedia__saveMediaOnCamera_mediaType_completion_
            ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:completion:",param_3,
             param_4,0xe9af8,in_w5);
  return;
}


/* +[DLSaveMedia saveMediaOnCamera:mediaType:completion:] | encoding v40@0:8@16Q24@?32 */
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


/* +[DLSaveMedia showHUDInThreadWithState:] | encoding v24@0:8Q16 */
/* Address: 000a5244 | Name: class_DLSaveMedia__showHUDInThreadWithState_ | Body bytes: 112 */

/* Function Stack Size: 0x18 bytes */

void DLSaveMedia::class_DLSaveMedia__showHUDInThreadWithState_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  unsigned_long_long local_28;
  
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_48 = PTR___NSConcreteStackBlock_000e80d8;
  local_40 = 0xc0000000;
  local_38 = FUN_000a52b4;
  puStack_30 = &DAT_000e8978;
  local_28 = param_3;
  _dispatch_async(puVar1,&local_48);
  return;
}


/* +[DLSaveMedia clearCacheIfNeeded] | encoding v16@0:8 */
/* Address: 000a52d0 | Name: class_DLSaveMedia__clearCacheIfNeeded | Body bytes: 328 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLSaveMedia::class_DLSaveMedia__clearCacheIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",0);
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar3 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_DLVideo_mp4);
  NSFileManager::removeItemAtPath_error_(IVar2,"removeItemAtPath:error:",IVar3,0);
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar1 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_DLImage_jpg);
  NSFileManager::removeItemAtPath_error_(IVar2,"removeItemAtPath:error:",IVar1,0);
  return;
}

