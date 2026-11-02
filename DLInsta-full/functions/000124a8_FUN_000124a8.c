/* Address: 000124a8 | Name: FUN_000124a8 | Body bytes: 2412 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000124a8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined4 in_w4;
  ulong uVar6;
  byte *pbVar7;
  ID IVar8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar3 = NSMutableArray::init(IVar3,"init");
  IVar8 = *(ID *)(param_1 + 0x20);
  if (((DAT_000ffbb0 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffbb0), iVar2 != 0)) {
    DAT_000ffbab = '\x01';
    _DAT_000ffba0 = 0xf788cb3015e126;
    _DAT_000ffba7 = 0x79fd3cf5;
    ___cxa_atexit(PTR_FUN_000e8118,&DAT_000ffba0,0);
    ___cxa_guard_release(&DAT_000ffbb0);
  }
  if (DAT_000ffbab != '\0') {
    uVar6 = 0;
    pbVar7 = &DAT_000ffba0;
    do {
      *pbVar7 = *pbVar7 ^ (byte)(0x8183fda96f799353 >> (uVar6 & 0x38));
      uVar6 = uVar6 + 8;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0x58);
    DAT_000ffbab = '\0';
  }
  IVar4 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffba0,4);
  IVar8 = _objc_msgSend(IVar8,"objectForKeyedSubscript:",IVar4);
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  if (IVar8 != 0) {
    IVar8 = _objc_alloc(&objc::class_t::DLMaxAlertAction);
    IVar4 = *(ID *)(param_1 + 0x20);
    if (((DAT_000ffbc8 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffbc8), iVar2 != 0)) {
      DAT_000ffbc3 = '\x01';
      _DAT_000ffbb8 = 0x39ccafc421cfea;
      _DAT_000ffbbf = 0x4dd3f06d;
      ___cxa_atexit(PTR_FUN_000e8110,&DAT_000ffbb8,0);
      ___cxa_guard_release(&DAT_000ffbc8);
    }
    if (DAT_000ffbc3 != '\0') {
      uVar6 = 0;
      pbVar7 = &DAT_000ffbb8;
      do {
        *pbVar7 = *pbVar7 ^ (byte)(0x194db9cd9b4dbd9f >> (uVar6 & 0x38));
        uVar6 = uVar6 + 8;
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0x58);
      DAT_000ffbc3 = '\0';
    }
    IVar5 = NSString::stringWithCString_encoding_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffbb8,4);
    IVar4 = _objc_msgSend(IVar4,"objectForKeyedSubscript:",IVar5);
    local_88 = puVar1;
    local_80 = 0xc2000000;
    local_78 = FUN_00012eec;
    puStack_70 = &DAT_000e8948;
    local_68 = *(undefined8 *)(param_1 + 0x20);
    IVar8 = DLMaxAlertAction::instance_DLMaxAlertAction__initWithTitle_action_
                      (IVar8,"initWithTitle:action:",IVar4,(ID)&local_88,in_w4);
    NSMutableArray::addObject_(IVar3,"addObject:",IVar8);
  }
  IVar8 = *(ID *)(param_1 + 0x20);
  if (((DAT_000ffbf8 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffbf8), iVar2 != 0)) {
    DAT_000ffbf6 = '\x01';
    _DAT_000ffbe8 = 0xa8e714cd3e66;
    _DAT_000ffbee = 0xd0a;
    uRam00000000000ffbf0 = 0xcdfb14d72d7a;
    ___cxa_atexit(PTR_FUN_000e8148,&DAT_000ffbe8,0);
    ___cxa_guard_release(&DAT_000ffbf8);
  }
  if (DAT_000ffbf6 != '\0') {
    uVar6 = 0;
    pbVar7 = &DAT_000ffbe8;
    do {
      *pbVar7 = *pbVar7 ^ (byte)(0x6f55cd957ba3590f >> (uVar6 & 0x38));
      uVar6 = uVar6 + 8;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0x70);
    DAT_000ffbf6 = '\0';
  }
  IVar4 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffbe8,4);
  IVar8 = _objc_msgSend(IVar8,"objectForKeyedSubscript:",IVar4);
  if (IVar8 != 0) {
    IVar8 = _objc_alloc(&objc::class_t::DLMaxAlertAction);
    IVar4 = *(ID *)(param_1 + 0x20);
    if (((DAT_000ffc10 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffc10), iVar2 != 0)) {
      DAT_000ffc0e = '\x01';
      _DAT_000ffc00 = 0x488f4a671c12;
      _DAT_000ffc06 = 0x81ce;
      uRam00000000000ffc08 = 0x2d934a7d0f0e;
      ___cxa_atexit(PTR_FUN_000e8140,0xffc00,0);
      ___cxa_guard_release(&DAT_000ffc10);
    }
    if (DAT_000ffc0e != '\0') {
      uVar6 = 0;
      pbVar7 = &DAT_000ffc00;
      do {
        *pbVar7 = *pbVar7 ^ (byte)(0xe3912dfd25097b7b >> (uVar6 & 0x38));
        uVar6 = uVar6 + 8;
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0x70);
      DAT_000ffc0e = '\0';
    }
    IVar5 = NSString::stringWithCString_encoding_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",0xffc00,4);
    IVar4 = _objc_msgSend(IVar4,"objectForKeyedSubscript:",IVar5);
    local_b0 = puVar1;
    local_a8 = 0xc0000000;
    local_a0 = FUN_000130ec;
    puStack_98 = &DAT_000e8978;
    local_90 = *(undefined8 *)(param_1 + 0x30);
    IVar8 = DLMaxAlertAction::instance_DLMaxAlertAction__initWithTitle_action_
                      (IVar8,"initWithTitle:action:",IVar4,(ID)&local_b0,in_w4);
    NSMutableArray::addObject_(IVar3,"addObject:",IVar8);
  }
  IVar8 = *(ID *)(param_1 + 0x20);
  if (((DAT_000ffc40 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffc40), iVar2 != 0)) {
    DAT_000ffc3a = '\x01';
    _DAT_000ffc30 = 0x9e374d98f7a044a0;
    DAT_000ffc38 = 0x2fa1;
    ___cxa_atexit(PTR_FUN_000e80e8,&DAT_000ffc30,0);
    ___cxa_guard_release(&DAT_000ffc40);
  }
  if (DAT_000ffc3a != '\0') {
    uVar6 = 0;
    pbVar7 = &DAT_000ffc30;
    do {
      *pbVar7 = *pbVar7 ^ (byte)(0xf14339ed95ff2fcf >> (uVar6 & 0x38));
      uVar6 = uVar6 + 8;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0x50);
    DAT_000ffc3a = '\0';
  }
  IVar4 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffc30,4);
  IVar8 = _objc_msgSend(IVar8,"objectForKeyedSubscript:",IVar4);
  if (IVar8 != 0) {
    IVar8 = _objc_alloc(&objc::class_t::DLMaxAlertAction);
    IVar4 = *(ID *)(param_1 + 0x20);
    if (((DAT_000ffc58 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffc58), iVar2 != 0)) {
      DAT_000ffc52 = '\x01';
      _DAT_000ffc48 = 0x7473b9fa17c68e02;
      DAT_000ffc50 = 0xe503;
      ___cxa_atexit(PTR_FUN_000e80f0,&DAT_000ffc48,0);
      ___cxa_guard_release(&DAT_000ffc58);
    }
    if (DAT_000ffc52 != '\0') {
      uVar6 = 0;
      pbVar7 = &DAT_000ffc48;
      do {
        *pbVar7 = *pbVar7 ^ (byte)(0x1b07cd8f7599e56d >> (uVar6 & 0x38));
        uVar6 = uVar6 + 8;
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0x50);
      DAT_000ffc52 = '\0';
    }
    IVar5 = NSString::stringWithCString_encoding_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffc48,4);
    IVar4 = _objc_msgSend(IVar4,"objectForKeyedSubscript:",IVar5);
    IVar8 = DLMaxAlertAction::instance_DLMaxAlertAction__initWithTitle_action_
                      (IVar8,"initWithTitle:action:",IVar4,0xe89b8,in_w4);
    NSMutableArray::addObject_(IVar3,"addObject:",IVar8);
  }
  IVar8 = _objc_alloc(&objc::class_t::DLMaxAlertViewController);
  if (((DAT_000ffc70 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffc70), iVar2 != 0)) {
    DAT_000ffc68 = '\x01';
    DAT_000ffc60 = 0x81680d12e10a1589;
    ___cxa_atexit(PTR_FUN_000e8230,&DAT_000ffc60,0);
    ___cxa_guard_release(&DAT_000ffc70);
  }
  if (DAT_000ffc68 != '\0') {
    DAT_000ffc60 = DAT_000ffc60 ^ 0x810979618f4359cd;
    DAT_000ffc68 = '\0';
  }
  IVar4 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffc60,4);
  IVar3 = DLMaxAlertViewController::
          instance_DLMaxAlertViewController__initWithTweakName_message_actions_
                    (IVar8,"initWithTweakName:message:actions:",IVar4,*(ID *)(param_1 + 0x28),IVar3)
  ;
  DLMaxAlertViewController::instance_DLMaxAlertViewController__setCornerRadius_
            (IVar3,"setCornerRadius:",16.0);
  IVar8 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  _objc_msgSend(IVar8,"presentViewController:animated:completion:",IVar3,1,0);
  return 0;
}

