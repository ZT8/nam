/* Address: 00099c54 | Name: FUN_00099c54 | Body bytes: 100 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00099c54(long param_1)

{
  ID IVar1;
  
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
  *(ID *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) = IVar1;
  return 0;
}

