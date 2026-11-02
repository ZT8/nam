/* Address: 000ac2d8 | Name: instance_DLMentionsViewController__tableView_numberOfRowsInSection_ | Body bytes: 76 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

long_long DLMentionsViewController::
          instance_DLMentionsViewController__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = instance_DLMentionsViewController__users(param_1,"users");
  IVar1 = _objc_msgSend(IVar1,"count");
  return IVar1;
}

