/* Address: 0008e080 | Name: class_DLHelper__showMessageWithTitle_message_ | Body bytes: 192 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLHelper::class_DLHelper__showMessageWithTitle_message_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  undefined **local_38;
  
  if (param_3 != 0 || param_4 != 0) {
    local_58 = PTR___NSConcreteStackBlock_000e80d8;
    local_50 = 0xc2000000;
    local_48 = FUN_0008e538;
    puStack_40 = &DAT_000e8fd8;
    local_38 = &PTR___NSConcreteGlobalBlock_000e8f58;
    FUN_0008e538(&local_58,param_3,param_4);
  }
  return;
}

