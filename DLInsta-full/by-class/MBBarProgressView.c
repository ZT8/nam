/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[MBBarProgressView init] | encoding @16@0:8 */
/* Address: 00095c58 | Name: instance_MBBarProgressView__init | Body bytes: 32 */

/* Function Stack Size: 0x10 bytes */

ID MBBarProgressView::instance_MBBarProgressView__init(ID param_1,SEL param_2)

{
  ID IVar1;
  CGRect CVar2;
  
  CVar2.field1_0x10.field1_0x8 = 20.0;
  CVar2.field1_0x10.field0_0x0 = 120.0;
  CVar2.field0_0x0 = (CGPoint)ZEXT816(0);
  IVar1 = instance_MBBarProgressView__initWithFrame_(param_1,"initWithFrame:",CVar2);
  return IVar1;
}


/* -[MBBarProgressView initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 00095c78 | Name: instance_MBBarProgressView__initWithFrame_ | Body bytes: 316 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID MBBarProgressView::instance_MBBarProgressView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBBarProgressView;
  local_40 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_40,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    *(undefined4 *)(self + (long)_progress) = 0;
    IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    uVar2 = *(undefined8 *)(self + (long)_lineColor);
    *(ID *)(self + (long)_lineColor) = IVar1;
    IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor",uVar2);
    uVar2 = *(undefined8 *)(self + (long)_progressColor);
    *(ID *)(self + (long)_progressColor) = IVar1;
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor",uVar2);
    uVar2 = *(undefined8 *)(self + (long)_progressRemainingColor);
    *(ID *)(self + (long)_progressRemainingColor) = IVar1;
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor",uVar2);
    UIView::setBackgroundColor_(self,"setBackgroundColor:",IVar1);
    UIView::setOpaque_(self,"setOpaque:",0);
  }
  return self;
}


/* -[MBBarProgressView intrinsicContentSize] | encoding {CGSize=dd}16@0:8 */
/* Address: 00095db4 | Name: instance_MBBarProgressView__intrinsicContentSize | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

CGSize MBBarProgressView::instance_MBBarProgressView__intrinsicContentSize(ID param_1,SEL param_2)

{
  CGSize CVar1;
  
  CVar1.field1_0x8 = 10.0;
  CVar1.field0_0x0 = 120.0;
  return CVar1;
}


/* -[MBBarProgressView setProgress:] | encoding v20@0:8f16 */
/* Address: 00095dc4 | Name: instance_MBBarProgressView__setProgress_ | Body bytes: 40 */

/* Function Stack Size: 0x14 bytes */

void MBBarProgressView::instance_MBBarProgressView__setProgress_
               (ID param_1,SEL param_2,float param_3)

{
  if (*(float *)(param_1 + (long)_progress) == param_3) {
    return;
  }
  *(float *)(param_1 + (long)_progress) = param_3;
  _objc_msgSend(param_1,"setNeedsDisplay");
  return;
}


/* -[MBBarProgressView setProgressColor:] | encoding v24@0:8@16 */
/* Address: 00095dec | Name: instance_MBBarProgressView__setProgressColor_ | Body bytes: 304 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void MBBarProgressView::instance_MBBarProgressView__setProgressColor_
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
               pcVar1,0x3bd,&cf_Thecolorshouldnotbenil_);
  }
  lVar4 = (long)_progressColor;
  if ((*(ID *)(param_1 + lVar4) != param_3) &&
     (IVar2 = _objc_msgSend(param_3,"isEqual:"), (IVar2 & 1) == 0)) {
    *(ID *)(param_1 + lVar4) = param_3;
    _objc_msgSend(param_1,"setNeedsDisplay");
  }
  return;
}


/* -[MBBarProgressView setProgressRemainingColor:] | encoding v24@0:8@16 */
/* Address: 00095f1c | Name: instance_MBBarProgressView__setProgressRemainingColor_ | Body bytes: 304 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void MBBarProgressView::instance_MBBarProgressView__setProgressRemainingColor_
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
               pcVar1,0x3c5,&cf_Thecolorshouldnotbenil_);
  }
  lVar4 = (long)_progressRemainingColor;
  if ((*(ID *)(param_1 + lVar4) != param_3) &&
     (IVar2 = _objc_msgSend(param_3,"isEqual:"), (IVar2 & 1) == 0)) {
    *(ID *)(param_1 + lVar4) = param_3;
    _objc_msgSend(param_1,"setNeedsDisplay");
  }
  return;
}


/* -[MBBarProgressView drawRect:] | encoding v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 0009604c | Name: instance_MBBarProgressView__drawRect_ | Body bytes: 1024 */

/* Function Stack Size: 0x30 bytes */

void MBBarProgressView::instance_MBBarProgressView__drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  ID IVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar8 = param_3.field1_0x10.field1_0x8;
  dVar6 = param_3.field1_0x10.field0_0x0;
  uVar3 = _UIGraphicsGetCurrentContext(param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8);
  _CGContextSetLineWidth(0x4000000000000000);
  IVar4 = _objc_msgSend(*(ID *)(param_1 + (long)_lineColor),"CGColor");
  _CGContextSetStrokeColorWithColor(uVar3,IVar4);
  IVar4 = _objc_msgSend(*(ID *)(param_1 + (long)_progressRemainingColor),"CGColor");
  _CGContextSetFillColorWithColor(uVar3,IVar4);
  dVar9 = dVar8 * 0.5;
  dVar10 = dVar9 + -2.0;
  _CGContextMoveToPoint(0x4000000000000000,dVar9,uVar3);
  _CGContextAddArcToPoint
            (0x4000000000000000,0x4000000000000000,dVar10 + 2.0,0x4000000000000000,dVar10,uVar3);
  dVar11 = dVar6 + -2.0;
  _CGContextAddArcToPoint(dVar11,0x4000000000000000,dVar11,dVar9,dVar10,uVar3);
  dVar12 = dVar8 + -2.0;
  _CGContextAddArcToPoint(dVar11,dVar12,(dVar6 - dVar10) + -2.0,dVar12,dVar10,uVar3);
  _CGContextAddArcToPoint(0x4000000000000000,dVar12,0x4000000000000000,dVar9,dVar10,uVar3);
  _CGContextDrawPath(uVar3,3);
  IVar4 = _objc_msgSend(*(ID *)(param_1 + (long)_progressColor),"CGColor");
  _CGContextSetFillColorWithColor(uVar3,IVar4);
  dVar10 = dVar10 + -2.0;
  fVar5 = instance_MBBarProgressView__progress(param_1,"progress");
  dVar12 = dVar6 * (double)fVar5;
  dVar11 = dVar10 + 4.0;
  dVar7 = (dVar6 - dVar10) + -4.0;
  bVar1 = false;
  bVar2 = true;
  if (dVar11 <= dVar12) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dVar12) && !NAN(dVar7)) {
      bVar1 = dVar12 == dVar7;
      bVar2 = dVar7 <= dVar12;
    }
  }
  if (!bVar2 || bVar1) {
    _CGContextMoveToPoint(0x4010000000000000,dVar9,uVar3);
    _CGContextAddArcToPoint
              (0x4010000000000000,0x4010000000000000,dVar11,0x4010000000000000,dVar10,uVar3);
    _CGContextAddLineToPoint(dVar12,0x4010000000000000,uVar3);
    _CGContextAddLineToPoint(dVar12,dVar11,uVar3);
    _CGContextMoveToPoint(0x4010000000000000,dVar9,uVar3);
    dVar8 = dVar8 + -4.0;
    _CGContextAddArcToPoint(0x4010000000000000,dVar8,dVar11,dVar8,dVar10,uVar3);
    _CGContextAddLineToPoint(dVar12,dVar8,uVar3);
  }
  else {
    if (dVar12 <= dVar11) {
      if ((dVar11 <= dVar12) || (dVar12 <= 0.0)) {
        return;
      }
      _CGContextMoveToPoint(0x4010000000000000,dVar9,uVar3);
      _CGContextAddArcToPoint
                (0x4010000000000000,0x4010000000000000,dVar11,0x4010000000000000,dVar10,uVar3);
      _CGContextAddLineToPoint(dVar11,dVar9,uVar3);
      _CGContextMoveToPoint(0x4010000000000000,dVar9,uVar3);
      _CGContextAddArcToPoint(0x4010000000000000,dVar8 + -4.0,dVar11,dVar8 + -4.0,dVar10,uVar3);
    }
    else {
      dVar13 = (dVar6 - dVar10) + -4.0;
      _CGContextMoveToPoint(0x4010000000000000,dVar9,uVar3);
      _CGContextAddArcToPoint
                (0x4010000000000000,0x4010000000000000,dVar11,0x4010000000000000,dVar10,uVar3);
      _CGContextAddLineToPoint(dVar13,0x4010000000000000,uVar3);
      dVar6 = (double)_acos((dVar12 - dVar13) / dVar10);
      dVar7 = -dVar6;
      if (NAN(dVar6)) {
        dVar7 = 0.0;
        dVar6 = 0.0;
      }
      _CGContextAddArc(dVar13,dVar9,dVar10,0x400921fb54442d18,dVar7,uVar3,0);
      _CGContextAddLineToPoint(dVar12,dVar9,uVar3);
      _CGContextMoveToPoint(0x4010000000000000,dVar9,uVar3);
      dVar8 = dVar8 + -4.0;
      _CGContextAddArcToPoint(0x4010000000000000,dVar8,dVar11,dVar8,dVar10,uVar3);
      _CGContextAddLineToPoint(dVar13,dVar8,uVar3);
      _CGContextAddArc(dVar13,dVar9,dVar10,0xc00921fb54442d18,dVar6,uVar3,1);
      dVar11 = dVar12;
    }
    dVar12 = dVar11;
    dVar11 = dVar9;
  }
  _CGContextAddLineToPoint(dVar12,dVar11,uVar3);
  _CGContextFillPath(uVar3);
  return;
}


/* -[MBBarProgressView progress] | encoding f16@0:8 */
/* Address: 0009644c | Name: instance_MBBarProgressView__progress | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

float MBBarProgressView::instance_MBBarProgressView__progress(ID param_1,SEL param_2)

{
  return *(float *)(param_1 + (long)_progress);
}


/* -[MBBarProgressView lineColor] | encoding @16@0:8 */
/* Address: 0009645c | Name: instance_MBBarProgressView__lineColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBBarProgressView::instance_MBBarProgressView__lineColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_lineColor);
}


/* -[MBBarProgressView setLineColor:] | encoding v24@0:8@16 */
/* Address: 0009646c | Name: instance_MBBarProgressView__setLineColor_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBBarProgressView::instance_MBBarProgressView__setLineColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_lineColor) = param_3;
  return;
}


/* -[MBBarProgressView progressRemainingColor] | encoding @16@0:8 */
/* Address: 00096480 | Name: instance_MBBarProgressView__progressRemainingColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBBarProgressView::instance_MBBarProgressView__progressRemainingColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_progressRemainingColor);
}


/* -[MBBarProgressView progressColor] | encoding @16@0:8 */
/* Address: 00096490 | Name: instance_MBBarProgressView__progressColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBBarProgressView::instance_MBBarProgressView__progressColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_progressColor);
}


/* -[MBBarProgressView .cxx_destruct] | encoding v16@0:8 */
/* Address: 000964a0 | Name: instance_MBBarProgressView___cxx_destruct | Body bytes: 84 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void MBBarProgressView::instance_MBBarProgressView___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_progressColor) = 0;
  *(undefined8 *)(param_1 + (long)_progressRemainingColor) = 0;
  *(undefined8 *)(param_1 + (long)_lineColor) = 0;
  return;
}

