/* Address: 000a22e4 | Name: FUN_000a22e4 | Body bytes: 196 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a22e4(long param_1)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + -1;
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___d_);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
  IVar2 = _objc_msgSend(IVar2,"detailsLabel");
  _objc_msgSend(IVar2,"setText:",IVar1);
  return 0;
}

