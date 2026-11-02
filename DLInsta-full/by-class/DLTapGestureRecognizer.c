/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLTapGestureRecognizer initWithAction:] | encoding @24@0:8@?16 */
/* Address: 0009f6f0 | Name: instance_DLTapGestureRecognizer__initWithAction_ | Body bytes: 108 */

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLTapGestureRecognizer::instance_DLTapGestureRecognizer__initWithAction_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  ID local_30;
  class_t *pcStack_28;
  
  *(ID *)(param_1 + (long)_handler) = param_3;
  pcStack_28 = &objc::class_t::DLTapGestureRecognizer;
  local_30 = param_1;
  IVar1 = UITapGestureRecognizer::initWithTarget_action_
                    ((ID)&local_30,"initWithTarget:action:",param_1,"didTap:");
  return IVar1;
}


/* -[DLTapGestureRecognizer didTap:] | encoding v24@0:8@16 */
/* Address: 0009f75c | Name: instance_DLTapGestureRecognizer__didTap_ | Body bytes: 28 */

/* Function Stack Size: 0x18 bytes */

void DLTapGestureRecognizer::instance_DLTapGestureRecognizer__didTap_
               (ID param_1,SEL param_2,ID param_3)

{
  if (*(long *)(param_1 + (long)_handler) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0009f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + (long)_handler) + 0x10))();
  return;
}


/* -[DLTapGestureRecognizer .cxx_destruct] | encoding v16@0:8 */
/* Address: 0009f778 | Name: instance_DLTapGestureRecognizer___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLTapGestureRecognizer::instance_DLTapGestureRecognizer___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_handler) = 0;
  return;
}

