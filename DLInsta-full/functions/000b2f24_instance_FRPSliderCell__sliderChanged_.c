/* Address: 000b2f24 | Name: instance_FRPSliderCell__sliderChanged_ | Body bytes: 488 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSliderCell::instance_FRPSliderCell__sliderChanged_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  _objc_msgSend(param_3,"value");
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___2f);
  IVar2 = instance_FRPSliderCell__vLabel(param_1,"vLabel");
  _objc_msgSend(IVar2,"setText:",IVar1);
  _objc_msgSend(param_3,"value");
  IVar1 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
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

