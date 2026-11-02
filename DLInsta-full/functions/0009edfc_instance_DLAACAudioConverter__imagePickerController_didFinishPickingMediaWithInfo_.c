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

