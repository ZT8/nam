/* Address: 00011478 | Name: FUN_00011478 | Body bytes: 536 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_00011478(long param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  IVar1 = (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  IVar2 = DLHelper::class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",0xea108);
  IVar2 = _objc_msgSend(IVar2,"imageWithRenderingMode:",2);
  IVar3 = _NSClassFromString(&cf_UIAction);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_00011714;
  puStack_50 = &DAT_000e8838;
  local_48 = *(undefined8 *)(param_1 + 0x28);
  IVar2 = _objc_msgSend(IVar3,"actionWithTitle:image:identifier:handler:",&cf_Copy,IVar2,0,&local_68
                       );
  IVar3 = _objc_msgSend(IVar1,"children");
  IVar3 = _objc_msgSend(IVar3,"mutableCopy");
  if (IVar3 == 0) {
    IVar3 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  }
  NSMutableArray::insertObject_atIndex_(IVar3,"insertObject:atIndex:",IVar2,0);
  IVar2 = _NSClassFromString(&cf_UIMenu);
  IVar1 = _objc_msgSend(IVar1,"title");
  IVar1 = _objc_msgSend(IVar2,"menuWithTitle:children:",IVar1,IVar3);
  return IVar1;
}

