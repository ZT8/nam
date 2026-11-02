/* Address: 000b3344 | Name: instance_FRPSwitchCell__cellWithTitle_setting_postNotification_changeBlock_ | Body bytes: 612 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID FRPSwitchCell::instance_FRPSwitchCell__cellWithTitle_setting_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined4 uVar3;
  ID local_60;
  class_t *pcStack_58;
  
  pcStack_58 = &objc::class_t::FRPSwitchCell;
  local_60 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_60,"initWithTitle:setting:",param_3,param_4);
  uVar3 = (undefined4)param_4;
  FRPCell::instance_FRPCell__setPostNotification_(self,"setPostNotification:",param_5);
  FRPCell::instance_FRPCell__setValueChanged_(self,"setValueChanged:",param_6,uVar3);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UISwitch);
  IVar1 = UISwitch::initWithFrame_
                    (IVar1,"initWithFrame:",*(undefined8 *)PTR__CGRectZero_000e8040,
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 8),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x18));
  instance_FRPSwitchCell__setSwitchView_(param_1,"setSwitchView:",IVar1);
  IVar1 = instance_FRPSwitchCell__switchView(param_1,"switchView");
  IVar2 = FRPCell::instance_FRPCell__setting(param_1,"setting");
  IVar2 = _objc_msgSend(IVar2,"value");
  IVar2 = _objc_msgSend(IVar2,"boolValue");
  _objc_msgSend(IVar1,"setOn:animated:",IVar2,0);
  IVar1 = instance_FRPSwitchCell__switchView(param_1,"switchView");
  _objc_msgSend(IVar1,"addTarget:action:forControlEvents:",param_1,"switchChanged:",0x1000);
  IVar1 = instance_FRPSwitchCell__switchView(param_1,"switchView");
  _objc_msgSend(self,"setAccessoryView:",IVar1);
  _objc_msgSend(self,"setSelectionStyle:",0);
  IVar1 = instance_FRPSwitchCell__switchView(param_1,"switchView");
  DLHelper::class_DLHelper__switchToRTL_((ID)&objc::class_t::DLHelper,"switchToRTL:",IVar1);
  return self;
}

