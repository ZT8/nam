/* Address: 000b1f2c | Name: instance_FRPSettings__saveValue_ | Body bytes: 292 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSettings::instance_FRPSettings__saveValue_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  IVar2 = instance_FRPSettings__fileSave(param_1,"fileSave");
  IVar1 = NSMutableDictionary::initWithContentsOfFile_(IVar1,"initWithContentsOfFile:",IVar2);
  if (IVar1 == 0) {
    IVar1 = NSMutableDictionary::new((ID)&_OBJC_CLASS___NSMutableDictionary,"new");
  }
  IVar2 = instance_FRPSettings__key(param_1,"key");
  NSMutableDictionary::setObject_forKey_(IVar1,"setObject:forKey:",param_3,IVar2);
  IVar2 = instance_FRPSettings__fileSave(param_1,"fileSave");
  NSMutableDictionary::writeToFile_atomically_(IVar1,"writeToFile:atomically:",IVar2,1);
  return;
}

