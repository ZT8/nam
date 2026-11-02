/* Address: 00085508 | Name: FUN_00085508 | Body bytes: 892 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_00085508(long param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"profilePic");
  IVar1 = _objc_msgSend(IVar1,"user");
  IVar1 = _objc_msgSend(IVar1,"respondsToSelector:","_private_hdProfilePicUrlInfo");
  if ((int)IVar1 == 0) {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"profilePic");
    IVar1 = _objc_msgSend(IVar1,"user");
    IVar1 = _objc_msgSend(IVar1,"performSelector:","hdProfilePicUrlInfo");
  }
  else {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"profilePic");
    IVar1 = _objc_msgSend(IVar1,"user");
    IVar1 = _objc_msgSend(IVar1,"performSelector:","_private_hdProfilePicUrlInfo");
  }
  IVar2 = _objc_msgSend(IVar1,"respondsToSelector:","url");
  if ((int)IVar2 == 0) {
    IVar1 = _objc_msgSend(IVar1,"performSelector:","urlString");
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"performSelector:","url");
  }
  IVar1 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:",IVar1);
  IVar2 = _objc_alloc(&objc::class_t::DLSSProfileViewController);
  IVar1 = DLSSProfileViewController::instance_DLSSProfileViewController__initWithProfilePicURL_
                    (IVar2,"initWithProfilePicURL:",IVar1);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UINavigationController);
  IVar1 = UINavigationController::initWithRootViewController_
                    (IVar2,"initWithRootViewController:",IVar1);
  UINavigationController::setModalPresentationStyle_(IVar1,"setModalPresentationStyle:",0);
  IVar2 = UINavigationController::navigationBar(IVar1,"navigationBar");
  UINavigationController::setBarStyle_(IVar2,"setBarStyle:",1);
  IVar2 = UINavigationController::navigationBar(IVar1,"navigationBar");
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIImage);
  IVar3 = UIImage::init(IVar3,"init");
  UINavigationController::setShadowImage_(IVar2,"setShadowImage:",IVar3);
  IVar2 = UINavigationController::navigationBar(IVar1,"navigationBar");
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIImage);
  IVar3 = UIImage::init(IVar3,"init");
  UINavigationController::setBackgroundImage_forBarMetrics_
            (IVar2,"setBackgroundImage:forBarMetrics:",IVar3,0);
  IVar2 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  _objc_msgSend(IVar2,"presentViewController:animated:completion:",IVar1,1,0);
  return 0;
}

