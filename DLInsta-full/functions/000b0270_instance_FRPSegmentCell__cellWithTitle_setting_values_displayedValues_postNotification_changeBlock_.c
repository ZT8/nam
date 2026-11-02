/* Address: 000b0270 | Name: instance_FRPSegmentCell__cellWithTitle_setting_values_displayedValues_postNotification_changeBlock_ | Body bytes: 820 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x40 bytes */

ID FRPSegmentCell::
   instance_FRPSegmentCell__cellWithTitle_setting_values_displayedValues_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,undefined4 param_9)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined4 uVar3;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::FRPSegmentCell;
  IVar1 = param_4;
  local_70 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_70,"initWithTitle:setting:",param_3,param_4);
  uVar3 = (undefined4)IVar1;
  FRPCell::instance_FRPCell__setSetting_(self,"setSetting:",param_4);
  FRPCell::instance_FRPCell__setPostNotification_(self,"setPostNotification:",param_7);
  FRPCell::instance_FRPCell__setValueChanged_(self,"setValueChanged:",param_8,uVar3);
  instance_FRPSegmentCell__setValues_(param_1,"setValues:",param_5);
  instance_FRPSegmentCell__setDisplayedValues_(param_1,"setDisplayedValues:",param_6);
  IVar1 = instance_FRPSegmentCell__displayedValues(param_1,"displayedValues");
  if (IVar1 == 0) {
    instance_FRPSegmentCell__setDisplayedValues_(param_1,"setDisplayedValues:",param_5);
  }
  IVar1 = _objc_alloc(&_OBJC_CLASS___UISegmentedControl);
  IVar2 = instance_FRPSegmentCell__displayedValues(param_1,"displayedValues");
  IVar1 = UISegmentedControl::initWithItems_(IVar1,"initWithItems:",IVar2);
  instance_FRPSegmentCell__setSegment_(param_1,"setSegment:",IVar1);
  IVar1 = instance_FRPSegmentCell__segment(param_1,"segment");
  _objc_msgSend(IVar1,"addTarget:action:forControlEvents:",param_1,"segmentAction:",0x1000);
  IVar1 = instance_FRPSegmentCell__values(param_1,"values");
  IVar2 = FRPCell::instance_FRPCell__setting(self,"setting");
  IVar2 = _objc_msgSend(IVar2,"value");
  IVar1 = _objc_msgSend(IVar1,"indexOfObject:",IVar2);
  IVar2 = instance_FRPSegmentCell__segment(param_1,"segment");
  _objc_msgSend(IVar2,"setSelectedSegmentIndex:",IVar1);
  IVar1 = instance_FRPSegmentCell__segment(param_1,"segment");
  _objc_msgSend(self,"setAccessoryView:",IVar1);
  _objc_msgSend(self,"setSelectionStyle:",0);
  return self;
}

