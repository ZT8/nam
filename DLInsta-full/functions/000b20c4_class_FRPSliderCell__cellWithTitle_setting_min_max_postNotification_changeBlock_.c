/* Address: 000b20c4 | Name: class_FRPSliderCell__cellWithTitle_setting_min_max_postNotification_changeBlock_ | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID FRPSliderCell::class_FRPSliderCell__cellWithTitle_setting_min_max_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,float param_5,float param_6,ID param_7,
             ID param_8,undefined4 param_9)

{
  ID IVar1;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,"cellWithTitle:setting:min:max:postNotification:changeBlock:",
                        CONCAT44(in_register_00005004,param_5),
                        CONCAT44(in_register_00005024,param_6),param_3,param_4,param_7,param_8);
  return IVar1;
}

