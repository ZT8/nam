/* Address: 000b5bcc | Name: instance_FRPreferences___cxx_destruct | Body bytes: 84 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPreferences::instance_FRPreferences___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_tintUIColor) = 0;
  *(undefined8 *)(param_1 + (long)_plistPath) = 0;
  *(undefined8 *)(param_1 + (long)_sections) = 0;
  return;
}

