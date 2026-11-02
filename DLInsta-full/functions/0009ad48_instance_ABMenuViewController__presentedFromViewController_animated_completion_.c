/* Address: 0009ad48 | Name: instance_ABMenuViewController__presentedFromViewController_animated_completion_ | Body bytes: 1244 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

void ABMenuViewController::
     instance_ABMenuViewController__presentedFromViewController_animated_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  double in_d2;
  double in_d3;
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
  _NSClassFromString(&cf_IGActionSheetController);
  IVar1 = _objc_alloc();
  IVar1 = _objc_msgSend(IVar1,"init");
  IVar1 = _objc_msgSend(IVar1,"respondsToSelector:","initWithActions:");
  if ((int)IVar1 == 0) {
    IVar1 = instance_ABMenuViewController__actionTitle(param_1,"actionTitle");
    IVar1 = _objc_msgSend(IVar1,"length");
    if (IVar1 == 0) {
      IVar1 = _objc_msgSend((ID)&objc::class_t::DLSystemAlertController,
                            "alertControllerWithTitle:message:preferredStyle:",0,0,0);
    }
    else {
      IVar1 = instance_ABMenuViewController__actionTitle(param_1,"actionTitle");
      IVar1 = _objc_msgSend((ID)&objc::class_t::DLSystemAlertController,
                            "alertControllerWithTitle:message:preferredStyle:",IVar1,0,0);
    }
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    IVar2 = instance_ABMenuViewController__items(param_1,"items");
    IVar3 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_140,auStack_100,
                          0x10);
    if (IVar3 != 0) {
      lVar6 = *local_130;
      do {
        IVar5 = 0;
        do {
          if (*local_130 != lVar6) {
            _objc_enumerationMutation(IVar2);
          }
          _objc_msgSend(IVar1,"addAction:",*(undefined8 *)(lStack_138 + IVar5 * 8));
          IVar5 = IVar5 + 1;
        } while (IVar3 != IVar5);
        IVar3 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_140,
                              auStack_100,0x10);
      } while (IVar3 != 0);
    }
    uVar4 = FUN_0008c218(&cf_ACTION_CANCEL);
    IVar2 = UIAlertAction::actionWithTitle_style_handler_
                      ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",uVar4,1,
                       &PTR___NSConcreteGlobalBlock_000e9668);
    _objc_msgSend(IVar1,"addAction:",IVar2);
    IVar2 = _objc_msgSend(param_3,"view");
    _objc_msgSend(IVar2,"frame");
    IVar2 = _objc_msgSend(param_3,"view",0x3fe0000000000000);
    _objc_msgSend(IVar2,"frame");
    IVar2 = _objc_msgSend(param_3,"view");
    IVar3 = _objc_msgSend(IVar1,"popoverPresentationController");
    _objc_msgSend(IVar3,"setSourceView:",IVar2);
    IVar2 = _objc_msgSend(IVar1,"popoverPresentationController");
    _objc_msgSend(IVar2,"setSourceRect:",in_d2 * 0.5,in_d3 + -50.0,0,0);
  }
  else {
    _NSClassFromString(&cf_IGActionSheetController);
    IVar1 = _objc_alloc();
    IVar2 = instance_ABMenuViewController__items(param_1,"items");
    IVar1 = _objc_msgSend(IVar1,"initWithActions:",IVar2);
    IVar2 = instance_ABMenuViewController__delegate(param_1,"delegate");
    if (IVar2 != 0) {
      IVar2 = instance_ABMenuViewController__delegate(param_1,"delegate");
      _objc_msgSend(IVar1,"setDelegate:",IVar2);
    }
    _objc_msgSend(IVar1,"setDLInstaStatus:",2);
  }
  _objc_msgSend(param_3,"presentViewController:animated:completion:",IVar1,(ulong)param_4,param_5);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

