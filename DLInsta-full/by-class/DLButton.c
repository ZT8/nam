/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLButton initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 0009f620 | Name: instance_DLButton__initWithFrame_ | Body bytes: 104 */

/* Function Stack Size: 0x30 bytes */

ID DLButton::instance_DLButton__initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLButton;
  local_30 = param_1;
  self = UIButton::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    UIButton::addTarget_action_forControlEvents_
              (self,"addTarget:action:forControlEvents:",self,"didPressButton:",0x40);
  }
  return self;
}


/* -[DLButton actionHandler:] | encoding v24@0:8@?16 */
/* Address: 0009f688 | Name: instance_DLButton__actionHandler_ | Body bytes: 56 */

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLButton::instance_DLButton__actionHandler_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_handler) = param_3;
  return;
}


/* -[DLButton didPressButton:] | encoding v24@0:8@16 */
/* Address: 0009f6c0 | Name: instance_DLButton__didPressButton_ | Body bytes: 28 */

/* Function Stack Size: 0x18 bytes */

void DLButton::instance_DLButton__didPressButton_(ID param_1,SEL param_2,ID param_3)

{
  if (*(long *)(param_1 + (long)_handler) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0009f6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + (long)_handler) + 0x10))();
  return;
}


/* -[DLButton .cxx_destruct] | encoding v16@0:8 */
/* Address: 0009f6dc | Name: instance_DLButton___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLButton::instance_DLButton___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_handler) = 0;
  return;
}

