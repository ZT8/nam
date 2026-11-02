/* Address: 0004f4d8 | Name: FUN_0004f4d8 | Body bytes: 604 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0004f4d8(ID param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
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
  IVar1 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",0);
  IVar1 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_story_seen_media_id_plist);
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = NSFileManager::fileExistsAtPath_(IVar2,"fileExistsAtPath:",IVar1);
  if ((int)IVar2 == 0) {
    uVar6 = 0;
  }
  else {
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
    IVar1 = NSMutableDictionary::initWithContentsOfFile_(IVar2,"initWithContentsOfFile:",IVar1);
    IVar1 = NSMutableDictionary::objectForKey_(IVar1,"objectForKey:",&cf_media_ids);
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    IVar2 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                      (IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,0x10
                      );
    if (IVar2 == 0) {
      uVar6 = 0;
    }
    else {
      lVar5 = *local_120;
      do {
        IVar4 = 0;
        do {
          if (*local_120 != lVar5) {
            _objc_enumerationMutation(IVar1);
          }
          IVar3 = _objc_msgSend(param_1,"isEqualToString:",*(undefined8 *)(lStack_128 + IVar4 * 8));
          if ((IVar3 & 1) != 0) {
            uVar6 = 1;
            goto LAB_0004f6cc;
          }
          IVar4 = IVar4 + 1;
        } while (IVar2 != IVar4);
        IVar2 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                          (IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                           0x10);
      } while (IVar2 != 0);
      uVar6 = 0;
    }
  }
LAB_0004f6cc:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar6;
}

