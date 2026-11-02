/* Address: 00004688 | Name: FUN_00004688 | Body bytes: 76 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_00004688(undefined8 param_1)

{
  ID IVar1;
  
  IVar1 = _objc_getAssociatedObject(param_1,&DAT_000ff810);
  IVar1 = _objc_msgSend(IVar1,"boolValue");
  return IVar1;
}

