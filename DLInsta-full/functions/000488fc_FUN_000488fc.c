/* Address: 000488fc | Name: FUN_000488fc | Body bytes: 216 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_000488fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  long local_38;
  
  pcVar2 = DAT_000ffd68;
  if (DAT_000ffd68 == (code *)0x0) {
    pcVar2 = (code *)_class_getMethodImplementation(DAT_000ffd60,"init");
  }
  lVar3 = (*pcVar2)(param_1,param_2);
  puVar1 = PTR___dispatch_main_q_000e8268;
  if (lVar3 != 0) {
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_58 = PTR___NSConcreteStackBlock_000e80d8;
    local_50 = 0xc2000000;
    local_48 = FUN_0004defc;
    puStack_40 = &DAT_000e8948;
    local_38 = lVar3;
    _dispatch_async(puVar1,&local_58);
  }
  return lVar3;
}

