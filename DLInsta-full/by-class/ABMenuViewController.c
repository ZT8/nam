/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[ABMenuViewController initWithTitle:actionItems:] | encoding @32@0:8@16@24 */
/* Address: 0009ac90 | Name: instance_ABMenuViewController__initWithTitle_actionItems_ | Body bytes: 132 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID ABMenuViewController::instance_ABMenuViewController__initWithTitle_actionItems_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  *(ID *)(param_1 + (long)_actionTitle) = param_3;
  *(ID *)(param_1 + (long)_items) = param_4;
  return param_1;
}


/* -[ABMenuViewController initWithActionItems:] | encoding @24@0:8@16 */
/* Address: 0009ad14 | Name: instance_ABMenuViewController__initWithActionItems_ | Body bytes: 52 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

ID ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
             (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_items) = param_3;
  return param_1;
}


/* -[ABMenuViewController presentedFromViewController:animated:completion:] | encoding v36@0:8@16B24@?28 */
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


/* -[ABMenuViewController actionTitle] | encoding @16@0:8 */
/* Address: 0009b228 | Name: instance_ABMenuViewController__actionTitle | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID ABMenuViewController::instance_ABMenuViewController__actionTitle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_actionTitle);
}


/* -[ABMenuViewController setActionTitle:] | encoding v24@0:8@16 */
/* Address: 0009b238 | Name: instance_ABMenuViewController__setActionTitle_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void ABMenuViewController::instance_ABMenuViewController__setActionTitle_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_actionTitle) = param_3;
  return;
}


/* -[ABMenuViewController items] | encoding @16@0:8 */
/* Address: 0009b24c | Name: instance_ABMenuViewController__items | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID ABMenuViewController::instance_ABMenuViewController__items(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_items);
}


/* -[ABMenuViewController setItems:] | encoding v24@0:8@16 */
/* Address: 0009b25c | Name: instance_ABMenuViewController__setItems_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void ABMenuViewController::instance_ABMenuViewController__setItems_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_items) = param_3;
  return;
}


/* -[ABMenuViewController delegate] | encoding @16@0:8 */
/* Address: 0009b270 | Name: instance_ABMenuViewController__delegate | Body bytes: 32 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID ABMenuViewController::instance_ABMenuViewController__delegate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_delegate);
}


/* -[ABMenuViewController setDelegate:] | encoding v24@0:8@16 */
/* Address: 0009b290 | Name: instance_ABMenuViewController__setDelegate_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void ABMenuViewController::instance_ABMenuViewController__setDelegate_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_delegate) = param_3;
  return;
}


/* -[ABMenuViewController .cxx_destruct] | encoding v16@0:8 */
/* Address: 0009b2a4 | Name: instance_ABMenuViewController___cxx_destruct | Body bytes: 80 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void ABMenuViewController::instance_ABMenuViewController___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + (long)_delegate);
  *(undefined8 *)(param_1 + (long)_items) = 0;
  *(undefined8 *)(param_1 + (long)_actionTitle) = 0;
  return;
}

