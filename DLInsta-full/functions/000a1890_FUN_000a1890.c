/* Address: 000a1890 | Name: FUN_000a1890 | Body bytes: 336 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_000a1890(long param_1)

{
  ID IVar1;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  DLDownloadManager::class_DLDownloadManager__removeAllMultiFilesInFolder
            ((ID)&objc::class_t::DLDownloadManager,"removeAllMultiFilesInFolder");
  IVar1 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
  IVar1 = MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
                    ((ID)&objc::class_t::MBProgressHUD,"showHUDAddedTo:animated:",IVar1,1);
  _objc_msgSend(*(ID *)(param_1 + 0x20),"setHud:",IVar1);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
  _objc_msgSend(IVar1,"setSquare:",1);
  local_70 = PTR___NSConcreteStackBlock_000e80d8;
  local_68 = 0xc2000000;
  local_60 = FUN_000a19e0;
  puStack_58 = &DAT_000e9918;
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_38 = *(undefined1 *)(param_1 + 0x38);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  FUN_00097610(0,&local_70);
  return 0;
}

