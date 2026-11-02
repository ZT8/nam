/* Address: 000b8960 | Name: instance_DLMultiMediaViewCell__setupMediaImageView | Body bytes: 724 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupMediaImageView
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIImageView);
  IVar1 = UIImageView::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setMediaImageView_(param_1,"setMediaImageView:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(IVar1,"setContentMode:",1);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(IVar1,"setClipsToBounds:",1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = _objc_msgSend(IVar2,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = _objc_msgSend(IVar2,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

