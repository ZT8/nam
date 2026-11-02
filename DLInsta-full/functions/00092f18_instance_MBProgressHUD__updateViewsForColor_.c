/* Address: 00092f18 | Name: instance_MBProgressHUD__updateViewsForColor_ | Body bytes: 1136 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateViewsForColor_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  char *op;
  ID local_60;
  ID local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e8260;
  if (param_3 == 0) goto LAB_0009330c;
  IVar1 = instance_MBProgressHUD__label(param_1,"label");
  _objc_msgSend(IVar1,"setTextColor:",param_3);
  IVar1 = instance_MBProgressHUD__detailsLabel(param_1,"detailsLabel");
  _objc_msgSend(IVar1,"setTextColor:",param_3);
  IVar1 = instance_MBProgressHUD__button(param_1,"button");
  _objc_msgSend(IVar1,"setTitleColor:forState:",param_3,0);
  IVar1 = instance_MBProgressHUD__indicator(param_1,"indicator");
  IVar2 = UIActivityIndicatorView::class((ID)&_OBJC_CLASS___UIActivityIndicatorView,"class");
  IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
  if ((int)IVar2 == 0) {
    IVar2 = _objc_msgSend((ID)&objc::class_t::MBRoundProgressView,"class");
    IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
    if ((int)IVar2 != 0) {
      local_58 = _objc_msgSend((ID)&objc::class_t::MBProgressHUD,"class");
      IVar2 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_58,1);
      IVar2 = _objc_msgSend((ID)&objc::class_t::MBRoundProgressView,
                            "appearanceWhenContainedInInstancesOfClasses:",IVar2);
      IVar3 = MBRoundProgressView::instance_MBRoundProgressView__progressTintColor
                        (IVar2,"progressTintColor");
      if (IVar3 == 0) {
        _objc_msgSend(IVar1,"setProgressTintColor:",param_3);
      }
      IVar2 = MBRoundProgressView::instance_MBRoundProgressView__backgroundTintColor
                        (IVar2,"backgroundTintColor");
      if (IVar2 == 0) {
        IVar2 = _objc_msgSend(param_3,"colorWithAlphaComponent:",0x3fb999999999999a);
        _objc_msgSend(IVar1,"setBackgroundTintColor:",IVar2);
      }
      goto LAB_0009330c;
    }
    IVar2 = _objc_msgSend((ID)&objc::class_t::MBBarProgressView,"class");
    IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
    if ((int)IVar2 == 0) {
      IVar2 = _objc_msgSend(IVar1,"respondsToSelector:","setTintColor:");
      if ((int)IVar2 != 0) {
        _objc_msgSend(IVar1,"setTintColor:",param_3);
      }
      goto LAB_0009330c;
    }
    local_60 = _objc_msgSend((ID)&objc::class_t::MBProgressHUD,"class");
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_60,1);
    IVar2 = _objc_msgSend((ID)&objc::class_t::MBBarProgressView,
                          "appearanceWhenContainedInInstancesOfClasses:",IVar2);
    IVar3 = MBBarProgressView::instance_MBBarProgressView__progressColor(IVar2,"progressColor");
    if (IVar3 == 0) {
      _objc_msgSend(IVar1,"setProgressColor:",param_3);
    }
    IVar2 = MBBarProgressView::instance_MBBarProgressView__lineColor(IVar2,"lineColor");
    if (IVar2 != 0) goto LAB_0009330c;
    op = "setLineColor:";
  }
  else {
    local_50 = _objc_msgSend((ID)&objc::class_t::MBProgressHUD,"class");
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_50,1);
    IVar2 = UIActivityIndicatorView::appearanceWhenContainedInInstancesOfClasses_
                      ((ID)&_OBJC_CLASS___UIActivityIndicatorView,
                       "appearanceWhenContainedInInstancesOfClasses:",IVar2);
    IVar2 = UIActivityIndicatorView::color(IVar2,"color");
    if (IVar2 != 0) goto LAB_0009330c;
    op = "setColor:";
  }
  _objc_msgSend(IVar1,op,param_3);
LAB_0009330c:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

