/* Address: 0008ce2c | Name: FUN_0008ce2c | Body bytes: 112 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_0008ce2c(ID param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  
  IVar1 = _objc_msgSend(param_1,"class");
  uVar2 = _NSStringFromSelector(param_2);
  IVar3 = _objc_retainAutorelease(uVar2);
  IVar3 = _objc_msgSend(IVar3,"UTF8String");
  lVar4 = _class_getInstanceVariable(IVar1,IVar3);
  return lVar4 != 0;
}

