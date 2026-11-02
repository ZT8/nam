/* Address: 00090e78 | Name: class_MBProgressHUD__hideHUDForView_animated_ | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

bool MBProgressHUD::class_MBProgressHUD__hideHUDForView_animated_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  
  IVar1 = class_MBProgressHUD__HUDForView_(param_1,"HUDForView:",param_3);
  if (IVar1 != 0) {
    instance_MBProgressHUD__setRemoveFromSuperViewOnHide_(IVar1,"setRemoveFromSuperViewOnHide:",1);
    instance_MBProgressHUD__hideAnimated_(IVar1,"hideAnimated:",param_4);
  }
  return (bool)(IVar1 != 0);
}

