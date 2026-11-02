/* Address: 000b4ad4 | Name: instance_FRPreferences__viewDidDisappear_ | Body bytes: 52 */

/* Function Stack Size: 0x14 bytes */

void FRPreferences::instance_FRPreferences__viewDidDisappear_(ID param_1,SEL param_2,bool param_3)

{
  ID local_20;
  class_t *pcStack_18;
  
  pcStack_18 = &objc::class_t::FRPreferences;
  local_20 = param_1;
  UITableViewController::viewDidDisappear_((ID)&local_20,"viewDidDisappear:",(ulong)param_3);
  return;
}

