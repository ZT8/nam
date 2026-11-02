/* Address: 0009ff6c | Name: class_DLDownloadManager__mergeVideosAsOneVideoWithHud_ | Body bytes: 1968 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLDownloadManager::class_DLDownloadManager__mergeVideosAsOneVideoWithHud_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *local_188;
  undefined8 local_180;
  code *local_178;
  undefined *puStack_170;
  ID local_168;
  ID local_160;
  ID local_158;
  undefined1 local_150;
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  _NSLog(&cf_mergingstarted);
  IVar3 = _objc_alloc(&_OBJC_CLASS___AVMutableComposition);
  IVar3 = AVMutableComposition::init(IVar3,"init");
  uVar12 = *(undefined8 *)PTR__AVMediaTypeVideo_000e8030;
  IVar4 = AVMutableComposition::addMutableTrackWithMediaType_preferredTrackID_
                    (IVar3,"addMutableTrackWithMediaType:preferredTrackID:",uVar12,0);
  uVar9 = *(undefined8 *)PTR__AVMediaTypeAudio_000e8028;
  IVar5 = AVMutableComposition::addMutableTrackWithMediaType_preferredTrackID_
                    (IVar3,"addMutableTrackWithMediaType:preferredTrackID:",uVar9,0);
  uVar14 = *(undefined8 *)(PTR__kCMTimeZero_000e8290 + 8);
  uVar13 = *(undefined8 *)PTR__kCMTimeZero_000e8290;
  uVar10 = *(undefined8 *)(PTR__kCMTimeZero_000e8290 + 0x10);
  local_90 = uVar13;
  uStack_88 = uVar14;
  local_80 = uVar10;
  IVar6 = class_DLDownloadManager__allMultiMediaFiles(param_1,"allMultiMediaFiles");
  IVar6 = _objc_msgSend(IVar6,"count");
  if (IVar6 == 0) {
    bVar1 = false;
  }
  else {
    uVar11 = 0;
    bVar1 = false;
    do {
      class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
      IVar6 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____d_mp4);
      IVar6 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",IVar6);
      IVar6 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,"assetWithURL:",IVar6);
      if (IVar6 != 0) {
        IVar7 = AVAsset::tracks(IVar6,"tracks");
        IVar7 = AVAsset::count(IVar7,"count");
        if (IVar7 != 0) {
          AVAsset::duration(IVar6,"duration",auStack_d8);
          local_110 = uVar13;
          uStack_108 = uVar14;
          local_100 = uVar10;
          _CMTimeRangeMake(&local_c0,&local_110,auStack_d8);
          IVar7 = AVAsset::tracksWithMediaType_(IVar6,"tracksWithMediaType:",uVar12);
          IVar7 = AVAsset::count(IVar7,"count");
          if (IVar7 != 0) {
            IVar7 = AVAsset::tracksWithMediaType_(IVar6,"tracksWithMediaType:",uVar12);
            IVar7 = AVAsset::objectAtIndex_(IVar7,"objectAtIndex:",0);
            uStack_108 = uStack_b8;
            local_110 = local_c0;
            uStack_f8 = uStack_a8;
            local_100 = uStack_b0;
            uStack_e8 = uStack_98;
            uStack_f0 = local_a0;
            uStack_128 = uStack_88;
            local_130 = local_90;
            local_120 = local_80;
            AVMutableComposition::insertTimeRange_ofTrack_atTime_error_
                      (IVar4,"insertTimeRange:ofTrack:atTime:error:",&local_110,IVar7,&local_130,0);
          }
          IVar7 = AVAsset::tracksWithMediaType_(IVar6,"tracksWithMediaType:",uVar9);
          IVar7 = AVAsset::count(IVar7,"count");
          if (IVar7 == 0) {
            bVar2 = class_DLDownloadManager__isAnyMediaHaveAudio(param_1,"isAnyMediaHaveAudio");
            if ((bVar2 & 1) == 0) {
              IVar8 = DLHelper::class_DLHelper__getFile_
                                ((ID)&objc::class_t::DLHelper,"getFile:",0xeda08);
              IVar8 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",IVar8);
              IVar8 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,"assetWithURL:",IVar8);
              IVar8 = AVAsset::tracksWithMediaType_(IVar8,"tracksWithMediaType:",uVar9);
              IVar8 = AVAsset::objectAtIndex_(IVar8,"objectAtIndex:",0);
              uStack_108 = uStack_b8;
              local_110 = local_c0;
              uStack_f8 = uStack_a8;
              local_100 = uStack_b0;
              uStack_e8 = uStack_98;
              uStack_f0 = local_a0;
              uStack_128 = uStack_88;
              local_130 = local_90;
              local_120 = local_80;
              AVMutableComposition::insertTimeRange_ofTrack_atTime_error_
                        (IVar5,"insertTimeRange:ofTrack:atTime:error:",&local_110,IVar8,&local_130,0
                        );
              goto LAB_000a0470;
            }
          }
          else {
            IVar8 = AVAsset::tracksWithMediaType_(IVar6,"tracksWithMediaType:",uVar9);
            IVar8 = AVAsset::objectAtIndex_(IVar8,"objectAtIndex:",0);
            uStack_108 = uStack_b8;
            local_110 = local_c0;
            uStack_f8 = uStack_a8;
            local_100 = uStack_b0;
            uStack_e8 = uStack_98;
            uStack_f0 = local_a0;
            uStack_128 = uStack_88;
            local_130 = local_90;
            local_120 = local_80;
            AVMutableComposition::insertTimeRange_ofTrack_atTime_error_
                      (IVar5,"insertTimeRange:ofTrack:atTime:error:",&local_110,IVar8,&local_130,0);
LAB_000a0470:
            bVar1 = IVar7 != 0;
          }
          AVAsset::duration(IVar6,"duration",auStack_148);
          uStack_128 = uStack_88;
          local_130 = local_90;
          local_120 = local_80;
          _CMTimeAdd(&local_110,&local_130,auStack_148);
          uStack_88 = uStack_108;
          local_90 = local_110;
          local_80 = local_100;
        }
      }
      uVar11 = uVar11 + 1;
      IVar6 = class_DLDownloadManager__allMultiMediaFiles(param_1,"allMultiMediaFiles");
      IVar6 = _objc_msgSend(IVar6,"count");
    } while (uVar11 < IVar6);
  }
  IVar4 = class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
  IVar4 = _objc_msgSend(IVar4,"stringByAppendingPathComponent:",&cf_DLMerge_mp4);
  IVar5 = _objc_alloc(&_OBJC_CLASS___NSURL);
  IVar5 = NSURL::initFileURLWithPath_(IVar5,"initFileURLWithPath:",IVar4);
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar6 = NSFileManager::fileExistsAtPath_(IVar6,"fileExistsAtPath:",IVar4);
  if ((IVar6 & 1) != 0) {
    IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    NSFileManager::removeItemAtPath_error_(IVar6,"removeItemAtPath:error:",IVar4,0);
  }
  IVar4 = _objc_alloc(&_OBJC_CLASS___AVAssetExportSession);
  IVar3 = AVAssetExportSession::initWithAsset_presetName_
                    (IVar4,"initWithAsset:presetName:",IVar3,
                     *(undefined8 *)PTR__AVAssetExportPresetHighestQuality_000e8008);
  AVAssetExportSession::setOutputURL_(IVar3,"setOutputURL:",IVar5);
  AVAssetExportSession::setOutputFileType_
            (IVar3,"setOutputFileType:",*(undefined8 *)PTR__AVFileTypeMPEG4_000e8020);
  local_188 = PTR___NSConcreteStackBlock_000e80d8;
  local_180 = 0xc2000000;
  local_178 = FUN_000a071c;
  puStack_170 = &DAT_000e9858;
  local_168 = param_1;
  local_160 = IVar3;
  local_158 = param_3;
  local_150 = bVar1;
  AVAssetExportSession::exportAsynchronouslyWithCompletionHandler_
            (IVar3,"exportAsynchronouslyWithCompletionHandler:",&local_188);
  return;
}

