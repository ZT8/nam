/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLSSProfileViewController initWithProfilePicURL:] | encoding @24@0:8@16 */
/* Address: 000b5c20 | Name: instance_DLSSProfileViewController__initWithProfilePicURL_ | Body bytes: 116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLSSProfileViewController::instance_DLSSProfileViewController__initWithProfilePicURL_
             (ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLSSProfileViewController;
  local_30 = param_1;
  self = UIViewController::init((ID)&local_30,"init");
  if (self != 0) {
    UIViewController::setHDProfilePicURL_(self,"setHDProfilePicURL:",param_3);
  }
  return self;
}


/* -[DLSSProfileViewController initWithProfilePicByUserPK:] | encoding @24@0:8@16 */
/* Address: 000b5c94 | Name: instance_DLSSProfileViewController__initWithProfilePicByUserPK_ | Body bytes: 116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLSSProfileViewController::instance_DLSSProfileViewController__initWithProfilePicByUserPK_
             (ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLSSProfileViewController;
  local_30 = param_1;
  self = UIViewController::init((ID)&local_30,"init");
  if (self != 0) {
    UIViewController::setUserPK_(self,"setUserPK:",param_3);
  }
  return self;
}


/* -[DLSSProfileViewController viewDidLoad] | encoding v16@0:8 */
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


/* -[DLSSProfileViewController prepareImageToDownload] | encoding v16@0:8 */
/* Address: 000b6730 | Name: instance_DLSSProfileViewController__prepareImageToDownload | Body bytes: 88 */

/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__prepareImageToDownload
               (ID param_1,SEL param_2)

{
  undefined4 in_w3;
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_000e80d8;
  local_30 = 0xc2000000;
  local_28 = FUN_000b6788;
  puStack_20 = &DAT_000e9cf8;
  local_18 = param_1;
  instance_DLSSProfileViewController__downloadImage_(param_1,"downloadImage:",(ID)&local_38,in_w3);
  return;
}


/* -[DLSSProfileViewController downloadImage:] | encoding v24@0:8@?16 */
/* Address: 000b6de0 | Name: instance_DLSSProfileViewController__downloadImage_ | Body bytes: 176 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__downloadImage_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  dispatch_queue_t pdVar1;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID local_38;
  
  pdVar1 = _dispatch_get_global_queue(0,0);
  local_60 = PTR___NSConcreteStackBlock_000e80d8;
  local_58 = 0xc2000000;
  local_50 = FUN_000b6e90;
  puStack_48 = &DAT_000e9688;
  local_40 = param_1;
  local_38 = param_3;
  _dispatch_async(pdVar1,&local_60);
  return;
}


/* -[DLSSProfileViewController dismissCV] | encoding v16@0:8 */
/* Address: 000b70b4 | Name: instance_DLSSProfileViewController__dismissCV | Body bytes: 20 */

/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__dismissCV
               (ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,"dismissViewControllerAnimated:completion:",1,0);
  return;
}


/* -[DLSSProfileViewController shareNow] | encoding v16@0:8 */
/* Address: 000b70c8 | Name: instance_DLSSProfileViewController__shareNow | Body bytes: 296 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__shareNow(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIActivityViewController);
  IVar2 = instance_DLSSProfileViewController__imageView(param_1,"imageView");
  local_50 = _objc_msgSend(IVar2,"image");
  IVar2 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_50,1);
  IVar1 = UIActivityViewController::initWithActivityItems_applicationActivities_
                    (IVar1,"initWithActivityItems:applicationActivities:",IVar2,0);
  _objc_msgSend(param_1,"presentViewController:animated:completion:",IVar1,1,0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[DLSSProfileViewController viewDidLayoutSubviews] | encoding v16@0:8 */
/* Address: 000b71f0 | Name: instance_DLSSProfileViewController__viewDidLayoutSubviews | Body bytes: 12 */

/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__viewDidLayoutSubviews
               (ID param_1,SEL param_2)

{
  instance_DLSSProfileViewController__centerContentInScrollViewIfNeeded
            (param_1,"centerContentInScrollViewIfNeeded");
  return;
}


/* -[DLSSProfileViewController viewForZoomingInScrollView:] | encoding @24@0:8@16 */
/* Address: 000b71fc | Name: instance_DLSSProfileViewController__viewForZoomingInScrollView_ | Body bytes: 12 */

/* Function Stack Size: 0x18 bytes */

ID DLSSProfileViewController::instance_DLSSProfileViewController__viewForZoomingInScrollView_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = instance_DLSSProfileViewController__imageView(param_1,"imageView");
  return IVar1;
}


/* -[DLSSProfileViewController scrollViewDidZoom:] | encoding v24@0:8@16 */
/* Address: 000b7208 | Name: instance_DLSSProfileViewController__scrollViewDidZoom_ | Body bytes: 12 */

/* Function Stack Size: 0x18 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__scrollViewDidZoom_
               (ID param_1,SEL param_2,ID param_3)

{
  instance_DLSSProfileViewController__centerContentInScrollViewIfNeeded
            (param_1,"centerContentInScrollViewIfNeeded");
  return;
}


/* -[DLSSProfileViewController centerContentInScrollViewIfNeeded] | encoding v16@0:8 */
/* Address: 000b7214 | Name: instance_DLSSProfileViewController__centerContentInScrollViewIfNeeded | Body bytes: 528 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::
     instance_DLSSProfileViewController__centerContentInScrollViewIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  double in_d1;
  double dVar2;
  double in_d2;
  double in_d3;
  double dVar3;
  double dVar4;
  
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"contentSize");
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"bounds");
  dVar3 = 0.0;
  dVar4 = 0.0;
  if (extraout_d0 < in_d2) {
    IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
    _objc_msgSend(IVar1,"bounds");
    IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
    _objc_msgSend(IVar1,"contentSize");
    in_d1 = 0.5;
    dVar4 = (in_d2 - extraout_d0_00) * 0.5;
  }
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"contentSize");
  dVar2 = in_d1;
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"bounds");
  if (in_d1 < in_d3) {
    IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
    _objc_msgSend(IVar1,"bounds");
    IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
    _objc_msgSend(IVar1,"contentSize");
    dVar3 = (in_d3 - dVar2) * 0.5;
  }
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"setContentInset:",dVar3,dVar4,dVar3,dVar4);
  return;
}


/* -[DLSSProfileViewController HDProfilePicURL] | encoding @16@0:8 */
/* Address: 000b7424 | Name: instance_DLSSProfileViewController__HDProfilePicURL | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLSSProfileViewController::instance_DLSSProfileViewController__HDProfilePicURL
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_HDProfilePicURL);
}


/* -[DLSSProfileViewController setHDProfilePicURL:] | encoding v24@0:8@16 */
/* Address: 000b7434 | Name: instance_DLSSProfileViewController__setHDProfilePicURL_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__setHDProfilePicURL_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_HDProfilePicURL) = param_3;
  return;
}


/* -[DLSSProfileViewController userPK] | encoding @16@0:8 */
/* Address: 000b7448 | Name: instance_DLSSProfileViewController__userPK | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLSSProfileViewController::instance_DLSSProfileViewController__userPK(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_userPK);
}


/* -[DLSSProfileViewController setUserPK:] | encoding v24@0:8@16 */
/* Address: 000b7458 | Name: instance_DLSSProfileViewController__setUserPK_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__setUserPK_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_userPK) = param_3;
  return;
}


/* -[DLSSProfileViewController imageView] | encoding @16@0:8 */
/* Address: 000b746c | Name: instance_DLSSProfileViewController__imageView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLSSProfileViewController::instance_DLSSProfileViewController__imageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_imageView);
}


/* -[DLSSProfileViewController setImageView:] | encoding v24@0:8@16 */
/* Address: 000b747c | Name: instance_DLSSProfileViewController__setImageView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__setImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_imageView) = param_3;
  return;
}


/* -[DLSSProfileViewController scrollView] | encoding @16@0:8 */
/* Address: 000b7490 | Name: instance_DLSSProfileViewController__scrollView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLSSProfileViewController::instance_DLSSProfileViewController__scrollView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_scrollView);
}


/* -[DLSSProfileViewController setScrollView:] | encoding v24@0:8@16 */
/* Address: 000b74a0 | Name: instance_DLSSProfileViewController__setScrollView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__setScrollView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_scrollView) = param_3;
  return;
}


/* -[DLSSProfileViewController errorLabel] | encoding @16@0:8 */
/* Address: 000b74b4 | Name: instance_DLSSProfileViewController__errorLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLSSProfileViewController::instance_DLSSProfileViewController__errorLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_errorLabel);
}


/* -[DLSSProfileViewController setErrorLabel:] | encoding v24@0:8@16 */
/* Address: 000b74c4 | Name: instance_DLSSProfileViewController__setErrorLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__setErrorLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_errorLabel) = param_3;
  return;
}


/* -[DLSSProfileViewController .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b74d8 | Name: instance_DLSSProfileViewController___cxx_destruct | Body bytes: 144 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController___cxx_destruct
               (ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_errorLabel) = 0;
  *(undefined8 *)(param_1 + (long)_scrollView) = 0;
  *(undefined8 *)(param_1 + (long)_imageView) = 0;
  *(undefined8 *)(param_1 + (long)_userPK) = 0;
  *(undefined8 *)(param_1 + (long)_HDProfilePicURL) = 0;
  *(undefined8 *)(param_1 + (long)indecatorView) = 0;
  return;
}

