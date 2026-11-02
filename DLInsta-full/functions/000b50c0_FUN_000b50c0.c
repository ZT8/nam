/* Address: 000b50c0 | Name: FUN_000b50c0 | Body bytes: 120 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_000b50c0(long param_1,ID param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_2,"isCancelled");
  if ((int)IVar1 == 0) {
    return IVar1;
  }
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"tableView");
  _objc_msgSend(IVar1,"selectRowAtIndexPath:animated:scrollPosition:",
                *(undefined8 *)(param_1 + 0x28),1,0);
  return 0;
}

