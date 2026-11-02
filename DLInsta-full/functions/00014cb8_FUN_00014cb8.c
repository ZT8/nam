/* Address: 00014cb8 | Name: FUN_00014cb8 | Body bytes: 76 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_00014cb8(ID param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"displayList");
  IVar1 = _objc_msgSend(IVar1,"count");
  return IVar1;
}

