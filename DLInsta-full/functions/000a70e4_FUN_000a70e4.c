/* Address: 000a70e4 | Name: FUN_000a70e4 | Body bytes: 196 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a70e4(long param_1)

{
  ID IVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"dimmingView");
  _objc_msgSend(IVar1,"setAlpha:",0);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"presentingViewController");
  IVar1 = _objc_msgSend(IVar1,"view");
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 8);
  local_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_000e8038;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x28);
  local_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x20);
  _objc_msgSend(IVar1,"setTransform:",&local_50);
  return 0;
}

