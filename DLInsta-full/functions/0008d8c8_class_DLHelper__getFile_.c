/* Address: 0008d8c8 | Name: class_DLHelper__getFile_ | Body bytes: 188 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLHelper::class_DLHelper__getFile_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar1 = NSBundle::pathForResource_ofType_(IVar1,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSBundle::stringByAppendingPathComponent_
                      (IVar1,"stringByAppendingPathComponent:",param_3);
  }
  return IVar1;
}

