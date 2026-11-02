/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPSegmentCell cellWithTitle:setting:values:displayedValues:postNotification:changeBlock:] | encoding @64@0:8@16@24@32@40@48@?56 */
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


/* -[FRPSegmentCell segmentAction:] | encoding v24@0:8@16 */
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


/* -[FRPSegmentCell layoutSubviews] | encoding v16@0:8 */
/* Address: 000b0728 | Name: instance_FRPSegmentCell__layoutSubviews | Body bytes: 152 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSegmentCell::instance_FRPSegmentCell__layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::FRPSegmentCell;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"layoutSubviews");
  IVar1 = FRPCell::instance_FRPCell__tintUIColor(param_1,"tintUIColor");
  self = instance_FRPSegmentCell__segment(param_1,"segment");
  _objc_msgSend(self,"setTintColor:",IVar1);
  return;
}


/* -[FRPSegmentCell segment] | encoding @16@0:8 */
/* Address: 000b07c0 | Name: instance_FRPSegmentCell__segment | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSegmentCell::instance_FRPSegmentCell__segment(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_segment);
}


/* -[FRPSegmentCell setSegment:] | encoding v24@0:8@16 */
/* Address: 000b07d0 | Name: instance_FRPSegmentCell__setSegment_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSegmentCell::instance_FRPSegmentCell__setSegment_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_segment) = param_3;
  return;
}


/* -[FRPSegmentCell values] | encoding @16@0:8 */
/* Address: 000b07e4 | Name: instance_FRPSegmentCell__values | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSegmentCell::instance_FRPSegmentCell__values(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_values);
}


/* -[FRPSegmentCell setValues:] | encoding v24@0:8@16 */
/* Address: 000b07f4 | Name: instance_FRPSegmentCell__setValues_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSegmentCell::instance_FRPSegmentCell__setValues_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_values) = param_3;
  return;
}


/* -[FRPSegmentCell displayedValues] | encoding @16@0:8 */
/* Address: 000b0808 | Name: instance_FRPSegmentCell__displayedValues | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSegmentCell::instance_FRPSegmentCell__displayedValues(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_displayedValues);
}


/* -[FRPSegmentCell setDisplayedValues:] | encoding v24@0:8@16 */
/* Address: 000b0818 | Name: instance_FRPSegmentCell__setDisplayedValues_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSegmentCell::instance_FRPSegmentCell__setDisplayedValues_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_displayedValues) = param_3;
  return;
}


/* -[FRPSegmentCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b082c | Name: instance_FRPSegmentCell___cxx_destruct | Body bytes: 84 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSegmentCell::instance_FRPSegmentCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_displayedValues) = 0;
  *(undefined8 *)(param_1 + (long)_values) = 0;
  *(undefined8 *)(param_1 + (long)_segment) = 0;
  return;
}


/* +[FRPSegmentCell cellWithTitle:setting:items:postNotification:changeBlock:] | encoding @56@0:8@16@24@32@40@?48 */
/* Address: 000aff88 | Name: class_FRPSegmentCell__cellWithTitle_setting_items_postNotification_changeBlock_ | Body bytes: 240 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID FRPSegmentCell::class_FRPSegmentCell__cellWithTitle_setting_items_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             undefined4 param_8)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,
                        "cellWithTitle:setting:values:displayedValues:postNotification:changeBlock:"
                        ,param_3,param_4,param_5,param_5,param_6,param_7);
  return IVar1;
}


/* +[FRPSegmentCell cellWithTitle:setting:values:displayedValues:postNotification:changeBlock:] | encoding @64@0:8@16@24@32@40@48@?56 */
/* Address: 000b0078 | Name: class_FRPSegmentCell__cellWithTitle_setting_values_displayedValues_postNotification_changeBlock_ | Body bytes: 264 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x40 bytes */

ID FRPSegmentCell::
   class_FRPSegmentCell__cellWithTitle_setting_values_displayedValues_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,undefined4 param_9)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,
                        "cellWithTitle:setting:values:displayedValues:postNotification:changeBlock:"
                        ,param_3,param_4,param_5,param_6,param_7,param_8);
  return IVar1;
}


/* +[FRPSegmentCell cellWithTitle:setting:values:postNotification:changeBlock:] | encoding @56@0:8@16@24@32@40@?48 */
/* Address: 000b0180 | Name: class_FRPSegmentCell__cellWithTitle_setting_values_postNotification_changeBlock_ | Body bytes: 240 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID FRPSegmentCell::class_FRPSegmentCell__cellWithTitle_setting_values_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             undefined4 param_8)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,
                        "cellWithTitle:setting:values:displayedValues:postNotification:changeBlock:"
                        ,param_3,param_4,param_5,0,param_6,param_7);
  return IVar1;
}

