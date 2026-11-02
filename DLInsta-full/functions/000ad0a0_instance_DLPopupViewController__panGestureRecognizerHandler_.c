/* Address: 000ad0a0 | Name: instance_DLPopupViewController__panGestureRecognizerHandler_ | Body bytes: 636 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLPopupViewController::instance_DLPopupViewController__panGestureRecognizerHandler_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  double extraout_d0;
  double extraout_d0_00;
  double in_d1;
  double dVar3;
  double in_d3;
  CGPoint CVar4;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  ID local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(param_3,"locationInView:",IVar1);
  dVar3 = in_d1;
  IVar1 = _objc_msgSend(param_3,"state");
  if (IVar1 == 1) {
    CVar4.field1_0x8 = in_d1;
    CVar4.field0_0x0 = extraout_d0;
    instance_DLPopupViewController__setInitialTouchPoint_(param_1,"setInitialTouchPoint:",CVar4);
  }
  else {
    IVar1 = _objc_msgSend(param_3,"state");
    if (IVar1 == 2) {
      lVar2 = (long)blurView;
      _objc_msgSend(*(ID *)(param_1 + lVar2),"frame");
      IVar1 = _objc_msgSend(param_1,"view");
      _objc_msgSend(IVar1,"safeAreaInsets");
      if (0.0 <= dVar3 - extraout_d0_00) {
        CVar4 = instance_DLPopupViewController__initialTouchPoint(param_1,"initialTouchPoint");
        in_d1 = in_d1 - CVar4.field1_0x8;
        dVar3 = 0.4;
        if (0.0 <= in_d1) {
          dVar3 = 1.0;
        }
        _CGAffineTransformMakeTranslation(&local_70,0,in_d1 * dVar3);
        uStack_98 = uStack_68;
        local_a0 = local_70;
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        uStack_78 = uStack_48;
        local_80 = local_50;
        _objc_msgSend(*(ID *)(param_1 + lVar2),"setTransform:",&local_a0);
      }
    }
    else {
      IVar1 = _objc_msgSend(param_3,"state");
      if ((IVar1 == 3) || (IVar1 = _objc_msgSend(param_3,"state"), IVar1 == 4)) {
        CVar4 = instance_DLPopupViewController__initialTouchPoint(param_1,"initialTouchPoint");
        IVar1 = _objc_msgSend(*(ID *)(param_1 + (long)blurView),"contentView",CVar4.field0_0x0);
        _objc_msgSend(IVar1,"frame");
        if (in_d1 - CVar4.field1_0x8 <= in_d3 / 3.0) {
          local_c8 = PTR___NSConcreteStackBlock_000e80d8;
          local_c0 = 0xc2000000;
          local_b8 = FUN_000ad31c;
          puStack_b0 = &DAT_000e9798;
          local_a8 = param_1;
          UIView::animateWithDuration_animations_
                    ((ID)&_OBJC_CLASS___UIView,"animateWithDuration:animations:",0x3fd3333333333333,
                     &local_c8);
        }
        else {
          instance_DLPopupViewController__dismissPopup(param_1,"dismissPopup");
        }
      }
    }
  }
  return;
}

