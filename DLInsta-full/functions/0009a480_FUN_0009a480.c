/* Address: 0009a480 | Name: FUN_0009a480 | Body bytes: 500 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_0009a480(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  dispatch_queue_t pdVar6;
  undefined8 uVar7;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ID IStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = _CFStringCreateWithFormat(0,0,DAT_00100660);
    uVar2 = DAT_00100600;
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_000e8270;
    _CFStringGetLength();
    uVar2 = _CFStringCreateWithFormat(uVar7,0,uVar2);
    IVar3 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
    IVar3 = NSLocale::firstObject(IVar3,"firstObject");
    uVar4 = _CFStringCreateExternalRepresentation(0,uVar1,0x8000100,0);
    uVar5 = _CFURLCreateWithString(uVar7,DAT_00100690,0);
    uVar7 = _CFHTTPMessageCreateRequest
                      (uVar7,DAT_00100648,uVar5,*(undefined8 *)PTR__kCFHTTPVersion1_1_000e8280);
    _CFHTTPMessageSetHeaderFieldValue(uVar7,DAT_001005c0,IVar3);
    _CFHTTPMessageSetHeaderFieldValue(uVar7,DAT_001005f8,uVar2);
    _CFHTTPMessageSetHeaderFieldValue(uVar7,DAT_00100608,DAT_001005d8);
    _CFHTTPMessageSetBody(uVar7,uVar4);
    pdVar6 = _dispatch_get_global_queue(0,0);
    local_a8 = PTR___NSConcreteStackBlock_000e80d8;
    local_a0 = 0xc2000000;
    local_98 = FUN_0009a674;
    puStack_90 = &DAT_000e9638;
    local_88 = *(undefined8 *)(param_1 + 0x20);
    local_80 = uVar7;
    local_78 = uVar5;
    IStack_70 = IVar3;
    local_68 = uVar1;
    uStack_60 = uVar4;
    local_58 = uVar2;
    _dispatch_async(pdVar6,&local_a8);
    param_1 = 0;
  }
  return param_1;
}

