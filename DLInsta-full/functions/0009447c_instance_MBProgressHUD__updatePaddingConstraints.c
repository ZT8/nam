/* Address: 0009447c | Name: instance_MBProgressHUD__updatePaddingConstraints | Body bytes: 164 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__updatePaddingConstraints(ID param_1,SEL param_2)

{
  ID self;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = 0;
  puStack_38 = &local_40;
  self = instance_MBProgressHUD__paddingConstraints(param_1,"paddingConstraints");
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_00094538;
  puStack_50 = &DAT_000e91c8;
  local_48 = &local_40;
  _objc_msgSend(self,"enumerateObjectsUsingBlock:",&local_68);
  __Block_object_dispose(&local_40,8);
  return;
}

