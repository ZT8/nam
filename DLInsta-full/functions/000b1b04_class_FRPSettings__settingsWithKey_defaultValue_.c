/* Address: 000b1b04 | Name: class_FRPSettings__settingsWithKey_defaultValue_ | Body bytes: 116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPSettings::class_FRPSettings__settingsWithKey_defaultValue_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = instance_FRPSettings__initWithKey_defaultValue_
                    (IVar1,"initWithKey:defaultValue:",param_3,param_4);
  return IVar1;
}

