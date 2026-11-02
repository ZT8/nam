/* Address: 0004ce30 | Name: FUN_0004ce30 | Body bytes: 1844 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

undefined8
FUN_0004ce30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,ID param_11,undefined8 param_12,ID param_13,
            undefined8 param_14,undefined8 param_15,undefined4 param_16,undefined1 param_17,
            undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
            undefined1 param_22,undefined8 param_23)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ID *pIVar11;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_DownloadVoiceMessage);
  if ((IVar2 & 1) != 0) {
    uVar3 = FUN_00097ef8();
    uVar3 = FUN_00097a54(uVar3);
    IVar2 = _objc_msgSend(DAT_001006a8,"length");
    IVar2 = FUN_00097c68(uVar3,IVar2);
    IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
    if ((int)IVar2 != 0) {
      if (DAT_000ffef8 == 0) {
        DAT_000ffef8 = _objc_getClass("IGDirectMessageBubbleContainerView");
      }
      uVar3 = _objc_retainAutorelease();
      IVar2 = _objc_msgSend(param_13,"isMemberOfClass:",uVar3);
      if ((int)IVar2 != 0) {
        uVar3 = _object_getClass();
        lVar4 = _class_getInstanceVariable(uVar3,"_viewModel");
        if (lVar4 == 0) {
          pIVar11 = (ID *)0x0;
        }
        else {
          lVar4 = _ivar_getOffset();
          pIVar11 = (ID *)(param_13 + lVar4);
        }
        IVar2 = *pIVar11;
        if (DAT_000fff00 == 0) {
          DAT_000fff00 = _objc_getClass("IGDirectAudioMessageViewModel");
        }
        uVar3 = _objc_retainAutorelease();
        IVar5 = _objc_msgSend(IVar2,"isMemberOfClass:",uVar3);
        if ((int)IVar5 != 0) {
          IVar2 = _objc_msgSend(IVar2,"audio");
          uVar3 = _object_getClass();
          lVar4 = _class_getInstanceVariable(uVar3,"_server_audio");
          if (lVar4 == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          else {
            lVar4 = _ivar_getOffset();
            puVar10 = (undefined8 *)(IVar2 + lVar4);
          }
          uVar3 = *puVar10;
          IVar2 = _objc_msgSend(param_11,"menuItems");
          IVar2 = _objc_msgSend(IVar2,"mutableCopy");
          uVar6 = _object_getClass();
          lVar4 = _class_getInstanceVariable(uVar6,"menuItemGroups");
          if (lVar4 == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          else {
            lVar4 = _ivar_getOffset();
            puVar10 = (undefined8 *)(param_11 + lVar4);
          }
          uVar6 = *puVar10;
          iVar1 = FUN_0008ce2c(param_11,"mainMenuOptions");
          if (iVar1 == 0) {
            local_140 = 0;
          }
          else {
            uVar7 = _object_getClass();
            lVar4 = _class_getInstanceVariable(uVar7,"mainMenuOptions");
            if (lVar4 == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            else {
              lVar4 = _ivar_getOffset();
              puVar10 = (undefined8 *)(param_11 + lVar4);
            }
            local_140 = *puVar10;
          }
          iVar1 = FUN_0008ce2c(param_11,"submenuOptions");
          if (iVar1 == 0) {
            local_148 = 0;
          }
          else {
            uVar7 = _object_getClass();
            lVar4 = _class_getInstanceVariable(uVar7,"submenuOptions");
            if (lVar4 == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            else {
              lVar4 = _ivar_getOffset();
              puVar10 = (undefined8 *)(param_11 + lVar4);
            }
            local_148 = *puVar10;
          }
          if (DAT_000fff10 == 0) {
            DAT_000fff10 = _objc_getClass("IGDSMenuItem");
          }
          _objc_retainAutorelease();
          IVar5 = _objc_alloc();
          IVar8 = DLHelper::class_DLHelper__imageIcon_
                            ((ID)&objc::class_t::DLHelper,"imageIcon:",0xeba68);
          IVar8 = _objc_msgSend(IVar8,"imageWithRenderingMode:",2);
          local_d8 = PTR___NSConcreteStackBlock_000e80d8;
          local_d0 = 0xc2000000;
          local_c8 = FUN_0004f254;
          puStack_c0 = &DAT_000e8a58;
          local_b8 = uVar3;
          local_b0 = param_9;
          IVar5 = _objc_msgSend(IVar5,"initWithTitle:image:handler:",&cf_Save,IVar8,&local_d8);
          _objc_msgSend(IVar2,"insertObject:atIndex:",IVar5,0);
          IVar5 = _objc_getClass("IGDirectMessageMenuConfiguration.IGDirectMessageMenuConfiguration"
                                );
          IVar8 = _objc_msgSend(IVar5,"instancesRespondToSelector:",
                                "initWithMenuItems:menuItemGroups:");
          if ((int)IVar8 == 0) {
            IVar8 = _objc_msgSend(IVar5,"instancesRespondToSelector:",
                                  "initWithMenuItems:menuItemGroups:mainMenuOptions:submenuOptions:"
                                 );
            if ((int)IVar8 == 0) {
              param_11 = 0;
            }
            else {
              IVar5 = _objc_alloc(IVar5);
              param_11 = _objc_msgSend(IVar5,
                                       "initWithMenuItems:menuItemGroups:mainMenuOptions:submenuOptions:"
                                       ,IVar2,uVar6,local_140,local_148);
            }
          }
          else {
            IVar5 = _objc_alloc(IVar5);
            param_11 = _objc_msgSend(IVar5,"initWithMenuItems:menuItemGroups:",IVar2,uVar6);
          }
        }
      }
    }
  }
  pcVar9 = DAT_000ffe70;
  if (DAT_000ffe70 == (code *)0x0) {
    pcVar9 = (code *)_class_getMethodImplementation
                               (DAT_000ffe58,
                                "initWithMenuConfiguration:launcherSet:contentContainer:messageContentView:contentAccessoryFrame:unmanagedHeaderSize:horizontalAlignment:addContentShadow:shouldAllowTapActionOnLongPress:prioritizeContextMenuAbove:shouldBlockMessageListUpdates:allowScalingContent:accessibilityEscapeBlock:menuHeaderText:menuHeaderElement:additionalBottomPadding:multiReactView:multiReactPaddingRight:showEmojiModerationNux:coreImageContext:"
                               );
  }
  uVar3 = (*pcVar9)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,
                    param_19,param_20,param_21,param_22,param_23);
  return uVar3;
}

