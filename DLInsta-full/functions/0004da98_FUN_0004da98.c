/* Address: 0004da98 | Name: FUN_0004da98 | Body bytes: 908 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_0004da98(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
               undefined8 param_5,undefined8 param_6,ID param_7)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID self;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  
  IVar2 = _objc_msgSend(param_7,"state");
  if (IVar2 == 1) {
    uVar3 = FUN_0008c218(&cf_DM_UPLOAD_VOICE_TITLE_OPTION);
    IVar2 = _objc_msgSend((ID)&objc::class_t::DLSystemAlertController,
                          "alertControllerWithTitle:message:preferredStyle:",uVar3,0,0);
    uVar3 = FUN_0008c218(&cf_DM_UPLOAD_VOICE_FORM_FILES_OPTION);
    puVar1 = PTR___NSConcreteStackBlock_000e80d8;
    local_98 = PTR___NSConcreteStackBlock_000e80d8;
    local_90 = 0xc0000000;
    local_88 = FUN_0004f38c;
    puStack_80 = &DAT_000e8a88;
    local_78 = param_5;
    IVar4 = UIAlertAction::actionWithTitle_style_handler_
                      ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",uVar3,0,
                       &local_98);
    _objc_msgSend(IVar2,"addAction:",IVar4);
    uVar3 = FUN_0008c218(&cf_DM_UPLOAD_VOICE_FORM_LIBRARY_OPTION);
    local_c0 = puVar1;
    local_b8 = 0xc0000000;
    local_b0 = FUN_0004f430;
    puStack_a8 = &DAT_000e8a88;
    local_a0 = param_5;
    IVar4 = UIAlertAction::actionWithTitle_style_handler_
                      ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",uVar3,0,
                       &local_c0);
    _objc_msgSend(IVar2,"addAction:",IVar4);
    uVar3 = FUN_0008c218(&cf_ACTION_CANCEL);
    IVar4 = UIAlertAction::actionWithTitle_style_handler_
                      ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",uVar3,1,
                       &PTR___NSConcreteGlobalBlock_000e8ac8);
    _objc_msgSend(IVar2,"addAction:",IVar4);
    IVar4 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    IVar5 = _objc_msgSend(IVar4,"view");
    _objc_msgSend(IVar5,"frame");
    IVar5 = _objc_msgSend(IVar4,"view");
    _objc_msgSend(IVar5,"frame");
    IVar5 = _objc_msgSend(IVar4,"view");
    self = _objc_msgSend(IVar2,"popoverPresentationController");
    _objc_msgSend(self,"setSourceView:",IVar5);
    IVar5 = _objc_msgSend(IVar2,"popoverPresentationController");
    _objc_msgSend(IVar5,"setSourceRect:",param_3 * 0.5,param_4 + -50.0,0,0);
    _objc_msgSend(IVar4,"presentViewController:animated:completion:",IVar2,1,0);
    IVar2 = 0;
  }
  return IVar2;
}

