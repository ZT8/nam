/* Address: 000b5b20 | Name: instance_FRPreferences__reloadTableView | Body bytes: 64 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPreferences::instance_FRPreferences__reloadTableView(ID param_1,SEL param_2)

{
  ID self;
  
  self = _objc_msgSend(param_1,"tableView");
  _objc_msgSend(self,"reloadData");
  return;
}

