/* Address: 00098310 | Name: FUN_00098310 | Body bytes: 332 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_00098310(long param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(ID *)(lVar5 + 0x28) = IVar1;
  IVar1 = NSMutableString::new((ID)&_OBJC_CLASS___NSMutableString,"new",uVar4);
  while( true ) {
    IVar2 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),"length");
    IVar3 = NSMutableString::length(IVar1,"length");
    if (IVar2 == IVar3) break;
    IVar2 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),"length");
    IVar3 = NSMutableString::length(IVar1,"length");
    IVar2 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
                          "substringWithRange:",IVar2 + ~IVar3,1);
    NSMutableString::appendString_(IVar1,"appendString:",IVar2);
  }
  return IVar1;
}

