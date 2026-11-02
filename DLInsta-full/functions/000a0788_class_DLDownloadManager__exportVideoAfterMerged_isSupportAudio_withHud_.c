/* Address: 000a0788 | Name: class_DLDownloadManager__exportVideoAfterMerged_isSupportAudio_withHud_ | Body bytes: 412 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

void __thiscall
DLDownloadManager::class_DLDownloadManager__exportVideoAfterMerged_isSupportAudio_withHud_
          (DLDownloadManager *this,ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  SEL pcVar4;
  undefined4 uVar5;
  ulong uVar6;
  bool bVar7;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  SEL local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ulong local_58;
  
  puVar2 = PTR___dispatch_main_q_000e8268;
  bVar7 = (bool)param_5;
  uVar6 = (ulong)param_4;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  uVar5 = (undefined4)uVar6;
  local_78 = PTR___NSConcreteStackBlock_000e80d8;
  local_70 = 0xc2000000;
  local_68 = FUN_000a0924;
  puStack_60 = &DAT_000e9798;
  local_58 = (ulong)param_4;
  _dispatch_async(puVar2,&local_78);
  IVar3 = _objc_msgSend((ID)param_2,"status");
  if (IVar3 == 3) {
    if ((int)param_3 == 0) {
      IVar3 = _objc_msgSend((ID)param_2,"outputURL");
      local_a0 = puVar1;
      local_98 = 0xc2000000;
      local_90 = FUN_000a093c;
      puStack_88 = &DAT_000e9888;
      local_80 = param_2;
      class_DLDownloadManager__removeAudioFromVideoURL_handler_
                ((ID)this,"removeAudioFromVideoURL:handler:",IVar3,(ID)&local_a0,uVar5);
    }
    else {
      pcVar4 = (SEL)_objc_msgSend((ID)param_2,"outputURL");
      DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_showSuccess_
                ((DLSaveMedia *)&objc::class_t::DLSaveMedia,
                 (ID)"saveMediaOnCamera:mediaType:showSuccess:",pcVar4,2,1,bVar7);
    }
  }
  return;
}

