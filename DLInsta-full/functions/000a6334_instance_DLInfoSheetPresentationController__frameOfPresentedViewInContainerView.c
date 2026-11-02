/* Address: 000a6334 | Name: instance_DLInfoSheetPresentationController__frameOfPresentedViewInContainerView | Body bytes: 200 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

CGRect DLInfoSheetPresentationController::
       instance_DLInfoSheetPresentationController__frameOfPresentedViewInContainerView
                 (ID param_1,SEL param_2)

{
  undefined1 auVar1 [32];
  ID self;
  double dVar2;
  undefined8 extraout_d0;
  double dVar3;
  undefined8 uVar4;
  undefined8 in_d2;
  undefined8 in_d3;
  
  dVar2 = instance_DLInfoSheetPresentationController__bottomHeight(param_1,"bottomHeight");
  uVar4 = 0x4053000000000000;
  self = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(self,"bounds");
  dVar3 = (double)_CGRectGetHeight(extraout_d0,uVar4,in_d2,in_d3,0);
  uVar4 = _CGRectGetWidth(extraout_d0,uVar4,in_d2,in_d3);
  auVar1._16_8_ = dVar2 + 76.0;
  auVar1._8_8_ = uVar4;
  auVar1._0_8_ = dVar3 - (dVar2 + 76.0);
  auVar1._24_8_ = 0;
  return (CGRect)(auVar1 << 0x40);
}

