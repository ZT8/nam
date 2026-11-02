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

