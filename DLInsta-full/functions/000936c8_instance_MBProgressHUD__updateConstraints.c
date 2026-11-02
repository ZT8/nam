/* Address: 000936c8 | Name: instance_MBProgressHUD__updateConstraints | Body bytes: 2668 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateConstraints(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  ID self_00;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  double dVar9;
  CGPoint CVar10;
  CGSize CVar11;
  ID local_f8;
  class_t *pcStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  ID local_c8;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  cfstringStruct *local_a0;
  ID local_98;
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = instance_MBProgressHUD__bezelView(param_1,"bezelView");
  IVar3 = instance_MBProgressHUD__topSpacer(param_1,"topSpacer");
  self = instance_MBProgressHUD__bottomSpacer(param_1,"bottomSpacer");
  dVar9 = instance_MBProgressHUD__margin(param_1,"margin");
  self_00 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  local_a0 = &cf_margin;
  local_98 = NSNumber::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",dVar9);
  IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_98,&local_a0,1);
  IVar5 = instance_MBProgressHUD__topSpacer(param_1,"topSpacer");
  instance_MBProgressHUD__label(param_1,"label");
  instance_MBProgressHUD__detailsLabel(param_1,"detailsLabel");
  instance_MBProgressHUD__button(param_1,"button");
  instance_MBProgressHUD__bottomSpacer(param_1,"bottomSpacer");
  IVar5 = NSMutableArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithObjects:",IVar5);
  IVar6 = instance_MBProgressHUD__indicator(param_1,"indicator");
  if (IVar6 != 0) {
    IVar6 = instance_MBProgressHUD__indicator(param_1,"indicator");
    NSMutableArray::insertObject_atIndex_(IVar5,"insertObject:atIndex:",IVar6,1);
  }
  IVar6 = _objc_msgSend(param_1,"constraints");
  _objc_msgSend(param_1,"removeConstraints:",IVar6);
  IVar6 = _objc_msgSend(IVar3,"constraints");
  _objc_msgSend(IVar3,"removeConstraints:",IVar6);
  IVar6 = _objc_msgSend(self,"constraints");
  _objc_msgSend(self,"removeConstraints:",IVar6);
  IVar6 = instance_MBProgressHUD__bezelConstraints(param_1,"bezelConstraints");
  if (IVar6 != 0) {
    IVar6 = instance_MBProgressHUD__bezelConstraints(param_1,"bezelConstraints");
    _objc_msgSend(IVar2,"removeConstraints:",IVar6);
    instance_MBProgressHUD__setBezelConstraints_(param_1,"setBezelConstraints:",0);
  }
  CVar10 = instance_MBProgressHUD__offset(param_1,"offset");
  IVar6 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  IVar7 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,CVar10.field0_0x0,IVar2,9,0,param_1,9);
  NSMutableArray::addObject_(IVar6,"addObject:",IVar7);
  IVar7 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,CVar10.field1_0x8,IVar2,10,0,param_1,10);
  NSMutableArray::addObject_(IVar6,"addObject:",IVar7);
  instance_MBProgressHUD__applyPriority_toConstraints_
            (param_1,"applyPriority:toConstraints:",998.0,IVar6);
  _objc_msgSend(param_1,"addConstraints:",IVar6);
  IVar6 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  uVar8 = __NSDictionaryOfVariableBindings(&cf_bezel,IVar2);
  IVar7 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintsWithVisualFormat:options:metrics:views:",
                     &cf____>_margin___bezel___>_margin___,0,IVar4,uVar8);
  NSMutableArray::addObjectsFromArray_(IVar6,"addObjectsFromArray:",IVar7);
  uVar8 = __NSDictionaryOfVariableBindings(&cf_bezel,IVar2);
  IVar7 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintsWithVisualFormat:options:metrics:views:",
                     &cf_V____>_margin___bezel___>_margin___,0,IVar4,uVar8);
  NSMutableArray::addObjectsFromArray_(IVar6,"addObjectsFromArray:",IVar7);
  instance_MBProgressHUD__applyPriority_toConstraints_
            (param_1,"applyPriority:toConstraints:",999.0,IVar6);
  _objc_msgSend(param_1,"addConstraints:",IVar6);
  CVar11 = instance_MBProgressHUD__minSize(param_1,"minSize");
  if ((CVar11.field0_0x0 != *(double *)PTR__CGSizeZero_000e8048) ||
     (CVar11.field1_0x8 != *(double *)(PTR__CGSizeZero_000e8048 + 8))) {
    IVar6 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
    IVar7 = NSLayoutConstraint::
            constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                      ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                       "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:"
                       ,0x3ff0000000000000,CVar11.field0_0x0,IVar2,7,1,0,0);
    NSMutableArray::addObject_(IVar6,"addObject:",IVar7);
    IVar7 = NSLayoutConstraint::
            constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                      ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                       "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:"
                       ,0x3ff0000000000000,CVar11.field1_0x8,IVar2,8,1,0,0);
    NSMutableArray::addObject_(IVar6,"addObject:",IVar7);
    instance_MBProgressHUD__applyPriority_toConstraints_
              (param_1,"applyPriority:toConstraints:",997.0,IVar6);
    NSMutableArray::addObjectsFromArray_(self_00,"addObjectsFromArray:",IVar6);
  }
  bVar1 = instance_MBProgressHUD__isSquare(param_1,"isSquare");
  if (bVar1 != 0) {
    IVar6 = NSLayoutConstraint::
            constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                      ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                       "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:"
                       ,0x3ff0000000000000,0,IVar2,8,0,IVar2,7);
    NSLayoutConstraint::setPriority_(IVar6,"setPriority:",0x44794000);
    NSMutableArray::addObject_(self_00,"addObject:",IVar6);
  }
  IVar6 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,dVar9,IVar3,8,1,0,0);
  _objc_msgSend(IVar3,"addConstraint:",IVar6);
  IVar6 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,dVar9,self,8,1,0,0);
  _objc_msgSend(self,"addConstraint:",IVar6);
  IVar3 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,0,IVar3,8,0,self,8);
  NSMutableArray::addObject_(self_00,"addObject:",IVar3);
  IVar3 = NSMutableArray::new((ID)&_OBJC_CLASS___NSMutableArray,"new");
  local_e8 = PTR___NSConcreteStackBlock_000e80d8;
  local_e0 = 0xc2000000;
  local_d8 = FUN_00094134;
  puStack_d0 = &DAT_000e9198;
  local_c8 = self_00;
  local_c0 = IVar2;
  local_b8 = IVar4;
  local_b0 = IVar5;
  local_a8 = IVar3;
  NSMutableArray::enumerateObjectsUsingBlock_(IVar5,"enumerateObjectsUsingBlock:",&local_e8);
  _objc_msgSend(IVar2,"addConstraints:",self_00);
  instance_MBProgressHUD__setBezelConstraints_(param_1,"setBezelConstraints:",self_00);
  IVar2 = NSMutableArray::copy(IVar3,"copy");
  instance_MBProgressHUD__setPaddingConstraints_(param_1,"setPaddingConstraints:",IVar2);
  instance_MBProgressHUD__updatePaddingConstraints(param_1,"updatePaddingConstraints");
  pcStack_f0 = &objc::class_t::MBProgressHUD;
  local_f8 = param_1;
  UIView::updateConstraints((ID)&local_f8,"updateConstraints");
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_90) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

