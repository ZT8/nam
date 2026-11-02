
/* FRAGMENT entry=0x4d564 owner=0x4ce30; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_0004d564(_Unwind_Exception *param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x29;
  undefined1 uStack0000000000000001;
  undefined1 uStack0000000000000002;
  undefined1 uStack0000000000000003;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_00000088;
  ID in_stack_00000090;
  
  uStack0000000000000040 = param_2;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(in_stack_00000090,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector(in_stack_00000088);
  uVar3 = FUN_0008cde8(uVar3,uVar4,0x3fc);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ffe70;
  if (DAT_000ffe70 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffe58,
                                "initWithMenuConfiguration:launcherSet:contentContainer:messageContentView:contentAccessoryFrame:unmanagedHeaderSize:horizontalAlignment:addContentShadow:shouldAllowTapActionOnLongPress:prioritizeContextMenuAbove:shouldBlockMessageListUpdates:allowScalingContent:accessibilityEscapeBlock:menuHeaderText:menuHeaderElement:additionalBottomPadding:multiReactView:multiReactPaddingRight:showEmojiModerationNux:coreImageContext:"
                               );
  }
  uStack0000000000000003 = *(undefined1 *)(unaff_x29 + 0x13);
  uStack0000000000000002 = *(undefined1 *)(unaff_x29 + 0x12);
  uStack0000000000000001 = *(undefined1 *)(unaff_x29 + 0x11);
  uVar3 = (*pcVar1)(in_stack_00000090,in_stack_00000088);
  return uVar3;
}


/* FRAGMENT entry=0x4d760 owner=0x4ce30; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0004d760(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

