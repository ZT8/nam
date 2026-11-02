/* Address: 00053ec8 | Name: FUN_00053ec8 | Body bytes: 1208 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00053ec8(undefined8 param_1,ID param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID self;
  ID IVar6;
  undefined *local_178;
  undefined8 local_170;
  code *local_168;
  undefined *puStack_160;
  ID local_158;
  undefined8 local_150;
  undefined8 local_148;
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
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_EnableAlwaysDLHighQuality);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      IVar1 = _objc_msgSend(param_2,"objectAtIndexedSubscript:",0);
      IVar3 = _objc_alloc(&objc::class_t::DLInstaDownloader);
      IVar3 = _objc_msgSend(IVar3,"init");
      IVar1 = _objc_msgSend(IVar1,"objectForKeyedSubscript:",&cf_url);
      DLInstaDownloader::instance_DLInstaDownloader__downloadMediaURLString_mediaType_
                (IVar3,"downloadMediaURLString:mediaType:",IVar1,2);
      goto LAB_00054324;
    }
  }
  IVar1 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar3 = _objc_msgSend(param_2,"countByEnumeratingWithState:objects:count:",&local_140,auStack_100,
                        0x10);
  if (IVar3 != 0) {
    lVar5 = *local_130;
    do {
      IVar6 = 0;
      do {
        if (*local_130 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        self = *(ID *)(lStack_138 + IVar6 * 8);
        _objc_msgSend(self,"objectForKeyedSubscript:",&cf_width);
        _objc_msgSend(self,"objectForKeyedSubscript:",&cf_height);
        IVar4 = NSString::stringWithFormat_
                          ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___x__);
        local_178 = PTR___NSConcreteStackBlock_000e80d8;
        local_170 = 0xc2000000;
        local_168 = FUN_00054498;
        puStack_160 = &DAT_000e8ae8;
        local_158 = self;
        local_150 = param_1;
        local_148 = param_3;
        IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar4,0,(ID)&local_178);
        NSMutableArray::addObject_(IVar1,"addObject:",IVar4);
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = _objc_msgSend(param_2,"countByEnumeratingWithState:objects:count:",&local_140,
                            auStack_100,0x10);
    } while (IVar3 != 0);
  }
  IVar3 = _objc_alloc(&objc::class_t::ABMenuViewController);
  IVar6 = FUN_0008c218(&cf_ACTION_VIDEO_TITLE);
  IVar1 = ABMenuViewController::instance_ABMenuViewController__initWithTitle_actionItems_
                    (IVar3,"initWithTitle:actionItems:",IVar6,IVar1);
  IVar3 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  ABMenuViewController::
  instance_ABMenuViewController__presentedFromViewController_animated_completion_
            (IVar1,"presentedFromViewController:animated:completion:",IVar3,1,0,param_6);
LAB_00054324:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

