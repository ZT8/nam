/* Address: 0008bdac | Name: instance_DLCrashViewController__mailComposeController_didFinishWithResult_error_ | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void DLCrashViewController::
     instance_DLCrashViewController__mailComposeController_didFinishWithResult_error_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  undefined *puVar1;
  dispatch_time_t dVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  long_long local_48;
  
  dVar2 = _dispatch_time(0,1500000000);
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc0000000;
  local_58 = FUN_0008be8c;
  puStack_50 = &DAT_000e8978;
  local_48 = param_4;
  _dispatch_after(dVar2,puVar1,&local_68);
  _objc_msgSend(param_3,"dismissViewControllerAnimated:completion:",1,0);
  _objc_msgSend(param_1,"dismissViewControllerAnimated:completion:",1,0);
  return;
}

