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

