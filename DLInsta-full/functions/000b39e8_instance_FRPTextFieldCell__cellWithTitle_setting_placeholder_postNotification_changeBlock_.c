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

