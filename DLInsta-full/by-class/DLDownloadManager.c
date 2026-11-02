/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* +[DLDownloadManager mergeVideosAsOneVideoWithHud:] | encoding v24@0:8@16 */
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


/* +[DLDownloadManager exportVideoAfterMerged:isSupportAudio:withHud:] | encoding v36@0:8@16B24@28 */
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


/* +[DLDownloadManager removeAudioFromVideoURL:handler:] | encoding v32@0:8@16@?24 */
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


/* +[DLDownloadManager isAnyMediaHaveAudio] | encoding B16@0:8 */
/* Address: 000a0d80 | Name: class_DLDownloadManager__isAnyMediaHaveAudio | Body bytes: 480 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool DLDownloadManager::class_DLDownloadManager__isAnyMediaHaveAudio(ID param_1,SEL param_2)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  IVar2 = class_DLDownloadManager__allMultiMediaFiles(param_1,"allMultiMediaFiles");
  IVar2 = _objc_msgSend(IVar2,"count");
  if (IVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = *(undefined8 *)PTR__AVMediaTypeAudio_000e8028;
    do {
      class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
      IVar2 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____d_mp4);
      IVar2 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",IVar2);
      IVar2 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,"assetWithURL:",IVar2);
      IVar2 = AVAsset::tracksWithMediaType_(IVar2,"tracksWithMediaType:",uVar5);
      IVar2 = AVAsset::count(IVar2,"count");
      if (IVar2 != 0) break;
      uVar4 = uVar4 + 1;
      IVar3 = class_DLDownloadManager__allMultiMediaFiles(param_1,"allMultiMediaFiles");
      IVar3 = _objc_msgSend(IVar3,"count");
    } while (uVar4 < IVar3);
    uVar1 = (uint)(IVar2 != 0);
  }
  return uVar1;
}


/* +[DLDownloadManager allMultiMediaFiles] | encoding @16@0:8 */
/* Address: 000a0f60 | Name: class_DLDownloadManager__allMultiMediaFiles | Body bytes: 152 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLDownloadManager::class_DLDownloadManager__allMultiMediaFiles(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
  IVar1 = NSFileManager::contentsOfDirectoryAtPath_error_
                    (IVar1,"contentsOfDirectoryAtPath:error:",IVar2,0);
  return IVar1;
}


/* +[DLDownloadManager removeAllMultiFilesInFolder] | encoding v16@0:8 */
/* Address: 000a0ff8 | Name: class_DLDownloadManager__removeAllMultiFilesInFolder | Body bytes: 532 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLDownloadManager::class_DLDownloadManager__removeAllMultiFilesInFolder(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
  IVar1 = NSFileManager::contentsOfDirectoryAtPath_error_
                    (IVar1,"contentsOfDirectoryAtPath:error:",IVar2,0);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = NSFileManager::countByEnumeratingWithState_objects_count_
                    (IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar1);
        }
        uVar6 = *(undefined8 *)(lStack_128 + IVar4 * 8);
        self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
        IVar3 = class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
        IVar3 = _objc_msgSend(IVar3,"stringByAppendingPathComponent:",uVar6);
        NSFileManager::removeItemAtPath_error_(self,"removeItemAtPath:error:",IVar3,0);
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = NSFileManager::countByEnumeratingWithState_objects_count_
                        (IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                         0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* +[DLDownloadManager multiMediaPath] | encoding @16@0:8 */
/* Address: 000a120c | Name: class_DLDownloadManager__multiMediaPath | Body bytes: 316 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLDownloadManager::class_DLDownloadManager__multiMediaPath(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_58;
  
  IVar1 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",0);
  IVar1 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_DLInstaMultiMedia);
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = NSFileManager::fileExistsAtPath_(IVar2,"fileExistsAtPath:",IVar1);
  if ((IVar2 & 1) == 0) {
    IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    local_58 = 0;
    NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
              (IVar2,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",IVar1,0,0
               ,&local_58);
  }
  return IVar1;
}

