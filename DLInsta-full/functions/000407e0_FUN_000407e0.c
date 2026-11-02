/* Address: 000407e0 | Name: FUN_000407e0 | Body bytes: 116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000407e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",param_3);
  _objc_setAssociatedObject(param_1,&DAT_000ffc92,IVar1,0);
  return 0;
}

