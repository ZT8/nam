/* Address: 000a2fec | Name: FUN_000a2fec | Body bytes: 408 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a2fec(long param_1,int param_2)

{
  SEL pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 extraout_x0;
  bool in_w5;
  
  _objc_msgSend(*(ID *)(param_1 + 0x20),"removeViewAndHideHUD");
  if (param_2 == 0) {
    DLHelper::class_DLHelper__HUDWithState_((ID)&objc::class_t::DLHelper,"HUDWithState:",4);
    return extraout_x0;
  }
  pcVar1 = (SEL)NSURL::fileURLWithPath_
                          ((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",
                           *(undefined8 *)(param_1 + 0x28));
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_EnableShareMedia);
  if ((IVar2 & 1) != 0) {
    uVar3 = FUN_00097ef8();
    uVar3 = FUN_00097a54(uVar3);
    IVar2 = _objc_msgSend(DAT_001006a8,"length");
    IVar2 = FUN_00097c68(uVar3,IVar2);
    IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
    if ((int)IVar2 != 0) {
      DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_needShare_
                ((DLSaveMedia *)&objc::class_t::DLSaveMedia,
                 (ID)"saveMediaOnCamera:mediaType:needShare:",pcVar1,1,1,in_w5);
      return 0;
    }
  }
  DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_
            ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:",(ID)pcVar1,1);
  return 0;
}

