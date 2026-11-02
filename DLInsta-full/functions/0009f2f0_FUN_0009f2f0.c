/* Address: 0009f2f0 | Name: FUN_0009f2f0 | Body bytes: 692 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009f2f0(long param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined8 uVar4;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  ID local_b8;
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
      local_f0 = (undefined *)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
    }
    else {
      AVAsset::duration(IVar2,"duration",&local_f0);
    }
    uStack_a8 = uStack_e8;
    local_b0 = local_f0;
    local_a0 = (code *)local_e0;
    uVar4 = _CMTimeGetSeconds(&local_b0);
    IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x30),"threadViewController");
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
    local_d8 = PTR___NSConcreteStackBlock_000e80d8;
    local_d0 = 0xc2000000;
    local_c8 = FUN_0009f5a4;
    puStack_c0 = &DAT_000e9798;
    local_b8 = param_4;
    _objc_msgSend(*(ID *)(param_1 + 0x28),"dismissViewControllerAnimated:completion:",1,&local_d8);
  }
  return 0;
}

