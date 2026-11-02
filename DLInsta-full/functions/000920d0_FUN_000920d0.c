/* Address: 000920d0 | Name: FUN_000920d0 | Body bytes: 288 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000920d0(long param_1)

{
  ID IVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = &local_c0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (*(long *)(param_1 + 0x30) == 2) {
      uStack_b8 = *(undefined8 *)(param_1 + 0x70);
      local_c0 = *(undefined8 *)(param_1 + 0x68);
      uStack_a8 = *(undefined8 *)(param_1 + 0x80);
      uStack_b0 = *(undefined8 *)(param_1 + 0x78);
      uStack_98 = *(undefined8 *)(param_1 + 0x90);
      local_a0 = *(undefined8 *)(param_1 + 0x88);
      IVar1 = *(ID *)(param_1 + 0x20);
    }
    else {
      if (*(long *)(param_1 + 0x30) != 3) goto LAB_0009211c;
      uStack_88 = *(undefined8 *)(param_1 + 0x40);
      local_90 = *(undefined8 *)(param_1 + 0x38);
      uStack_78 = *(undefined8 *)(param_1 + 0x50);
      uStack_80 = *(undefined8 *)(param_1 + 0x48);
      uStack_68 = *(undefined8 *)(param_1 + 0x60);
      local_70 = *(undefined8 *)(param_1 + 0x58);
      IVar1 = *(ID *)(param_1 + 0x20);
      puVar2 = &local_90;
    }
  }
  else {
    IVar1 = *(ID *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 8);
    local_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_000e8038;
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x18);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x10);
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x28);
    local_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_000e8038 + 0x20);
    puVar2 = &local_60;
  }
  _objc_msgSend(IVar1,"setTransform:",puVar2);
LAB_0009211c:
  uVar3 = 0;
  if (*(char *)(param_1 + 0x98) != '\0') {
    uVar3 = 0x3ff0000000000000;
  }
  _objc_msgSend(*(ID *)(param_1 + 0x20),"setAlpha:",uVar3);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x28),"backgroundView");
  _objc_msgSend(IVar1,"setAlpha:",uVar3);
  return 0;
}

