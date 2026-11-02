/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMaxAlertAction initWithTitle:action:] | encoding @32@0:8@16@?24 */
/* Address: 000a7904 | Name: instance_DLMaxAlertAction__initWithTitle_action_ | Body bytes: 168 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMaxAlertAction::instance_DLMaxAlertAction__initWithTitle_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLMaxAlertAction;
  local_40 = param_1;
  IVar1 = NSObject::init((ID)&local_40,"init",param_3,param_4,(ulong)param_5);
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
  }
  return IVar1;
}


/* -[DLMaxAlertAction title] | encoding @16@0:8 */
/* Address: 000a79ac | Name: instance_DLMaxAlertAction__title | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertAction::instance_DLMaxAlertAction__title(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


/* -[DLMaxAlertAction actionHandler] | encoding @?16@0:8 */
/* Address: 000a79b4 | Name: instance_DLMaxAlertAction__actionHandler | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertAction::instance_DLMaxAlertAction__actionHandler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


/* -[DLMaxAlertAction .cxx_destruct] | encoding v16@0:8 */
/* Address: 000a79bc | Name: instance_DLMaxAlertAction___cxx_destruct | Body bytes: 48 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertAction::instance_DLMaxAlertAction___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

