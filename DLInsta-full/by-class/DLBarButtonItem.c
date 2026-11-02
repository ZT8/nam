/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLBarButtonItem initWithTitle:style:action:] | encoding @40@0:8@16q24@?32 */
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


/* -[DLBarButtonItem initWithImage:style:action:] | encoding @40@0:8@16q24@?32 */
/* Address: 0009f82c | Name: instance_DLBarButtonItem__initWithImage_style_action_ | Body bytes: 160 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID DLBarButtonItem::instance_DLBarButtonItem__initWithImage_style_action_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  *(ID *)(param_1 + (long)onPressHandler) = param_5;
  pcStack_38 = &objc::class_t::DLBarButtonItem;
  local_40 = param_1;
  IVar1 = UIBarButtonItem::initWithImage_style_target_action_
                    ((ID)&local_40,"initWithImage:style:target:action:",param_3,param_4,param_1,
                     "didPressBarButton:");
  return IVar1;
}


/* -[DLBarButtonItem didPressBarButton:] | encoding v24@0:8@16 */
/* Address: 0009f8cc | Name: instance_DLBarButtonItem__didPressBarButton_ | Body bytes: 28 */

/* Function Stack Size: 0x18 bytes */

void DLBarButtonItem::instance_DLBarButtonItem__didPressBarButton_
               (ID param_1,SEL param_2,ID param_3)

{
  if (*(long *)(param_1 + (long)onPressHandler) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0009f8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + (long)onPressHandler) + 0x10))();
  return;
}


/* -[DLBarButtonItem .cxx_destruct] | encoding v16@0:8 */
/* Address: 0009f8e8 | Name: instance_DLBarButtonItem___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLBarButtonItem::instance_DLBarButtonItem___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)onPressHandler) = 0;
  return;
}

