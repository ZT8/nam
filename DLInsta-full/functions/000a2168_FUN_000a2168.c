/* Address: 000a2168 | Name: FUN_000a2168 | Body bytes: 148 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a2168(long param_1,ID param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = FUN_00097a54(*(undefined8 *)(param_1 + 0x20));
  IVar2 = _objc_msgSend(param_2,"length");
  uVar1 = FUN_00097c68(uVar1,IVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = uVar1;
  return 0;
}

