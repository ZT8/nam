/* Address: 000a3184 | Name: instance_DLInstaDownloader__setupMinimizeView | Body bytes: 576 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__setupMinimizeView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  double in_d2;
  double in_d3;
  
  IVar1 = _objc_alloc(&objc::class_t::DLDownloaderMinimizeView);
  IVar1 = _objc_msgSend(IVar1,"init");
  instance_DLInstaDownloader__setMinimizeView_(param_1,"setMinimizeView:",IVar1);
  IVar1 = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
  UIScreen::bounds(IVar1,"bounds");
  IVar1 = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
  UIScreen::bounds(IVar1,"bounds");
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"setFrame:",in_d2 + -45.0,(in_d3 + -40.0) * 0.5,0x4044000000000000,
                0x4044000000000000);
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setCornerRadius:",0x4034000000000000);
  IVar1 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
  IVar2 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
  IVar1 = UITapGestureRecognizer::initWithTarget_action_
                    (IVar1,"initWithTarget:action:",param_1,"showHUDAgain");
  IVar2 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar2,"addGestureRecognizer:",IVar1);
  return;
}

