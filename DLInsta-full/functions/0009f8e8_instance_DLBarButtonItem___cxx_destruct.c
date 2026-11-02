/* Address: 0009f8e8 | Name: instance_DLBarButtonItem___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLBarButtonItem::instance_DLBarButtonItem___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)onPressHandler) = 0;
  return;
}

