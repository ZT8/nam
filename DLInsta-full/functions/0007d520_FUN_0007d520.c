/* Address: 0007d520 | Name: FUN_0007d520 | Body bytes: 80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007d520(undefined8 param_1,ID param_2)

{
  _objc_msgSend(param_2,"setPlaceholder:",&cf_password);
  _objc_msgSend(param_2,"setSecureTextEntry:",1);
  return 0;
}

