/* Address: 000b5d08 | Name: instance_DLSSProfileViewController__viewDidLoad | Body bytes: 2320 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__viewDidLoad
               (ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  char *op;
  undefined4 uVar5;
  ID IVar6;
  long lVar7;
  undefined *local_108;
  undefined8 local_100;
  code *local_f8;
  undefined *puStack_f0;
  ID local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ID local_78;
  class_t *pcStack_70;
  
  pcStack_70 = &objc::class_t::DLSSProfileViewController;
  local_78 = param_1;
  UIViewController::viewDidLoad((ID)&local_78,"viewDidLoad");
  IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar2 = UILabel::init(IVar2,"init");
  instance_DLSSProfileViewController__setErrorLabel_(param_1,"setErrorLabel:",IVar2);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  uVar4 = FUN_0008c218(&cf_ERROR_LABEL);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar2,"setText:",uVar4);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar2,"setTextAlignment:",1);
  IVar2 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  IVar3 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar3,"setTextColor:",IVar2);
  IVar2 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0x3fedba5e353f7cee,
                     0x3fd24dd2f1a9fbe7,0x3fd5916872b020c5,0x3ff0000000000000);
  IVar3 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  IVar2 = _objc_msgSend(IVar2,"layer");
  _objc_msgSend(IVar2,"setMasksToBounds:",1);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  IVar2 = _objc_msgSend(IVar2,"layer");
  _objc_msgSend(IVar2,"setCornerRadius:",0x4014000000000000);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar2,"setHidden:",1);
  IVar2 = _objc_msgSend(param_1,"view");
  IVar3 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar2,"addSubview:",IVar3);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  IVar3 = _objc_msgSend(IVar3,"safeAreaLayoutGuide");
  IVar3 = _objc_msgSend(IVar3,"centerYAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  IVar3 = _objc_msgSend(IVar3,"safeAreaLayoutGuide");
  IVar3 = _objc_msgSend(IVar3,"centerXAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  IVar2 = _objc_msgSend(IVar2,"widthAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToConstant:",0x4069000000000000);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLSSProfileViewController__errorLabel(param_1,"errorLabel");
  IVar2 = _objc_msgSend(IVar2,"heightAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToConstant:",0x4044000000000000);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIActivityIndicatorView);
  IVar2 = UIActivityIndicatorView::initWithActivityIndicatorStyle_
                    (IVar2,"initWithActivityIndicatorStyle:",0);
  lVar7 = (long)indecatorView;
  *(ID *)(param_1 + lVar7) = IVar2;
  _CGAffineTransformMakeScale(&local_a8,0x3fe6666666666666,0x3fe6666666666666,0);
  uStack_d8 = uStack_a0;
  local_e0 = local_a8;
  uStack_c8 = uStack_90;
  uStack_d0 = local_98;
  uStack_b8 = uStack_80;
  local_c0 = local_88;
  _objc_msgSend(*(ID *)(param_1 + lVar7),"setTransform:",&local_e0);
  IVar3 = *(ID *)(param_1 + lVar7);
  IVar2 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar2,"center");
  _objc_msgSend(IVar3,"setCenter:");
  _objc_msgSend(*(ID *)(param_1 + lVar7),"startAnimating");
  IVar2 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar2,"addSubview:",*(undefined8 *)(param_1 + lVar7));
  iVar1 = FUN_000bd0fc(2,0xd,0,0);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);
  if (iVar1 == 0) {
    IVar3 = FUN_0008c218(&cf_ACTION_CANCEL);
    op = "initWithTitle:style:target:action:";
  }
  else {
    IVar3 = UIImage::systemImageNamed_((ID)&_OBJC_CLASS___UIImage,"systemImageNamed:",&cf_xmark);
    op = "initWithImage:style:target:action:";
  }
  IVar6 = param_1;
  IVar2 = UIBarButtonItem::initWithTitle_style_target_action_(IVar2,op,IVar3,0,param_1,"dismissCV");
  uVar5 = (undefined4)IVar6;
  IVar3 = _objc_msgSend(param_1,"navigationItem");
  _objc_msgSend(IVar3,"setLeftBarButtonItem:",IVar2);
  IVar3 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  UIBarButtonItem::setTintColor_(IVar2,"setTintColor:",IVar3);
  IVar2 = instance_DLSSProfileViewController__userPK(param_1,"userPK");
  if (IVar2 == 0) {
    _objc_msgSend(*(ID *)(param_1 + lVar7),"startAnimating");
    instance_DLSSProfileViewController__prepareImageToDownload(param_1,"prepareImageToDownload");
  }
  else {
    IVar2 = instance_DLSSProfileViewController__userPK(param_1,"userPK");
    local_108 = PTR___NSConcreteStackBlock_000e80d8;
    local_100 = 0xc2000000;
    local_f8 = FUN_000b6618;
    puStack_f0 = &DAT_000e9cc8;
    local_e8 = param_1;
    DLInsta::class_DLInsta__featcAllInfoByUserPK_completion_
              ((ID)&objc::class_t::DLInsta,"featcAllInfoByUserPK:completion:",IVar2,(ID)&local_108,
               uVar5);
  }
  return;
}

