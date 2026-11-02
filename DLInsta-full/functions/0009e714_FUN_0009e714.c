/* Address: 0009e714 | Name: FUN_0009e714 | Body bytes: 668 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009e714(long param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined8 uVar4;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  ID local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  _objc_msgSend(*(ID *)(param_1 + 0x20),"hideAnimated:",1);
  if (param_4 == 0) {
    _NSLog(&cf_ACCFile___);
    IVar2 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,"assetWithURL:",param_2);
    if (IVar2 == 0) {
      local_c8 = (undefined *)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
    }
    else {
      AVAsset::duration(IVar2,"duration",&local_c8);
    }
    uStack_a8 = uStack_c0;
    local_b0 = local_c8;
    local_a0 = (code *)local_b8;
    uVar4 = _CMTimeGetSeconds(&local_b0);
    IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"threadViewController");
    dVar3 = _dispatch_time(0,500000000);
    puVar1 = PTR___dispatch_main_q_000e8268;
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_b0 = PTR___NSConcreteStackBlock_000e80d8;
    uStack_a8 = 0xc2000000;
    local_a0 = FUN_0009dc9c;
    puStack_98 = &DAT_000e96e8;
    local_90 = param_3;
    local_88 = IVar2;
    local_80 = param_2;
    local_78 = uVar4;
    _dispatch_after(dVar3,puVar1,&local_b0);
  }
  else {
    _objc_msgSend(param_4,"localizedDescription");
    _NSLog(&cf___);
    IVar2 = _objc_msgSend(param_4,"localizedDescription");
    DLHelper::class_DLHelper__showMessageWithTitle_message_
              ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea568,IVar2);
  }
  return 0;
}

