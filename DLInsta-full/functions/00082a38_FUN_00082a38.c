/* Address: 00082a38 | Name: FUN_00082a38 | Body bytes: 132 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00082a38(undefined8 param_1,ID param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_2,"isOn");
  if ((int)IVar1 != 0) {
    IVar1 = FUN_0008c218(&cf_DM_UPLOAD_VOICE_NOTE);
    DLHelper::class_DLHelper__showMessageWithTitle_message_
              ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea3e8,IVar1);
  }
  return 0;
}

