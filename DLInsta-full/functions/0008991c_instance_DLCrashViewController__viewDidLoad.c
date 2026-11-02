/* Address: 0008991c | Name: instance_DLCrashViewController__viewDidLoad | Body bytes: 8072 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLCrashViewController::instance_DLCrashViewController__viewDidLoad(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  ID local_88;
  class_t *pcStack_80;
  
  pcStack_80 = &objc::class_t::DLCrashViewController;
  local_88 = param_1;
  UIViewController::viewDidLoad((ID)&local_88,"viewDidLoad");
  IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
  iVar1 = FUN_000bd0fc(2,0xd,0,0);
  if (iVar1 == 0) {
    IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    IVar3 = _objc_msgSend(param_1,"navigationController");
    IVar3 = _objc_msgSend(IVar3,"navigationBar");
    _objc_msgSend(IVar3,"setBarTintColor:",IVar2);
    IVar2 = UIColor::darkGrayColor((ID)&_OBJC_CLASS___UIColor,"darkGrayColor");
    IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3fe0000000000000);
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = _objc_msgSend(param_1,"navigationController");
    IVar3 = _objc_msgSend(IVar3,"navigationBar");
    IVar3 = _objc_msgSend(IVar3,"layer");
    _objc_msgSend(IVar3,"setShadowColor:",IVar2);
  }
  else {
    _NSClassFromString(&cf_UINavigationBarAppearance);
    IVar2 = _objc_alloc();
    IVar2 = _objc_msgSend(IVar2,"init");
    _objc_msgSend(IVar2,"configureWithOpaqueBackground");
    IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    _objc_msgSend(IVar2,"setBackgroundColor:",IVar3);
    IVar3 = UIColor::darkGrayColor((ID)&_OBJC_CLASS___UIColor,"darkGrayColor");
    IVar3 = UIColor::colorWithAlphaComponent_(IVar3,"colorWithAlphaComponent:",0x3fe0000000000000);
    _objc_msgSend(IVar2,"setShadowColor:",IVar3);
    IVar3 = _objc_msgSend(param_1,"navigationController");
    IVar3 = _objc_msgSend(IVar3,"navigationBar");
    _objc_msgSend(IVar3,"setStandardAppearance:",IVar2);
    IVar3 = _objc_msgSend(param_1,"navigationController");
    IVar3 = _objc_msgSend(IVar3,"navigationBar");
    _objc_msgSend(IVar3,"setScrollEdgeAppearance:",IVar2);
  }
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);
  uVar4 = FUN_0008c218(&cf_ACTION_DISMISS);
  IVar2 = UIBarButtonItem::initWithTitle_style_target_action_
                    (IVar2,"initWithTitle:style:target:action:",uVar4,0,param_1,"dismiss");
  IVar3 = _objc_msgSend(param_1,"navigationItem");
  _objc_msgSend(IVar3,"setLeftBarButtonItem:",IVar2);
  IVar3 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  UIBarButtonItem::setTintColor_(IVar2,"setTintColor:",IVar3);
  IVar2 = MFMailComposeViewController::canSendMail
                    ((ID)&_OBJC_CLASS___MFMailComposeViewController,"canSendMail");
  if ((int)IVar2 != 0) {
    IVar2 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);
    uVar4 = FUN_0008c218(&cf_ACTION_SEND);
    IVar2 = UIBarButtonItem::initWithTitle_style_target_action_
                      (IVar2,"initWithTitle:style:target:action:",uVar4,0,param_1,"sendCrash:");
    IVar3 = _objc_msgSend(param_1,"navigationItem");
    _objc_msgSend(IVar3,"setRightBarButtonItem:",IVar2);
    IVar3 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    UIBarButtonItem::setTintColor_(IVar2,"setTintColor:",IVar3);
  }
  _objc_msgSend(param_1,"setTitle:",&cf_DLCrash__);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::objectForInfoDictionaryKey_
                    (IVar2,"objectForInfoDictionaryKey:",&cf_CFBundleExecutable);
  instance_DLCrashViewController__setAppName_(param_1,"setAppName:",IVar2);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::objectForInfoDictionaryKey_
                    (IVar2,"objectForInfoDictionaryKey:",&cf_CFBundleShortVersionString);
  instance_DLCrashViewController__setAppVersion_(param_1,"setAppVersion:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIImageView);
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar3 = NSBundle::infoDictionary(IVar3,"infoDictionary");
  IVar3 = NSBundle::objectForKeyedSubscript_(IVar3,"objectForKeyedSubscript:",&cf_CFBundleIcons);
  IVar3 = NSBundle::objectForKeyedSubscript_
                    (IVar3,"objectForKeyedSubscript:",&cf_CFBundlePrimaryIcon);
  IVar3 = NSBundle::objectForKeyedSubscript_(IVar3,"objectForKeyedSubscript:",&cf_CFBundleIconFiles)
  ;
  IVar3 = NSBundle::lastObject(IVar3,"lastObject");
  IVar3 = UIImage::imageNamed_((ID)&_OBJC_CLASS___UIImage,"imageNamed:",IVar3);
  IVar2 = UIImageView::initWithImage_(IVar2,"initWithImage:",IVar3);
  UIImageView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar3 = UIImageView::layer(IVar2,"layer");
  UIImageView::setCornerRadius_(IVar3,"setCornerRadius:",0x402e000000000000);
  UIImageView::setClipsToBounds_(IVar2,"setClipsToBounds:",1);
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"addSubview:",IVar2);
  IVar3 = UIImageView::topAnchor(IVar2,"topAnchor");
  IVar5 = _objc_msgSend(param_1,"view");
  IVar5 = _objc_msgSend(IVar5,"topAnchor");
  IVar3 = UIImageView::constraintEqualToAnchor_constant_
                    (IVar3,"constraintEqualToAnchor:constant:",0x4051800000000000,IVar5);
  UIImageView::setActive_(IVar3,"setActive:",1);
  IVar3 = UIImageView::leftAnchor(IVar2,"leftAnchor");
  IVar5 = _objc_msgSend(param_1,"view");
  IVar5 = _objc_msgSend(IVar5,"leftAnchor");
  IVar3 = UIImageView::constraintEqualToAnchor_constant_
                    (IVar3,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar5);
  UIImageView::setActive_(IVar3,"setActive:",1);
  IVar3 = UIImageView::heightAnchor(IVar2,"heightAnchor");
  IVar3 = UIImageView::constraintEqualToConstant_
                    (IVar3,"constraintEqualToConstant:",0x4052000000000000);
  UIImageView::setActive_(IVar3,"setActive:",1);
  IVar3 = UIImageView::widthAnchor(IVar2,"widthAnchor");
  IVar3 = UIImageView::constraintEqualToConstant_
                    (IVar3,"constraintEqualToConstant:",0x4052000000000000);
  UIImageView::setActive_(IVar3,"setActive:",1);
  IVar3 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar3,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar5 = UIColor::darkGrayColor((ID)&_OBJC_CLASS___UIColor,"darkGrayColor");
  IVar5 = UIColor::colorWithAlphaComponent_(IVar5,"colorWithAlphaComponent:",0x3fe0000000000000);
  UIView::setBackgroundColor_(IVar3,"setBackgroundColor:",IVar5);
  IVar5 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar5,"addSubview:",IVar3);
  IVar5 = UIView::topAnchor(IVar3,"topAnchor");
  IVar6 = UIImageView::bottomAnchor(IVar2,"bottomAnchor");
  IVar5 = UIView::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x4024000000000000,IVar6);
  UIView::setActive_(IVar5,"setActive:",1);
  IVar5 = UIView::leftAnchor(IVar3,"leftAnchor");
  IVar6 = _objc_msgSend(param_1,"view");
  IVar6 = _objc_msgSend(IVar6,"leftAnchor");
  IVar5 = UIView::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar6);
  UIView::setActive_(IVar5,"setActive:",1);
  IVar5 = UIView::rightAnchor(IVar3,"rightAnchor");
  IVar6 = _objc_msgSend(param_1,"view");
  IVar6 = _objc_msgSend(IVar6,"rightAnchor");
  IVar5 = UIView::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0xc030000000000000,IVar6);
  UIView::setActive_(IVar5,"setActive:",1);
  IVar3 = UIView::heightAnchor(IVar3,"heightAnchor");
  IVar3 = UIView::constraintEqualToConstant_(IVar3,"constraintEqualToConstant:",0x3fe0000000000000);
  UIView::setActive_(IVar3,"setActive:",1);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar3 = UILabel::init(IVar3,"init");
  UILabel::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar3,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar5 = instance_DLCrashViewController__appName(param_1,"appName");
  UILabel::setText_(IVar3,"setText:",IVar5);
  IVar5 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  UILabel::setTextColor_(IVar3,"setTextColor:",IVar5);
  IVar5 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402c000000000000,
                     *(undefined8 *)PTR__UIFontWeightMedium_000e80b8);
  UILabel::setFont_(IVar3,"setFont:",IVar5);
  IVar5 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar5,"addSubview:",IVar3);
  IVar5 = UILabel::topAnchor(IVar3,"topAnchor");
  IVar6 = UIImageView::topAnchor(IVar2,"topAnchor");
  IVar5 = UILabel::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x402e000000000000,IVar6);
  UILabel::setActive_(IVar5,"setActive:",1);
  IVar5 = UILabel::leftAnchor(IVar3,"leftAnchor");
  IVar6 = UIImageView::rightAnchor(IVar2,"rightAnchor");
  IVar5 = UILabel::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar6);
  UILabel::setActive_(IVar5,"setActive:",1);
  IVar5 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar5 = UILabel::init(IVar5,"init");
  UILabel::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar5,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar6 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar6 = NSBundle::objectForInfoDictionaryKey_
                    (IVar6,"objectForInfoDictionaryKey:",&cf_CFBundleIdentifier);
  UILabel::setText_(IVar5,"setText:",IVar6);
  IVar6 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  UILabel::setTextColor_(IVar5,"setTextColor:",IVar6);
  uVar4 = *(undefined8 *)PTR__UIFontWeightLight_000e80b0;
  IVar6 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,uVar4);
  UILabel::setFont_(IVar5,"setFont:",IVar6);
  IVar6 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar6,"addSubview:",IVar5);
  IVar6 = UILabel::topAnchor(IVar5,"topAnchor");
  IVar3 = UILabel::bottomAnchor(IVar3,"bottomAnchor");
  IVar3 = UILabel::constraintEqualToAnchor_(IVar6,"constraintEqualToAnchor:",IVar3);
  UILabel::setActive_(IVar3,"setActive:",1);
  IVar3 = UILabel::leftAnchor(IVar5,"leftAnchor");
  IVar6 = UIImageView::rightAnchor(IVar2,"rightAnchor");
  IVar3 = UILabel::constraintEqualToAnchor_constant_
                    (IVar3,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar6);
  UILabel::setActive_(IVar3,"setActive:",1);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar3 = UILabel::init(IVar3,"init");
  UILabel::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar3,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar6 = instance_DLCrashViewController__appVersion(param_1,"appVersion");
  IVar6 = _objc_msgSend(0xece48,"stringByAppendingString:",IVar6);
  UILabel::setText_(IVar3,"setText:",IVar6);
  IVar6 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  UILabel::setTextColor_(IVar3,"setTextColor:",IVar6);
  IVar6 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,uVar4);
  UILabel::setFont_(IVar3,"setFont:",IVar6);
  IVar6 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar6,"addSubview:",IVar3);
  IVar6 = UILabel::topAnchor(IVar3,"topAnchor");
  IVar5 = UILabel::bottomAnchor(IVar5,"bottomAnchor");
  IVar5 = UILabel::constraintEqualToAnchor_(IVar6,"constraintEqualToAnchor:",IVar5);
  UILabel::setActive_(IVar5,"setActive:",1);
  IVar3 = UILabel::leftAnchor(IVar3,"leftAnchor");
  IVar5 = UIImageView::rightAnchor(IVar2,"rightAnchor");
  IVar3 = UILabel::constraintEqualToAnchor_constant_
                    (IVar3,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar5);
  UILabel::setActive_(IVar3,"setActive:",1);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar3 = UILabel::init(IVar3,"init");
  UILabel::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar3,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  UILabel::setText_(IVar3,"setText:",&cf_Reason_);
  IVar5 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  UILabel::setTextColor_(IVar3,"setTextColor:",IVar5);
  IVar5 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar5,"addSubview:",IVar3);
  IVar5 = UILabel::topAnchor(IVar3,"topAnchor");
  IVar2 = UIImageView::bottomAnchor(IVar2,"bottomAnchor");
  IVar2 = UILabel::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x4034000000000000,IVar2);
  UILabel::setActive_(IVar2,"setActive:",1);
  IVar2 = UILabel::leftAnchor(IVar3,"leftAnchor");
  IVar5 = _objc_msgSend(param_1,"view");
  IVar5 = _objc_msgSend(IVar5,"leftAnchor");
  IVar2 = UILabel::constraintEqualToAnchor_constant_
                    (IVar2,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar5);
  UILabel::setActive_(IVar2,"setActive:",1);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar2 = UILabel::init(IVar2,"init");
  UILabel::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar5 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,uVar4);
  UILabel::setFont_(IVar2,"setFont:",IVar5);
  UILabel::setTextAlignment_(IVar2,"setTextAlignment:",0);
  IVar5 = instance_DLCrashViewController__infoDict(param_1,"infoDict");
  IVar5 = _objc_msgSend(IVar5,"objectForKeyedSubscript:",&cf_reason);
  UILabel::setText_(IVar2,"setText:",IVar5);
  IVar5 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  UILabel::setTextColor_(IVar2,"setTextColor:",IVar5);
  UILabel::setNumberOfLines_(IVar2,"setNumberOfLines:",0);
  IVar5 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar5,"addSubview:",IVar2);
  IVar5 = UILabel::topAnchor(IVar2,"topAnchor");
  IVar3 = UILabel::bottomAnchor(IVar3,"bottomAnchor");
  IVar3 = UILabel::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x4014000000000000,IVar3);
  UILabel::setActive_(IVar3,"setActive:",1);
  IVar3 = UILabel::leftAnchor(IVar2,"leftAnchor");
  IVar5 = _objc_msgSend(param_1,"view");
  IVar5 = _objc_msgSend(IVar5,"leftAnchor");
  IVar3 = UILabel::constraintEqualToAnchor_constant_
                    (IVar3,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar5);
  UILabel::setActive_(IVar3,"setActive:",1);
  IVar3 = UILabel::rightAnchor(IVar2,"rightAnchor");
  IVar5 = _objc_msgSend(param_1,"view");
  IVar5 = _objc_msgSend(IVar5,"rightAnchor");
  IVar3 = UILabel::constraintEqualToAnchor_constant_
                    (IVar3,"constraintEqualToAnchor:constant:",0xc030000000000000,IVar5);
  UILabel::setActive_(IVar3,"setActive:",1);
  IVar3 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar3,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar5 = UIColor::darkGrayColor((ID)&_OBJC_CLASS___UIColor,"darkGrayColor");
  IVar5 = UIColor::colorWithAlphaComponent_(IVar5,"colorWithAlphaComponent:",0x3fe0000000000000);
  UIView::setBackgroundColor_(IVar3,"setBackgroundColor:",IVar5);
  IVar5 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar5,"addSubview:",IVar3);
  IVar5 = UIView::topAnchor(IVar3,"topAnchor");
  IVar6 = UILabel::bottomAnchor(IVar2,"bottomAnchor");
  IVar5 = UIView::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x4024000000000000,IVar6);
  UIView::setActive_(IVar5,"setActive:",1);
  IVar5 = UIView::leftAnchor(IVar3,"leftAnchor");
  IVar6 = _objc_msgSend(param_1,"view");
  IVar6 = _objc_msgSend(IVar6,"leftAnchor");
  IVar5 = UIView::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar6);
  UIView::setActive_(IVar5,"setActive:",1);
  IVar5 = UIView::rightAnchor(IVar3,"rightAnchor");
  IVar6 = _objc_msgSend(param_1,"view");
  IVar6 = _objc_msgSend(IVar6,"rightAnchor");
  IVar5 = UIView::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0xc030000000000000,IVar6);
  UIView::setActive_(IVar5,"setActive:",1);
  IVar3 = UIView::heightAnchor(IVar3,"heightAnchor");
  IVar3 = UIView::constraintEqualToConstant_(IVar3,"constraintEqualToConstant:",0x3fe0000000000000);
  UIView::setActive_(IVar3,"setActive:",1);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar3 = UILabel::init(IVar3,"init");
  UILabel::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar3,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  UILabel::setText_(IVar3,"setText:",&cf_More_);
  IVar5 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  UILabel::setTextColor_(IVar3,"setTextColor:",IVar5);
  IVar5 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar5,"addSubview:",IVar3);
  IVar5 = UILabel::topAnchor(IVar3,"topAnchor");
  IVar2 = UILabel::bottomAnchor(IVar2,"bottomAnchor");
  IVar2 = UILabel::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x4034000000000000,IVar2);
  UILabel::setActive_(IVar2,"setActive:",1);
  IVar2 = UILabel::leftAnchor(IVar3,"leftAnchor");
  IVar5 = _objc_msgSend(param_1,"view");
  IVar5 = _objc_msgSend(IVar5,"leftAnchor");
  IVar2 = UILabel::constraintEqualToAnchor_constant_
                    (IVar2,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar5);
  UILabel::setActive_(IVar2,"setActive:",1);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar2 = UILabel::init(IVar2,"init");
  UILabel::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar5 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,uVar4);
  UILabel::setFont_(IVar2,"setFont:",IVar5);
  UILabel::setTextAlignment_(IVar2,"setTextAlignment:",0);
  IVar5 = instance_DLCrashViewController__infoDict(param_1,"infoDict");
  IVar5 = _objc_msgSend(IVar5,"objectForKeyedSubscript:",&cf_more_info);
  UILabel::setText_(IVar2,"setText:",IVar5);
  IVar5 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  UILabel::setTextColor_(IVar2,"setTextColor:",IVar5);
  UILabel::setNumberOfLines_(IVar2,"setNumberOfLines:",0);
  IVar5 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar5,"addSubview:",IVar2);
  IVar5 = UILabel::topAnchor(IVar2,"topAnchor");
  IVar3 = UILabel::bottomAnchor(IVar3,"bottomAnchor");
  IVar3 = UILabel::constraintEqualToAnchor_constant_
                    (IVar5,"constraintEqualToAnchor:constant:",0x4014000000000000,IVar3);
  UILabel::setActive_(IVar3,"setActive:",1);
  IVar3 = UILabel::leftAnchor(IVar2,"leftAnchor");
  IVar5 = _objc_msgSend(param_1,"view");
  IVar5 = _objc_msgSend(IVar5,"leftAnchor");
  IVar3 = UILabel::constraintEqualToAnchor_constant_
                    (IVar3,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar5);
  UILabel::setActive_(IVar3,"setActive:",1);
  IVar2 = UILabel::rightAnchor(IVar2,"rightAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  IVar3 = _objc_msgSend(IVar3,"rightAnchor");
  IVar2 = UILabel::constraintEqualToAnchor_constant_
                    (IVar2,"constraintEqualToAnchor:constant:",0xc030000000000000,IVar3);
  UILabel::setActive_(IVar2,"setActive:",1);
  return;
}

