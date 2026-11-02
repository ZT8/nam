/* Address: 000af938 | Name: FUN_000af938 | Body bytes: 488 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000af938(long param_1,undefined8 param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"detailTextLabel");
  _objc_msgSend(IVar1,"setText:",param_2);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x28),"values");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"items");
  IVar2 = _objc_msgSend(IVar2,"indexOfObject:",param_2);
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",IVar2);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"setting");
  _objc_msgSend(IVar2,"setValue:",IVar1);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"valueChanged");
  if (IVar2 != 0) {
    IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"valueChanged");
    (**(code **)(IVar2 + 0x10))(IVar2,IVar1);
  }
  IVar2 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  IVar3 = _objc_msgSend(*(ID *)(param_1 + 0x28),"postNotification");
  NSNotificationCenter::postNotificationName_object_
            (IVar2,"postNotificationName:object:",IVar3,IVar1);
  return 0;
}

