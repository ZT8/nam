/* Address: 0008fc64 | Name: class_DLHelper__switchToRTL_ | Body bytes: 84 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLHelper::class_DLHelper__switchToRTL_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = class_DLHelper__isDeviceLanguageArabic
                    ((ID)&objc::class_t::DLHelper,"isDeviceLanguageArabic");
  if (bVar1 != 0) {
    _objc_msgSend(param_3,"setSemanticContentAttribute:",4);
  }
  return;
}

