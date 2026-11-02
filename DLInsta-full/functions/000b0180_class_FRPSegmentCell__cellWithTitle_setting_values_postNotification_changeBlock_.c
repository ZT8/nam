/* Address: 000b0180 | Name: class_FRPSegmentCell__cellWithTitle_setting_values_postNotification_changeBlock_ | Body bytes: 240 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID FRPSegmentCell::class_FRPSegmentCell__cellWithTitle_setting_values_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             undefined4 param_8)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,
                        "cellWithTitle:setting:values:displayedValues:postNotification:changeBlock:"
                        ,param_3,param_4,param_5,0,param_6,param_7);
  return IVar1;
}

