/* Address: 000a0ff8 | Name: class_DLDownloadManager__removeAllMultiFilesInFolder | Body bytes: 532 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLDownloadManager::class_DLDownloadManager__removeAllMultiFilesInFolder(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID self;
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
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
  IVar1 = NSFileManager::contentsOfDirectoryAtPath_error_
                    (IVar1,"contentsOfDirectoryAtPath:error:",IVar2,0);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = NSFileManager::countByEnumeratingWithState_objects_count_
                    (IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar1);
        }
        uVar6 = *(undefined8 *)(lStack_128 + IVar4 * 8);
        self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
        IVar3 = class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
        IVar3 = _objc_msgSend(IVar3,"stringByAppendingPathComponent:",uVar6);
        NSFileManager::removeItemAtPath_error_(self,"removeItemAtPath:error:",IVar3,0);
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = NSFileManager::countByEnumeratingWithState_objects_count_
                        (IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                         0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

