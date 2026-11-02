/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLInstaDownloader downloadMultibileItems:isNeedMerge:completion:] | encoding v36@0:8@16B24@?28 */
/* Address: 000a17c0 | Name: instance_DLInstaDownloader__downloadMultibileItems_isNeedMerge_completion_ | Body bytes: 208 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__downloadMultibileItems_isNeedMerge_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  FUN_000a1890();
  return;
}


/* -[DLInstaDownloader downloadMediaURLString:mediaType:] | encoding v32@0:8@16Q24 */
/* Address: 000a2518 | Name: instance_DLInstaDownloader__downloadMediaURLString_mediaType_ | Body bytes: 156 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__downloadMediaURLString_mediaType_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  *(unsigned_long_long *)(param_1 + 0x20) = param_4;
  FUN_000a25b4();
  return;
}


/* -[DLInstaDownloader setupMinimizeView] | encoding v16@0:8 */
/* Address: 000a3184 | Name: instance_DLInstaDownloader__setupMinimizeView | Body bytes: 576 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__setupMinimizeView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  double in_d2;
  double in_d3;
  
  IVar1 = _objc_alloc(&objc::class_t::DLDownloaderMinimizeView);
  IVar1 = _objc_msgSend(IVar1,"init");
  instance_DLInstaDownloader__setMinimizeView_(param_1,"setMinimizeView:",IVar1);
  IVar1 = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
  UIScreen::bounds(IVar1,"bounds");
  IVar1 = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
  UIScreen::bounds(IVar1,"bounds");
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"setFrame:",in_d2 + -45.0,(in_d3 + -40.0) * 0.5,0x4044000000000000,
                0x4044000000000000);
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setCornerRadius:",0x4034000000000000);
  IVar1 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
  IVar2 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
  IVar1 = UITapGestureRecognizer::initWithTarget_action_
                    (IVar1,"initWithTarget:action:",param_1,"showHUDAgain");
  IVar2 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar2,"addGestureRecognizer:",IVar1);
  return;
}


/* -[DLInstaDownloader cancel] | encoding v16@0:8 */
/* Address: 000a33c4 | Name: instance_DLInstaDownloader__cancel | Body bytes: 104 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__cancel(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = instance_DLInstaDownloader__task(param_1,"task");
  instance_DLInstaDownloader__cancel(IVar1,"cancel");
  instance_DLInstaDownloader__setTask_(param_1,"setTask:",0);
  instance_DLInstaDownloader__removeViewAndHideHUD(param_1,"removeViewAndHideHUD");
  return;
}


/* -[DLInstaDownloader DLHUDHide] | encoding v16@0:8 */
/* Address: 000a342c | Name: instance_DLInstaDownloader__DLHUDHide | Body bytes: 88 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__DLHUDHide(ID param_1,SEL param_2)

{
  ID self;
  
  self = instance_DLInstaDownloader__hud(param_1,"hud");
  _objc_msgSend(self,"setHidden:",1);
  instance_DLInstaDownloader__whenHideHUD(param_1,"whenHideHUD");
  return;
}


/* -[DLInstaDownloader whenHideHUD] | encoding v16@0:8 */
/* Address: 000a3484 | Name: instance_DLInstaDownloader__whenHideHUD | Body bytes: 144 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__whenHideHUD(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  if (IVar1 == 0) {
    instance_DLInstaDownloader__setupMinimizeView(param_1,"setupMinimizeView");
    return;
  }
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"setHidden:",0);
  return;
}


/* -[DLInstaDownloader showHUDAgain] | encoding v16@0:8 */
/* Address: 000a3514 | Name: instance_DLInstaDownloader__showHUDAgain | Body bytes: 132 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__showHUDAgain(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"setHidden:",1);
  IVar1 = instance_DLInstaDownloader__hud(param_1,"hud");
  _objc_msgSend(IVar1,"setHidden:",0);
  return;
}


/* -[DLInstaDownloader hideHUDIfNeeded] | encoding v16@0:8 */
/* Address: 000a3598 | Name: instance_DLInstaDownloader__hideHUDIfNeeded | Body bytes: 68 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__hideHUDIfNeeded(ID param_1,SEL param_2)

{
  ID self;
  
  self = instance_DLInstaDownloader__hud(param_1,"hud");
  _objc_msgSend(self,"hideAnimated:",1);
  return;
}


/* -[DLInstaDownloader removeViewAndHideHUD] | encoding v16@0:8 */
/* Address: 000a35dc | Name: instance_DLInstaDownloader__removeViewAndHideHUD | Body bytes: 144 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__removeViewAndHideHUD(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"setHidden:",1);
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"removeFromSuperview");
  instance_DLInstaDownloader__hideHUDIfNeeded(param_1,"hideHUDIfNeeded");
  return;
}


/* -[DLInstaDownloader URLSession:downloadTask:didFinishDownloadingToURL:] | encoding v40@0:8@16@24@32 */
/* Address: 000a366c | Name: instance_DLInstaDownloader__URLSession_downloadTask_didFinishDownloadingToURL_ | Body bytes: 380 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

void DLInstaDownloader::
     instance_DLInstaDownloader__URLSession_downloadTask_didFinishDownloadingToURL_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID IStack_50;
  ID local_48;
  
  self = NSData::dataWithContentsOfURL_((ID)&_OBJC_CLASS___NSData,"dataWithContentsOfURL:",param_5);
  instance_DLInstaDownloader__mediaType(param_1,"mediaType");
  class_DLInstaDownloader__documentsDirectoryPath
            ((ID)&objc::class_t::DLInstaDownloader,"documentsDirectoryPath");
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______);
  NSData::writeToFile_atomically_(self,"writeToFile:atomically:",IVar2,1);
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_78 = PTR___NSConcreteStackBlock_000e80d8;
  local_70 = 0xc2000000;
  local_68 = FUN_000a37e8;
  puStack_60 = &DAT_000e9a38;
  local_58 = self;
  IStack_50 = param_1;
  local_48 = IVar2;
  _dispatch_async(puVar1,&local_78);
  return;
}


/* -[DLInstaDownloader didFinishDownloadingToPath:] | encoding v24@0:8@16 */
/* Address: 000a3898 | Name: instance_DLInstaDownloader__didFinishDownloadingToPath_ | Body bytes: 436 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__didFinishDownloadingToPath_
               (ID param_1,SEL param_2,ID param_3)

{
  SEL pcVar1;
  unsigned_long_long uVar2;
  ID IVar3;
  undefined8 uVar4;
  bool in_w5;
  
  instance_DLInstaDownloader__removeViewAndHideHUD(param_1,"removeViewAndHideHUD");
  pcVar1 = (SEL)NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",param_3);
  uVar2 = instance_DLInstaDownloader__mediaType(param_1,"mediaType");
  if (uVar2 == 3) {
    DLSaveMedia::class_DLSaveMedia__shareMediaFile_
              ((ID)&objc::class_t::DLSaveMedia,"shareMediaFile:",(ID)pcVar1);
  }
  else {
    IVar3 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar3 = NSUserDefaults::boolForKey_(IVar3,"boolForKey:",&cf_DL_EnableShareMedia);
    if ((IVar3 & 1) != 0) {
      uVar4 = FUN_00097ef8();
      uVar4 = FUN_00097a54(uVar4);
      IVar3 = _objc_msgSend(DAT_001006a8,"length");
      IVar3 = FUN_00097c68(uVar4,IVar3);
      IVar3 = _objc_msgSend(IVar3,"isEqualToString:",DAT_001006a8);
      if ((int)IVar3 != 0) {
        DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_needShare_
                  ((DLSaveMedia *)&objc::class_t::DLSaveMedia,
                   (ID)"saveMediaOnCamera:mediaType:needShare:",pcVar1,2,1,in_w5);
        return;
      }
    }
    DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_
              ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:",(ID)pcVar1,2);
  }
  return;
}


/* -[DLInstaDownloader URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:] | encoding v56@0:8@16@24q32q40q48 */
/* Address: 000a3a4c | Name: instance_DLInstaDownloader__URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite_ | Body bytes: 232 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void DLInstaDownloader::
     instance_DLInstaDownloader__URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6,
               long_long param_7)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID local_50;
  float local_48;
  
  lVar1 = 0;
  if (param_7 != 0) {
    lVar1 = (long)(param_6 * 100) / (long)param_7;
  }
  if (99 < lVar1) {
    lVar1 = 100;
  }
  IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__2_f__);
  puVar2 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_78 = PTR___NSConcreteStackBlock_000e80d8;
  local_70 = 0xc2000000;
  local_68 = FUN_000a3b34;
  puStack_60 = &DAT_000e9a68;
  local_58 = param_1;
  local_50 = IVar3;
  local_48 = (float)lVar1;
  _dispatch_async(puVar2,&local_78);
  return;
}


/* -[DLInstaDownloader hud] | encoding @16@0:8 */
/* Address: 000a42e8 | Name: instance_DLInstaDownloader__hud | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLInstaDownloader::instance_DLInstaDownloader__hud(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


/* -[DLInstaDownloader setHud:] | encoding v24@0:8@16 */
/* Address: 000a42f0 | Name: instance_DLInstaDownloader__setHud_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__setHud_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


/* -[DLInstaDownloader task] | encoding @16@0:8 */
/* Address: 000a42fc | Name: instance_DLInstaDownloader__task | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLInstaDownloader::instance_DLInstaDownloader__task(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


/* -[DLInstaDownloader setTask:] | encoding v24@0:8@16 */
/* Address: 000a4304 | Name: instance_DLInstaDownloader__setTask_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__setTask_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


/* -[DLInstaDownloader minimizeView] | encoding @16@0:8 */
/* Address: 000a4310 | Name: instance_DLInstaDownloader__minimizeView | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLInstaDownloader::instance_DLInstaDownloader__minimizeView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


/* -[DLInstaDownloader setMinimizeView:] | encoding v24@0:8@16 */
/* Address: 000a4318 | Name: instance_DLInstaDownloader__setMinimizeView_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__setMinimizeView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}


/* -[DLInstaDownloader mediaType] | encoding Q16@0:8 */
/* Address: 000a4324 | Name: instance_DLInstaDownloader__mediaType | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long DLInstaDownloader::instance_DLInstaDownloader__mediaType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x20);
}


/* -[DLInstaDownloader setMediaType:] | encoding v24@0:8Q16 */
/* Address: 000a432c | Name: instance_DLInstaDownloader__setMediaType_ | Body bytes: 8 */

/* Function Stack Size: 0x18 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__setMediaType_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x20) = param_3;
  return;
}


/* -[DLInstaDownloader .cxx_destruct] | encoding v16@0:8 */
/* Address: 000a4334 | Name: instance_DLInstaDownloader___cxx_destruct | Body bytes: 60 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* +[DLInstaDownloader downloadMedia:filePath:completion:] | encoding v40@0:8@16@24@?32 */
/* Address: 000a3c8c | Name: class_DLInstaDownloader__downloadMedia_filePath_completion_ | Body bytes: 264 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void DLInstaDownloader::class_DLInstaDownloader__downloadMedia_filePath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  dispatch_queue_t pdVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  ID local_38;
  
  pdVar1 = _dispatch_get_global_queue(0,0);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_000a3d94;
  puStack_50 = &DAT_000e9a98;
  local_48 = param_3;
  local_40 = param_4;
  local_38 = param_5;
  _dispatch_async(pdVar1,&local_68);
  return;
}


/* +[DLInstaDownloader documentsDirectoryPath] | encoding @16@0:8 */
/* Address: 000a405c | Name: class_DLInstaDownloader__documentsDirectoryPath | Body bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLInstaDownloader::class_DLInstaDownloader__documentsDirectoryPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",0);
  return IVar1;
}


/* +[DLInstaDownloader imageTypeFromData:] | encoding @24@0:8@16 */
/* Address: 000a40b8 | Name: class_DLInstaDownloader__imageTypeFromData_ | Body bytes: 560 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLInstaDownloader::class_DLInstaDownloader__imageTypeFromData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  byte *pbVar2;
  byte bVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  IVar1 = _objc_msgSend(param_3,"length");
  if (IVar1 < 8) {
    return 0;
  }
  IVar1 = _objc_retainAutorelease(param_3);
  pbVar2 = (byte *)_objc_msgSend(IVar1,"bytes");
  bVar3 = *pbVar2;
  if (bVar3 < 0x89) {
    if (bVar3 == 0x47) {
      if (pbVar2[1] != 0x49) {
        return 0;
      }
      if ((pbVar2[2] == 0x46) && (pbVar2[3] == 0x38)) {
        return (ID)&cf_gif;
      }
      goto LAB_000a4284;
    }
    if (bVar3 == 0x52) {
      if (pbVar2[1] != 0x49) {
        return 0;
      }
      if ((((pbVar2[2] == 0x46) && (pbVar2[3] == 0x46)) &&
          (IVar1 = _objc_msgSend(IVar1,"length"), 0xc < IVar1)) &&
         (((pbVar2[8] == 0x57 && (pbVar2[9] == 0x45)) &&
          ((pbVar2[10] == 0x42 && (pbVar2[0xb] == 0x50)))))) {
        return (ID)&cf_webp;
      }
      goto LAB_000a4284;
    }
  }
  else {
    if (bVar3 == 0x89) {
      if (pbVar2[1] != 0x50) {
        return 0;
      }
      if ((((pbVar2[2] == 0x4e) && (pbVar2[3] == 0x47)) && (pbVar2[4] == 0xd)) &&
         (((pbVar2[5] == 10 && (pbVar2[6] == 0x1a)) && (pbVar2[7] == 10)))) {
        return (ID)&cf_png;
      }
    }
    else {
      if (bVar3 != 0xff) goto LAB_000a4288;
      if (pbVar2[1] != 0xd8) {
        return 0;
      }
      if (pbVar2[2] == 0xff) {
        return (ID)&cf_jpg;
      }
    }
LAB_000a4284:
    bVar3 = *pbVar2;
  }
LAB_000a4288:
  if (bVar3 == 0x4d) {
    if (((pbVar2[1] == 0x4d) && (pbVar2[2] == 0)) && (pbVar2[3] == 0x2a)) goto LAB_000a42dc;
  }
  else if ((((bVar3 == 0x49) && (pbVar2[1] == 0x49)) && (pbVar2[2] == 0x2a)) && (pbVar2[3] == 0)) {
LAB_000a42dc:
    return (ID)&cf_tiff;
  }
  return 0;
}

