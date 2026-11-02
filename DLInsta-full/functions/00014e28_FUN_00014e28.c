/* Address: 00014e28 | Name: FUN_00014e28 | Body bytes: 132 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_00014e28(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"classDict");
  IVar1 = _objc_msgSend(IVar1,"allKeys");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",param_4);
  return IVar1;
}

