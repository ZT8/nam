/* Address: 00011ff0 | Name: FUN_00011ff0 | Body bytes: 1076 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00011ff0(undefined8 param_1,ID param_2)

{
  undefined *puVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID local_60;
  ID local_58;
  
  IVar3 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary,"class");
  IVar3 = _objc_msgSend(param_2,"isKindOfClass:",IVar3);
  if ((int)IVar3 != 0) {
    if (((DAT_000ffb60 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffb60), iVar2 != 0)) {
      DAT_000ffb58 = '\x01';
      DAT_000ffb50 = 0x9bb0f2cef66eee8a;
      ___cxa_atexit(PTR_FUN_000e8218,&DAT_000ffb50,0);
      ___cxa_guard_release(&DAT_000ffb60);
    }
    if (DAT_000ffb58 != '\0') {
      DAT_000ffb50 = DAT_000ffb50 ^ 0x9bd595af851d8be7;
      DAT_000ffb58 = '\0';
    }
    IVar3 = NSString::stringWithCString_encoding_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffb50,4);
    IVar3 = _objc_msgSend(param_2,"objectForKeyedSubscript:",IVar3);
    if (IVar3 != 0) {
      if (((DAT_000ffb78 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffb78), iVar2 != 0)) {
        DAT_000ffb70 = '\x01';
        DAT_000ffb68 = 0x3986a6fac8e0361e;
        ___cxa_atexit(PTR_FUN_000e8228,&DAT_000ffb68,0);
        ___cxa_guard_release(&DAT_000ffb78);
      }
      if (DAT_000ffb70 != '\0') {
        DAT_000ffb68 = DAT_000ffb68 ^ 0x39e3c19bbb935373;
        DAT_000ffb70 = '\0';
      }
      IVar3 = NSString::stringWithCString_encoding_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffb68,4);
      IVar3 = _objc_msgSend(param_2,"objectForKeyedSubscript:",IVar3);
      IVar4 = _objc_msgSend(IVar3,"length");
      if (IVar4 != 0) {
        IVar4 = _objc_msgSend(IVar3,"hash");
        IVar5 = NSUserDefaults::standardUserDefaults
                          ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
        if (((DAT_000ffb98 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffb98), iVar2 != 0))
        {
          DAT_000ffb90 = '\x01';
          uRam00000000000ffb88 = 0xc91f6824b1e25ee0;
          _DAT_000ffb80 = 0xa804682094ce57e3;
          ___cxa_atexit(PTR_FUN_000e8158,&DAT_000ffb80,0);
          ___cxa_guard_release(&DAT_000ffb98);
        }
        if (DAT_000ffb90 != '\0') {
          _DAT_000ffb80 = _DAT_000ffb80 ^ 0xc9771b45f9913b87;
          uRam00000000000ffb88 = uRam00000000000ffb88 ^ 0xc9771b45f9913b87;
          DAT_000ffb90 = '\0';
        }
        IVar6 = NSString::stringWithCString_encoding_
                          ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffb80,4
                          );
        IVar5 = NSUserDefaults::valueForKey_(IVar5,"valueForKey:",IVar6);
        IVar5 = NSUserDefaults::longLongValue(IVar5,"longLongValue");
        puVar1 = PTR___dispatch_main_q_000e8268;
        if (IVar4 != IVar5) {
          _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
          local_88 = PTR___NSConcreteStackBlock_000e80d8;
          local_80 = 0xc2000000;
          local_78 = FUN_000124a8;
          puStack_70 = &DAT_000e89d8;
          local_68 = param_2;
          local_60 = IVar3;
          local_58 = IVar4;
          _dispatch_async(puVar1,&local_88);
        }
      }
    }
  }
  return 0;
}

