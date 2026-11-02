/* Address: 000babec | Name: instance_DLMultiMediaViewController__collectionView_cellForItemAtIndexPath_ | Body bytes: 1504 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMultiMediaViewController::
   instance_DLMultiMediaViewController__collectionView_cellForItemAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  ID local_70;
  ID local_68;
  
  self = _objc_msgSend(param_3,"dequeueReusableCellWithReuseIdentifier:forIndexPath:",
                       &cf_videoMediaCell,param_4);
  IVar1 = _objc_msgSend(param_4,"row");
  _objc_msgSend(self,"setTag:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar2 = _objc_msgSend(param_4,"row");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  IVar2 = _objc_msgSend(self,"containerViewCell");
  IVar3 = UIColor::darkGrayColor((ID)&_OBJC_CLASS___UIColor,"darkGrayColor");
  IVar3 = UIColor::colorWithAlphaComponent_(IVar3,"colorWithAlphaComponent:",0x3fd3333333333333);
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar3);
  IVar2 = _objc_msgSend(IVar1,"coverImage");
  if (IVar2 == 0) {
    IVar2 = _objc_msgSend(self,"indicatorView");
    _objc_msgSend(IVar2,"startAnimating");
    _objc_msgSend(IVar1,"setFetching:",1);
    IVar2 = _objc_msgSend(IVar1,"coverUrl");
    local_98 = PTR___NSConcreteStackBlock_000e80d8;
    local_90 = 0xc2000000;
    local_88 = FUN_000bb1cc;
    puStack_80 = &DAT_000e9b78;
    local_78 = self;
    local_70 = param_4;
    local_68 = IVar1;
    _objc_msgSend(IVar1,"downloadImageFromUrl:completion:",IVar2,&local_98);
  }
  else {
    IVar2 = _objc_msgSend(self,"mediaImageView");
    IVar3 = _objc_msgSend(IVar1,"coverImage");
    _objc_msgSend(IVar2,"setImage:",IVar3);
  }
  IVar2 = _objc_msgSend(self,"indicatorView");
  IVar2 = _objc_msgSend(IVar2,"isAnimating");
  if ((int)IVar2 != 0) {
    IVar2 = _objc_msgSend(self,"errorLabel");
    _objc_msgSend(IVar2,"setText:",0);
  }
  IVar2 = _objc_msgSend(IVar1,"mediaType");
  if (IVar2 == 2) {
    _objc_msgSend(IVar1,"duration");
    IVar2 = _objc_msgSend(IVar1,"convertTimeToString:");
    IVar3 = _objc_msgSend(self,"durationLabel");
    _objc_msgSend(IVar3,"setText:",IVar2);
  }
  else {
    IVar2 = _objc_msgSend(self,"durationLabel");
    _objc_msgSend(IVar2,"setText:",0);
  }
  IVar1 = _objc_msgSend(IVar1,"isSelected");
  if ((int)IVar1 == 0) {
    IVar1 = _objc_msgSend(self,"checkmarkView");
    _objc_msgSend(IVar1,"setBackgroundColor:",0);
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIImage);
    IVar1 = UIImage::init(IVar1,"init");
    IVar2 = _objc_msgSend(self,"checkmarkImageView");
    _objc_msgSend(IVar2,"setImage:",IVar1);
  }
  else {
    IVar1 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    IVar1 = UIColor::colorWithAlphaComponent_(IVar1,"colorWithAlphaComponent:",0x3fe3333333333333);
    IVar2 = _objc_msgSend(self,"checkmarkView");
    _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
    IVar1 = DLHelper::class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",0xedf28);
    IVar2 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    IVar1 = DLHelper::class_DLHelper__image_color_
                      ((ID)&objc::class_t::DLHelper,"image:color:",IVar1,IVar2);
    IVar2 = _objc_msgSend(self,"checkmarkImageView");
    _objc_msgSend(IVar2,"setImage:",IVar1);
  }
  return self;
}

