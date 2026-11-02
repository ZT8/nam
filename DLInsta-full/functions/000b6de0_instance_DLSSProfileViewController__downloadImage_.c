/* Address: 000b6de0 | Name: instance_DLSSProfileViewController__downloadImage_ | Body bytes: 176 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__downloadImage_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  dispatch_queue_t pdVar1;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID local_38;
  
  pdVar1 = _dispatch_get_global_queue(0,0);
  local_60 = PTR___NSConcreteStackBlock_000e80d8;
  local_58 = 0xc2000000;
  local_50 = FUN_000b6e90;
  puStack_48 = &DAT_000e9688;
  local_40 = param_1;
  local_38 = param_3;
  _dispatch_async(pdVar1,&local_60);
  return;
}

