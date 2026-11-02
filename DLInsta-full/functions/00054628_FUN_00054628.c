/* Address: 00054628 | Name: FUN_00054628 | Body bytes: 992 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00054628(ID param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar1 = NSMutableArray::init(IVar1,"init");
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                        0x10);
  if (IVar2 != 0) {
    lVar7 = *local_120;
    do {
      IVar8 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        IVar6 = *(ID *)(lStack_128 + IVar8 * 8);
        IVar3 = _objc_msgSend(IVar6,"username");
        if (IVar3 != 0) {
          IVar3 = _objc_alloc(&objc::class_t::DLUser);
          IVar3 = _objc_msgSend(IVar3,"init");
          IVar4 = _objc_msgSend(IVar6,"pk");
          DLUser::instance_DLUser__setPk_(IVar3,"setPk:",IVar4);
          IVar4 = _objc_msgSend(IVar6,"username");
          DLUser::instance_DLUser__setUsername_(IVar3,"setUsername:",IVar4);
          IVar4 = _objc_msgSend(IVar6,"fullName");
          DLUser::instance_DLUser__setFullname_(IVar3,"setFullname:",IVar4);
          IVar4 = _objc_msgSend(IVar6,"respondsToSelector:","_private_profilePicUrl");
          if ((int)IVar4 == 0) {
            IVar4 = _objc_msgSend(IVar6,"respondsToSelector:","_private_profilePicURLString");
            if ((int)IVar4 == 0) {
              IVar6 = _objc_msgSend(IVar6,"profilePicURLString");
              DLUser::instance_DLUser__setAvatarURL_(IVar3,"setAvatarURL:",IVar6);
            }
            else {
              IVar6 = _objc_msgSend(IVar6,"_private_profilePicURLString");
              DLUser::instance_DLUser__setAvatarURL_(IVar3,"setAvatarURL:",IVar6);
            }
          }
          else {
            IVar6 = _objc_msgSend(IVar6,"_private_profilePicUrl");
            DLUser::instance_DLUser__setAvatarURL_(IVar3,"setAvatarURL:",IVar6);
          }
          NSMutableArray::addObject_(IVar1,"addObject:",IVar3);
        }
        IVar8 = IVar8 + 1;
      } while (IVar2 != IVar8);
      IVar2 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_130,
                            auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  IVar2 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  IVar8 = _objc_alloc(&objc::class_t::DLMentionsViewController);
  IVar1 = DLMentionsViewController::instance_DLMentionsViewController__initWithUsers_
                    (IVar8,"initWithUsers:",IVar1);
  uVar5 = FUN_0008c218(&cf_STORIES_MENTIONS_IN_THIS_STROY);
  _objc_msgSend(IVar1,"setTitle:",uVar5);
  _objc_msgSend(IVar2,"presentViewController:animated:completion:",IVar1,1,0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

