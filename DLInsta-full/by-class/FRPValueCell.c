/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPValueCell cellWithTitle:detail:] | encoding @32@0:8@16@24 */
/* Address: 000b3fd8 | Name: instance_FRPValueCell__cellWithTitle_detail_ | Body bytes: 208 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPValueCell::instance_FRPValueCell__cellWithTitle_detail_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID self_00;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::FRPValueCell;
  local_40 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_40,"initWithTitle:setting:",param_3,0);
  _objc_msgSend(self,"setAccessoryType:",0);
  _objc_msgSend(self,"setSelectionStyle:",0);
  self_00 = _objc_msgSend(self,"detailTextLabel");
  _objc_msgSend(self_00,"setText:",param_4);
  return self;
}


/* +[FRPValueCell cellWithTitle:detail:] | encoding @32@0:8@16@24 */
/* Address: 000b3f50 | Name: class_FRPValueCell__cellWithTitle_detail_ | Body bytes: 136 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPValueCell::class_FRPValueCell__cellWithTitle_detail_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,"cellWithTitle:detail:",param_3,param_4);
  return IVar1;
}

