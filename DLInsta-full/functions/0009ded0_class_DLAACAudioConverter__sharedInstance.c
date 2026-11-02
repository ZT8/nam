/* Address: 0009ded0 | Name: class_DLAACAudioConverter__sharedInstance | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID DLAACAudioConverter::class_DLAACAudioConverter__sharedInstance(ID param_1,SEL param_2)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_000e80d8;
  local_30 = 0xc2000000;
  local_28 = FUN_0009df44;
  puStack_20 = &DAT_000e90a8;
  if (DAT_00100578 != -1) {
    local_18 = param_1;
    _dispatch_once(&DAT_00100578,&local_38);
  }
  return DAT_00100570;
}

