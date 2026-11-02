/* Address: 000bbd70 | Name: instance_DLMultiMediaViewController__tableView_cellForRowAtIndexPath_ | Body bytes: 740 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMultiMediaViewController::instance_DLMultiMediaViewController__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  IVar1 = _objc_alloc(&objc::class_t::DLMultiMediaOptionCell);
  IVar1 = DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__initWithStyle_reuseIdentifier_
                    (IVar1,"initWithStyle:reuseIdentifier:",0,0xedf48);
  IVar2 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
  IVar3 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UIView::setBackgroundColor_(IVar2,"setBackgroundColor:",IVar3);
  _objc_msgSend(IVar1,"setSelectedBackgroundView:",IVar2);
  IVar2 = _objc_msgSend(param_4,"row");
  if (IVar2 == 0) {
    IVar2 = instance_DLMultiMediaViewController__posts(param_1,"posts");
    IVar2 = _objc_msgSend(IVar2,"count");
    IVar3 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    IVar3 = _objc_msgSend(IVar3,"count");
    if (IVar2 == IVar3) {
      pcVar5 = &cf_STORIES_UNSELECT_ALL;
    }
    else {
      pcVar5 = &cf_STORIES_SELECT_ALL;
    }
    uVar4 = FUN_0008c218(pcVar5);
    IVar2 = DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__titleLabel(IVar1,"titleLabel");
    _objc_msgSend(IVar2,"setText:",uVar4);
  }
  else {
    IVar2 = _objc_msgSend(param_4,"row");
    if (IVar2 == 1) {
      uVar4 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
      IVar2 = DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__titleLabel
                        (IVar1,"titleLabel");
      _objc_msgSend(IVar2,"setText:",uVar4);
      IVar2 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
      IVar2 = _objc_msgSend(IVar2,"count");
      IVar3 = DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__containerView
                        (IVar1,"containerView");
      if (IVar2 == 0) {
        _objc_msgSend(IVar3,"setAlpha:",0x3fe0000000000000);
      }
      else {
        _objc_msgSend(IVar3,"setAlpha:",0x3ff0000000000000);
      }
      _objc_msgSend(IVar1,"setUserInteractionEnabled:",(ulong)(IVar2 != 0));
    }
  }
  return IVar1;
}

