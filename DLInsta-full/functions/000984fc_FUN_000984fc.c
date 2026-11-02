/* Address: 000984fc | Name: FUN_000984fc | Body bytes: 740 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_000984fc(long param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID self;
  undefined *local_90;
  undefined **local_88;
  code *local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"length");
  if ((IVar2 == 0) ||
     (IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"length"),
     puVar1 = PTR___NSConcreteStackBlock_000e80d8, IVar2 < 0xf)) {
    IVar2 = 0;
  }
  else {
    local_70 = *(code **)(param_1 + 0x20);
    local_90 = PTR___NSConcreteStackBlock_000e80d8;
    local_88 = (undefined **)0xc2000000;
    local_80 = FUN_0009820c;
    local_78 = (code *)&DAT_000e9368;
    uVar3 = FUN_0009820c();
    IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"stringByReplacingOccurrencesOfString:withString:"
                          ,uVar3,&cf___);
    local_90 = puVar1;
    local_88 = (undefined **)0xc2000000;
    local_80 = FUN_0009820c;
    local_78 = (code *)&DAT_000e9368;
    local_70 = (code *)IVar2;
    uVar4 = FUN_0009820c();
    IVar2 = _objc_msgSend(IVar2,"stringByReplacingOccurrencesOfString:withString:",uVar4,&cf___);
    local_90 = (undefined *)0x0;
    local_80 = (code *)0x3032000000;
    local_78 = FUN_00097af4;
    local_70 = FUN_00097b04;
    local_88 = &local_90;
    local_68 = uVar4;
    uVar4 = FUN_00098310();
    __Block_object_dispose(&local_90,8);
    IVar2 = _objc_msgSend(IVar2,"base64DecodedData");
    self = _objc_alloc(&_OBJC_CLASS___NSString);
    IVar2 = _objc_msgSend(IVar2,"fkTshferAln9:alef:",uVar4,uVar3);
    IVar2 = NSString::initWithData_encoding_(self,"initWithData:encoding:",IVar2,4);
  }
  return IVar2;
}

