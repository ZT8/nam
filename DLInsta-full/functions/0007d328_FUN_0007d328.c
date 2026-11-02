/* Address: 0007d328 | Name: FUN_0007d328 | Body bytes: 416 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007d328(void)

{
  ID self;
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  self = _objc_msgSend((ID)&objc::class_t::DLSystemAlertController,
                       "alertControllerWithTitle:message:preferredStyle:",&cf_DLDebugging,
                       &cf_Thisisonlyforpurposeofshowingdebugging,1);
  _objc_msgSend(self,"addTextFieldWithConfigurationHandler:",&PTR___NSConcreteGlobalBlock_000e8c88);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_0007d584;
  puStack_50 = &DAT_000e8ca8;
  local_48 = self;
  IVar1 = UIAlertAction::actionWithTitle_style_handler_
                    ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",&cf_OK,0,
                     &local_68);
  _objc_msgSend(self,"addAction:",IVar1);
  IVar1 = UIAlertAction::actionWithTitle_style_handler_
                    ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",&cf_Cancel,1,
                     &PTR___NSConcreteGlobalBlock_000e8cd8);
  _objc_msgSend(self,"addAction:",IVar1);
  IVar1 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  _objc_msgSend(IVar1,"presentViewController:animated:completion:",self,1,0);
  return 0;
}

