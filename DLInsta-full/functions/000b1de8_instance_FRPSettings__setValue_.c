/* Address: 000b1de8 | Name: instance_FRPSettings__setValue_ | Body bytes: 324 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSettings::instance_FRPSettings__setValue_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = instance_FRPSettings__value(param_1,"value");
  if (IVar1 != param_3) {
    IVar1 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar2 = instance_FRPSettings__key(param_1,"key");
    NSUserDefaults::setObject_forKey_(IVar1,"setObject:forKey:",param_3,IVar2);
    IVar1 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    NSUserDefaults::synchronize(IVar1,"synchronize");
    IVar1 = instance_FRPSettings__fileSave(param_1,"fileSave");
    IVar1 = _objc_msgSend(IVar1,"length");
    if (IVar1 != 0) {
      instance_FRPSettings__saveValue_(param_1,"saveValue:",param_3);
    }
  }
  return;
}

