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

