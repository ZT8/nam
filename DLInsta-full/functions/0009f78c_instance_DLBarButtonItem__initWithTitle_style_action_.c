/* Address: 0009f78c | Name: instance_DLBarButtonItem__initWithTitle_style_action_ | Body bytes: 160 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID DLBarButtonItem::instance_DLBarButtonItem__initWithTitle_style_action_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  *(ID *)(param_1 + (long)onPressHandler) = param_5;
  pcStack_38 = &objc::class_t::DLBarButtonItem;
  local_40 = param_1;
  IVar1 = UIBarButtonItem::initWithTitle_style_target_action_
                    ((ID)&local_40,"initWithTitle:style:target:action:",param_3,param_4,param_1,
                     "didPressBarButton:");
  return IVar1;
}

