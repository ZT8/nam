/* Address: 0007b308 | Name: FUN_0007b308 | Body bytes: 460 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

cfstringStruct * FUN_0007b308(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  code *pcVar4;
  cfstringStruct *pcVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  IVar2 = NSThread::callStackReturnAddresses((ID)&_OBJC_CLASS___NSThread,"callStackReturnAddresses")
  ;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  IVar2 = NSThread::objectAtIndexedSubscript_(IVar2,"objectAtIndexedSubscript:",2);
  IVar2 = NSThread::longLongValue(IVar2,"longLongValue");
  iVar1 = _dladdr(IVar2,&local_70);
  if (iVar1 == 0) {
    pcVar4 = DAT_00100030;
    if (DAT_00100030 == (code *)0x0) {
      pcVar4 = (code *)_class_getMethodImplementation(DAT_00100028,"bundleIdentifier");
    }
    pcVar5 = (cfstringStruct *)(*pcVar4)(param_1,param_2);
  }
  else {
    IVar2 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:",local_70);
    IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar3 = NSBundle::bundlePath(IVar3,"bundlePath");
    IVar2 = NSString::hasPrefix_(IVar2,"hasPrefix:",IVar3);
    if ((IVar2 & 1) == 0) {
      pcVar4 = DAT_00100030;
      if (DAT_00100030 == (code *)0x0) {
        pcVar4 = (code *)_class_getMethodImplementation(DAT_00100028,"bundleIdentifier");
      }
      pcVar5 = (cfstringStruct *)(*pcVar4)(param_1,param_2);
    }
    else {
      pcVar5 = &cf_com_burbn_instagram;
    }
  }
  return pcVar5;
}

