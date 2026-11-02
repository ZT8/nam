/* Address: 0005d1f8 | Name: FUN_0005d1f8 | Body bytes: 104 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_0005d1f8(long param_1)

{
  ID self;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    self = NSNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    NSNotificationCenter::postNotificationName_object_
              (self,"postNotificationName:object:",&cf_dlUserNeedSeenLiveDM,0);
    return 0;
  }
  return param_1;
}

