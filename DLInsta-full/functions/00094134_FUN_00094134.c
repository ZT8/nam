/* Address: 00094134 | Name: FUN_00094134 | Body bytes: 616 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00094134(long param_1,undefined8 param_2,long param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 in_x7;
  undefined8 uVar4;
  undefined8 uVar5;
  
  IVar3 = *(ID *)(param_1 + 0x20);
  IVar1 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,0,param_2,9,0,*(undefined8 *)(param_1 + 0x28),9);
  _objc_msgSend(IVar3,"addObject:",IVar1);
  IVar1 = *(ID *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = 0;
  uVar2 = __NSDictionaryOfVariableBindings(&cf_view,param_2);
  IVar3 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintsWithVisualFormat:options:metrics:views:",
                     &cf____>_margin___view___>_margin___,0,uVar4,uVar2);
  _objc_msgSend(IVar1,"addObjectsFromArray:",IVar3);
  if (param_3 == 0) {
    IVar3 = *(ID *)(param_1 + 0x20);
    IVar1 = NSLayoutConstraint::
            constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                      ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                       "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:"
                       ,0x3ff0000000000000,0,param_2,3,0,*(undefined8 *)(param_1 + 0x28),3,in_x7,
                       uVar5);
  }
  else {
    IVar3 = _objc_msgSend(*(ID *)(param_1 + 0x38),"count");
    if (IVar3 - 1 == param_3) {
      IVar3 = *(ID *)(param_1 + 0x20);
      IVar1 = NSLayoutConstraint::
              constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                        ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                         "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:"
                         ,0x3ff0000000000000,0,param_2,4,0,*(undefined8 *)(param_1 + 0x28),4,in_x7,
                         uVar5);
      _objc_msgSend(IVar3,"addObject:",IVar1);
    }
    IVar3 = _objc_msgSend(*(ID *)(param_1 + 0x38),"objectAtIndexedSubscript:",param_3 + -1);
    IVar1 = NSLayoutConstraint::
            constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                      ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                       "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:"
                       ,0x3ff0000000000000,0,param_2,3,0,IVar3,4);
    _objc_msgSend(*(ID *)(param_1 + 0x20),"addObject:",IVar1);
    IVar3 = *(ID *)(param_1 + 0x40);
  }
  _objc_msgSend(IVar3,"addObject:",IVar1);
  return 0;
}

