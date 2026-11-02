/* Address: 000afe24 | Name: instance_FRPSection__addCells_ | Body bytes: 108 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSection::instance_FRPSection__addCells_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = instance_FRPSection__cells(param_1,"cells");
  _objc_msgSend(self,"addObjectsFromArray:",param_3);
  return;
}

