/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPSwitchCell cellWithTitle:setting:postNotification:changeBlock:] | encoding @48@0:8@16@24@32@?40 */
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


/* -[FRPSwitchCell switchChanged:] | encoding v24@0:8@16 */
/* Address: 000b35a8 | Name: instance_FRPSwitchCell__switchChanged_ | Body bytes: 348 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSwitchCell::instance_FRPSwitchCell__switchChanged_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_msgSend(param_3,"isOn");
  IVar1 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",IVar1);
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


/* -[FRPSwitchCell layoutSubviews] | encoding v16@0:8 */
/* Address: 000b3704 | Name: instance_FRPSwitchCell__layoutSubviews | Body bytes: 448 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSwitchCell::instance_FRPSwitchCell__layoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::FRPSwitchCell;
  local_70.receiver = param_1;
  _objc_msgSendSuper2(&local_70,"layoutSubviews");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    uVar4 = 0x3fa8181818181818;
    uVar6 = 0x3fb0101010101010;
    uVar5 = 0x3fb4141414141414;
  }
  else {
    uVar4 = 0x3fef1f1f1f1f1f1f;
    uVar6 = 0x3fef3f3f3f3f3f3f;
    uVar5 = uVar6;
  }
  IVar2 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar4,uVar6,uVar5,
                     0x3ff0000000000000);
  IVar3 = instance_FRPSwitchCell__switchView(param_1,"switchView");
  _objc_msgSend(IVar3,"setOnTintColor:",IVar2);
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    uVar6 = 0x3ff0000000000000;
  }
  else {
    uVar5 = 0x3fa8181818181818;
    uVar4 = 0x3fb0101010101010;
    uVar6 = 0x3fb4141414141414;
  }
  IVar2 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar4,uVar6,
                     0x3ff0000000000000);
  IVar3 = instance_FRPSwitchCell__switchView(param_1,"switchView");
  _objc_msgSend(IVar3,"setThumbTintColor:",IVar2);
  return;
}


/* -[FRPSwitchCell switchView] | encoding @16@0:8 */
/* Address: 000b38c4 | Name: instance_FRPSwitchCell__switchView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSwitchCell::instance_FRPSwitchCell__switchView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_switchView);
}


/* -[FRPSwitchCell setSwitchView:] | encoding v24@0:8@16 */
/* Address: 000b38d4 | Name: instance_FRPSwitchCell__setSwitchView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSwitchCell::instance_FRPSwitchCell__setSwitchView_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_switchView) = param_3;
  return;
}


/* -[FRPSwitchCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b38e8 | Name: instance_FRPSwitchCell___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSwitchCell::instance_FRPSwitchCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_switchView) = 0;
  return;
}


/* +[FRPSwitchCell cellWithTitle:setting:postNotification:changeBlock:] | encoding @48@0:8@16@24@32@?40 */
/* Address: 000b327c | Name: class_FRPSwitchCell__cellWithTitle_setting_postNotification_changeBlock_ | Body bytes: 200 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID FRPSwitchCell::class_FRPSwitchCell__cellWithTitle_setting_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,"cellWithTitle:setting:postNotification:changeBlock:",param_3,param_4,
                        param_5,param_6);
  return IVar1;
}

