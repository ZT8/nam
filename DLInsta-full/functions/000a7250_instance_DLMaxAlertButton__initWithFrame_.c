/* Address: 000a7250 | Name: instance_DLMaxAlertButton__initWithFrame_ | Body bytes: 876 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID DLMaxAlertButton::instance_DLMaxAlertButton__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  ID self;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::DLMaxAlertButton;
  local_70 = param_1;
  self = UIButton::initWithFrame_
                   ((ID)&local_70,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___UIView);
    IVar3 = UIView::init(IVar3,"init");
    lVar6 = (long)_separatorView;
    uVar5 = *(undefined8 *)(self + lVar6);
    *(ID *)(self + lVar6) = IVar3;
    _objc_msgSend(*(ID *)(self + lVar6),"setTranslatesAutoresizingMaskIntoConstraints:",uVar5,0);
    bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar2 & 1) == 0) {
      uVar5 = 0x3feb7b7b7b7b7b7b;
    }
    else {
      uVar5 = 0x3fcb1b1b1b1b1b1b;
    }
    IVar3 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar5,uVar5
                       ,0x3ff0000000000000);
    _objc_msgSend(*(ID *)(self + lVar6),"setBackgroundColor:",IVar3);
    UIButton::addSubview_(self,"addSubview:",*(undefined8 *)(self + lVar6));
    IVar3 = _objc_msgSend(*(ID *)(self + lVar6),"topAnchor");
    IVar4 = UIButton::topAnchor(self,"topAnchor");
    IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
    _objc_msgSend(IVar3,"setActive:",1);
    IVar3 = _objc_msgSend(*(ID *)(self + lVar6),"leadingAnchor");
    IVar4 = UIButton::leadingAnchor(self,"leadingAnchor");
    IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
    _objc_msgSend(IVar3,"setActive:",1);
    IVar3 = _objc_msgSend(*(ID *)(self + lVar6),"trailingAnchor");
    IVar4 = UIButton::trailingAnchor(self,"trailingAnchor");
    IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
    _objc_msgSend(IVar3,"setActive:",1);
    IVar3 = _objc_msgSend(*(ID *)(self + lVar6),"heightAnchor");
    IVar3 = _objc_msgSend(IVar3,"constraintEqualToConstant:",0x3fe54fdf3b645a1d);
    _objc_msgSend(IVar3,"setActive:",1);
    bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    ppuVar1 = &PTR_s_whiteColor_000fb648;
    if (bVar2 == 0) {
      ppuVar1 = &PTR_s_blackColor_000fbc88;
    }
    IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
    UIButton::setTitleColor_forState_(self,"setTitleColor:forState:",IVar3,0);
  }
  return self;
}

