/* Address: 00098b4c | Name: FUN_00098b4c | Body bytes: 72 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00098b4c(long param_1)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableString);
  IVar1 = NSMutableString::init(IVar1,"init");
  *(ID *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) = IVar1;
  return 0;
}

