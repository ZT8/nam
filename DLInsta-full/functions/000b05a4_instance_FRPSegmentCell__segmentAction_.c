/* Address: 000b05a4 | Name: instance_FRPSegmentCell__segmentAction_ | Body bytes: 388 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSegmentCell::instance_FRPSegmentCell__segmentAction_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = instance_FRPSegmentCell__values(param_1,"values");
  IVar2 = _objc_msgSend(param_3,"selectedSegmentIndex");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",IVar2);
  IVar2 = FRPCell::instance_FRPCell__setting(param_1,"setting");
  _objc_msgSend(IVar2,"setValue:",IVar1);
  IVar2 = FRPCell::instance_FRPCell__valueChanged(param_1,"valueChanged");
  if (IVar2 != 0) {
    IVar2 = FRPCell::instance_FRPCell__valueChanged(param_1,"valueChanged");
    (**(code **)(IVar2 + 0x10))(IVar2,IVar1);
  }
  IVar2 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  IVar3 = FRPCell::instance_FRPCell__postNotification(param_1,"postNotification");
  NSNotificationCenter::postNotificationName_object_
            (IVar2,"postNotificationName:object:",IVar3,IVar1);
  return;
}

