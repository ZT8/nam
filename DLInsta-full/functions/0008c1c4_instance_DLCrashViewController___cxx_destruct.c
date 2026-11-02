/* Address: 0008c1c4 | Name: instance_DLCrashViewController___cxx_destruct | Body bytes: 84 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLCrashViewController::instance_DLCrashViewController___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_appVersion) = 0;
  *(undefined8 *)(param_1 + (long)_appName) = 0;
  *(undefined8 *)(param_1 + (long)_infoDict) = 0;
  return;
}

