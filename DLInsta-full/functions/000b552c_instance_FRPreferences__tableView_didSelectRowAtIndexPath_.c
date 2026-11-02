/* Address: 000b552c | Name: instance_FRPreferences__tableView_didSelectRowAtIndexPath_ | Body bytes: 112 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void FRPreferences::instance_FRPreferences__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  
  self = instance_FRPreferences__cellForIndexPath_(param_1,"cellForIndexPath:",param_4);
  IVar1 = _objc_msgSend(self,"respondsToSelector:","didSelectFromTable:");
  if ((int)IVar1 != 0) {
    _objc_msgSend(self,"didSelectFromTable:",param_1);
  }
  return;
}

