/* Address: 0009e220 | Name: instance_DLAACAudioConverter__documentPicker_didPickDocumentsAtURLs_ | Body bytes: 836 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void DLAACAudioConverter::instance_DLAACAudioConverter__documentPicker_didPickDocumentsAtURLs_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  dispatch_queue_t pdVar5;
  cfstringStruct *pcVar6;
  undefined **ppuVar7;
  double dVar8;
  undefined *local_118;
  undefined8 local_110;
  code *local_108;
  undefined *puStack_100;
  ID local_f8;
  ID IStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  ID local_c8;
  ID IStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined *puStack_88;
  undefined **local_80;
  ID local_78;
  
  IVar2 = _objc_msgSend(param_4,"firstObject");
  IVar3 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,"assetWithURL:",IVar2);
  if (IVar3 == 0) {
    local_b8 = (undefined *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
  }
  else {
    AVAsset::duration(IVar3,"duration",&local_b8);
  }
  uStack_98 = uStack_b0;
  local_a0 = local_b8;
  local_90 = (code *)local_a8;
  dVar8 = (double)_CMTimeGetSeconds(&local_a0);
  IVar4 = AVAsset::tracksWithMediaType_
                    (IVar3,"tracksWithMediaType:",*(undefined8 *)PTR__AVMediaTypeVideo_000e8030);
  IVar4 = AVAsset::count(IVar4,"count");
  IVar3 = AVAsset::tracksWithMediaType_
                    (IVar3,"tracksWithMediaType:",*(undefined8 *)PTR__AVMediaTypeAudio_000e8028);
  AVAsset::count(IVar3,"count");
  if (300.0 <= (float)dVar8) {
    if (IVar4 == 0) {
      pcVar6 = &cf_Pleaseselectaaudiofilethatislessthan5minuteslong_;
    }
    else {
      pcVar6 = &cf_Pleaseselectavideofilethatislessthan5minuteslong_;
    }
    DLHelper::class_DLHelper__showMessageWithTitle_message_
              ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea568,(ID)pcVar6);
  }
  else {
    IVar3 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
    IVar3 = MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
                      ((ID)&objc::class_t::MBProgressHUD,"showHUDAddedTo:animated:",IVar3,1);
    MBProgressHUD::instance_MBProgressHUD__setSquare_(IVar3,"setSquare:",1);
    puVar1 = PTR___NSConcreteStackBlock_000e80d8;
    if (IVar4 == 0) {
      local_118 = PTR___NSConcreteStackBlock_000e80d8;
      local_110 = 0xc2000000;
      local_108 = FUN_0009e9b0;
      puStack_100 = &DAT_000e9748;
      ppuVar7 = &local_118;
      local_f8 = IVar3;
      IStack_f0 = param_1;
      pdVar5 = _dispatch_get_global_queue(0,0);
      local_90 = FUN_0009ba1c;
    }
    else {
      local_e8 = PTR___NSConcreteStackBlock_000e80d8;
      local_e0 = 0xc2000000;
      local_d8 = FUN_0009e564;
      puStack_d0 = &DAT_000e9748;
      ppuVar7 = &local_e8;
      local_c8 = IVar3;
      IStack_c0 = param_1;
      pdVar5 = _dispatch_get_global_queue(0,0);
      local_90 = FUN_0009c140;
    }
    uStack_98 = 0xc2000000;
    local_a0 = puVar1;
    puStack_88 = &DAT_000e95d8;
    local_80 = ppuVar7;
    local_78 = IVar2;
    _dispatch_async(pdVar5,&local_a0);
  }
  return;
}

