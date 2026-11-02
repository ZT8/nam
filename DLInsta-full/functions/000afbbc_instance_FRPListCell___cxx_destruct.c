/* Address: 000afbbc | Name: instance_FRPListCell___cxx_destruct | Body bytes: 64 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPListCell::instance_FRPListCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_values) = 0;
  *(undefined8 *)(param_1 + (long)_items) = 0;
  return;
}

