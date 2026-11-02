/* Address: 000ace8c | Name: FUN_000ace8c | Body bytes: 136 */

void FUN_000ace8c(long param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 8);
  local_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_000e8038;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x28);
  local_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x20);
  _objc_msgSend(*(ID *)(*(long *)(param_1 + 0x20) + (long)DLPopupViewController::blurView),
                "setTransform:",&local_50);
  _objc_msgSend(*(ID *)(*(long *)(param_1 + 0x20) + (long)DLPopupViewController::backgroundView),
                "setAlpha:",0x3fe4cccccccccccd);
  return;
}

