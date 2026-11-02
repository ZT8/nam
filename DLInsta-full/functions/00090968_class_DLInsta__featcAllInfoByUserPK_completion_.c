/* Address: 00090968 | Name: class_DLInsta__featcAllInfoByUserPK_completion_ | Body bytes: 724 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void DLInsta::class_DLInsta__featcAllInfoByUserPK_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  ID local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  
  IVar1 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",
                     &cf_https___i_instagram_com_api_v1_users____info_,param_4,(ulong)param_5);
  IVar1 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:",IVar1);
  IVar2 = _NSClassFromString(&cf_IGURLRequest);
  IVar2 = _objc_msgSend(IVar2,"instancesRespondToSelector:",
                        "initWithURL:HTTPMethod:module:forceIGAPIHeaders:");
  if ((int)IVar2 != 0) {
    IVar2 = _NSClassFromString(&cf_IGScopedNetworker);
    IVar2 = _objc_msgSend(IVar2,"instancesRespondToSelector:",
                          "startAPIRequest:policy:successHandler:failureHandler:");
    if ((int)IVar2 != 0) {
      _NSClassFromString(&cf_IGURLRequest);
      IVar2 = _objc_alloc();
      IVar1 = _objc_msgSend(IVar2,"initWithURL:HTTPMethod:module:forceIGAPIHeaders:",IVar1,0,0,1);
      IVar2 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication")
      ;
      IVar2 = UIApplication::delegate(IVar2,"delegate");
      IVar2 = UIApplication::window(IVar2,"window");
      IVar2 = UIApplication::performSelector_(IVar2,"performSelector:","userSession");
      IVar2 = UIApplication::performSelector_(IVar2,"performSelector:","networker");
      local_98 = PTR___NSConcreteStackBlock_000e80d8;
      local_90 = 0xc2000000;
      local_88 = FUN_00090c9c;
      puStack_80 = &DAT_000e90d8;
      local_c0 = PTR___NSConcreteStackBlock_000e80d8;
      local_b8 = 0xc2000000;
      local_b0 = FUN_00090cb8;
      puStack_a8 = &DAT_000e9108;
      local_a0 = param_4;
      local_78 = param_4;
      UIApplication::startAPIRequest_policy_successHandler_failureHandler_
                (IVar2,"startAPIRequest:policy:successHandler:failureHandler:",IVar1,0,&local_98,
                 &local_c0);
      return;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,0,1);
  return;
}

