/* Address: 0008d984 | Name: class_DLHelper__addLine_atPosition_withColor_lineHeight_ | Body bytes: 616 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

void DLHelper::class_DLHelper__addLine_atPosition_withColor_lineHeight_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,
               double param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_98;
  ID IStack_90;
  cfstringStruct *local_88;
  ID local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  UIView::setBackgroundColor_(IVar1,"setBackgroundColor:",param_5);
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  _objc_msgSend(param_3,"addSubview:",IVar1);
  local_88 = &cf_width;
  local_80 = NSNumber::numberWithFloat_
                       ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:",(float)param_6);
  IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_80,&local_88,1);
  local_98 = &cf_lineView;
  IStack_90 = IVar1;
  IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &IStack_90,&local_98,1);
  IVar3 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintsWithVisualFormat:options:metrics:views:",&cf_H___lineView__,0,IVar2
                     ,IVar1);
  _objc_msgSend(param_3,"addConstraints:",IVar3);
  if (param_4 == 0) {
    pcVar4 = &cf_V___0__lineView_width__;
  }
  else {
    if (param_4 != 1) goto LAB_0008db8c;
    pcVar4 = &cf_V__lineView_width___;
  }
  IVar1 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintsWithVisualFormat:options:metrics:views:",pcVar4,0,IVar2,IVar1);
  _objc_msgSend(param_3,"addConstraints:",IVar1);
LAB_0008db8c:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

