/* Address: 0004bf1c | Name: FUN_0004bf1c | Body bytes: 1508 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

undefined8 FUN_0004bf1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined8 *puVar10;
  ID *pIVar11;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long lStack_68;
  
  pcVar3 = DAT_000ffe60;
  if (DAT_000ffe60 == (code *)0x0) {
    pcVar3 = (code *)_class_getMethodImplementation(DAT_000ffe58,"viewDidLoad");
  }
  (*pcVar3)(param_1,param_2);
  IVar4 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar4 = NSUserDefaults::boolForKey_(IVar4,"boolForKey:",&cf_DL_DownloadVoiceMessage);
  if ((IVar4 & 1) == 0) {
    return 0;
  }
  uVar5 = FUN_00097ef8();
  uVar5 = FUN_00097a54(uVar5);
  IVar4 = _objc_msgSend(DAT_001006a8,"length");
  IVar4 = FUN_00097c68(uVar5,IVar4);
  IVar4 = _objc_msgSend(IVar4,"isEqualToString:",DAT_001006a8);
  if ((int)IVar4 != 0) {
    uVar5 = _object_getClass();
    lVar6 = _class_getInstanceVariable(uVar5,"_contentContainerView");
    if (lVar6 == 0) {
      pIVar11 = (ID *)0x0;
    }
    else {
      lVar6 = _ivar_getOffset();
      pIVar11 = (ID *)(param_1 + lVar6);
    }
    IVar4 = *pIVar11;
    if (DAT_000ffef8 == 0) {
      DAT_000ffef8 = _objc_getClass("IGDirectMessageBubbleContainerView");
    }
    uVar5 = _objc_retainAutorelease();
    IVar7 = _objc_msgSend(IVar4,"isMemberOfClass:",uVar5);
    if ((int)IVar7 != 0) {
      uVar5 = _object_getClass();
      lVar6 = _class_getInstanceVariable(uVar5,"_viewModel");
      if (lVar6 == 0) {
        pIVar11 = (ID *)0x0;
      }
      else {
        lVar6 = _ivar_getOffset();
        pIVar11 = (ID *)(IVar4 + lVar6);
      }
      IVar4 = *pIVar11;
      if (DAT_000fff00 == 0) {
        DAT_000fff00 = _objc_getClass("IGDirectAudioMessageViewModel");
      }
      uVar5 = _objc_retainAutorelease();
      IVar7 = _objc_msgSend(IVar4,"isMemberOfClass:",uVar5);
      if ((int)IVar7 != 0) {
        IVar4 = _objc_msgSend(IVar4,"audio");
        uVar5 = _object_getClass();
        lVar6 = _class_getInstanceVariable(uVar5,"_server_audio");
        if (lVar6 == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          lVar6 = _ivar_getOffset();
          puVar10 = (undefined8 *)(IVar4 + lVar6);
        }
        uVar5 = *puVar10;
        iVar2 = FUN_0008ce2c(param_1,"_menuItems");
        if (iVar2 != 0) {
          uVar8 = _object_getClass();
          lVar6 = _class_getInstanceVariable(uVar8,"_menuItems");
          if (lVar6 == 0) {
            pIVar11 = (ID *)0x0;
          }
          else {
            lVar6 = _ivar_getOffset();
            pIVar11 = (ID *)(param_1 + lVar6);
          }
          IVar4 = _objc_msgSend(*pIVar11,"mutableCopy");
          lVar6 = _NSClassFromString(&cf_IGMenuItem);
          puVar1 = PTR___NSConcreteStackBlock_000e80d8;
          if (lVar6 != 0) {
            if (DAT_000fff08 == 0) {
              DAT_000fff08 = _objc_getClass("IGMenuItem");
            }
            _objc_retainAutorelease();
            IVar7 = _objc_alloc();
            IVar9 = DLHelper::class_DLHelper__imageIcon_
                              ((ID)&objc::class_t::DLHelper,"imageIcon:",0xeba68);
            IVar9 = _objc_msgSend(IVar9,"imageWithRenderingMode:",2);
            local_90 = puVar1;
            local_88 = 0xc2000000;
            local_80 = FUN_0004eeac;
            puStack_78 = &DAT_000e8a28;
            local_70 = uVar5;
            lStack_68 = param_1;
            IVar7 = _objc_msgSend(IVar7,"initWithTitle:image:handler:",&cf_Save,IVar9,&local_90);
            _objc_msgSend(IVar4,"insertObject:atIndex:",IVar7,0);
          }
          puVar1 = PTR___NSConcreteStackBlock_000e80d8;
          lVar6 = _NSClassFromString(&cf_IGDSMenuItem);
          if (lVar6 != 0) {
            if (DAT_000fff10 == 0) {
              DAT_000fff10 = _objc_getClass("IGDSMenuItem");
            }
            _objc_retainAutorelease();
            IVar7 = _objc_alloc();
            IVar9 = DLHelper::class_DLHelper__imageIcon_
                              ((ID)&objc::class_t::DLHelper,"imageIcon:",0xeba68);
            IVar9 = _objc_msgSend(IVar9,"imageWithRenderingMode:",2);
            local_b8 = 0xc2000000;
            local_b0 = FUN_0004efe4;
            puStack_a8 = &DAT_000e8a28;
            local_c0 = puVar1;
            local_a0 = uVar5;
            lStack_98 = param_1;
            IVar7 = _objc_msgSend(IVar7,"initWithTitle:image:handler:",&cf_Save,IVar9,&local_c0);
            _objc_msgSend(IVar4,"insertObject:atIndex:",IVar7,0);
          }
          IVar7 = _objc_msgSend(IVar4,"count");
          if (IVar7 != 0) {
            IVar4 = _objc_msgSend(IVar4,"copy");
            uVar5 = _object_getClass();
            lVar6 = _class_getInstanceVariable(uVar5,"_menuItems");
            if (lVar6 == 0) {
              pIVar11 = (ID *)0x0;
            }
            else {
              lVar6 = _ivar_getOffset();
              pIVar11 = (ID *)(param_1 + lVar6);
            }
            *pIVar11 = IVar4;
          }
        }
      }
    }
  }
  return 0;
}

