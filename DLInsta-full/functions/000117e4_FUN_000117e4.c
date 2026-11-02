/* Address: 000117e4 | Name: FUN_000117e4 | Body bytes: 184 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_000117e4(ID param_1)

{
  ID IVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar1 = _objc_msgSend(param_1,"mutableCopy");
  local_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_000118cc;
  puStack_40 = &DAT_000e8898;
  local_38 = IVar1;
  _objc_msgSend(IVar1,"enumerateObjectsWithOptions:usingBlock:",2,&local_58);
  IVar1 = _objc_msgSend(IVar1,"copy");
  return IVar1;
}

