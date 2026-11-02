/* Address: 0006fe2c | Name: FUN_0006fe2c | Body bytes: 144 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0006fe2c(ID param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  
  pcVar1 = DAT_000fff80;
  if (DAT_000fff80 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000fff78,"layoutSubviews");
  }
  (*pcVar1)(param_1,param_2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);
  IVar2 = UILongPressGestureRecognizer::initWithTarget_action_
                    (IVar2,"initWithTarget:action:",param_1,"dl_longPress:");
  _objc_msgSend(param_1,"addGestureRecognizer:",IVar2);
  return 0;
}

