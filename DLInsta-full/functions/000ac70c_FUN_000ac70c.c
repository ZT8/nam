/* Address: 000ac70c | Name: FUN_000ac70c | Body bytes: 508 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000ac70c(long param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"pk");
  if (IVar1 == 0) {
    return 0;
  }
  IVar1 = _objc_alloc(&objc::class_t::DLSSProfileViewController);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"pk");
  IVar1 = DLSSProfileViewController::instance_DLSSProfileViewController__initWithProfilePicByUserPK_
                    (IVar1,"initWithProfilePicByUserPK:",IVar2);
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
  _objc_msgSend(*(ID *)(param_1 + 0x28),"presentViewController:animated:completion:",IVar1,1,0);
  return 0;
}

