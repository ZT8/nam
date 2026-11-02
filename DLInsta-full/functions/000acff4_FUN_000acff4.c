/* Address: 000acff4 | Name: FUN_000acff4 | Body bytes: 160 */

void FUN_000acff4(long param_1)

{
  long lVar1;
  undefined8 in_d3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = (long)DLPopupViewController::blurView;
  _objc_msgSend(*(ID *)(*(long *)(param_1 + 0x20) + lVar1),"frame");
  _CGAffineTransformMakeTranslation(&local_50,0,in_d3);
  uStack_78 = uStack_48;
  local_80 = local_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  local_60 = local_30;
  _objc_msgSend(*(ID *)(*(long *)(param_1 + 0x20) + lVar1),"setTransform:",&local_80);
  _objc_msgSend(*(ID *)(*(long *)(param_1 + 0x20) + (long)DLPopupViewController::backgroundView),
                "setAlpha:",0);
  return;
}

