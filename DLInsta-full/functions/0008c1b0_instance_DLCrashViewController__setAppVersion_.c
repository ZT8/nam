/* Address: 0008c1b0 | Name: instance_DLCrashViewController__setAppVersion_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLCrashViewController::instance_DLCrashViewController__setAppVersion_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_appVersion) = param_3;
  return;
}

