/* Address: 000a5244 | Name: class_DLSaveMedia__showHUDInThreadWithState_ | Body bytes: 112 */

/* Function Stack Size: 0x18 bytes */

void DLSaveMedia::class_DLSaveMedia__showHUDInThreadWithState_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  unsigned_long_long local_28;
  
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_48 = PTR___NSConcreteStackBlock_000e80d8;
  local_40 = 0xc0000000;
  local_38 = FUN_000a52b4;
  puStack_30 = &DAT_000e8978;
  local_28 = param_3;
  _dispatch_async(puVar1,&local_48);
  return;
}

