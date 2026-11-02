/* Address: 0009f294 | Name: FUN_0009f294 | Body bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009f294(long param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"localizedDescription");
  DLHelper::class_DLHelper__showMessageWithTitle_message_
            ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea568,IVar1);
  return 0;
}

