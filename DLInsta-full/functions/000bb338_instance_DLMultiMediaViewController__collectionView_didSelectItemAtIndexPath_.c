/* Address: 000bb338 | Name: instance_DLMultiMediaViewController__collectionView_didSelectItemAtIndexPath_ | Body bytes: 996 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLMultiMediaViewController::
     instance_DLMultiMediaViewController__collectionView_didSelectItemAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  char *op;
  
  IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar2 = _objc_msgSend(param_4,"row");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  IVar2 = _objc_msgSend(param_3,"cellForItemAtIndexPath:",param_4);
  IVar3 = _objc_msgSend(IVar1,"isSelected");
  if (((IVar3 & 1) == 0) && (IVar3 = _objc_msgSend(IVar1,"isFetching"), (IVar3 & 1) == 0)) {
    DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
    _objc_msgSend(IVar1,"setSelect:",1);
    IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    IVar3 = UIColor::colorWithAlphaComponent_(IVar3,"colorWithAlphaComponent:",0x3fe3333333333333);
    IVar4 = _objc_msgSend(IVar2,"checkmarkView");
    _objc_msgSend(IVar4,"setBackgroundColor:",IVar3);
    IVar3 = DLHelper::class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",0xedf28);
    IVar4 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    IVar3 = DLHelper::class_DLHelper__image_color_
                      ((ID)&objc::class_t::DLHelper,"image:color:",IVar3,IVar4);
    IVar2 = _objc_msgSend(IVar2,"checkmarkImageView");
    _objc_msgSend(IVar2,"setImage:",IVar3);
    IVar2 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    op = "addObject:";
  }
  else {
    IVar3 = _objc_msgSend(IVar1,"isSelected");
    if ((int)IVar3 != 0) {
      DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
    }
    _objc_msgSend(IVar1,"setSelect:",0);
    IVar3 = _objc_msgSend(IVar2,"checkmarkView");
    _objc_msgSend(IVar3,"setBackgroundColor:",0);
    IVar3 = _objc_alloc(&_OBJC_CLASS___UIImage);
    IVar3 = UIImage::init(IVar3,"init");
    IVar2 = _objc_msgSend(IVar2,"checkmarkImageView");
    _objc_msgSend(IVar2,"setImage:",IVar3);
    IVar2 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    op = "removeObject:";
  }
  _objc_msgSend(IVar2,op,IVar1);
  _objc_msgSend(param_3,"deselectItemAtIndexPath:animated:",param_4,1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"reloadData");
  return;
}

