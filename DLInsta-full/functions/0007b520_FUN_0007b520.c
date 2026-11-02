/* Address: 0007b520 | Name: FUN_0007b520 | Body bytes: 228 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

cfstringStruct * FUN_0007b520(undefined8 param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  code *pcVar2;
  cfstringStruct *pcVar3;
  
  IVar1 = _objc_msgSend(param_3,"isEqualToString:",&cf_CFBundleIdentifier);
  if ((IVar1 & 1) == 0) {
    IVar1 = _objc_msgSend(param_3,"isEqualToString:",&cf_CFBundleDisplayName);
    if (((IVar1 & 1) == 0) &&
       (IVar1 = _objc_msgSend(param_3,"isEqualToString:",&cf_CFBundleName), (IVar1 & 1) == 0)) {
      pcVar2 = DAT_00100038;
      if (DAT_00100038 == (code *)0x0) {
        pcVar2 = (code *)_class_getMethodImplementation(DAT_00100028,"objectForInfoDictionaryKey:");
      }
      pcVar3 = (cfstringStruct *)(*pcVar2)(param_1,param_2,param_3);
    }
    else {
      pcVar3 = &cf_Instagram;
    }
  }
  else {
    pcVar3 = &cf_com_burbn_instagram;
  }
  return pcVar3;
}

