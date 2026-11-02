/* Address: 000a3b34 | Name: FUN_000a3b34 | Body bytes: 344 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a3b34(long param_1)

{
  undefined8 uVar1;
  ID IVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x30);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud",(ulong)(uint)fVar3);
  _objc_msgSend(IVar2,"setProgress:",(ulong)(uint)(fVar3 / 100.0));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
  IVar2 = _objc_msgSend(IVar2,"detailsLabel");
  _objc_msgSend(IVar2,"setText:",uVar1);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"minimizeView");
  if (IVar2 == 0) {
    return 0;
  }
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"minimizeView");
  IVar2 = _objc_msgSend(IVar2,"percentLabel");
  _objc_msgSend(IVar2,"setText:",*(undefined8 *)(param_1 + 0x28));
  return 0;
}

