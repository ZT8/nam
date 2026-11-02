/* Address: 000a13a0 | Name: instance_DLDownloaderMinimizeView__setupViews | Body bytes: 1000 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLDownloaderMinimizeView::instance_DLDownloaderMinimizeView__setupViews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = UIColor::colorWithWhite_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0,0x3fe99999a0000000);
  _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  IVar1 = _objc_msgSend(param_1,"layer");
  _objc_msgSend(IVar1,"setMasksToBounds:",1);
  IVar1 = _objc_msgSend(param_1,"layer");
  _objc_msgSend(IVar1,"setBorderWidth:",0x3ff8000000000000);
  IVar1 = UIColor::colorWithWhite_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0x3ff0000000000000,
                     0x3fe6666660000000);
  IVar1 = _objc_retainAutorelease(IVar1);
  IVar1 = _objc_msgSend(IVar1,"CGColor");
  IVar2 = _objc_msgSend(param_1,"layer");
  _objc_msgSend(IVar2,"setBorderColor:",IVar1);
  IVar1 = UILabel::new((ID)&_OBJC_CLASS___UILabel,"new");
  instance_DLDownloaderMinimizeView__setPercentLabel_(param_1,"setPercentLabel:",IVar1);
  IVar1 = instance_DLDownloaderMinimizeView__percentLabel(param_1,"percentLabel");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLDownloaderMinimizeView__percentLabel(param_1,"percentLabel");
  IVar2 = UIFont::boldSystemFontOfSize_
                    ((ID)&_OBJC_CLASS___UIFont,"boldSystemFontOfSize:",0x4024000000000000);
  _objc_msgSend(IVar1,"setFont:",IVar2);
  IVar1 = instance_DLDownloaderMinimizeView__percentLabel(param_1,"percentLabel");
  IVar2 = UIColor::colorWithWhite_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0x3ff0000000000000,
                     0x3ff0000000000000);
  _objc_msgSend(IVar1,"setTextColor:",IVar2);
  IVar1 = instance_DLDownloaderMinimizeView__percentLabel(param_1,"percentLabel");
  _objc_msgSend(param_1,"addSubview:",IVar1);
  IVar1 = instance_DLDownloaderMinimizeView__percentLabel(param_1,"percentLabel");
  IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
  IVar2 = _objc_msgSend(param_1,"centerYAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLDownloaderMinimizeView__percentLabel(param_1,"percentLabel");
  IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
  IVar2 = _objc_msgSend(param_1,"centerXAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

