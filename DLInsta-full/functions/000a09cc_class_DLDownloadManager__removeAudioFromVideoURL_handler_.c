/* Address: 000a09cc | Name: class_DLDownloadManager__removeAudioFromVideoURL_handler_ | Body bytes: 932 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLDownloadManager::class_DLDownloadManager__removeAudioFromVideoURL_handler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_130;
  undefined8 local_128;
  code *local_120;
  undefined *puStack_118;
  ID local_110;
  ID local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___AVMutableComposition);
  IVar1 = AVMutableComposition::init(IVar1,"init");
  uVar5 = *(undefined8 *)PTR__AVMediaTypeVideo_000e8030;
  IVar2 = AVMutableComposition::addMutableTrackWithMediaType_preferredTrackID_
                    (IVar1,"addMutableTrackWithMediaType:preferredTrackID:",uVar5,0);
  IVar3 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,"assetWithURL:",param_3);
  if (IVar3 == 0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
  }
  else {
    AVAsset::duration(IVar3,"duration",&local_b0);
  }
  uVar8 = *(undefined8 *)(PTR__kCMTimeZero_000e8290 + 8);
  uVar7 = *(undefined8 *)PTR__kCMTimeZero_000e8290;
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_000e8290 + 0x10);
  local_e0 = uVar7;
  uStack_d8 = uVar8;
  local_d0 = uVar6;
  _CMTimeRangeMake(&local_98,&local_e0,&local_b0);
  IVar3 = AVAsset::tracksWithMediaType_(IVar3,"tracksWithMediaType:",uVar5);
  IVar3 = AVAsset::objectAtIndex_(IVar3,"objectAtIndex:",0);
  uStack_d8 = uStack_90;
  local_e0 = local_98;
  uStack_c8 = uStack_80;
  local_d0 = local_88;
  uStack_b8 = uStack_70;
  local_c0 = local_78;
  local_100 = uVar7;
  uStack_f8 = uVar8;
  local_f0 = uVar6;
  AVMutableComposition::insertTimeRange_ofTrack_atTime_error_
            (IVar2,"insertTimeRange:ofTrack:atTime:error:",&local_e0,IVar3,&local_100,0);
  IVar2 = class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
  IVar2 = _objc_msgSend(IVar2,"stringByAppendingPathComponent:",&cf_DLMerge_1_mp4);
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSURL);
  IVar3 = NSURL::initFileURLWithPath_(IVar3,"initFileURLWithPath:",IVar2);
  IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar4 = NSFileManager::fileExistsAtPath_(IVar4,"fileExistsAtPath:",IVar2);
  if ((int)IVar4 != 0) {
    IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    NSFileManager::removeItemAtPath_error_(IVar4,"removeItemAtPath:error:",IVar2,0);
  }
  IVar2 = _objc_alloc(&_OBJC_CLASS___AVAssetExportSession);
  IVar1 = AVAssetExportSession::initWithAsset_presetName_
                    (IVar2,"initWithAsset:presetName:",IVar1,
                     *(undefined8 *)PTR__AVAssetExportPresetHighestQuality_000e8008);
  AVAssetExportSession::setOutputURL_(IVar1,"setOutputURL:",IVar3);
  AVAssetExportSession::setOutputFileType_
            (IVar1,"setOutputFileType:",*(undefined8 *)PTR__AVFileTypeMPEG4_000e8020);
  AVAssetExportSession::setShouldOptimizeForNetworkUse_(IVar1,"setShouldOptimizeForNetworkUse:",1);
  local_130 = PTR___NSConcreteStackBlock_000e80d8;
  local_128 = 0xc2000000;
  local_120 = FUN_000a0d70;
  puStack_118 = &DAT_000e95d8;
  local_110 = param_4;
  local_108 = IVar1;
  AVAssetExportSession::exportAsynchronouslyWithCompletionHandler_
            (IVar1,"exportAsynchronouslyWithCompletionHandler:",&local_130);
  return;
}

