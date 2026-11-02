/* Address: 000ac198 | Name: instance_DLMentionsViewController__tableView_didSelectRowAtIndexPath_ | Body bytes: 300 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLMentionsViewController::instance_DLMentionsViewController__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",param_4,1);
  IVar1 = instance_DLMentionsViewController__users(param_1,"users");
  IVar2 = _objc_msgSend(param_4,"row");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  IVar2 = _objc_msgSend(IVar1,"username");
  if (IVar2 == 0) {
    DLPopupViewController::instance_DLPopupViewController__dismissPopup(param_1,"dismissPopup");
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"username");
    DLInsta::class_DLInsta__openUsernameInApp_
              ((ID)&objc::class_t::DLInsta,"openUsernameInApp:",IVar1);
  }
  return;
}

