/* Address: 00011d30 | Name: FUN_00011d30 | Body bytes: 552 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00011d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ID IVar4;
  dispatch_time_t dVar5;
  
  pcVar2 = DAT_000ffb48;
  if (DAT_000ffb48 == (code *)0x0) {
    pcVar2 = (code *)_class_getMethodImplementation
                               (DAT_000ffb40,"application:didFinishLaunchingWithOptions:");
  }
  (*pcVar2)(param_1,param_2,param_3,param_4);
  uVar3 = FUN_00097ef8();
  uVar3 = FUN_00097a54(uVar3);
  IVar4 = _objc_msgSend(DAT_001006a8,"length");
  IVar4 = FUN_00097c68(uVar3,IVar4);
  IVar4 = _objc_msgSend(IVar4,"isEqualToString:",DAT_001006a8);
  if ((IVar4 & 1) == 0) {
    FUN_00097480(&PTR___NSConcreteGlobalBlock_000e88e8);
  }
  FUN_0009a3bc(&PTR___NSConcreteGlobalBlock_000e8928);
  IVar4 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar4 = NSUserDefaults::objectForKey_(IVar4,"objectForKey:",&cf_DLAlertInfoFirst);
  if (IVar4 == 0) {
    dVar5 = _dispatch_time(0,3000000000);
    puVar1 = PTR___dispatch_main_q_000e8268;
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    _dispatch_after(dVar5,puVar1,&PTR___NSConcreteGlobalBlock_000e8a08);
    IVar4 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    NSUserDefaults::setValue_forKey_
              (IVar4,"setValue:forKey:",&cf_alertInfoOnce,&cf_DLAlertInfoFirst);
    IVar4 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    NSUserDefaults::synchronize(IVar4,"synchronize");
  }
  return 1;
}

