/* Address: 0008def0 | Name: class_DLHelper__resizeImageView_size_ | Body bytes: 400 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID __thiscall
DLHelper::class_DLHelper__resizeImageView_size_
          (DLHelper *this,ID param_1,SEL param_2,ID param_3,CGSize param_4)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 extraout_d0;
  
  IVar1 = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
  UIScreen::scale(IVar1,"scale");
  _UIGraphicsBeginImageContextWithOptions(param_4.field0_0x0,param_4.field1_0x8,extraout_d0,0);
  IVar1 = _objc_msgSend((ID)param_2,"image");
  _objc_msgSend(IVar1,"drawInRect:",0,0,param_4.field0_0x0,param_4.field1_0x8);
  uVar2 = _UIGraphicsGetImageFromCurrentImageContext(0);
  _objc_msgSend((ID)param_2,"setImage:",uVar2);
  IVar1 = _objc_msgSend((ID)param_2,"image");
  IVar1 = _objc_msgSend(IVar1,"imageWithRenderingMode:",2);
  _objc_msgSend((ID)param_2,"setImage:",IVar1);
  IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  _objc_msgSend((ID)param_2,"setTintColor:",IVar1);
  _UIGraphicsEndImageContext(0);
  return (ID)param_2;
}

