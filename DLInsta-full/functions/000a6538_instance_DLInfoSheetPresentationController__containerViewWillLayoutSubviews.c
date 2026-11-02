/* Address: 000a6538 | Name: instance_DLInfoSheetPresentationController__containerViewWillLayoutSubviews | Body bytes: 644 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetPresentationController::
     instance_DLInfoSheetPresentationController__containerViewWillLayoutSubviews
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  double dVar2;
  double dVar3;
  undefined8 in_d3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  CGRect CVar9;
  ID local_90;
  class_t *pcStack_88;
  
  pcStack_88 = &objc::class_t::DLInfoSheetPresentationController;
  local_90 = param_1;
  UIPresentationController::containerViewWillLayoutSubviews
            ((ID)&local_90,"containerViewWillLayoutSubviews");
  IVar1 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar1,"bounds");
  IVar1 = instance_DLInfoSheetPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar1,"setFrame:",extraout_d0,in_d1,in_d2,in_d3);
  CVar9 = instance_DLInfoSheetPresentationController__frameOfPresentedViewInContainerView
                    (param_1,"frameOfPresentedViewInContainerView");
  dVar4 = CVar9.field1_0x10.field1_0x8;
  dVar2 = CVar9.field1_0x10.field0_0x0;
  dVar3 = dVar2;
  dVar5 = dVar4;
  IVar1 = _objc_msgSend(param_1,"containerView",CVar9.field0_0x0.field0_0x0,
                        CVar9.field0_0x0.field1_0x8);
  _objc_msgSend(IVar1,"bounds");
  dVar6 = dVar5;
  IVar1 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar1,"bounds");
  dVar7 = dVar6;
  IVar1 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar1,"bounds");
  dVar8 = dVar7;
  IVar1 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar1,"bounds");
  if (dVar7 <= dVar3) {
    IVar1 = _objc_msgSend(param_1,"containerView",dVar2 - dVar5);
    _objc_msgSend(IVar1,"bounds");
    IVar1 = _objc_msgSend(param_1,"presentedView");
    _objc_msgSend(IVar1,"setFrame:",(dVar2 - dVar5) * 0.5,dVar6 - dVar4,dVar8,dVar4);
  }
  else {
    IVar1 = _objc_msgSend(param_1,"presentedView");
    _objc_msgSend(IVar1,"setFrame:",CVar9.field0_0x0.field0_0x0,CVar9.field0_0x0.field1_0x8,dVar2,
                  dVar4);
  }
  return;
}

