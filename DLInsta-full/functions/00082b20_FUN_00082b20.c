/* Address: 00082b20 | Name: FUN_00082b20 | Body bytes: 536 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_00082b20(long param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_50;
  ID local_48;
  
  IVar1 = _objc_msgSend(param_2,"isOn");
  if ((int)IVar1 == 0) {
    _objc_msgSend(*(ID *)(param_1 + 0x20),"removeCell:",*(undefined8 *)(param_1 + 0x28));
  }
  else {
    IVar1 = _objc_alloc(&_OBJC_CLASS___LAContext);
    IVar1 = LAContext::init(IVar1,"init");
    local_48 = 0;
    IVar2 = LAContext::canEvaluatePolicy_error_(IVar1,"canEvaluatePolicy:error:",1,&local_48);
    if ((IVar2 & 1) == 0) {
      local_50 = local_48;
      IVar2 = LAContext::canEvaluatePolicy_error_(IVar1,"canEvaluatePolicy:error:",2,&local_50);
      IVar1 = local_50;
      if ((IVar2 & 1) == 0) {
        DLHelper::class_DLHelper__setBool_forKey_
                  ((ID)&objc::class_t::DLHelper,"setBool:forKey:",0,0xec068);
        IVar2 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),"switchView")
        ;
        _objc_msgSend(IVar2,"setOn:animated:",0,0);
        if (IVar1 != 0) {
          IVar1 = _objc_msgSend(IVar1,"localizedDescription");
          DLHelper::class_DLHelper__showMessageWithTitle_message_
                    ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea3e8,IVar1);
        }
        goto code_r0x00082c18;
      }
    }
    _objc_msgSend(*(ID *)(param_1 + 0x20),"addCell:",*(undefined8 *)(param_1 + 0x28));
  }
code_r0x00082c18:
  IVar1 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::postNotificationName_object_
            (IVar1,"postNotificationName:object:",&cf_FRPreferences_reloadTableView,0);
  return 0;
}

