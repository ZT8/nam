/* Address: 00014d18 | Name: FUN_00014d18 | Body bytes: 204 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_00014d18(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"classDict");
  IVar1 = _objc_msgSend(IVar1,"allValues");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",param_4);
  IVar1 = _objc_msgSend(IVar1,"objectForKeyedSubscript:",&cf_property);
  IVar1 = _objc_msgSend(IVar1,"count");
  return IVar1;
}

