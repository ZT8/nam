/* Address: 00041a18 | Name: FUN_00041a18 | Body bytes: 316 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00041a18(ID param_1)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::postNotificationName_object_
            (IVar1,"postNotificationName:object:",&cf_d_updateMarkAsSeenIfNeededDM,0);
  if (DAT_000ffed0 == 0) {
    DAT_000ffed0 = _objc_getClass("IGDirectThreadViewListAdapterDataSource");
  }
  IVar1 = _objc_retainAutorelease();
  IVar1 = _objc_msgSend(IVar1,"isUserHaveSeenMessage");
  if ((int)IVar1 == 0) {
    IVar1 = _objc_msgSend(param_1,"seenBtn");
    _objc_msgSend(IVar1,"setTintColor:",0);
  }
  else {
    IVar1 = _objc_msgSend(param_1,"seenBtn");
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0,
                       0x3fe2b020c49ba5e3,0x3feee147ae147ae1,0x3ff0000000000000);
    _objc_msgSend(IVar1,"setTintColor:",IVar2);
  }
  return 0;
}

