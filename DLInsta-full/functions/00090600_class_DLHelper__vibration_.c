/* Address: 00090600 | Name: class_DLHelper__vibration_ | Body bytes: 76 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void DLHelper::class_DLHelper__vibration_(ID param_1,SEL param_2,int param_3)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIImpactFeedbackGenerator);
  IVar1 = UIImpactFeedbackGenerator::initWithStyle_(IVar1,"initWithStyle:",(long)(int)param_3);
  UIImpactFeedbackGenerator::impactOccurred(IVar1,"impactOccurred");
  return;
}

