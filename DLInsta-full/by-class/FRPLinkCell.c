/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPLinkCell cellWithTitle:selectedBlock:] | encoding @32@0:8@16@?24 */
/* Address: 000aef18 | Name: instance_FRPLinkCell__cellWithTitle_selectedBlock_ | Body bytes: 156 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPLinkCell::instance_FRPLinkCell__cellWithTitle_selectedBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID self;
  undefined4 uVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::FRPLinkCell;
  uVar1 = 0;
  local_40 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_40,"initWithTitle:setting:",param_3,0);
  FRPCell::instance_FRPCell__setValueChanged_(self,"setValueChanged:",param_4,uVar1);
  _objc_msgSend(self,"setAccessoryType:",1);
  return self;
}


/* -[FRPLinkCell didSelectFromTable:] | encoding v24@0:8@16 */
/* Address: 000aefb4 | Name: instance_FRPLinkCell__didSelectFromTable_ | Body bytes: 272 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPLinkCell::instance_FRPLinkCell__didSelectFromTable_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  
  IVar1 = _objc_msgSend(param_3,"tableView");
  IVar1 = _objc_msgSend(IVar1,"indexPathForCell:",param_1);
  self = _objc_msgSend(param_3,"tableView");
  _objc_msgSend(self,"deselectRowAtIndexPath:animated:",IVar1,1);
  IVar1 = FRPCell::instance_FRPCell__valueChanged(param_1,"valueChanged");
  if (IVar1 != 0) {
    IVar1 = FRPCell::instance_FRPCell__valueChanged(param_1,"valueChanged");
    (**(code **)(IVar1 + 0x10))(IVar1,param_1);
  }
  return;
}


/* -[FRPLinkCell layoutSubviews] | encoding v16@0:8 */
/* Address: 000af0c4 | Name: instance_FRPLinkCell__layoutSubviews | Body bytes: 52 */

/* Function Stack Size: 0x10 bytes */

void FRPLinkCell::instance_FRPLinkCell__layoutSubviews(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::FRPLinkCell;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,"layoutSubviews");
  return;
}


/* +[FRPLinkCell cellWithTitle:selectedBlock:] | encoding @32@0:8@16@?24 */
/* Address: 000aee90 | Name: class_FRPLinkCell__cellWithTitle_selectedBlock_ | Body bytes: 136 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPLinkCell::class_FRPLinkCell__cellWithTitle_selectedBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,"cellWithTitle:selectedBlock:",param_3,param_4);
  return IVar1;
}

