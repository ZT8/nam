/* Address: 000b53a0 | Name: instance_FRPreferences__tableView_heightForRowAtIndexPath_ | Body bytes: 124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

double FRPreferences::instance_FRPreferences__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  double dVar3;
  
  IVar1 = instance_FRPreferences__cellForIndexPath_(param_1,"cellForIndexPath:",param_4);
  IVar2 = _objc_msgSend(IVar1,"height");
  if ((int)IVar2 < 1) {
    dVar3 = 48.0;
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"height");
    dVar3 = (double)(int)IVar1;
  }
  return dVar3;
}

