/* Address: 0009c140 | Name: FUN_0009c140 | Body bytes: 1100 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_0009c140(long param_1)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  undefined *local_1b8;
  undefined8 local_1b0;
  code *local_1a8;
  undefined *puStack_1a0;
  ID local_198;
  undefined8 local_190;
  ID local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  IVar2 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar2 = _objc_msgSend(IVar2,"firstObject");
  IVar2 = _objc_msgSend(IVar2,"stringByAppendingPathComponent:",&cf_DLAudio_m4a);
  IVar3 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",IVar2);
  IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar5 = NSFileManager::fileExistsAtPath_(IVar4,"fileExistsAtPath:",IVar2);
  if ((int)IVar5 != 0) {
    local_68 = 0;
    NSFileManager::removeItemAtPath_error_(IVar4,"removeItemAtPath:error:",IVar2,&local_68);
    local_70 = local_68;
    puVar1 = PTR___dispatch_main_q_000e8268;
    if (local_68 != 0) {
      _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
      local_98 = PTR___NSConcreteStackBlock_000e80d8;
      local_90 = 0xc2000000;
      local_88 = FUN_0009c64c;
      puStack_80 = &DAT_000e95d8;
      local_78 = *(undefined8 *)(param_1 + 0x20);
      _dispatch_async(puVar1,&local_98);
      return 0;
    }
  }
  IVar2 = AVAsset::assetWithURL_
                    ((ID)&_OBJC_CLASS___AVAsset,"assetWithURL:",*(undefined8 *)(param_1 + 0x28));
  IVar4 = AVAsset::tracksWithMediaType_
                    (IVar2,"tracksWithMediaType:",*(undefined8 *)PTR__AVMediaTypeAudio_000e8028);
  IVar4 = AVAsset::count(IVar4,"count");
  puVar1 = PTR___dispatch_main_q_000e8268;
  if (IVar4 == 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 != 0) {
      _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
      local_c0 = PTR___NSConcreteStackBlock_000e80d8;
      local_b8 = 0xc2000000;
      local_b0 = FUN_0009c660;
      puStack_a8 = &DAT_000e92f8;
      local_a0 = lVar6;
      _dispatch_async(puVar1,&local_c0);
    }
  }
  else {
    IVar4 = _objc_alloc(&_OBJC_CLASS___AVAssetExportSession);
    IVar4 = AVAssetExportSession::initWithAsset_presetName_
                      (IVar4,"initWithAsset:presetName:",IVar2,
                       *(undefined8 *)PTR__AVAssetExportPresetAppleM4A_000e8000);
    puVar1 = PTR___dispatch_main_q_000e8268;
    if (IVar4 == 0) {
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 != 0) {
        _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
        local_e8 = PTR___NSConcreteStackBlock_000e80d8;
        local_e0 = 0xc2000000;
        local_d8 = FUN_0009c754;
        puStack_d0 = &DAT_000e92f8;
        local_c8 = lVar6;
        _dispatch_async(puVar1,&local_e8);
      }
    }
    else {
      AVAssetExportSession::setOutputURL_(IVar4,"setOutputURL:",IVar3);
      AVAssetExportSession::setOutputFileType_
                (IVar4,"setOutputFileType:",*(undefined8 *)PTR__AVFileTypeAppleM4A_000e8018);
      if (IVar2 == 0) {
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
      }
      else {
        AVAsset::duration(IVar2,"duration",&local_130);
      }
      uStack_148 = *(undefined8 *)(PTR__kCMTimeZero_000e8290 + 8);
      local_150 = *(undefined8 *)PTR__kCMTimeZero_000e8290;
      local_140 = *(undefined8 *)(PTR__kCMTimeZero_000e8290 + 0x10);
      _CMTimeRangeMake(&local_118,&local_150,&local_130);
      uStack_178 = uStack_110;
      local_180 = local_118;
      uStack_168 = uStack_100;
      uStack_170 = local_108;
      uStack_158 = uStack_f0;
      local_160 = local_f8;
      AVAssetExportSession::setTimeRange_(IVar4,"setTimeRange:",&local_180);
      local_1b8 = PTR___NSConcreteStackBlock_000e80d8;
      local_1b0 = 0xc2000000;
      local_1a8 = FUN_0009c848;
      puStack_1a0 = &DAT_000e9608;
      local_190 = *(undefined8 *)(param_1 + 0x20);
      local_198 = IVar4;
      local_188 = IVar3;
      AVAssetExportSession::exportAsynchronouslyWithCompletionHandler_
                (IVar4,"exportAsynchronouslyWithCompletionHandler:",&local_1b8);
    }
  }
  return 0;
}

