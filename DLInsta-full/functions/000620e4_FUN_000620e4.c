/* Address: 000620e4 | Name: FUN_000620e4 | Body bytes: 1300 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_000620e4(long param_1)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined4 in_w5;
  long lVar7;
  undefined8 uVar8;
  ID IVar9;
  ID self;
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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  IVar4 = *(ID *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_EnableAlwaysDLHighQuality);
  if ((IVar2 & 1) != 0) {
    uVar3 = FUN_00097ef8();
    uVar3 = FUN_00097a54(uVar3);
    IVar2 = _objc_msgSend(DAT_001006a8,"length");
    IVar2 = FUN_00097c68(uVar3,IVar2);
    IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
    if ((int)IVar2 != 0) {
      IVar4 = _objc_msgSend(IVar4,"objectAtIndexedSubscript:",0);
      IVar2 = _objc_alloc(&objc::class_t::DLInstaDownloader);
      IVar2 = _objc_msgSend(IVar2,"init");
      IVar4 = _objc_msgSend(IVar4,"valueForKey:",&cf__url);
      IVar4 = _objc_msgSend(IVar4,"absoluteString");
      DLInstaDownloader::instance_DLInstaDownloader__downloadMediaURLString_mediaType_
                (IVar2,"downloadMediaURLString:mediaType:",IVar4,1);
      goto LAB_000625a0;
    }
  }
  IVar2 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,auStack_100,
                        0x10);
  if (IVar5 != 0) {
    lVar7 = *local_130;
    do {
      IVar9 = 0;
      do {
        if (*local_130 != lVar7) {
          _objc_enumerationMutation(IVar4);
        }
        self = *(ID *)(lStack_138 + IVar9 * 8);
        IVar6 = _objc_msgSend(self,"valueForKey:",&cf__width);
        _objc_msgSend(IVar6,"intValue");
        IVar6 = _objc_msgSend(self,"valueForKey:",&cf__height);
        _objc_msgSend(IVar6,"intValue");
        IVar6 = NSString::stringWithFormat_
                          ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__dx_d);
        local_178 = PTR___NSConcreteStackBlock_000e80d8;
        local_170 = 0xc2000000;
        local_168 = FUN_00053c98;
        puStack_160 = &DAT_000e8ae8;
        local_158 = self;
        local_150 = uVar1;
        local_148 = uVar8;
        IVar6 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar6,0,(ID)&local_178);
        NSMutableArray::addObject_(IVar2,"addObject:",IVar6);
        IVar9 = IVar9 + 1;
      } while (IVar5 != IVar9);
      IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,
                            auStack_100,0x10);
    } while (IVar5 != 0);
  }
  IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
  IVar5 = FUN_0008c218(&cf_ACTION_IMAGE_TITLE);
  IVar4 = ABMenuViewController::instance_ABMenuViewController__initWithTitle_actionItems_
                    (IVar4,"initWithTitle:actionItems:",IVar5,IVar2);
  IVar2 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  ABMenuViewController::
  instance_ABMenuViewController__presentedFromViewController_animated_completion_
            (IVar4,"presentedFromViewController:animated:completion:",IVar2,1,0,in_w5);
LAB_000625a0:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

