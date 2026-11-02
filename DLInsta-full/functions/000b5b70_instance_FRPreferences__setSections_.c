/* Address: 000b5b70 | Name: instance_FRPreferences__setSections_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPreferences::instance_FRPreferences__setSections_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_sections) = param_3;
  return;
}

