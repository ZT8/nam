/* Address: 000a2e84 | Name: FUN_000a2e84 | Body bytes: 248 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a2e84(long param_1,ID param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  
  IVar1 = _objc_msgSend(param_2,"isEqualToString:",DAT_001006a8);
  uVar2 = FUN_00097a54(*(undefined8 *)(param_1 + 0x20));
  if ((int)IVar1 == 0) {
    IVar1 = _objc_msgSend(param_2,"length");
  }
  else {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x28),"length");
    IVar3 = _objc_msgSend(param_2,"length");
    IVar1 = (ID)((int)IVar1 + (int)IVar3 + 1);
  }
  uVar2 = FUN_00097c68(uVar2,IVar1);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) = uVar2;
  return 0;
}

