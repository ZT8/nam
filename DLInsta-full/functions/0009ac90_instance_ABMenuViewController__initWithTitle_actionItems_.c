/* Address: 0009ac90 | Name: instance_ABMenuViewController__initWithTitle_actionItems_ | Body bytes: 132 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID ABMenuViewController::instance_ABMenuViewController__initWithTitle_actionItems_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  *(ID *)(param_1 + (long)_actionTitle) = param_3;
  *(ID *)(param_1 + (long)_items) = param_4;
  return param_1;
}

