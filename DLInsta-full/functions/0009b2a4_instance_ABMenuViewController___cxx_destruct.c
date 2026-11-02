/* Address: 0009b2a4 | Name: instance_ABMenuViewController___cxx_destruct | Body bytes: 80 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void ABMenuViewController::instance_ABMenuViewController___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + (long)_delegate);
  *(undefined8 *)(param_1 + (long)_items) = 0;
  *(undefined8 *)(param_1 + (long)_actionTitle) = 0;
  return;
}

