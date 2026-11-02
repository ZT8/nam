/* Address: 000b6788 | Name: FUN_000b6788 | Body bytes: 1360 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_000b6788(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,double param_4,
            long param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  
  puVar1 = PTR___dispatch_main_q_000e8268;
  if (param_7 == 0) {
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_98 = PTR___NSConcreteStackBlock_000e80d8;
    local_90 = 0xc2000000;
    local_88 = FUN_000b6cd8;
    puStack_80 = &DAT_000e9798;
    local_78 = *(undefined8 *)(param_5 + 0x20);
    _dispatch_async(puVar1,&local_98);
  }
  else {
    lVar4 = (long)DLSSProfileViewController::indecatorView;
    _objc_msgSend(*(ID *)(*(long *)(param_5 + 0x20) + lVar4),"stopAnimating");
    _objc_msgSend(*(ID *)(*(long *)(param_5 + 0x20) + lVar4),"removeFromSuperview");
    IVar2 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);
    IVar2 = UIBarButtonItem::initWithBarButtonSystemItem_target_action_
                      (IVar2,"initWithBarButtonSystemItem:target:action:",9,
                       *(undefined8 *)(param_5 + 0x20),"shareNow");
    IVar3 = _objc_msgSend(*(ID *)(param_5 + 0x20),"navigationItem");
    _objc_msgSend(IVar3,"setRightBarButtonItem:",IVar2);
    IVar3 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    UIBarButtonItem::setTintColor_(IVar2,"setTintColor:",IVar3);
    IVar2 = _objc_alloc(&_OBJC_CLASS___UIImageView);
    IVar2 = UIImageView::initWithImage_(IVar2,"initWithImage:",param_6);
    _objc_msgSend(*(ID *)(param_5 + 0x20),"setImageView:",IVar2);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"view");
    _objc_msgSend(IVar2,"frame");
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"view");
    _objc_msgSend(IVar2,"frame");
    param_4 = param_4 * 0.5;
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"imageView");
    _objc_msgSend(IVar2,"setFrame:",0,0,param_3,param_4);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"imageView");
    _objc_msgSend(IVar2,"setContentMode:",1);
    IVar2 = _objc_alloc(&_OBJC_CLASS___UIScrollView);
    IVar3 = _objc_msgSend(*(ID *)(param_5 + 0x20),"view");
    _objc_msgSend(IVar3,"bounds");
    IVar2 = UIScrollView::initWithFrame_(IVar2,"initWithFrame:");
    _objc_msgSend(*(ID *)(param_5 + 0x20),"setScrollView:",IVar2);
    IVar3 = *(ID *)(param_5 + 0x20);
    IVar2 = _objc_msgSend(IVar3,"scrollView");
    _objc_msgSend(IVar2,"setDelegate:",IVar3);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"scrollView");
    _objc_msgSend(IVar2,"setAutoresizingMask:",0x12);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"scrollView");
    IVar3 = _objc_msgSend(*(ID *)(param_5 + 0x20),"imageView");
    _objc_msgSend(IVar2,"addSubview:",IVar3);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"imageView");
    _objc_msgSend(IVar2,"frame");
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"scrollView");
    _objc_msgSend(IVar2,"setContentSize:",param_3,param_4);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"scrollView");
    _objc_msgSend(IVar2,"setMinimumZoomScale:",0x3ff0000000000000);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"scrollView");
    _objc_msgSend(IVar2,"setMaximumZoomScale:",0x4000000000000000);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"scrollView");
    _objc_msgSend(IVar2,"setShowsHorizontalScrollIndicator:",0);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"scrollView");
    _objc_msgSend(IVar2,"setShowsVerticalScrollIndicator:",0);
    IVar2 = _objc_msgSend(*(ID *)(param_5 + 0x20),"view");
    IVar3 = _objc_msgSend(*(ID *)(param_5 + 0x20),"scrollView");
    _objc_msgSend(IVar2,"addSubview:",IVar3);
  }
  return 0;
}

