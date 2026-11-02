/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[MBRoundProgressView init] | encoding @16@0:8 */
/* Address: 00095434 | Name: instance_MBRoundProgressView__init | Body bytes: 32 */

/* Function Stack Size: 0x10 bytes */

ID MBRoundProgressView::instance_MBRoundProgressView__init(ID param_1,SEL param_2)

{
  ID IVar1;
  CGRect CVar2;
  
  CVar2.field1_0x10.field1_0x8 = 37.0;
  CVar2.field1_0x10.field0_0x0 = 37.0;
  CVar2.field0_0x0 = (CGPoint)ZEXT816(0);
  IVar1 = instance_MBRoundProgressView__initWithFrame_(param_1,"initWithFrame:",CVar2);
  return IVar1;
}


/* -[MBRoundProgressView initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 00095454 | Name: instance_MBRoundProgressView__initWithFrame_ | Body bytes: 292 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID MBRoundProgressView::instance_MBRoundProgressView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBRoundProgressView;
  local_40 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_40,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
    UIView::setBackgroundColor_(self,"setBackgroundColor:",IVar1);
    UIView::setOpaque_(self,"setOpaque:",0);
    *(undefined4 *)(self + (long)_progress) = 0;
    *(undefined1 *)(self + (long)_annular) = 0;
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIColor);
    IVar1 = UIColor::initWithWhite_alpha_
                      (IVar1,"initWithWhite:alpha:",0x3ff0000000000000,0x3ff0000000000000);
    uVar2 = *(undefined8 *)(self + (long)_progressTintColor);
    *(ID *)(self + (long)_progressTintColor) = IVar1;
    IVar1 = _objc_alloc(uVar2,&_OBJC_CLASS___UIColor);
    IVar1 = _objc_msgSend(IVar1,"initWithWhite:alpha:",0x3ff0000000000000,0x3fb99999a0000000);
    *(ID *)(self + (long)_backgroundTintColor) = IVar1;
  }
  return self;
}


/* -[MBRoundProgressView intrinsicContentSize] | encoding {CGSize=dd}16@0:8 */
/* Address: 00095578 | Name: instance_MBRoundProgressView__intrinsicContentSize | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

CGSize MBRoundProgressView::instance_MBRoundProgressView__intrinsicContentSize
                 (ID param_1,SEL param_2)

{
  CGSize CVar1;
  
  CVar1.field1_0x8 = 37.0;
  CVar1.field0_0x0 = 37.0;
  return CVar1;
}


/* -[MBRoundProgressView setProgress:] | encoding v20@0:8f16 */
/* Address: 00095588 | Name: instance_MBRoundProgressView__setProgress_ | Body bytes: 40 */

/* Function Stack Size: 0x14 bytes */

void MBRoundProgressView::instance_MBRoundProgressView__setProgress_
               (ID param_1,SEL param_2,float param_3)

{
  if (*(float *)(param_1 + (long)_progress) == param_3) {
    return;
  }
  *(float *)(param_1 + (long)_progress) = param_3;
  _objc_msgSend(param_1,"setNeedsDisplay");
  return;
}


/* -[MBRoundProgressView setProgressTintColor:] | encoding v24@0:8@16 */
/* Address: 000955b0 | Name: instance_MBRoundProgressView__setProgressTintColor_ | Body bytes: 304 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void MBRoundProgressView::instance_MBRoundProgressView__setProgressTintColor_
               (ID param_1,SEL param_2,ID param_3)

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
               pcVar1,0x352,&cf_Thecolorshouldnotbenil_);
  }
  lVar4 = (long)_progressTintColor;
  if ((*(ID *)(param_1 + lVar4) != param_3) &&
     (IVar2 = _objc_msgSend(param_3,"isEqual:"), (IVar2 & 1) == 0)) {
    *(ID *)(param_1 + lVar4) = param_3;
    _objc_msgSend(param_1,"setNeedsDisplay");
  }
  return;
}


/* -[MBRoundProgressView setBackgroundTintColor:] | encoding v24@0:8@16 */
/* Address: 000956e0 | Name: instance_MBRoundProgressView__setBackgroundTintColor_ | Body bytes: 304 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void MBRoundProgressView::instance_MBRoundProgressView__setBackgroundTintColor_
               (ID param_1,SEL param_2,ID param_3)

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
               pcVar1,0x35a,&cf_Thecolorshouldnotbenil_);
  }
  lVar4 = (long)_backgroundTintColor;
  if ((*(ID *)(param_1 + lVar4) != param_3) &&
     (IVar2 = _objc_msgSend(param_3,"isEqual:"), (IVar2 & 1) == 0)) {
    *(ID *)(param_1 + lVar4) = param_3;
    _objc_msgSend(param_1,"setNeedsDisplay");
  }
  return;
}


/* -[MBRoundProgressView drawRect:] | encoding v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 00095810 | Name: instance_MBRoundProgressView__drawRect_ | Body bytes: 952 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void MBRoundProgressView::instance_MBRoundProgressView__drawRect_
               (ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double extraout_d0;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = param_3.field1_0x10.field1_0x8;
  dVar8 = param_3.field1_0x10.field0_0x0;
  dVar10 = param_3.field0_0x0.field1_0x8;
  uVar1 = _UIGraphicsGetCurrentContext(param_3.field0_0x0.field0_0x0,dVar10,dVar8,dVar9);
  if (*(char *)(param_1 + (long)_annular) == '\0') {
    _objc_msgSend(param_1,"bounds");
    uVar5 = _CGRectInset();
    _objc_msgSend(param_1,"bounds");
    uVar6 = _CGRectGetMidX();
    _objc_msgSend(param_1,"bounds");
    uVar7 = _CGRectGetMidY();
    lVar3 = (long)_progressTintColor;
    _objc_msgSend(*(ID *)(param_1 + lVar3),"setStroke");
    _objc_msgSend(*(ID *)(param_1 + (long)_backgroundTintColor),"setFill");
    _CGContextSetLineWidth(0x4000000000000000,uVar1);
    _CGContextStrokeEllipseInRect(uVar5,dVar10,dVar8,dVar9,uVar1);
    IVar2 = UIBezierPath::bezierPath((ID)&_OBJC_CLASS___UIBezierPath,"bezierPath");
    UIBezierPath::setLineCapStyle_(IVar2,"setLineCapStyle:",0);
    UIBezierPath::setLineWidth_(IVar2,"setLineWidth:",0x4010000000000000);
    _objc_msgSend(param_1,"bounds");
    dVar10 = (double)_CGRectGetWidth();
    UIBezierPath::lineWidth(IVar2,"lineWidth");
    fVar4 = instance_MBRoundProgressView__progress(param_1,"progress");
    UIBezierPath::addArcWithCenter_radius_startAngle_endAngle_clockwise_
              (IVar2,"addArcWithCenter:radius:startAngle:endAngle:clockwise:",uVar6,uVar7,
               dVar10 * 0.5 - extraout_d0 * 0.5,0xbff921fb60000000,
               (double)((fVar4 + fVar4) * 3.1415927) + -1.5707963705062866,1);
    _CGContextSetBlendMode(uVar1,0x11);
    _objc_msgSend(*(ID *)(param_1 + lVar3),"set");
    UIBezierPath::stroke(IVar2,"stroke");
  }
  else {
    IVar2 = UIBezierPath::bezierPath((ID)&_OBJC_CLASS___UIBezierPath,"bezierPath");
    UIBezierPath::setLineWidth_(IVar2,"setLineWidth:",0x4000000000000000);
    UIBezierPath::setLineCapStyle_(IVar2,"setLineCapStyle:",0);
    _objc_msgSend(param_1,"bounds");
    uVar1 = _CGRectGetMidX();
    _objc_msgSend(param_1,"bounds");
    uVar5 = _CGRectGetMidY();
    _objc_msgSend(param_1,"bounds");
    dVar10 = (dVar8 + -2.0) * 0.5;
    UIBezierPath::addArcWithCenter_radius_startAngle_endAngle_clockwise_
              (IVar2,"addArcWithCenter:radius:startAngle:endAngle:clockwise:",uVar1,uVar5,dVar10,
               0xbff921fb60000000,0x4012d97c88000000,1);
    _objc_msgSend(*(ID *)(param_1 + (long)_backgroundTintColor),"set");
    UIBezierPath::stroke(IVar2,"stroke");
    IVar2 = UIBezierPath::bezierPath((ID)&_OBJC_CLASS___UIBezierPath,"bezierPath");
    UIBezierPath::setLineCapStyle_(IVar2,"setLineCapStyle:",2);
    UIBezierPath::setLineWidth_(IVar2,"setLineWidth:",0x4000000000000000);
    fVar4 = instance_MBRoundProgressView__progress(param_1,"progress");
    UIBezierPath::addArcWithCenter_radius_startAngle_endAngle_clockwise_
              (IVar2,"addArcWithCenter:radius:startAngle:endAngle:clockwise:",uVar1,uVar5,dVar10,
               0xbff921fb60000000,(double)((fVar4 + fVar4) * 3.1415927) + -1.5707963705062866,1);
    _objc_msgSend(*(ID *)(param_1 + (long)_progressTintColor),"set");
    UIBezierPath::stroke(IVar2,"stroke");
  }
  return;
}


/* -[MBRoundProgressView progress] | encoding f16@0:8 */
/* Address: 00095bc8 | Name: instance_MBRoundProgressView__progress | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

float MBRoundProgressView::instance_MBRoundProgressView__progress(ID param_1,SEL param_2)

{
  return *(float *)(param_1 + (long)_progress);
}


/* -[MBRoundProgressView progressTintColor] | encoding @16@0:8 */
/* Address: 00095bd8 | Name: instance_MBRoundProgressView__progressTintColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBRoundProgressView::instance_MBRoundProgressView__progressTintColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_progressTintColor);
}


/* -[MBRoundProgressView backgroundTintColor] | encoding @16@0:8 */
/* Address: 00095be8 | Name: instance_MBRoundProgressView__backgroundTintColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBRoundProgressView::instance_MBRoundProgressView__backgroundTintColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundTintColor);
}


/* -[MBRoundProgressView isAnnular] | encoding B16@0:8 */
/* Address: 00095bf8 | Name: instance_MBRoundProgressView__isAnnular | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool MBRoundProgressView::instance_MBRoundProgressView__isAnnular(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_annular);
}


/* -[MBRoundProgressView setAnnular:] | encoding v20@0:8B16 */
/* Address: 00095c08 | Name: instance_MBRoundProgressView__setAnnular_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void MBRoundProgressView::instance_MBRoundProgressView__setAnnular_
               (ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_annular) = (char)param_3;
  return;
}


/* -[MBRoundProgressView .cxx_destruct] | encoding v16@0:8 */
/* Address: 00095c18 | Name: instance_MBRoundProgressView___cxx_destruct | Body bytes: 64 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void MBRoundProgressView::instance_MBRoundProgressView___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_backgroundTintColor) = 0;
  *(undefined8 *)(param_1 + (long)_progressTintColor) = 0;
  return;
}

