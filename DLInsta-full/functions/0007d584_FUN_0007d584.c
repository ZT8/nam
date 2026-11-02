/* Address: 0007d584 | Name: FUN_0007d584 | Body bytes: 608 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007d584(long param_1)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSCalendar::currentCalendar((ID)&_OBJC_CLASS___NSCalendar,"currentCalendar");
  IVar2 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
  IVar1 = NSCalendar::components_fromDate_(IVar1,"components:fromDate:",0x210,IVar2);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"textFields");
  IVar2 = _objc_msgSend(IVar2,"objectAtIndexedSubscript:",0);
  IVar2 = _objc_msgSend(IVar2,"text");
  NSCalendar::day(IVar1,"day");
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__ld);
  IVar1 = _objc_msgSend(0xec1e8,"stringByAppendingString:",IVar1);
  IVar1 = _objc_msgSend(IVar2,"isEqualToString:",IVar1);
  if ((int)IVar1 != 0) {
    if (DAT_00100120 == 0) {
      DAT_00100120 = _objc_getClass("DLDebuggingVC");
    }
    _objc_retainAutorelease();
    IVar1 = _objc_alloc();
    IVar1 = _objc_msgSend(IVar1,"init");
    IVar2 = _objc_alloc(&_OBJC_CLASS___UINavigationController);
    IVar1 = UINavigationController::initWithRootViewController_
                      (IVar2,"initWithRootViewController:",IVar1);
    UINavigationController::setModalPresentationStyle_(IVar1,"setModalPresentationStyle:",0);
    IVar2 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    _objc_msgSend(IVar2,"presentViewController:animated:completion:",IVar1,1,0);
  }
  return 0;
}

