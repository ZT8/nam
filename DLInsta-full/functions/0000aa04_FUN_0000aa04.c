/* Address: 0000aa04 | Name: FUN_0000aa04 | Body bytes: 464 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_0000aa04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  undefined8 uVar3;
  
  pcVar1 = DAT_000ff918;
  if (DAT_000ff918 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ff910,"initWithFrame:");
  }
  self = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_EnableCopyText);
  if ((int)IVar2 != 0) {
    uVar3 = FUN_00097ef8();
    uVar3 = FUN_00097a54(uVar3);
    IVar2 = _objc_msgSend(DAT_001006a8,"length");
    IVar2 = FUN_00097c68(uVar3,IVar2);
    IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
    if ((int)IVar2 != 0) {
      IVar2 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);
      IVar2 = UILongPressGestureRecognizer::initWithTarget_action_
                        (IVar2,"initWithTarget:action:",self,"dl_showOptionsCopy:");
      UILongPressGestureRecognizer::setMinimumPressDuration_
                (IVar2,"setMinimumPressDuration:",0x3fe0000000000000);
      UILongPressGestureRecognizer::setCancelsTouchesInView_(IVar2,"setCancelsTouchesInView:",0);
      _objc_msgSend(self,"addGestureRecognizer:",IVar2);
    }
  }
  return self;
}

