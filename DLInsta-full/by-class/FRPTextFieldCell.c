/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPTextFieldCell cellWithTitle:setting:placeholder:postNotification:changeBlock:] | encoding @56@0:8@16@24@32@40@?48 */
/* Address: 000b39e8 | Name: instance_FRPTextFieldCell__cellWithTitle_setting_placeholder_postNotification_changeBlock_ | Body bytes: 820 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID FRPTextFieldCell::
   instance_FRPTextFieldCell__cellWithTitle_setting_placeholder_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             undefined4 param_8)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined4 uVar3;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::FRPTextFieldCell;
  IVar1 = param_4;
  local_70 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_70,"initWithTitle:setting:",param_3,param_4);
  uVar3 = (undefined4)IVar1;
  FRPCell::instance_FRPCell__setSetting_(self,"setSetting:",param_4);
  FRPCell::instance_FRPCell__setPostNotification_(self,"setPostNotification:",param_6);
  FRPCell::instance_FRPCell__setValueChanged_(self,"setValueChanged:",param_7,uVar3);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UITextField);
  IVar1 = UITextField::initWithFrame_
                    (IVar1,"initWithFrame:",0,0,0x4067c00000000000,0x403e000000000000);
  instance_FRPTextFieldCell__setTextField_(param_1,"setTextField:",IVar1);
  IVar1 = instance_FRPTextFieldCell__textField(param_1,"textField");
  _objc_msgSend(IVar1,"setDelegate:",param_1);
  IVar1 = instance_FRPTextFieldCell__textField(param_1,"textField");
  _objc_msgSend(IVar1,"setTextAlignment:",2);
  IVar1 = instance_FRPTextFieldCell__textField(param_1,"textField");
  _objc_msgSend(IVar1,"setClearButtonMode:",1);
  IVar1 = instance_FRPTextFieldCell__textField(param_1,"textField");
  IVar2 = _objc_msgSend(param_4,"value");
  _objc_msgSend(IVar1,"setText:",IVar2);
  IVar1 = instance_FRPTextFieldCell__textField(param_1,"textField");
  _objc_msgSend(IVar1,"setPlaceholder:",param_5);
  IVar1 = instance_FRPTextFieldCell__textField(param_1,"textField");
  _objc_msgSend(IVar1,"addTarget:action:forControlEvents:",param_1,"textFieldChanged:",0x20000);
  IVar1 = instance_FRPTextFieldCell__textField(param_1,"textField");
  _objc_msgSend(IVar1,"setReturnKeyType:",9);
  IVar1 = instance_FRPTextFieldCell__textField(param_1,"textField");
  _objc_msgSend(self,"setAccessoryView:",IVar1);
  _objc_msgSend(self,"setSelectionStyle:",0);
  return self;
}


/* -[FRPTextFieldCell textFieldChanged:] | encoding v24@0:8@16 */
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


/* -[FRPTextFieldCell textFieldShouldReturn:] | encoding B24@0:8@16 */
/* Address: 000b3e5c | Name: instance_FRPTextFieldCell__textFieldShouldReturn_ | Body bytes: 36 */

/* Function Stack Size: 0x18 bytes */

bool FRPTextFieldCell::instance_FRPTextFieldCell__textFieldShouldReturn_
               (ID param_1,SEL param_2,ID param_3)

{
  _objc_msgSend(param_3,"resignFirstResponder");
  return 0;
}


/* -[FRPTextFieldCell layoutSubviews] | encoding v16@0:8 */
/* Address: 000b3e80 | Name: instance_FRPTextFieldCell__layoutSubviews | Body bytes: 152 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPTextFieldCell::instance_FRPTextFieldCell__layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::FRPTextFieldCell;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"layoutSubviews");
  IVar1 = FRPCell::instance_FRPCell__tintUIColor(param_1,"tintUIColor");
  self = instance_FRPTextFieldCell__textField(param_1,"textField");
  _objc_msgSend(self,"setTintColor:",IVar1);
  return;
}


/* -[FRPTextFieldCell textField] | encoding @16@0:8 */
/* Address: 000b3f18 | Name: instance_FRPTextFieldCell__textField | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPTextFieldCell::instance_FRPTextFieldCell__textField(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textField);
}


/* -[FRPTextFieldCell setTextField:] | encoding v24@0:8@16 */
/* Address: 000b3f28 | Name: instance_FRPTextFieldCell__setTextField_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPTextFieldCell::instance_FRPTextFieldCell__setTextField_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textField) = param_3;
  return;
}


/* -[FRPTextFieldCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b3f3c | Name: instance_FRPTextFieldCell___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPTextFieldCell::instance_FRPTextFieldCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_textField) = 0;
  return;
}


/* +[FRPTextFieldCell cellWithTitle:setting:placeholder:postNotification:changeBlock:] | encoding @56@0:8@16@24@32@40@?48 */
/* Address: 000b38fc | Name: class_FRPTextFieldCell__cellWithTitle_setting_placeholder_postNotification_changeBlock_ | Body bytes: 236 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID FRPTextFieldCell::
   class_FRPTextFieldCell__cellWithTitle_setting_placeholder_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             undefined4 param_8)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,"cellWithTitle:setting:placeholder:postNotification:changeBlock:",
                        param_3,param_4,param_5,param_6,param_7);
  return IVar1;
}

