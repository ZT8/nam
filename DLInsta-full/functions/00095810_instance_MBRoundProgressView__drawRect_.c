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

