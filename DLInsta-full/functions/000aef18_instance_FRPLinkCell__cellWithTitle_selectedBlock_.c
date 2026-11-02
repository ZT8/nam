/* Address: 000aef18 | Name: instance_FRPLinkCell__cellWithTitle_selectedBlock_ | Body bytes: 156 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPLinkCell::instance_FRPLinkCell__cellWithTitle_selectedBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID self;
  undefined4 uVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::FRPLinkCell;
  uVar1 = 0;
  local_40 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_40,"initWithTitle:setting:",param_3,0);
  FRPCell::instance_FRPCell__setValueChanged_(self,"setValueChanged:",param_4,uVar1);
  _objc_msgSend(self,"setAccessoryType:",1);
  return self;
}

