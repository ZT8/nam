/* Address: 000b4708 | Name: instance_FRPreferences__initTableWithSections_ | Body bytes: 120 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID FRPreferences::instance_FRPreferences__initTableWithSections_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::FRPreferences;
  local_30 = param_1;
  self = UITableViewController::initWithStyle_((ID)&local_30,"initWithStyle:",1);
  if (self != 0) {
    UITableViewController::setSections_(self,"setSections:",param_3);
  }
  return self;
}

