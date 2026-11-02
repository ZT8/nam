/* Address: 000b4138 | Name: instance_FRPViewCell__cellWithHeight_initBlock_layoutBlock_ | Body bytes: 260 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID FRPViewCell::instance_FRPViewCell__cellWithHeight_initBlock_layoutBlock_
             (ID param_1,SEL param_2,int param_3,ID param_4,uint param_5,ID param_6,
             undefined4 param_7)

{
  ID self;
  undefined4 uVar1;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::FRPViewCell;
  uVar1 = 0;
  local_50 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_50,"initWithTitle:setting:",0,0);
  if ((ulong)param_5 != 0) {
    instance_FRPViewCell__setLayoutBlock_(param_1,"setLayoutBlock:",(ulong)param_5,uVar1);
  }
  _objc_msgSend(self,"setAccessoryType:",0);
  _objc_msgSend(self,"setSelectionStyle:",0);
  FRPCell::instance_FRPCell__setHeight_(self,"setHeight:",param_3);
  (**(code **)(param_4 + 0x10))(param_4,self);
  return self;
}

