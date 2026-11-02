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

