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

