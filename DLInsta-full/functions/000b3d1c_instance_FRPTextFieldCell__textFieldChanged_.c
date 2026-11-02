/* Address: 000b3d1c | Name: instance_FRPTextFieldCell__textFieldChanged_ | Body bytes: 320 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPTextFieldCell::instance_FRPTextFieldCell__textFieldChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_msgSend(param_3,"text");
  IVar2 = FRPCell::instance_FRPCell__setting(param_1,"setting");
  _objc_msgSend(IVar2,"setValue:",IVar1);
  IVar1 = FRPCell::instance_FRPCell__valueChanged(param_1,"valueChanged");
  if (IVar1 != 0) {
    IVar1 = FRPCell::instance_FRPCell__valueChanged(param_1,"valueChanged");
    (**(code **)(IVar1 + 0x10))(IVar1,param_3);
  }
  IVar1 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  IVar2 = FRPCell::instance_FRPCell__postNotification(param_1,"postNotification");
  NSNotificationCenter::postNotificationName_object_
            (IVar1,"postNotificationName:object:",IVar2,param_3);
  return;
}

