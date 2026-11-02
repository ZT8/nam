/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[MBBackgroundView initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 000964f4 | Name: instance_MBBackgroundView__initWithFrame_ | Body bytes: 204 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID MBBackgroundView::instance_MBBackgroundView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::MBBackgroundView;
  local_30 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    *(undefined8 *)(self + (long)_style) = 1;
    *(undefined8 *)(self + (long)_blurEffectStyle) = 2;
    IVar1 = UIColor::colorWithWhite_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0,0x3fe99999a0000000);
    uVar2 = *(undefined8 *)(self + (long)_color);
    *(ID *)(self + (long)_color) = IVar1;
    UIView::setClipsToBounds_(self,"setClipsToBounds:",uVar2,1);
    UIView::updateForBackgroundStyle(self,"updateForBackgroundStyle");
  }
  return self;
}


/* -[MBBackgroundView intrinsicContentSize] | encoding {CGSize=dd}16@0:8 */
/* Address: 000965c0 | Name: instance_MBBackgroundView__intrinsicContentSize | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

CGSize MBBackgroundView::instance_MBBackgroundView__intrinsicContentSize(ID param_1,SEL param_2)

{
  return *(CGSize *)PTR__CGSizeZero_000e8048;
}


/* -[MBBackgroundView setStyle:] | encoding v24@0:8q16 */
/* Address: 000965d0 | Name: instance_MBBackgroundView__setStyle_ | Body bytes: 40 */

/* Function Stack Size: 0x18 bytes */

void MBBackgroundView::instance_MBBackgroundView__setStyle_
               (ID param_1,SEL param_2,long_long param_3)

{
  if (*(long_long *)(param_1 + (long)_style) == param_3) {
    return;
  }
  *(long_long *)(param_1 + (long)_style) = param_3;
  instance_MBBackgroundView__updateForBackgroundStyle(param_1,"updateForBackgroundStyle");
  return;
}


/* -[MBBackgroundView setColor:] | encoding v24@0:8@16 */
/* Address: 000965f8 | Name: instance_MBBackgroundView__setColor_ | Body bytes: 308 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void MBBackgroundView::instance_MBBackgroundView__setColor_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  
  if (param_3 == 0) {
    pcVar3 = (cfstringStruct *)
             NSString::stringWithUTF8String_
                       ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:","Helper/MBProgressHUD.m"
                       );
    pcVar1 = &cf_<UnknownFile>;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar1 = pcVar3;
    }
    IVar2 = NSAssertionHandler::currentHandler
                      ((ID)&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
    NSAssertionHandler::handleFailureInMethod_object_file_lineNumber_description_
              (IVar2,"handleFailureInMethod:object:file:lineNumber:description:",param_2,param_1,
               pcVar1,0x447,&cf_Thecolorshouldnotbenil_);
  }
  lVar4 = (long)_color;
  if ((*(ID *)(param_1 + lVar4) != param_3) &&
     (IVar2 = _objc_msgSend(param_3,"isEqual:"), (IVar2 & 1) == 0)) {
    *(ID *)(param_1 + lVar4) = param_3;
    instance_MBBackgroundView__updateViewsForColor_(param_1,"updateViewsForColor:",param_3);
  }
  return;
}


/* -[MBBackgroundView setBlurEffectStyle:] | encoding v24@0:8q16 */
/* Address: 0009672c | Name: instance_MBBackgroundView__setBlurEffectStyle_ | Body bytes: 40 */

/* Function Stack Size: 0x18 bytes */

void MBBackgroundView::instance_MBBackgroundView__setBlurEffectStyle_
               (ID param_1,SEL param_2,long_long param_3)

{
  if (*(long_long *)(param_1 + (long)_blurEffectStyle) == param_3) {
    return;
  }
  *(long_long *)(param_1 + (long)_blurEffectStyle) = param_3;
  instance_MBBackgroundView__updateForBackgroundStyle(param_1,"updateForBackgroundStyle");
  return;
}


/* -[MBBackgroundView updateForBackgroundStyle] | encoding v16@0:8 */
/* Address: 00096754 | Name: instance_MBBackgroundView__updateForBackgroundStyle | Body bytes: 488 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBBackgroundView::instance_MBBackgroundView__updateForBackgroundStyle(ID param_1,SEL param_2)

{
  ID IVar1;
  long_long lVar2;
  ID IVar3;
  
  IVar1 = instance_MBBackgroundView__effectView(param_1,"effectView");
  _objc_msgSend(IVar1,"removeFromSuperview");
  instance_MBBackgroundView__setEffectView_(param_1,"setEffectView:",0);
  lVar2 = instance_MBBackgroundView__style(param_1,"style");
  if (lVar2 == 1) {
    lVar2 = instance_MBBackgroundView__blurEffectStyle(param_1,"blurEffectStyle");
    IVar1 = UIBlurEffect::effectWithStyle_((ID)&_OBJC_CLASS___UIBlurEffect,"effectWithStyle:",lVar2)
    ;
    IVar3 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);
    IVar1 = UIVisualEffectView::initWithEffect_(IVar3,"initWithEffect:",IVar1);
    _objc_msgSend(param_1,"insertSubview:atIndex:",IVar1,0);
    _objc_msgSend(param_1,"bounds");
    UIVisualEffectView::setFrame_(IVar1,"setFrame:");
    UIVisualEffectView::setAutoresizingMask_(IVar1,"setAutoresizingMask:",0x12);
    IVar3 = instance_MBBackgroundView__color(param_1,"color");
    _objc_msgSend(param_1,"setBackgroundColor:",IVar3);
    IVar3 = _objc_msgSend(param_1,"layer");
    _objc_msgSend(IVar3,"setAllowsGroupOpacity:",0);
    instance_MBBackgroundView__setEffectView_(param_1,"setEffectView:",IVar1);
  }
  else {
    IVar1 = instance_MBBackgroundView__color(param_1,"color");
    _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  }
  return;
}


/* -[MBBackgroundView updateViewsForColor:] | encoding v24@0:8@16 */
/* Address: 0009693c | Name: instance_MBBackgroundView__updateViewsForColor_ | Body bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBBackgroundView::instance_MBBackgroundView__updateViewsForColor_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  instance_MBBackgroundView__style(param_1,"style");
  IVar1 = instance_MBBackgroundView__color(param_1,"color");
  _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  return;
}


/* -[MBBackgroundView style] | encoding q16@0:8 */
/* Address: 00096998 | Name: instance_MBBackgroundView__style | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

long_long MBBackgroundView::instance_MBBackgroundView__style(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_style);
}


/* -[MBBackgroundView blurEffectStyle] | encoding q16@0:8 */
/* Address: 000969a8 | Name: instance_MBBackgroundView__blurEffectStyle | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

long_long MBBackgroundView::instance_MBBackgroundView__blurEffectStyle(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_blurEffectStyle);
}


/* -[MBBackgroundView color] | encoding @16@0:8 */
/* Address: 000969b8 | Name: instance_MBBackgroundView__color | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBBackgroundView::instance_MBBackgroundView__color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}


/* -[MBBackgroundView effectView] | encoding @16@0:8 */
/* Address: 000969c8 | Name: instance_MBBackgroundView__effectView | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID MBBackgroundView::instance_MBBackgroundView__effectView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_effectView);
}


/* -[MBBackgroundView setEffectView:] | encoding v24@0:8@16 */
/* Address: 000969d8 | Name: instance_MBBackgroundView__setEffectView_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void MBBackgroundView::instance_MBBackgroundView__setEffectView_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_effectView) = param_3;
  return;
}


/* -[MBBackgroundView .cxx_destruct] | encoding v16@0:8 */
/* Address: 000969e4 | Name: instance_MBBackgroundView___cxx_destruct | Body bytes: 64 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void MBBackgroundView::instance_MBBackgroundView___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_effectView) = 0;
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}

