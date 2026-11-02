/* Address: 0009ad14 | Name: instance_ABMenuViewController__initWithActionItems_ | Body bytes: 52 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

ID ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
             (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_items) = param_3;
  return param_1;
}

