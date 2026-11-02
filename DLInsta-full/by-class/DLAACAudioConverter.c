/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLAACAudioConverter showDocumentPickerWithDelegate:] | encoding v24@0:8@16 */
/* Address: 0009df78 | Name: instance_DLAACAudioConverter__showDocumentPickerWithDelegate_ | Body bytes: 332 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLAACAudioConverter::instance_DLAACAudioConverter__showDocumentPickerWithDelegate_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *local_48;
  cfstringStruct *pcStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  if (param_3 != 0) {
    *(ID *)(param_1 + 8) = param_3;
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIDocumentPickerViewController);
    local_48 = &cf_public_mpeg_4;
    pcStack_40 = &cf_public_audio;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_48,2);
    IVar1 = UIDocumentPickerViewController::initWithDocumentTypes_inMode_
                      (IVar1,"initWithDocumentTypes:inMode:",IVar2,0);
    UIDocumentPickerViewController::setDelegate_(IVar1,"setDelegate:",param_1);
    IVar2 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    _objc_msgSend(IVar2,"presentViewController:animated:completion:",IVar1,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[DLAACAudioConverter showImagePickerWithDelegate:] | encoding v24@0:8@16 */
/* Address: 0009e0c4 | Name: instance_DLAACAudioConverter__showImagePickerWithDelegate_ | Body bytes: 348 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLAACAudioConverter::instance_DLAACAudioConverter__showImagePickerWithDelegate_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  if (param_3 != 0) {
    *(ID *)(param_1 + 8) = param_3;
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIImagePickerController);
    IVar1 = UIImagePickerController::init(IVar1,"init");
    UIImagePickerController::setDelegate_(IVar1,"setDelegate:",param_1);
    UIImagePickerController::setSourceType_(IVar1,"setSourceType:",0);
    local_40 = *(undefined8 *)PTR__kUTTypeMovie_000e82c8;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_40,1);
    UIImagePickerController::setMediaTypes_(IVar1,"setMediaTypes:",IVar2);
    IVar2 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    _objc_msgSend(IVar2,"presentViewController:animated:completion:",IVar1,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[DLAACAudioConverter documentPicker:didPickDocumentsAtURLs:] | encoding v32@0:8@16@24 */
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


/* -[DLAACAudioConverter imagePickerController:didFinishPickingMediaWithInfo:] | encoding v32@0:8@16@24 */
/* Address: 0009edfc | Name: instance_DLAACAudioConverter__imagePickerController_didFinishPickingMediaWithInfo_ | Body bytes: 648 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLAACAudioConverter::
     instance_DLAACAudioConverter__imagePickerController_didFinishPickingMediaWithInfo_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  dispatch_queue_t pdVar4;
  double dVar5;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  ID local_d0;
  ID local_c8;
  ID IStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined *puStack_88;
  undefined1 *local_80;
  ID local_78;
  
  IVar2 = _objc_msgSend(param_4,"objectForKey:",
                        *(undefined8 *)PTR__UIImagePickerControllerMediaURL_000e80d0);
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
  dVar5 = (double)_CMTimeGetSeconds(&local_a0);
  if (300.0 <= (float)dVar5) {
    _objc_msgSend(param_3,"dismissViewControllerAnimated:completion:",1,
                  &PTR___NSConcreteGlobalBlock_000e9778);
  }
  else {
    IVar3 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
    IVar3 = MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
                      ((ID)&objc::class_t::MBProgressHUD,"showHUDAddedTo:animated:",IVar3,1);
    MBProgressHUD::instance_MBProgressHUD__setSquare_(IVar3,"setSquare:",1);
    puVar1 = PTR___NSConcreteStackBlock_000e80d8;
    local_f0 = PTR___NSConcreteStackBlock_000e80d8;
    local_e8 = 0xc2000000;
    local_e0 = FUN_0009f0a8;
    puStack_d8 = &DAT_000e97f8;
    local_d0 = IVar3;
    local_c8 = param_3;
    IStack_c0 = param_1;
    pdVar4 = _dispatch_get_global_queue(0,0);
    local_a0 = puVar1;
    uStack_98 = 0xc2000000;
    local_90 = FUN_0009c140;
    puStack_88 = &DAT_000e95d8;
    local_80 = (undefined1 *)&local_f0;
    local_78 = IVar2;
    _dispatch_async(pdVar4,&local_a0);
    _objc_msgSend(param_3,"dismissViewControllerAnimated:completion:",1,0);
  }
  return;
}


/* -[DLAACAudioConverter threadViewController] | encoding @16@0:8 */
/* Address: 0009f600 | Name: instance_DLAACAudioConverter__threadViewController | Body bytes: 12 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLAACAudioConverter::instance_DLAACAudioConverter__threadViewController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


/* -[DLAACAudioConverter setThreadViewController:] | encoding v24@0:8@16 */
/* Address: 0009f60c | Name: instance_DLAACAudioConverter__setThreadViewController_ | Body bytes: 8 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLAACAudioConverter::instance_DLAACAudioConverter__setThreadViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


/* -[DLAACAudioConverter .cxx_destruct] | encoding v16@0:8 */
/* Address: 0009f614 | Name: instance_DLAACAudioConverter___cxx_destruct | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLAACAudioConverter::instance_DLAACAudioConverter___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* +[DLAACAudioConverter sharedInstance] | encoding @16@0:8 */
/* Address: 0009ded0 | Name: class_DLAACAudioConverter__sharedInstance | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID DLAACAudioConverter::class_DLAACAudioConverter__sharedInstance(ID param_1,SEL param_2)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_000e80d8;
  local_30 = 0xc2000000;
  local_28 = FUN_0009df44;
  puStack_20 = &DAT_000e90a8;
  if (DAT_00100578 != -1) {
    local_18 = param_1;
    _dispatch_once(&DAT_00100578,&local_38);
  }
  return DAT_00100570;
}

