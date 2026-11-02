/* Address: 0004c6ac | Name: FUN_0004c6ac | Body bytes: 1516 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

undefined8
FUN_0004c6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,ID param_11,undefined8 param_12,ID param_13,
            undefined8 param_14,undefined8 param_15,undefined4 param_16,undefined1 param_17,
            undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined1 param_21,
            undefined8 param_22)

{
  ID IVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ID *pIVar9;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_DownloadVoiceMessage);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      if (DAT_000ffef8 == 0) {
        DAT_000ffef8 = _objc_getClass("IGDirectMessageBubbleContainerView");
      }
      uVar2 = _objc_retainAutorelease();
      IVar1 = _objc_msgSend(param_13,"isMemberOfClass:",uVar2);
      if ((int)IVar1 != 0) {
        uVar2 = _object_getClass();
        lVar3 = _class_getInstanceVariable(uVar2,"_viewModel");
        if (lVar3 == 0) {
          pIVar9 = (ID *)0x0;
        }
        else {
          lVar3 = _ivar_getOffset();
          pIVar9 = (ID *)(param_13 + lVar3);
        }
        IVar1 = *pIVar9;
        if (DAT_000fff00 == 0) {
          DAT_000fff00 = _objc_getClass("IGDirectAudioMessageViewModel");
        }
        uVar2 = _objc_retainAutorelease();
        IVar4 = _objc_msgSend(IVar1,"isMemberOfClass:",uVar2);
        if ((int)IVar4 != 0) {
          IVar1 = _objc_msgSend(IVar1,"audio");
          uVar2 = _object_getClass();
          lVar3 = _class_getInstanceVariable(uVar2,"_server_audio");
          if (lVar3 == 0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            lVar3 = _ivar_getOffset();
            puVar8 = (undefined8 *)(IVar1 + lVar3);
          }
          uVar2 = *puVar8;
          IVar1 = _objc_msgSend(param_11,"menuItems");
          IVar1 = _objc_msgSend(IVar1,"mutableCopy");
          uVar5 = _object_getClass();
          lVar3 = _class_getInstanceVariable(uVar5,"menuItemGroups");
          if (lVar3 == 0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            lVar3 = _ivar_getOffset();
            puVar8 = (undefined8 *)(param_11 + lVar3);
          }
          uVar5 = *puVar8;
          if (DAT_000fff10 == 0) {
            DAT_000fff10 = _objc_getClass("IGDSMenuItem");
          }
          _objc_retainAutorelease();
          IVar4 = _objc_alloc();
          IVar6 = DLHelper::class_DLHelper__imageIcon_
                            ((ID)&objc::class_t::DLHelper,"imageIcon:",0xeba68);
          IVar6 = _objc_msgSend(IVar6,"imageWithRenderingMode:",2);
          local_d8 = PTR___NSConcreteStackBlock_000e80d8;
          local_d0 = 0xc2000000;
          local_c8 = FUN_0004f11c;
          puStack_c0 = &DAT_000e8a58;
          local_b8 = uVar2;
          local_b0 = param_9;
          IVar4 = _objc_msgSend(IVar4,"initWithTitle:image:handler:",&cf_Save,IVar6,&local_d8);
          _objc_msgSend(IVar1,"insertObject:atIndex:",IVar4,0);
          _objc_getClass("IGDirectMessageMenuConfiguration.IGDirectMessageMenuConfiguration");
          IVar4 = _objc_alloc();
          param_11 = _objc_msgSend(IVar4,"initWithMenuItems:menuItemGroups:",IVar1,uVar5);
        }
      }
    }
  }
  pcVar7 = DAT_000ffe68;
  if (DAT_000ffe68 == (code *)0x0) {
    pcVar7 = (code *)_class_getMethodImplementation
                               (DAT_000ffe58,
                                "initWithMenuConfiguration:launcherSet:contentContainer:messageContentView:contentAccessoryFrame:unmanagedHeaderSize:horizontalAlignment:addContentShadow:shouldAllowTapActionOnLongPress:prioritizeContextMenuAbove:shouldBlockMessageListUpdates:allowScalingContent:accessibilityEscapeBlock:menuHeaderText:additionalBottomPadding:multiReactView:multiReactPaddingRight:showEmojiModerationNux:coreImageContext:"
                               );
  }
  uVar2 = (*pcVar7)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,
                    param_19,param_20,param_21,param_22);
  return uVar2;
}

