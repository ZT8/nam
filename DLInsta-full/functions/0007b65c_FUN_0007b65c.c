/* Address: 0007b65c | Name: FUN_0007b65c | Body bytes: 364 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007b65c(void)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_getClass("IGAppDelegate");
  DAT_00100048 = _class_getSuperclass();
  FUN_0007b7e0(uVar1,"applicationDidBecomeActive:",FUN_0007b8d0,&DAT_00100050);
  FUN_0007b7e0(uVar1,"applicationWillTerminate:",FUN_0007c26c,&DAT_00100058);
  FUN_0007b7e0(uVar1,"applicationWillResignActive:",FUN_0007c41c,&DAT_00100060);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"authenticationView",FUN_0007b618,IVar2);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"setAuthenticationView:",FUN_0007b63c,IVar2);
  return 0;
}

