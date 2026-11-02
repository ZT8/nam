/* Address: 000ae854 | Name: instance_FRPCell___cxx_destruct | Body bytes: 124 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPCell::instance_FRPCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_valueChanged) = 0;
  *(undefined8 *)(param_1 + (long)_postNotification) = 0;
  *(undefined8 *)(param_1 + (long)_title) = 0;
  *(undefined8 *)(param_1 + (long)_setting) = 0;
  *(undefined8 *)(param_1 + (long)_tintUIColor) = 0;
  return;
}

