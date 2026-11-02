/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLUser downloadAvatarFromUrl:completion:] | encoding v32@0:8@16@?24 */
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


/* -[DLUser pk] | encoding @16@0:8 */
/* Address: 000acd10 | Name: instance_DLUser__pk | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLUser::instance_DLUser__pk(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


/* -[DLUser setPk:] | encoding v24@0:8@16 */
/* Address: 000acd18 | Name: instance_DLUser__setPk_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLUser::instance_DLUser__setPk_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


/* -[DLUser fullname] | encoding @16@0:8 */
/* Address: 000acd24 | Name: instance_DLUser__fullname | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLUser::instance_DLUser__fullname(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


/* -[DLUser setFullname:] | encoding v24@0:8@16 */
/* Address: 000acd2c | Name: instance_DLUser__setFullname_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLUser::instance_DLUser__setFullname_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


/* -[DLUser username] | encoding @16@0:8 */
/* Address: 000acd38 | Name: instance_DLUser__username | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLUser::instance_DLUser__username(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


/* -[DLUser setUsername:] | encoding v24@0:8@16 */
/* Address: 000acd40 | Name: instance_DLUser__setUsername_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLUser::instance_DLUser__setUsername_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}


/* -[DLUser avatarURL] | encoding @16@0:8 */
/* Address: 000acd4c | Name: instance_DLUser__avatarURL | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLUser::instance_DLUser__avatarURL(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}


/* -[DLUser setAvatarURL:] | encoding v24@0:8@16 */
/* Address: 000acd54 | Name: instance_DLUser__setAvatarURL_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLUser::instance_DLUser__setAvatarURL_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}


/* -[DLUser avatarImage] | encoding @16@0:8 */
/* Address: 000acd60 | Name: instance_DLUser__avatarImage | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLUser::instance_DLUser__avatarImage(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}


/* -[DLUser setAvatarImage:] | encoding v24@0:8@16 */
/* Address: 000acd68 | Name: instance_DLUser__setAvatarImage_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLUser::instance_DLUser__setAvatarImage_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}


/* -[DLUser .cxx_destruct] | encoding v16@0:8 */
/* Address: 000acd74 | Name: instance_DLUser___cxx_destruct | Body bytes: 84 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLUser::instance_DLUser___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

