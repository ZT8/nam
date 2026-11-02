/* Address: 000a26d8 | Name: FUN_000a26d8 | Body bytes: 1868 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_000a26d8(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_110;
  undefined8 local_108;
  code *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  ID local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined *puStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  code *local_90;
  code *pcStack_88;
  undefined8 local_80;
  
  if (*(long *)(param_1 + 0x30) != 1) {
    _objc_msgSend(*(ID *)(param_1 + 0x20),"removeViewAndHideHUD");
  }
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  if ((param_2 == 0) || (param_3 != 1)) {
    _objc_msgSend(*(ID *)(param_1 + 0x20),"removeViewAndHideHUD");
    if ((param_3 & 0xfffffffffffffffe) == 2) {
      DLHelper::class_DLHelper__HUDWithState_((ID)&objc::class_t::DLHelper,"HUDWithState:",3);
    }
    else {
      IVar2 = FUN_0008c218(&cf_ALERT_UNKNOWN_ERROR);
      DLHelper::class_DLHelper__showMessageWithTitle_message_
                ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea568,IVar2);
    }
  }
  else {
    local_b0 = &local_a8;
    local_a8 = 0;
    local_98 = 0x3032000000;
    local_90 = FUN_000a2150;
    pcStack_88 = FUN_000a2160;
    local_80 = 0;
    local_e0 = PTR___NSConcreteStackBlock_000e80d8;
    local_d8 = 0xc2000000;
    local_d0 = FUN_000a2e84;
    puStack_c8 = &DAT_000e9978;
    local_b8 = *(undefined8 *)(param_1 + 0x28);
    local_c0 = param_2;
    local_a0 = local_b0;
    FUN_000a2e84(&local_e0,DAT_001006a8);
    _objc_msgSend(local_a0[5],"containsString:",*(undefined8 *)(param_1 + 0x28));
    IVar2 = _objc_msgSend(local_a0[5],"componentsSeparatedByString:",DAT_001005f0);
    IVar3 = _objc_msgSend(IVar2,"lastObject");
    _objc_msgSend(IVar3,"isEqualToString:",DAT_001006a8);
    _objc_msgSend(IVar2,"firstObject");
    lVar4 = _CFURLCreateWithString
                      (*(undefined8 *)PTR__kCFAllocatorDefault_000e8270,
                       *(undefined8 *)(param_1 + 0x28),0);
    if (((lVar4 != 0) && (lVar5 = _CFURLCopyScheme(lVar4), lVar5 != 0)) &&
       (lVar4 = _CFURLCopyHostName(lVar4), lVar4 != 0)) {
      if (*(long *)(param_1 + 0x30) == 1) {
        DLInstaDownloader::class_DLInstaDownloader__documentsDirectoryPath
                  ((ID)&objc::class_t::DLInstaDownloader,"documentsDirectoryPath");
        local_e8 = NSString::stringWithFormat_
                             ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______);
        local_110 = puVar1;
        local_108 = 0xc2000000;
        local_100 = FUN_000a2fec;
        puStack_f8 = &DAT_000e99a8;
        local_f0 = *(undefined8 *)(param_1 + 0x20);
        DLInstaDownloader::class_DLInstaDownloader__downloadMedia_filePath_completion_
                  ((ID)&objc::class_t::DLInstaDownloader,"downloadMedia:filePath:completion:",
                   *(ID *)(param_1 + 0x28),local_e8,(ID)&local_110,param_6);
      }
      else {
        IVar2 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
        IVar2 = MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
                          ((ID)&objc::class_t::MBProgressHUD,"showHUDAddedTo:animated:",IVar2,1);
        _objc_msgSend(*(ID *)(param_1 + 0x20),"setHud:",IVar2);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        _objc_msgSend(IVar2,"setMode:",3);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        IVar2 = _objc_msgSend(IVar2,"detailsLabel");
        _objc_msgSend(IVar2,"setText:",&cf_0_);
        uVar6 = FUN_0008c218(&cf_HUD_DOWNLOADING);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        IVar2 = _objc_msgSend(IVar2,"label");
        _objc_msgSend(IVar2,"setText:",uVar6);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        IVar2 = _objc_msgSend(IVar2,"button");
        uVar6 = FUN_0008c218(&cf_HUD_CANCEL);
        _objc_msgSend(IVar2,"setTitle:forState:",uVar6,0);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        IVar2 = _objc_msgSend(IVar2,"button");
        _objc_msgSend(IVar2,"addTarget:action:forControlEvents:",*(undefined8 *)(param_1 + 0x20),
                      "cancel",0x40);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        IVar2 = _objc_msgSend(IVar2,"hideButton");
        _objc_msgSend(IVar2,"setTitle:forState:",&cf__,0);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        IVar2 = _objc_msgSend(IVar2,"hideButton");
        _objc_msgSend(IVar2,"addTarget:action:forControlEvents:",*(undefined8 *)(param_1 + 0x20),
                      "DLHUDHide",0x40);
        IVar2 = NSURLSessionConfiguration::defaultSessionConfiguration
                          ((ID)&_OBJC_CLASS___NSURLSessionConfiguration,
                           "defaultSessionConfiguration");
        IVar2 = NSURLSession::sessionWithConfiguration_delegate_delegateQueue_
                          ((ID)&_OBJC_CLASS___NSURLSession,
                           "sessionWithConfiguration:delegate:delegateQueue:",IVar2,
                           *(undefined8 *)(param_1 + 0x20),0);
        IVar3 = NSURL::URLWithString_
                          ((ID)&_OBJC_CLASS___NSURL,"URLWithString:",*(undefined8 *)(param_1 + 0x28)
                          );
        IVar2 = NSURLSession::downloadTaskWithURL_(IVar2,"downloadTaskWithURL:",IVar3);
        _objc_msgSend(*(ID *)(param_1 + 0x20),"setTask:",IVar2);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"task");
        _objc_msgSend(IVar2,"resume");
      }
    }
    __Block_object_dispose(&local_a8,8);
  }
  return 0;
}

