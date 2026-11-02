/* Address: 000132b4 | Name: FUN_000132b4 | Body bytes: 88 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000132b4(void)

{
  ID IVar1;
  
  IVar1 = FUN_0008c218(&cf_ALERT_INFO_INSTAGRAM);
  DLHelper::class_DLHelper__showMessageWithTitle_message_
            ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea3e8,IVar1);
  return 0;
}

