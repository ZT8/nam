/* Address: 0009ba1c | Name: FUN_0009ba1c | Body bytes: 736 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_0009ba1c(long param_1)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  ID local_a0;
  undefined8 local_98;
  ID local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  IVar2 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar2 = _objc_msgSend(IVar2,"firstObject");
  IVar2 = _objc_msgSend(IVar2,"stringByAppendingPathComponent:",&cf_DLAudio_m4a);
  IVar3 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",IVar2);
  IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar5 = NSFileManager::fileExistsAtPath_(IVar4,"fileExistsAtPath:",IVar2);
  if ((int)IVar5 != 0) {
    local_58 = 0;
    NSFileManager::removeItemAtPath_error_(IVar4,"removeItemAtPath:error:",IVar2,&local_58);
    local_60 = local_58;
    puVar1 = PTR___dispatch_main_q_000e8268;
    if (local_58 != 0) {
      _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
      local_88 = PTR___NSConcreteStackBlock_000e80d8;
      local_80 = 0xc2000000;
      local_78 = FUN_0009bcfc;
      puStack_70 = &DAT_000e95d8;
      local_68 = *(undefined8 *)(param_1 + 0x20);
      _dispatch_async(puVar1,&local_88);
      return 0;
    }
  }
  IVar2 = AVURLAsset::URLAssetWithURL_options_
                    ((ID)&_OBJC_CLASS___AVURLAsset,"URLAssetWithURL:options:",
                     *(undefined8 *)(param_1 + 0x28),0);
  IVar4 = _objc_alloc(&_OBJC_CLASS___AVAssetExportSession);
  IVar2 = AVAssetExportSession::initWithAsset_presetName_
                    (IVar4,"initWithAsset:presetName:",IVar2,
                     *(undefined8 *)PTR__AVAssetExportPresetAppleM4A_000e8000);
  AVAssetExportSession::setOutputFileType_
            (IVar2,"setOutputFileType:",*(undefined8 *)PTR__AVFileTypeAppleM4A_000e8018);
  AVAssetExportSession::setOutputURL_(IVar2,"setOutputURL:",IVar3);
  AVAssetExportSession::setAudioTimePitchAlgorithm_
            (IVar2,"setAudioTimePitchAlgorithm:",
             *(undefined8 *)PTR__AVAudioTimePitchAlgorithmSpectral_000e8010);
  local_c0 = PTR___NSConcreteStackBlock_000e80d8;
  local_b8 = 0xc2000000;
  local_b0 = FUN_0009bd10;
  puStack_a8 = &DAT_000e9608;
  local_98 = *(undefined8 *)(param_1 + 0x20);
  local_a0 = IVar2;
  local_90 = IVar3;
  AVAssetExportSession::exportAsynchronouslyWithCompletionHandler_
            (IVar2,"exportAsynchronouslyWithCompletionHandler:",&local_c0);
  return 0;
}

