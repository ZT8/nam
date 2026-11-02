/* Address: 000b9d6c | Name: instance_DLMultiMediaViewController__setupMediaCollectionView | Body bytes: 3488 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setupMediaCollectionView
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar1 = NSMutableArray::init(IVar1,"init");
  instance_DLMultiMediaViewController__setAllSelectedMedia_(param_1,"setAllSelectedMedia:",IVar1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::init(IVar1,"init");
  instance_DLMultiMediaViewController__setTitleLabel_(param_1,"setTitleLabel:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = _objc_msgSend(param_1,"title");
  IVar2 = instance_DLMultiMediaViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar2,"setText:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar1,"setTextAlignment:",1);
  IVar1 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402c000000000000,
                     *(undefined8 *)PTR__UIFontWeightBold_000e80a8);
  IVar2 = instance_DLMultiMediaViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar2,"setFont:",IVar1);
  IVar1 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = instance_DLMultiMediaViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewController__titleLabel(param_1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"topAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__titleLabel(param_1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__titleLabel(param_1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",0x4048000000000000);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  instance_DLMultiMediaViewController__setContainerMediaCollectionView_
            (param_1,"setContainerMediaCollectionView:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = instance_DLMultiMediaViewController__titleLabel(param_1,"titleLabel");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"leadingAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0x4028000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"trailingAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0xc028000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",0x4070b00000000000);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_alloc(&objc::class_t::DLCollectionViewFlowLayout);
  IVar1 = _objc_msgSend(IVar1,"init");
  _objc_msgSend(IVar1,"setScrollDirection:",1);
  _objc_msgSend(IVar1,"setMinimumInteritemSpacing:",0x4024000000000000);
  _objc_msgSend(IVar1,"setMinimumLineSpacing:",0x4024000000000000);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UICollectionView);
  IVar1 = UICollectionView::initWithFrame_collectionViewLayout_
                    (IVar2,"initWithFrame:collectionViewLayout:",
                     *(undefined8 *)PTR__CGRectZero_000e8040,
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 8),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x18),IVar1);
  instance_DLMultiMediaViewController__setMediaCollectionView_
            (param_1,"setMediaCollectionView:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar1,"setDataSource:",param_1);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar1,"setDelegate:",param_1);
  IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  IVar2 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  IVar2 = _objc_msgSend((ID)&objc::class_t::DLMultiMediaViewCell,"class");
  _objc_msgSend(IVar1,"registerClass:forCellWithReuseIdentifier:",IVar2,&cf_videoMediaCell);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar1,"setShowsHorizontalScrollIndicator:",0);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar1,"setShowsVerticalScrollIndicator:",0);
  IVar1 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar2 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar2 = _objc_msgSend(IVar2,"topAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"leadingAnchor");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"trailingAnchor");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"bottomAnchor");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar1,"reloadData");
  return;
}

