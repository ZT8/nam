/* Address: 000a45c8 | Name: instance_DLMediaData__convertTimeToString_ | Body bytes: 180 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLMediaData::instance_DLMediaData__convertTimeToString_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  
  if ((long)(double)((long)param_3 / 0xe10) == 0) {
    pcVar2 = &cf__ld__02ld;
  }
  else {
    pcVar2 = &cf__ld__02ld__02ld;
  }
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar2);
  return IVar1;
}

