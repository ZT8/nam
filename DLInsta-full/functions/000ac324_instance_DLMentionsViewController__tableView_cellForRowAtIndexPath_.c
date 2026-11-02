/* Address: 000ac324 | Name: instance_DLMentionsViewController__tableView_cellForRowAtIndexPath_ | Body bytes: 824 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x20 bytes */

ID DLMentionsViewController::instance_DLMentionsViewController__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  ID local_a8;
  ID IStack_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  ID local_70;
  ID local_68;
  
  self = _objc_msgSend(param_3,"dequeueReusableCellWithIdentifier:",&cf_DLMentionViewCell);
  IVar2 = _objc_msgSend(param_4,"row");
  _objc_msgSend(self,"setTag:",IVar2);
  IVar2 = instance_DLMentionsViewController__users(param_1,"users");
  IVar3 = _objc_msgSend(param_4,"row");
  IVar2 = _objc_msgSend(IVar2,"objectAtIndexedSubscript:",IVar3);
  IVar3 = _objc_msgSend(IVar2,"avatarImage");
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  if (IVar3 == 0) {
    IVar3 = _objc_msgSend(IVar2,"avatarURL");
    local_98 = puVar1;
    local_90 = 0xc2000000;
    local_88 = FUN_000ac65c;
    puStack_80 = &DAT_000e9b78;
    local_78 = self;
    local_70 = param_4;
    local_68 = IVar2;
    _objc_msgSend(IVar2,"downloadAvatarFromUrl:completion:",IVar3,&local_98);
  }
  else {
    IVar3 = _objc_msgSend(self,"avatarImageView");
    IVar4 = _objc_msgSend(IVar2,"avatarImage");
    _objc_msgSend(IVar3,"setImage:",IVar4);
  }
  IVar3 = _objc_msgSend(IVar2,"username");
  IVar4 = _objc_msgSend(self,"usernameLabel");
  _objc_msgSend(IVar4,"setText:",IVar3);
  IVar3 = _objc_msgSend(IVar2,"fullname");
  IVar4 = _objc_msgSend(self,"fullnameLabel");
  _objc_msgSend(IVar4,"setText:",IVar3);
  local_c8 = puVar1;
  local_c0 = 0xc2000000;
  local_b8 = FUN_000ac70c;
  puStack_b0 = &DAT_000e9b48;
  local_a8 = IVar2;
  IStack_a0 = param_1;
  _objc_msgSend(self,"setAvatarImageTapAction:",&local_c8);
  return self;
}

