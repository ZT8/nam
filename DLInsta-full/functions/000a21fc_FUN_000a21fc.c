/* Address: 000a21fc | Name: FUN_000a21fc | Body bytes: 232 */

void FUN_000a21fc(long param_1,int param_2)

{
  undefined *puVar1;
  ID IVar2;
  bool in_w5;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR___dispatch_main_q_000e8268;
  if (param_2 == 0) {
    return;
  }
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_50 = PTR___NSConcreteStackBlock_000e80d8;
  local_48 = 0xc2000000;
  local_40 = FUN_000a22e4;
  puStack_38 = &DAT_000e9408;
  local_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  _dispatch_async(puVar1,&local_50);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"mediaType");
  if (IVar2 == 1) {
    IVar2 = 1;
  }
  else {
    IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"mediaType");
    if ((IVar2 != 2) || (*(char *)(param_1 + 0x48) != '\0')) goto LAB_000a22c4;
    IVar2 = 2;
  }
  DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_showSuccess_
            ((DLSaveMedia *)&objc::class_t::DLSaveMedia,
             (ID)"saveMediaOnCamera:mediaType:showSuccess:",*(SEL *)(param_1 + 0x30),IVar2,0,in_w5);
LAB_000a22c4:
  _dispatch_group_leave(*(dispatch_group_t *)(param_1 + 0x38));
  return;
}

