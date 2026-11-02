/* Address: 000af0f8 | Name: class_FRPListCell__cellWithTitle_setting_items_value_popViewOnSelect_postNotification_changedBlock_ | Body bytes: 280 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x44 bytes */

ID FRPListCell::
   class_FRPListCell__cellWithTitle_setting_items_value_popViewOnSelect_postNotification_changedBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7,
             ID param_8,ID param_9,undefined4 param_10)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,
                        "cellWithTitle:setting:items:value:popViewOnSelect:postNotification:changedBlock:"
                        ,param_3,param_4,param_5,param_6,(ulong)param_7,param_8,param_9);
  return IVar1;
}

