/* Address: 0008ddd0 | Name: class_DLHelper__image_color_ | Body bytes: 288 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLHelper::class_DLHelper__image_color_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 in_d1;
  
  IVar1 = _objc_msgSend(param_3,"imageWithRenderingMode:",2);
  _objc_msgSend(param_3,"size");
  _objc_msgSend(IVar1,"scale");
  _UIGraphicsBeginImageContextWithOptions(extraout_d0,in_d1,extraout_d0_00,0);
  _objc_msgSend(param_4,"set");
  _objc_msgSend(param_3,"size");
  _objc_msgSend(IVar1,"size");
  _objc_msgSend(IVar1,"drawInRect:",0,0,extraout_d0_01,in_d1);
  IVar1 = _UIGraphicsGetImageFromCurrentImageContext();
  _UIGraphicsEndImageContext(0);
  return IVar1;
}

