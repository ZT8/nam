/* Address: 000aca00 | Name: instance_DLUser__downloadAvatarFromUrl_completion_ | Body bytes: 376 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLUser::instance_DLUser__downloadAvatarFromUrl_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID self;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID local_60;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar2 = NSURL::URLWithString_
                    ((ID)&_OBJC_CLASS___NSURL,"URLWithString:",param_3,param_4,(ulong)param_5);
  puVar1 = PTR___dispatch_main_q_000e8268;
  if (IVar2 == 0) {
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_58 = PTR___NSConcreteStackBlock_000e80d8;
    local_50 = 0xc2000000;
    local_48 = FUN_000acb78;
    puStack_40 = &DAT_000e92f8;
    local_38 = param_4;
    _dispatch_async(puVar1,&local_58);
  }
  else {
    self = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession,"sharedSession");
    local_88 = PTR___NSConcreteStackBlock_000e80d8;
    local_80 = 0xc2000000;
    local_78 = FUN_000acb88;
    puStack_70 = &DAT_000e9ba8;
    local_68 = param_1;
    local_60 = param_4;
    IVar2 = NSURLSession::dataTaskWithURL_completionHandler_
                      (self,"dataTaskWithURL:completionHandler:",IVar2,&local_88);
    NSURLSession::resume(IVar2,"resume");
  }
  return;
}

