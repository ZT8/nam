/* Address: 000664cc | Name: FUN_000664cc | Body bytes: 248 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_000664cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  
  pcVar1 = DAT_000fff20;
  if (DAT_000fff20 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000fff18,"initWithFrame:");
  }
  self = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);
  IVar2 = UILongPressGestureRecognizer::initWithTarget_action_
                    (IVar2,"initWithTarget:action:",self,"dl_longPress:");
  UILongPressGestureRecognizer::setMinimumPressDuration_
            (IVar2,"setMinimumPressDuration:",0x3fd3333333333333);
  _objc_msgSend(self,"addGestureRecognizer:",IVar2);
  return self;
}

