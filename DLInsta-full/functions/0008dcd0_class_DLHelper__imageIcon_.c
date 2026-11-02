/* Address: 0008dcd0 | Name: class_DLHelper__imageIcon_ | Body bytes: 256 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLHelper::class_DLHelper__imageIcon_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar1 = NSBundle::pathForResource_ofType_(IVar1,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
  IVar1 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar1);
  IVar1 = UIImage::imageNamed_inBundle_
                    ((ID)&_OBJC_CLASS___UIImage,"imageNamed:inBundle:",param_3,IVar1);
  return IVar1;
}

