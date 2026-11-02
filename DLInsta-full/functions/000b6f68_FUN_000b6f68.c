/* Address: 000b6f68 | Name: FUN_000b6f68 | Body bytes: 312 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_000b6f68(long param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  ID local_38;
  
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"HDProfilePicURL");
  IVar2 = NSData::dataWithContentsOfURL_((ID)&_OBJC_CLASS___NSData,"dataWithContentsOfURL:",IVar2);
  if (IVar2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    IVar2 = UIImage::imageWithData_((ID)&_OBJC_CLASS___UIImage,"imageWithData:",IVar2);
    puVar1 = PTR___dispatch_main_q_000e8268;
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_60 = PTR___NSConcreteStackBlock_000e80d8;
    local_58 = 0xc2000000;
    local_50 = FUN_000b70a0;
    puStack_48 = &DAT_000e95d8;
    local_40 = *(undefined8 *)(param_1 + 0x28);
    local_38 = IVar2;
    _dispatch_async(puVar1,&local_60);
  }
  return 0;
}

