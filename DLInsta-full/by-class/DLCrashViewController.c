/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLCrashViewController viewDidLoad] | encoding v16@0:8 */
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


/* -[DLCrashViewController dismiss] | encoding v16@0:8 */
/* Address: 0008b8a4 | Name: instance_DLCrashViewController__dismiss | Body bytes: 20 */

/* Function Stack Size: 0x10 bytes */

void DLCrashViewController::instance_DLCrashViewController__dismiss(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,"dismissViewControllerAnimated:completion:",1,0);
  return;
}


/* -[DLCrashViewController sendCrash:] | encoding v24@0:8@16 */
/* Address: 0008b8b8 | Name: instance_DLCrashViewController__sendCrash_ | Body bytes: 1268 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLCrashViewController::instance_DLCrashViewController__sendCrash_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *self;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___MFMailComposeViewController);
  IVar1 = MFMailComposeViewController::init(IVar1,"init");
  MFMailComposeViewController::setMailComposeDelegate_(IVar1,"setMailComposeDelegate:",param_1);
  instance_DLCrashViewController__appName(param_1,"appName");
  instance_DLCrashViewController__appVersion(param_1,"appVersion");
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__);
  MFMailComposeViewController::setSubject_(IVar1,"setSubject:",IVar2);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::objectForInfoDictionaryKey_
                    (IVar2,"objectForInfoDictionaryKey:",&cf_CFBundleExecutable);
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar3 = NSBundle::objectForInfoDictionaryKey_
                    (IVar3,"objectForInfoDictionaryKey:",&cf_CFBundleDisplayName);
  IVar4 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_YouTube);
  if ((((IVar4 & 1) == 0) &&
      (IVar4 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_YouTube), (IVar4 & 1) == 0))
     && (IVar4 = NSBundle::containsString_(IVar3,"containsString:",&cf_YouTube), (IVar4 & 1) == 0))
  {
    IVar4 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_Twitter);
    if ((((IVar4 & 1) == 0) &&
        (IVar4 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_Twitter), (IVar4 & 1) == 0)
        ) && (IVar4 = NSBundle::containsString_(IVar3,"containsString:",&cf_Twitter),
             (IVar4 & 1) == 0)) {
      IVar4 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_Instagram);
      if ((((IVar4 & 1) == 0) &&
          (IVar4 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_Instagram),
          (IVar4 & 1) == 0)) &&
         (IVar4 = NSBundle::containsString_(IVar3,"containsString:",&cf_Instagram), (IVar4 & 1) == 0
         )) {
        IVar2 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_TikTok);
        if ((IVar2 & 1) == 0) {
          IVar2 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_TikTok);
          self = &cf_DLTikTok;
          if ((IVar2 & 1) == 0) {
            IVar2 = NSBundle::containsString_(IVar3,"containsString:",&cf_TikTok);
            self = &cf_DLTikTok;
            if ((int)IVar2 == 0) {
              self = &cf_DL;
            }
          }
        }
        else {
          self = &cf_DLTikTok;
        }
      }
      else {
        self = &cf_DLInsta;
      }
    }
    else {
      self = &cf_DLTwitter;
    }
  }
  else {
    self = &cf_DLTube;
  }
  _objc_msgSend((ID)self,"stringByAppendingFormat:",&cf___);
  IVar2 = UIDevice::currentDevice((ID)&_OBJC_CLASS___UIDevice,"currentDevice");
  UIDevice::systemVersion(IVar2,"systemVersion");
  IVar2 = instance_DLCrashViewController__infoDict(param_1,"infoDict");
  _objc_msgSend(IVar2,"objectForKeyedSubscript:",&cf_reason);
  IVar2 = instance_DLCrashViewController__infoDict(param_1,"infoDict");
  _objc_msgSend(IVar2,"objectForKeyedSubscript:",&cf_more_info);
  IVar2 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",
                     &cf_Tweak___iOS___Reason___More___);
  MFMailComposeViewController::setMessageBody_isHTML_(IVar1,"setMessageBody:isHTML:",IVar2,0);
  IVar2 = NSArray::arrayWithObject_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",&cf_prooxy0_gmail_com);
  MFMailComposeViewController::setToRecipients_(IVar1,"setToRecipients:",IVar2);
  _objc_msgSend(param_1,"presentViewController:animated:completion:",IVar1,1,0);
  return;
}


/* -[DLCrashViewController mailComposeController:didFinishWithResult:error:] | encoding v40@0:8@16q24@32 */
/* Address: 0008bdac | Name: instance_DLCrashViewController__mailComposeController_didFinishWithResult_error_ | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void DLCrashViewController::
     instance_DLCrashViewController__mailComposeController_didFinishWithResult_error_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  undefined *puVar1;
  dispatch_time_t dVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  long_long local_48;
  
  dVar2 = _dispatch_time(0,1500000000);
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc0000000;
  local_58 = FUN_0008be8c;
  puStack_50 = &DAT_000e8978;
  local_48 = param_4;
  _dispatch_after(dVar2,puVar1,&local_68);
  _objc_msgSend(param_3,"dismissViewControllerAnimated:completion:",1,0);
  _objc_msgSend(param_1,"dismissViewControllerAnimated:completion:",1,0);
  return;
}


/* -[DLCrashViewController infoDict] | encoding @16@0:8 */
/* Address: 0008c158 | Name: instance_DLCrashViewController__infoDict | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLCrashViewController::instance_DLCrashViewController__infoDict(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_infoDict);
}


/* -[DLCrashViewController setInfoDict:] | encoding v24@0:8@16 */
/* Address: 0008c168 | Name: instance_DLCrashViewController__setInfoDict_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLCrashViewController::instance_DLCrashViewController__setInfoDict_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_infoDict) = param_3;
  return;
}


/* -[DLCrashViewController appName] | encoding @16@0:8 */
/* Address: 0008c17c | Name: instance_DLCrashViewController__appName | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLCrashViewController::instance_DLCrashViewController__appName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_appName);
}


/* -[DLCrashViewController setAppName:] | encoding v24@0:8@16 */
/* Address: 0008c18c | Name: instance_DLCrashViewController__setAppName_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLCrashViewController::instance_DLCrashViewController__setAppName_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_appName) = param_3;
  return;
}


/* -[DLCrashViewController appVersion] | encoding @16@0:8 */
/* Address: 0008c1a0 | Name: instance_DLCrashViewController__appVersion | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLCrashViewController::instance_DLCrashViewController__appVersion(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_appVersion);
}


/* -[DLCrashViewController setAppVersion:] | encoding v24@0:8@16 */
/* Address: 0008c1b0 | Name: instance_DLCrashViewController__setAppVersion_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLCrashViewController::instance_DLCrashViewController__setAppVersion_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_appVersion) = param_3;
  return;
}


/* -[DLCrashViewController .cxx_destruct] | encoding v16@0:8 */
/* Address: 0008c1c4 | Name: instance_DLCrashViewController___cxx_destruct | Body bytes: 84 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLCrashViewController::instance_DLCrashViewController___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_appVersion) = 0;
  *(undefined8 *)(param_1 + (long)_appName) = 0;
  *(undefined8 *)(param_1 + (long)_infoDict) = 0;
  return;
}

