/* Address: 00092b58 | Name: instance_MBProgressHUD__updateIndicators | Body bytes: 960 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateIndicators(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long_long lVar4;
  
  IVar1 = instance_MBProgressHUD__indicator(param_1,"indicator");
  IVar2 = UIActivityIndicatorView::class((ID)&_OBJC_CLASS___UIActivityIndicatorView,"class");
  IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
  IVar3 = _objc_msgSend((ID)&objc::class_t::MBRoundProgressView,"class");
  IVar3 = _objc_msgSend(IVar1,"isKindOfClass:",IVar3);
  lVar4 = instance_MBProgressHUD__mode(param_1,"mode");
  if (lVar4 == 2) {
    _objc_msgSend(IVar1,"removeFromSuperview");
    IVar1 = _objc_alloc(&objc::class_t::MBBarProgressView);
    IVar1 = MBBarProgressView::instance_MBBarProgressView__init(IVar1,"init");
  }
  else if (lVar4 == 0) {
    if ((IVar2 & 1) != 0) goto code_r0x00092cc4;
    _objc_msgSend(IVar1,"removeFromSuperview");
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIActivityIndicatorView);
    IVar1 = UIActivityIndicatorView::initWithActivityIndicatorStyle_
                      (IVar1,"initWithActivityIndicatorStyle:",0);
    UIActivityIndicatorView::startAnimating(IVar1,"startAnimating");
  }
  else {
    if ((lVar4 & 0xfffffffffffffffd) == 1) {
      if ((IVar3 & 1) == 0) {
        _objc_msgSend(IVar1,"removeFromSuperview");
        IVar1 = _objc_alloc(&objc::class_t::MBRoundProgressView);
        IVar1 = MBRoundProgressView::instance_MBRoundProgressView__init(IVar1,"init");
        IVar2 = instance_MBProgressHUD__bezelView(param_1,"bezelView");
        _objc_msgSend(IVar2,"addSubview:",IVar1);
      }
      if (lVar4 == 3) {
        MBRoundProgressView::instance_MBRoundProgressView__setAnnular_(IVar1,"setAnnular:",1);
      }
      goto code_r0x00092cc4;
    }
    if (lVar4 == 5) {
      _objc_msgSend(IVar1,"removeFromSuperview");
      IVar1 = 0;
      goto code_r0x00092cc4;
    }
    if ((lVar4 != 4) ||
       (IVar2 = instance_MBProgressHUD__customView(param_1,"customView"), IVar2 == IVar1))
    goto code_r0x00092cc4;
    _objc_msgSend(IVar1,"removeFromSuperview");
    IVar1 = instance_MBProgressHUD__customView(param_1,"customView");
  }
  IVar2 = instance_MBProgressHUD__bezelView(param_1,"bezelView");
  _objc_msgSend(IVar2,"addSubview:",IVar1);
code_r0x00092cc4:
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  instance_MBProgressHUD__setIndicator_(param_1,"setIndicator:",IVar1);
  IVar2 = _objc_msgSend(IVar1,"respondsToSelector:","setProgress:");
  if ((int)IVar2 != 0) {
    instance_MBProgressHUD__progress(param_1,"progress");
    IVar2 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
    _objc_msgSend(IVar1,"setValue:forKey:",IVar2,&cf_progress);
  }
  _objc_msgSend(IVar1,"setContentCompressionResistancePriority:forAxis:",0x44798000,0);
  _objc_msgSend(IVar1,"setContentCompressionResistancePriority:forAxis:",0x44798000,1);
  IVar1 = instance_MBProgressHUD__contentColor(param_1,"contentColor");
  instance_MBProgressHUD__updateViewsForColor_(param_1,"updateViewsForColor:",IVar1);
  _objc_msgSend(param_1,"setNeedsUpdateConstraints");
  return;
}

