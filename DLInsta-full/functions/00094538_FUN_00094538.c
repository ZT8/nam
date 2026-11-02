/* Address: 00094538 | Name: FUN_00094538 | Body bytes: 356 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00094538(undefined1 param_1 [16],double param_2,long param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  ID IVar4;
  ID self;
  ID IVar5;
  long lVar6;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 uVar7;
  
  IVar4 = _objc_msgSend(param_4,"firstItem");
  self = _objc_msgSend(param_4,"secondItem");
  IVar5 = _objc_msgSend(IVar4,"isHidden");
  puVar2 = PTR__CGSizeZero_000e8048;
  if ((IVar5 & 1) == 0) {
    _objc_msgSend(IVar4,"intrinsicContentSize");
    bVar3 = extraout_d0 == *(double *)puVar2 && param_2 == *(double *)(puVar2 + 8);
  }
  else {
    bVar3 = true;
  }
  IVar4 = _objc_msgSend(self,"isHidden");
  if ((IVar4 & 1) == 0) {
    _objc_msgSend(self,"intrinsicContentSize");
    bVar1 = extraout_d0_00 != *(double *)puVar2 || param_2 != *(double *)(puVar2 + 8);
  }
  else {
    bVar1 = false;
  }
  if (!bVar3 && !bVar1) {
    bVar3 = *(char *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) == '\0';
  }
  uVar7 = 0;
  if (!bVar3) {
    uVar7 = 0x4010000000000000;
  }
  _objc_msgSend(param_4,"setConstant:",uVar7);
  lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | bVar1;
  return 0;
}

