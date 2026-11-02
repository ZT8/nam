/* Address: 000bcc8c | Name: FUN_000bcc8c | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_000bcc8c(undefined8 param_1,ID param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_d0;
  
  _objc_msgSend(param_2,"takenAtDate");
  IVar1 = NSDate::dateWithTimeIntervalSince1970_
                    ((ID)&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSince1970:");
  _objc_msgSend(param_3,"takenAtDate");
  IVar2 = NSDate::dateWithTimeIntervalSince1970_
                    ((ID)&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSince1970:",extraout_d0);
  IVar1 = NSDate::compare_(IVar1,"compare:",IVar2);
  return IVar1;
}

