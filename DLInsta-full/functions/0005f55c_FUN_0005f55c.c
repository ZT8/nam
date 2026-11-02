/* Address: 0005f55c | Name: FUN_0005f55c | Body bytes: 996 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0005f55c(long param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  ID IVar9;
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
  IVar1 = *(ID *)(param_1 + 0x20);
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar2 = NSMutableArray::init(IVar2,"init");
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar3 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                        0x10);
  if (IVar3 != 0) {
    lVar8 = *local_120;
    do {
      IVar9 = 0;
      do {
        if (*local_120 != lVar8) {
          _objc_enumerationMutation(IVar1);
        }
        IVar7 = *(ID *)(lStack_128 + IVar9 * 8);
        IVar4 = _objc_msgSend(IVar7,"username");
        if (IVar4 != 0) {
          IVar4 = _objc_alloc(&objc::class_t::DLUser);
          IVar4 = _objc_msgSend(IVar4,"init");
          IVar5 = _objc_msgSend(IVar7,"pk");
          DLUser::instance_DLUser__setPk_(IVar4,"setPk:",IVar5);
          IVar5 = _objc_msgSend(IVar7,"username");
          DLUser::instance_DLUser__setUsername_(IVar4,"setUsername:",IVar5);
          IVar5 = _objc_msgSend(IVar7,"fullName");
          DLUser::instance_DLUser__setFullname_(IVar4,"setFullname:",IVar5);
          IVar5 = _objc_msgSend(IVar7,"respondsToSelector:","_private_profilePicUrl");
          if ((int)IVar5 == 0) {
            IVar5 = _objc_msgSend(IVar7,"respondsToSelector:","_private_profilePicURLString");
            if ((int)IVar5 == 0) {
              IVar7 = _objc_msgSend(IVar7,"profilePicURLString");
              DLUser::instance_DLUser__setAvatarURL_(IVar4,"setAvatarURL:",IVar7);
            }
            else {
              IVar7 = _objc_msgSend(IVar7,"_private_profilePicURLString");
              DLUser::instance_DLUser__setAvatarURL_(IVar4,"setAvatarURL:",IVar7);
            }
          }
          else {
            IVar7 = _objc_msgSend(IVar7,"_private_profilePicUrl");
            DLUser::instance_DLUser__setAvatarURL_(IVar4,"setAvatarURL:",IVar7);
          }
          NSMutableArray::addObject_(IVar2,"addObject:",IVar4);
        }
        IVar9 = IVar9 + 1;
      } while (IVar3 != IVar9);
      IVar3 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0
                            ,0x10);
    } while (IVar3 != 0);
  }
  IVar1 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  IVar3 = _objc_alloc(&objc::class_t::DLMentionsViewController);
  IVar2 = DLMentionsViewController::instance_DLMentionsViewController__initWithUsers_
                    (IVar3,"initWithUsers:",IVar2);
  uVar6 = FUN_0008c218(&cf_STORIES_MENTIONS_IN_THIS_STROY);
  _objc_msgSend(IVar2,"setTitle:",uVar6);
  _objc_msgSend(IVar1,"presentViewController:animated:completion:",IVar2,1,0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

