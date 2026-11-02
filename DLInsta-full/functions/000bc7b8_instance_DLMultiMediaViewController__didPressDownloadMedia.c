/* Address: 000bc7b8 | Name: instance_DLMultiMediaViewController__didPressDownloadMedia | Body bytes: 1236 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__didPressDownloadMedia
               (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined4 in_w5;
  ID IVar7;
  ID self_00;
  long lVar8;
  undefined *local_1a0;
  undefined8 local_198;
  code *local_190;
  undefined *puStack_188;
  ID local_180;
  ID IStack_178;
  undefined *local_170;
  undefined8 local_168;
  code *local_160;
  undefined *puStack_158;
  ID local_150;
  ID IStack_148;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar2 = NSMutableArray::init(IVar2,"init");
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar3 = NSMutableArray::init(IVar3,"init");
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar4 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
  IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,auStack_100,
                        0x10);
  if (IVar5 != 0) {
    lVar8 = *local_130;
    do {
      IVar7 = 0;
      do {
        if (*local_130 != lVar8) {
          _objc_enumerationMutation(IVar4);
        }
        self_00 = *(ID *)(lStack_138 + IVar7 * 8);
        IVar6 = _objc_msgSend(self_00,"mediaType");
        pcVar1 = &cf_Video;
        self = IVar2;
        if (IVar6 != 2) {
          pcVar1 = &cf_Photo;
          self = IVar3;
        }
        _NSLog(pcVar1);
        NSMutableArray::addObject_(self,"addObject:",self_00);
        IVar7 = IVar7 + 1;
      } while (IVar5 != IVar7);
      IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,
                            auStack_100,0x10);
    } while (IVar5 != 0);
  }
  IVar3 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
  _objc_msgSend(IVar3,"sortUsingComparator:",&PTR___NSConcreteGlobalBlock_000e9d88);
  IVar3 = _objc_alloc(&objc::class_t::DLInstaDownloader);
  IVar3 = _objc_msgSend(IVar3,"init");
  IVar2 = NSMutableArray::count(IVar2,"count");
  if (IVar2 < 2) {
    IVar2 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    ::DLInstaDownloader::instance_DLInstaDownloader__downloadMultibileItems_isNeedMerge_completion_
              (IVar3,"downloadMultibileItems:isNeedMerge:completion:",IVar2,0,0xe9de8,in_w5);
  }
  else {
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar2 = NSMutableArray::init(IVar2,"init");
    IVar4 = instance_DLMultiMediaViewController__posts(param_1,"posts");
    IVar4 = _objc_msgSend(IVar4,"count");
    IVar5 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    IVar5 = _objc_msgSend(IVar5,"count");
    pcVar1 = &cf_STORIES_DOWNLOAD_ALL;
    if (IVar4 != IVar5) {
      pcVar1 = &cf_STORIES_DOWNLOAD_ALL_SELECTED;
    }
    IVar4 = FUN_0008c218(pcVar1);
    local_170 = PTR___NSConcreteStackBlock_000e80d8;
    local_168 = 0xc2000000;
    local_160 = FUN_000bcd6c;
    puStack_158 = &DAT_000e9b48;
    local_150 = IVar3;
    IStack_148 = param_1;
    IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar4,0,(ID)&local_170);
    NSMutableArray::addObject_(IVar2,"addObject:",IVar4);
    IVar4 = FUN_0008c218(&cf_STORIES_DOWNLOAD_AND_MERGE);
    local_1a0 = PTR___NSConcreteStackBlock_000e80d8;
    local_198 = 0xc2000000;
    local_190 = FUN_000bcde4;
    puStack_188 = &DAT_000e9b48;
    local_180 = IVar3;
    IStack_178 = param_1;
    IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar4,0,(ID)&local_1a0);
    NSMutableArray::addObject_(IVar2,"addObject:",IVar3);
    IVar3 = _objc_alloc(&objc::class_t::ABMenuViewController);
    IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar3,"initWithActionItems:",IVar2);
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar2,"presentedFromViewController:animated:completion:",param_1,1,0,in_w5);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

