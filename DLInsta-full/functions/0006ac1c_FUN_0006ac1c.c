/* Address: 0006ac1c | Name: FUN_0006ac1c | Body bytes: 144 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0006ac1c(ID param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  
  pcVar1 = DAT_000fff60;
  if (DAT_000fff60 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000fff58,"layoutSubviews");
  }
  (*pcVar1)(param_1,param_2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);
  IVar2 = UILongPressGestureRecognizer::initWithTarget_action_
                    (IVar2,"initWithTarget:action:",param_1,"dl_longPress:");
  _objc_msgSend(param_1,"addGestureRecognizer:",IVar2);
  return 0;
}

