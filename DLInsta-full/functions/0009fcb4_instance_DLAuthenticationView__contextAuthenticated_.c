/* Address: 0009fcb4 | Name: instance_DLAuthenticationView__contextAuthenticated_ | Body bytes: 404 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void DLAuthenticationView::instance_DLAuthenticationView__contextAuthenticated_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  undefined8 local_48;
  
  IVar2 = _objc_alloc(&_OBJC_CLASS___LAContext,param_2,param_3,param_4);
  IVar2 = LAContext::init(IVar2,"init");
  instance_DLAuthenticationView__setContext_(param_1,"setContext:",IVar2);
  IVar2 = instance_DLAuthenticationView__context(param_1,"context");
  local_48 = 0;
  IVar2 = _objc_msgSend(IVar2,"canEvaluatePolicy:error:",2,&local_48);
  uVar1 = local_48;
  if ((int)IVar2 == 0) {
    DLHelper::class_DLHelper__setBool_forKey_
              ((ID)&objc::class_t::DLHelper,"setBool:forKey:",0,0xec0c8);
    (**(code **)(param_3 + 0x10))(param_3,0,uVar1);
  }
  else {
    IVar2 = instance_DLAuthenticationView__context(param_1,"context");
    local_70 = PTR___NSConcreteStackBlock_000e80d8;
    local_68 = 0xc2000000;
    local_60 = FUN_0009fe48;
    puStack_58 = &DAT_000e9828;
    local_50 = param_3;
    _objc_msgSend(IVar2,"evaluatePolicy:localizedReason:reply:",2,&cf_space_s_,&local_70);
  }
  return;
}

