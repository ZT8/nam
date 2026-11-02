/* Address: 000b5b94 | Name: instance_FRPreferences__setPlistPath_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPreferences::instance_FRPreferences__setPlistPath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_plistPath) = param_3;
  return;
}

