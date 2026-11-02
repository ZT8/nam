/* Address: 000a19e0 | Name: FUN_000a19e0 | Body bytes: 1840 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

undefined8
FUN_000a19e0(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  dispatch_group_t group;
  ID IVar5;
  ID IVar6;
  ulong uVar7;
  undefined *local_180;
  undefined8 local_178;
  code *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined *local_148;
  undefined8 local_140;
  code *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  ID local_120;
  ID local_118;
  dispatch_group_t local_110;
  undefined8 *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 *puStack_f0;
  undefined8 local_e8;
  int local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  long local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  code *local_90;
  code *pcStack_88;
  undefined8 local_80;
  
  _objc_msgSend(*(ID *)(param_1 + 0x20),"removeViewAndHideHUD");
  if ((param_2 == 0) || (param_3 != 1)) {
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
    IVar2 = FUN_00097a54(param_2);
    IVar2 = _objc_msgSend(IVar2,"length");
    if (IVar2 == 0) {
      FUN_00097d70("");
    }
    else {
      local_b0 = &local_a8;
      local_a8 = 0;
      local_98 = 0x3032000000;
      local_90 = FUN_000a2150;
      pcStack_88 = FUN_000a2160;
      local_80 = 0;
      local_d8 = PTR___NSConcreteStackBlock_000e80d8;
      local_d0 = 0xc2000000;
      local_c8 = FUN_000a2168;
      puStack_c0 = &DAT_000e9298;
      local_b8 = param_2;
      local_a0 = local_b0;
      FUN_000a2168(&local_d8,DAT_001006a8);
      IVar2 = _objc_msgSend(local_a0[5],"isEqualToString:",DAT_001006a8);
      if ((int)IVar2 == 0) {
        FUN_00097d70("");
      }
      else {
        IVar2 = _objc_retainAutorelease(param_2);
        _objc_msgSend(IVar2,"UTF8String");
        FUN_00097d70();
        IVar2 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
        IVar2 = MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
                          ((ID)&objc::class_t::MBProgressHUD,"showHUDAddedTo:animated:",IVar2,1);
        _objc_msgSend(*(ID *)(param_1 + 0x20),"setHud:",IVar2);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        IVar2 = _objc_msgSend(IVar2,"label");
        _objc_msgSend(IVar2,"setNumberOfLines:",0);
        uVar3 = FUN_0008c218(&cf_HUD_DOWNLOADING);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        IVar2 = _objc_msgSend(IVar2,"label");
        _objc_msgSend(IVar2,"setText:",uVar3);
        _objc_msgSend(*(ID *)(param_1 + 0x28),"count");
        IVar2 = NSString::stringWithFormat_
                          ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___lu_);
        IVar4 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        IVar4 = _objc_msgSend(IVar4,"detailsLabel");
        _objc_msgSend(IVar4,"setText:",IVar2);
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
        _objc_msgSend(IVar2,"setSquare:",1);
        group = _dispatch_group_create();
        puStack_f0 = &local_f8;
        local_f8 = 0;
        local_e8 = 0x2020000000;
        IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"count");
        local_e0 = (int)IVar2 + -1;
        uVar7 = 0;
        while( true ) {
          IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"count");
          puVar1 = PTR___dispatch_main_q_000e8268;
          if (IVar2 <= uVar7) break;
          _dispatch_group_enter(group);
          IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"objectAtIndex:",uVar7);
          _objc_msgSend(*(ID *)(param_1 + 0x28),"indexOfObject:",IVar2);
          IVar4 = _objc_msgSend(IVar2,"mediaType");
          if (IVar4 == 1) {
            DLDownloadManager::class_DLDownloadManager__multiMediaPath
                      ((ID)&objc::class_t::DLDownloadManager,"multiMediaPath");
            IVar4 = NSString::stringWithFormat_
                              ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____d_jpg);
          }
          else {
            IVar4 = _objc_msgSend(IVar2,"mediaType");
            if (IVar4 == 2) {
              DLDownloadManager::class_DLDownloadManager__multiMediaPath
                        ((ID)&objc::class_t::DLDownloadManager,"multiMediaPath");
              IVar4 = NSString::stringWithFormat_
                                ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____d_mp4);
            }
            else {
              IVar4 = 0;
            }
          }
          IVar5 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",IVar4);
          IVar6 = _objc_msgSend(IVar2,"url");
          local_148 = PTR___NSConcreteStackBlock_000e80d8;
          local_140 = 0xc2000000;
          local_138 = FUN_000a21fc;
          puStack_130 = &DAT_000e98b8;
          local_128 = *(undefined8 *)(param_1 + 0x20);
          local_108 = &local_f8;
          local_100 = *(undefined1 *)(param_1 + 0x38);
          local_120 = IVar2;
          local_118 = IVar5;
          local_110 = group;
          DLInstaDownloader::class_DLInstaDownloader__downloadMedia_filePath_completion_
                    ((ID)&objc::class_t::DLInstaDownloader,"downloadMedia:filePath:completion:",
                     IVar6,IVar4,(ID)&local_148,param_6);
          uVar7 = uVar7 + 1;
        }
        _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
        local_180 = PTR___NSConcreteStackBlock_000e80d8;
        local_178 = 0xc2000000;
        local_170 = FUN_000a2438;
        puStack_168 = &DAT_000e98e8;
        local_150 = *(undefined1 *)(param_1 + 0x38);
        local_160 = *(undefined8 *)(param_1 + 0x20);
        local_158 = *(undefined8 *)(param_1 + 0x30);
        _dispatch_group_notify(group,puVar1,&local_180);
        __Block_object_dispose(&local_f8,8);
      }
      __Block_object_dispose(&local_a8,8);
    }
  }
  return 0;
}

