/* Address: 00099cb8 | Name: FUN_00099cb8 | Body bytes: 548 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_00099cb8(long param_1)

{
  ID self;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dispatch_queue_t pdVar5;
  undefined8 uVar6;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    DAT_001006e1 = 0;
    DAT_001006e0 = 0;
    self = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
    NSDate::timeIntervalSince1970(self,"timeIntervalSince1970");
    uVar3 = DAT_00100698;
    uVar2 = DAT_00100680;
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar1 = _CFStringCreateWithFormat(0,0,DAT_00100668);
      uVar6 = 2;
    }
    else {
      uVar1 = _CFStringCreateWithFormat(0,0,DAT_00100658);
      uVar6 = 1;
      uVar3 = uVar2;
    }
    uVar2 = _CFStringCreateExternalRepresentation(0,uVar1,0x8000100,0);
    uVar3 = _CFURLCreateWithString(*(undefined8 *)PTR__kCFAllocatorDefault_000e8270,uVar3,0);
    uVar4 = _CFHTTPMessageCreateRequest
                      (0,DAT_00100648,uVar3,*(undefined8 *)PTR__kCFHTTPVersion1_1_000e8280);
    _CFHTTPMessageSetBody(uVar4,uVar2);
    _CFHTTPMessageSetHeaderFieldValue(uVar4,DAT_00100608,DAT_001005d0);
    pdVar5 = _dispatch_get_global_queue(0,0);
    local_b0 = PTR___NSConcreteStackBlock_000e80d8;
    local_a8 = 0xc2000000;
    local_a0 = FUN_00099edc;
    puStack_98 = &DAT_000e95a8;
    local_90 = *(undefined8 *)(param_1 + 0x20);
    local_88 = uVar4;
    uStack_80 = uVar1;
    local_78 = uVar6;
    local_70 = uVar2;
    uStack_68 = uVar3;
    _dispatch_async(pdVar5,&local_b0);
    param_1 = 0;
  }
  return param_1;
}

