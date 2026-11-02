/* Address: 000902b0 | Name: class_DLHelper__findViewController_ | Body bytes: 216 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLHelper::class_DLHelper__findViewController_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  if (param_3 != 0) {
    do {
      IVar1 = UIViewController::class((ID)&_OBJC_CLASS___UIViewController,"class");
      IVar1 = _objc_msgSend(param_3,"isKindOfClass:",IVar1);
      if ((int)IVar1 != 0) {
        return param_3;
      }
      param_3 = _objc_msgSend(param_3,"nextResponder");
    } while (param_3 != 0);
  }
  return 0;
}

