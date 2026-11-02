/* Address: 000ad31c | Name: FUN_000ad31c | Body bytes: 84 */

void FUN_000ad31c(long param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 8);
  local_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_000e8038;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x28);
  local_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x20);
  _objc_msgSend(*(ID *)(*(long *)(param_1 + 0x20) + (long)DLPopupViewController::blurView),
                "setTransform:",&local_40);
  return;
}

