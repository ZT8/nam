/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMultiMediaViewController viewDidLoad] | encoding v16@0:8 */
/* Address: 000b99fc | Name: instance_DLMultiMediaViewController__viewDidLoad | Body bytes: 568 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__viewDidLoad
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  ID IVar4;
  double in_d2;
  double in_d3;
  CGSize CVar5;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLMultiMediaViewController;
  local_40 = param_1;
  DLPopupViewController::instance_DLPopupViewController__viewDidLoad((ID)&local_40,"viewDidLoad");
  IVar2 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  _objc_msgSend(IVar2,"sortUsingComparator:",&PTR___NSConcreteGlobalBlock_000e9d48);
  instance_DLMultiMediaViewController__setupMediaCollectionView(param_1,"setupMediaCollectionView");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  _objc_msgSend(IVar2,"layoutIfNeeded");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  _objc_msgSend(IVar2,"bounds");
  CVar5.field1_0x8 = in_d3;
  CVar5.field0_0x0 = in_d2;
  instance_DLMultiMediaViewController__updateCollectionViewForSize_
            (param_1,"updateCollectionViewForSize:",CVar5);
  instance_DLMultiMediaViewController__setupOptionTableView(param_1,"setupOptionTableView");
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::objectForKey_(IVar2,"objectForKey:",&cf_DLAlertStoriesInfo);
  if (IVar2 == 0) {
    dVar3 = _dispatch_time(0,2000000000);
    puVar1 = PTR___dispatch_main_q_000e8268;
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    _dispatch_after(dVar3,puVar1,&PTR___NSConcreteGlobalBlock_000e9d68);
    IVar2 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar4 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",1);
    NSUserDefaults::setValue_forKey_(IVar2,"setValue:forKey:",IVar4,&cf_DLAlertStoriesInfo);
    IVar2 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    NSUserDefaults::synchronize(IVar2,"synchronize");
  }
  return;
}


/* -[DLMultiMediaViewController setupMediaCollectionView] | encoding v16@0:8 */
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


/* -[DLMultiMediaViewController updateCollectionViewForSize:] | encoding v32@0:8{CGSize=dd}16 */
/* Address: 000bab0c | Name: instance_DLMultiMediaViewController__updateCollectionViewForSize_ | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__updateCollectionViewForSize_
               (ID param_1,SEL param_2,CGSize param_3)

{
  ID IVar1;
  CGSize CVar2;
  
  CVar2.field1_0x8 = param_3.field1_0x8 + -20.0;
  CVar2.field0_0x0 = 139.0;
  instance_DLMultiMediaViewController__setCollectionCellSize_
            (param_1,"setCollectionCellSize:",CVar2);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"collectionViewLayout");
  _objc_msgSend(IVar1,"setSectionInset:",0,0x4014000000000000,0,0x4014000000000000);
  return;
}


/* -[DLMultiMediaViewController collectionView:numberOfItemsInSection:] | encoding q32@0:8@16q24 */
/* Address: 000baba0 | Name: instance_DLMultiMediaViewController__collectionView_numberOfItemsInSection_ | Body bytes: 76 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

long_long DLMultiMediaViewController::
          instance_DLMultiMediaViewController__collectionView_numberOfItemsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar1 = _objc_msgSend(IVar1,"count");
  return IVar1;
}


/* -[DLMultiMediaViewController collectionView:cellForItemAtIndexPath:] | encoding @32@0:8@16@24 */
/* Address: 000babec | Name: instance_DLMultiMediaViewController__collectionView_cellForItemAtIndexPath_ | Body bytes: 1504 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMultiMediaViewController::
   instance_DLMultiMediaViewController__collectionView_cellForItemAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  ID local_70;
  ID local_68;
  
  self = _objc_msgSend(param_3,"dequeueReusableCellWithReuseIdentifier:forIndexPath:",
                       &cf_videoMediaCell,param_4);
  IVar1 = _objc_msgSend(param_4,"row");
  _objc_msgSend(self,"setTag:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar2 = _objc_msgSend(param_4,"row");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  IVar2 = _objc_msgSend(self,"containerViewCell");
  IVar3 = UIColor::darkGrayColor((ID)&_OBJC_CLASS___UIColor,"darkGrayColor");
  IVar3 = UIColor::colorWithAlphaComponent_(IVar3,"colorWithAlphaComponent:",0x3fd3333333333333);
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar3);
  IVar2 = _objc_msgSend(IVar1,"coverImage");
  if (IVar2 == 0) {
    IVar2 = _objc_msgSend(self,"indicatorView");
    _objc_msgSend(IVar2,"startAnimating");
    _objc_msgSend(IVar1,"setFetching:",1);
    IVar2 = _objc_msgSend(IVar1,"coverUrl");
    local_98 = PTR___NSConcreteStackBlock_000e80d8;
    local_90 = 0xc2000000;
    local_88 = FUN_000bb1cc;
    puStack_80 = &DAT_000e9b78;
    local_78 = self;
    local_70 = param_4;
    local_68 = IVar1;
    _objc_msgSend(IVar1,"downloadImageFromUrl:completion:",IVar2,&local_98);
  }
  else {
    IVar2 = _objc_msgSend(self,"mediaImageView");
    IVar3 = _objc_msgSend(IVar1,"coverImage");
    _objc_msgSend(IVar2,"setImage:",IVar3);
  }
  IVar2 = _objc_msgSend(self,"indicatorView");
  IVar2 = _objc_msgSend(IVar2,"isAnimating");
  if ((int)IVar2 != 0) {
    IVar2 = _objc_msgSend(self,"errorLabel");
    _objc_msgSend(IVar2,"setText:",0);
  }
  IVar2 = _objc_msgSend(IVar1,"mediaType");
  if (IVar2 == 2) {
    _objc_msgSend(IVar1,"duration");
    IVar2 = _objc_msgSend(IVar1,"convertTimeToString:");
    IVar3 = _objc_msgSend(self,"durationLabel");
    _objc_msgSend(IVar3,"setText:",IVar2);
  }
  else {
    IVar2 = _objc_msgSend(self,"durationLabel");
    _objc_msgSend(IVar2,"setText:",0);
  }
  IVar1 = _objc_msgSend(IVar1,"isSelected");
  if ((int)IVar1 == 0) {
    IVar1 = _objc_msgSend(self,"checkmarkView");
    _objc_msgSend(IVar1,"setBackgroundColor:",0);
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIImage);
    IVar1 = UIImage::init(IVar1,"init");
    IVar2 = _objc_msgSend(self,"checkmarkImageView");
    _objc_msgSend(IVar2,"setImage:",IVar1);
  }
  else {
    IVar1 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    IVar1 = UIColor::colorWithAlphaComponent_(IVar1,"colorWithAlphaComponent:",0x3fe3333333333333);
    IVar2 = _objc_msgSend(self,"checkmarkView");
    _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
    IVar1 = DLHelper::class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",0xedf28);
    IVar2 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    IVar1 = DLHelper::class_DLHelper__image_color_
                      ((ID)&objc::class_t::DLHelper,"image:color:",IVar1,IVar2);
    IVar2 = _objc_msgSend(self,"checkmarkImageView");
    _objc_msgSend(IVar2,"setImage:",IVar1);
  }
  return self;
}


/* -[DLMultiMediaViewController collectionView:layout:sizeForItemAtIndexPath:] | encoding {CGSize=dd}40@0:8@16@24@32 */
/* Address: 000bb32c | Name: instance_DLMultiMediaViewController__collectionView_layout_sizeForItemAtIndexPath_ | Body bytes: 12 */

/* Function Stack Size: 0x28 bytes */

CGSize DLMultiMediaViewController::
       instance_DLMultiMediaViewController__collectionView_layout_sizeForItemAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  CGSize CVar1;
  
  CVar1 = instance_DLMultiMediaViewController__collectionCellSize(param_1,"collectionCellSize");
  return CVar1;
}


/* -[DLMultiMediaViewController collectionView:didSelectItemAtIndexPath:] | encoding v32@0:8@16@24 */
/* Address: 000bb338 | Name: instance_DLMultiMediaViewController__collectionView_didSelectItemAtIndexPath_ | Body bytes: 996 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLMultiMediaViewController::
     instance_DLMultiMediaViewController__collectionView_didSelectItemAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  char *op;
  
  IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar2 = _objc_msgSend(param_4,"row");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  IVar2 = _objc_msgSend(param_3,"cellForItemAtIndexPath:",param_4);
  IVar3 = _objc_msgSend(IVar1,"isSelected");
  if (((IVar3 & 1) == 0) && (IVar3 = _objc_msgSend(IVar1,"isFetching"), (IVar3 & 1) == 0)) {
    DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
    _objc_msgSend(IVar1,"setSelect:",1);
    IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    IVar3 = UIColor::colorWithAlphaComponent_(IVar3,"colorWithAlphaComponent:",0x3fe3333333333333);
    IVar4 = _objc_msgSend(IVar2,"checkmarkView");
    _objc_msgSend(IVar4,"setBackgroundColor:",IVar3);
    IVar3 = DLHelper::class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",0xedf28);
    IVar4 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    IVar3 = DLHelper::class_DLHelper__image_color_
                      ((ID)&objc::class_t::DLHelper,"image:color:",IVar3,IVar4);
    IVar2 = _objc_msgSend(IVar2,"checkmarkImageView");
    _objc_msgSend(IVar2,"setImage:",IVar3);
    IVar2 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    op = "addObject:";
  }
  else {
    IVar3 = _objc_msgSend(IVar1,"isSelected");
    if ((int)IVar3 != 0) {
      DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
    }
    _objc_msgSend(IVar1,"setSelect:",0);
    IVar3 = _objc_msgSend(IVar2,"checkmarkView");
    _objc_msgSend(IVar3,"setBackgroundColor:",0);
    IVar3 = _objc_alloc(&_OBJC_CLASS___UIImage);
    IVar3 = UIImage::init(IVar3,"init");
    IVar2 = _objc_msgSend(IVar2,"checkmarkImageView");
    _objc_msgSend(IVar2,"setImage:",IVar3);
    IVar2 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    op = "removeObject:";
  }
  _objc_msgSend(IVar2,op,IVar1);
  _objc_msgSend(param_3,"deselectItemAtIndexPath:animated:",param_4,1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"reloadData");
  return;
}


/* -[DLMultiMediaViewController setupOptionTableView] | encoding v16@0:8 */
/* Address: 000bb71c | Name: instance_DLMultiMediaViewController__setupOptionTableView | Body bytes: 1612 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setupOptionTableView
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UITableView);
  IVar1 = UITableView::initWithFrame_style_
                    (IVar1,"initWithFrame:style:",*(undefined8 *)PTR__CGRectZero_000e8040,
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 8),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x18),0);
  instance_DLMultiMediaViewController__setOptionTableView_(param_1,"setOptionTableView:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setDataSource:",param_1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setDelegate:",param_1);
  IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  IVar2 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar2 = _objc_msgSend((ID)&objc::class_t::DLMultiMediaOptionCell,"class");
  _objc_msgSend(IVar1,"registerClass:forCellReuseIdentifier:",IVar2,&cf_optionMediaCell);
  IVar1 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0x4024000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar1 = _objc_msgSend(IVar1,"leadingAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0x4040000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar1 = _objc_msgSend(IVar1,"trailingAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0xc040000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar1 = _objc_msgSend(IVar1,"bottomAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setScrollEnabled:",0);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setSeparatorStyle:",0);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  DLHelper::class_DLHelper__switchToRTL_((ID)&objc::class_t::DLHelper,"switchToRTL:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"reloadData");
  return;
}


/* -[DLMultiMediaViewController tableView:numberOfRowsInSection:] | encoding q32@0:8@16q24 */
/* Address: 000bbd68 | Name: instance_DLMultiMediaViewController__tableView_numberOfRowsInSection_ | Body bytes: 8 */

/* Function Stack Size: 0x20 bytes */

long_long DLMultiMediaViewController::
          instance_DLMultiMediaViewController__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  return 2;
}


/* -[DLMultiMediaViewController tableView:cellForRowAtIndexPath:] | encoding @32@0:8@16@24 */
/* Address: 000bbd70 | Name: instance_DLMultiMediaViewController__tableView_cellForRowAtIndexPath_ | Body bytes: 740 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMultiMediaViewController::instance_DLMultiMediaViewController__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  IVar1 = _objc_alloc(&objc::class_t::DLMultiMediaOptionCell);
  IVar1 = DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__initWithStyle_reuseIdentifier_
                    (IVar1,"initWithStyle:reuseIdentifier:",0,0xedf48);
  IVar2 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
  IVar3 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UIView::setBackgroundColor_(IVar2,"setBackgroundColor:",IVar3);
  _objc_msgSend(IVar1,"setSelectedBackgroundView:",IVar2);
  IVar2 = _objc_msgSend(param_4,"row");
  if (IVar2 == 0) {
    IVar2 = instance_DLMultiMediaViewController__posts(param_1,"posts");
    IVar2 = _objc_msgSend(IVar2,"count");
    IVar3 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    IVar3 = _objc_msgSend(IVar3,"count");
    if (IVar2 == IVar3) {
      pcVar5 = &cf_STORIES_UNSELECT_ALL;
    }
    else {
      pcVar5 = &cf_STORIES_SELECT_ALL;
    }
    uVar4 = FUN_0008c218(pcVar5);
    IVar2 = DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__titleLabel(IVar1,"titleLabel");
    _objc_msgSend(IVar2,"setText:",uVar4);
  }
  else {
    IVar2 = _objc_msgSend(param_4,"row");
    if (IVar2 == 1) {
      uVar4 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
      IVar2 = DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__titleLabel
                        (IVar1,"titleLabel");
      _objc_msgSend(IVar2,"setText:",uVar4);
      IVar2 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
      IVar2 = _objc_msgSend(IVar2,"count");
      IVar3 = DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__containerView
                        (IVar1,"containerView");
      if (IVar2 == 0) {
        _objc_msgSend(IVar3,"setAlpha:",0x3fe0000000000000);
      }
      else {
        _objc_msgSend(IVar3,"setAlpha:",0x3ff0000000000000);
      }
      _objc_msgSend(IVar1,"setUserInteractionEnabled:",(ulong)(IVar2 != 0));
    }
  }
  return IVar1;
}


/* -[DLMultiMediaViewController tableView:willDisplayCell:forRowAtIndexPath:] | encoding v40@0:8@16@24@32 */
/* Address: 000bc054 | Name: instance_DLMultiMediaViewController__tableView_willDisplayCell_forRowAtIndexPath_ | Body bytes: 156 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void DLMultiMediaViewController::
     instance_DLMultiMediaViewController__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  
  IVar2 = _objc_msgSend(param_3,"respondsToSelector:","setSeparatorInset:");
  puVar1 = PTR__UIEdgeInsetsZero_000e80a0;
  if ((int)IVar2 != 0) {
    _objc_msgSend(param_3,"setSeparatorInset:",*(undefined8 *)PTR__UIEdgeInsetsZero_000e80a0,
                  *(undefined8 *)(PTR__UIEdgeInsetsZero_000e80a0 + 8),
                  *(undefined8 *)(PTR__UIEdgeInsetsZero_000e80a0 + 0x10),
                  *(undefined8 *)(PTR__UIEdgeInsetsZero_000e80a0 + 0x18));
  }
  IVar2 = _objc_msgSend(param_3,"respondsToSelector:","setLayoutMargins:");
  if ((int)IVar2 != 0) {
    _objc_msgSend(param_3,"setLayoutMargins:",*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),
                  *(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18));
  }
  return;
}


/* -[DLMultiMediaViewController tableView:didSelectRowAtIndexPath:] | encoding v32@0:8@16@24 */
/* Address: 000bc0f0 | Name: instance_DLMultiMediaViewController__tableView_didSelectRowAtIndexPath_ | Body bytes: 456 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLMultiMediaViewController::
     instance_DLMultiMediaViewController__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  char *pcVar4;
  
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  IVar1 = _objc_msgSend(param_3,"cellForRowAtIndexPath:",param_4);
  IVar1 = _objc_msgSend(IVar1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"text");
  uVar2 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
  IVar1 = _objc_msgSend(IVar1,"isEqualToString:",uVar2);
  if ((int)IVar1 == 0) {
    IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
    IVar1 = _objc_msgSend(IVar1,"count");
    IVar3 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    IVar3 = _objc_msgSend(IVar3,"count");
    if (IVar1 == IVar3) {
      pcVar4 = "didPressUnselectAllMedia";
    }
    else {
      pcVar4 = "didPressSelectAllMedia";
    }
  }
  else {
    pcVar4 = "didPressDownloadMedia";
  }
  instance_DLMultiMediaViewController__didPressSelectAllMedia(param_1,pcVar4);
  _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",param_4,1);
  return;
}


/* -[DLMultiMediaViewController tableView:heightForRowAtIndexPath:] | encoding d32@0:8@16@24 */
/* Address: 000bc2b8 | Name: instance_DLMultiMediaViewController__tableView_heightForRowAtIndexPath_ | Body bytes: 12 */

/* Function Stack Size: 0x20 bytes */

double DLMultiMediaViewController::
       instance_DLMultiMediaViewController__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return 52.0;
}


/* -[DLMultiMediaViewController didPressSelectAllMedia] | encoding v16@0:8 */
/* Address: 000bc2c4 | Name: instance_DLMultiMediaViewController__didPressSelectAllMedia | Body bytes: 748 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__didPressSelectAllMedia
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID self;
  long lVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  IVar2 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar2 = _objc_msgSend(IVar2,"count");
  IVar2 = NSIndexPath::indexPathForItem_inSection_
                    ((ID)&_OBJC_CLASS___NSIndexPath,"indexPathForItem:inSection:",IVar2 - 1,0);
  _objc_msgSend(IVar1,"scrollToItemAtIndexPath:atScrollPosition:animated:",IVar2,0,1);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                        0x10);
  if (IVar2 != 0) {
    lVar5 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar1);
        }
        self = *(ID *)(lStack_128 + IVar4 * 8);
        IVar3 = _objc_msgSend(self,"isSelected");
        if ((IVar3 & 1) == 0) {
          _objc_msgSend(self,"setSelect:",1);
          IVar3 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
          _objc_msgSend(IVar3,"addObject:",self);
        }
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0
                            ,0x10);
    } while (IVar2 != 0);
  }
  IVar1 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
  IVar1 = _objc_msgSend(IVar1,"count");
  if (IVar1 != 0) {
    IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
    _objc_msgSend(IVar1,"reloadData");
    IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
    _objc_msgSend(IVar1,"reloadData");
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[DLMultiMediaViewController didPressUnselectAllMedia] | encoding v16@0:8 */
/* Address: 000bc5b0 | Name: instance_DLMultiMediaViewController__didPressUnselectAllMedia | Body bytes: 520 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__didPressUnselectAllMedia
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID self;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                        0x10);
  if (IVar2 != 0) {
    lVar5 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar1);
        }
        self = *(ID *)(lStack_128 + IVar4 * 8);
        IVar3 = _objc_msgSend(self,"isSelected");
        if ((int)IVar3 != 0) {
          _objc_msgSend(self,"setSelect:",0);
          IVar3 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
          _objc_msgSend(IVar3,"removeObject:",self);
        }
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0
                            ,0x10);
    } while (IVar2 != 0);
  }
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar1,"reloadData");
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"reloadData");
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[DLMultiMediaViewController didPressDownloadMedia] | encoding v16@0:8 */
/* Address: 000bc7b8 | Name: instance_DLMultiMediaViewController__didPressDownloadMedia | Body bytes: 1236 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__didPressDownloadMedia
               (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined4 in_w5;
  ID IVar7;
  ID self_00;
  long lVar8;
  undefined *local_1a0;
  undefined8 local_198;
  code *local_190;
  undefined *puStack_188;
  ID local_180;
  ID IStack_178;
  undefined *local_170;
  undefined8 local_168;
  code *local_160;
  undefined *puStack_158;
  ID local_150;
  ID IStack_148;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar2 = NSMutableArray::init(IVar2,"init");
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar3 = NSMutableArray::init(IVar3,"init");
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar4 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
  IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,auStack_100,
                        0x10);
  if (IVar5 != 0) {
    lVar8 = *local_130;
    do {
      IVar7 = 0;
      do {
        if (*local_130 != lVar8) {
          _objc_enumerationMutation(IVar4);
        }
        self_00 = *(ID *)(lStack_138 + IVar7 * 8);
        IVar6 = _objc_msgSend(self_00,"mediaType");
        pcVar1 = &cf_Video;
        self = IVar2;
        if (IVar6 != 2) {
          pcVar1 = &cf_Photo;
          self = IVar3;
        }
        _NSLog(pcVar1);
        NSMutableArray::addObject_(self,"addObject:",self_00);
        IVar7 = IVar7 + 1;
      } while (IVar5 != IVar7);
      IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,
                            auStack_100,0x10);
    } while (IVar5 != 0);
  }
  IVar3 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
  _objc_msgSend(IVar3,"sortUsingComparator:",&PTR___NSConcreteGlobalBlock_000e9d88);
  IVar3 = _objc_alloc(&objc::class_t::DLInstaDownloader);
  IVar3 = _objc_msgSend(IVar3,"init");
  IVar2 = NSMutableArray::count(IVar2,"count");
  if (IVar2 < 2) {
    IVar2 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    ::DLInstaDownloader::instance_DLInstaDownloader__downloadMultibileItems_isNeedMerge_completion_
              (IVar3,"downloadMultibileItems:isNeedMerge:completion:",IVar2,0,0xe9de8,in_w5);
  }
  else {
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar2 = NSMutableArray::init(IVar2,"init");
    IVar4 = instance_DLMultiMediaViewController__posts(param_1,"posts");
    IVar4 = _objc_msgSend(IVar4,"count");
    IVar5 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
    IVar5 = _objc_msgSend(IVar5,"count");
    pcVar1 = &cf_STORIES_DOWNLOAD_ALL;
    if (IVar4 != IVar5) {
      pcVar1 = &cf_STORIES_DOWNLOAD_ALL_SELECTED;
    }
    IVar4 = FUN_0008c218(pcVar1);
    local_170 = PTR___NSConcreteStackBlock_000e80d8;
    local_168 = 0xc2000000;
    local_160 = FUN_000bcd6c;
    puStack_158 = &DAT_000e9b48;
    local_150 = IVar3;
    IStack_148 = param_1;
    IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar4,0,(ID)&local_170);
    NSMutableArray::addObject_(IVar2,"addObject:",IVar4);
    IVar4 = FUN_0008c218(&cf_STORIES_DOWNLOAD_AND_MERGE);
    local_1a0 = PTR___NSConcreteStackBlock_000e80d8;
    local_198 = 0xc2000000;
    local_190 = FUN_000bcde4;
    puStack_188 = &DAT_000e9b48;
    local_180 = IVar3;
    IStack_178 = param_1;
    IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar4,0,(ID)&local_1a0);
    NSMutableArray::addObject_(IVar2,"addObject:",IVar3);
    IVar3 = _objc_alloc(&objc::class_t::ABMenuViewController);
    IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar3,"initWithActionItems:",IVar2);
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar2,"presentedFromViewController:animated:completion:",param_1,1,0,in_w5);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[DLMultiMediaViewController posts] | encoding @16@0:8 */
/* Address: 000bce7c | Name: instance_DLMultiMediaViewController__posts | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewController::instance_DLMultiMediaViewController__posts(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_posts);
}


/* -[DLMultiMediaViewController setPosts:] | encoding v24@0:8@16 */
/* Address: 000bce8c | Name: instance_DLMultiMediaViewController__setPosts_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setPosts_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_posts) = param_3;
  return;
}


/* -[DLMultiMediaViewController containerMediaCollectionView] | encoding @16@0:8 */
/* Address: 000bcea0 | Name: instance_DLMultiMediaViewController__containerMediaCollectionView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewController::instance_DLMultiMediaViewController__containerMediaCollectionView
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_containerMediaCollectionView);
}


/* -[DLMultiMediaViewController setContainerMediaCollectionView:] | encoding v24@0:8@16 */
/* Address: 000bceb0 | Name: instance_DLMultiMediaViewController__setContainerMediaCollectionView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewController::
     instance_DLMultiMediaViewController__setContainerMediaCollectionView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_containerMediaCollectionView) = param_3;
  return;
}


/* -[DLMultiMediaViewController mediaCollectionView] | encoding @16@0:8 */
/* Address: 000bcec4 | Name: instance_DLMultiMediaViewController__mediaCollectionView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewController::instance_DLMultiMediaViewController__mediaCollectionView
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_mediaCollectionView);
}


/* -[DLMultiMediaViewController setMediaCollectionView:] | encoding v24@0:8@16 */
/* Address: 000bced4 | Name: instance_DLMultiMediaViewController__setMediaCollectionView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setMediaCollectionView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_mediaCollectionView) = param_3;
  return;
}


/* -[DLMultiMediaViewController titleLabel] | encoding @16@0:8 */
/* Address: 000bcee8 | Name: instance_DLMultiMediaViewController__titleLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewController::instance_DLMultiMediaViewController__titleLabel
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_titleLabel);
}


/* -[DLMultiMediaViewController setTitleLabel:] | encoding v24@0:8@16 */
/* Address: 000bcef8 | Name: instance_DLMultiMediaViewController__setTitleLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_titleLabel) = param_3;
  return;
}


/* -[DLMultiMediaViewController allSelectedMedia] | encoding @16@0:8 */
/* Address: 000bcf0c | Name: instance_DLMultiMediaViewController__allSelectedMedia | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewController::instance_DLMultiMediaViewController__allSelectedMedia
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_allSelectedMedia);
}


/* -[DLMultiMediaViewController setAllSelectedMedia:] | encoding v24@0:8@16 */
/* Address: 000bcf1c | Name: instance_DLMultiMediaViewController__setAllSelectedMedia_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setAllSelectedMedia_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_allSelectedMedia) = param_3;
  return;
}


/* -[DLMultiMediaViewController collectionCellSize] | encoding {CGSize=dd}16@0:8 */
/* Address: 000bcf30 | Name: instance_DLMultiMediaViewController__collectionCellSize | Body bytes: 20 */

/* Function Stack Size: 0x10 bytes */

CGSize DLMultiMediaViewController::instance_DLMultiMediaViewController__collectionCellSize
                 (ID param_1,SEL param_2)

{
  return *(CGSize *)(param_1 + (long)_collectionCellSize);
}


/* -[DLMultiMediaViewController setCollectionCellSize:] | encoding v32@0:8{CGSize=dd}16 */
/* Address: 000bcf44 | Name: instance_DLMultiMediaViewController__setCollectionCellSize_ | Body bytes: 20 */

/* Function Stack Size: 0x20 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setCollectionCellSize_
               (ID param_1,SEL param_2,CGSize param_3)

{
  long lVar1;
  
  lVar1 = (long)_collectionCellSize;
  *(double *)(param_1 + lVar1) = param_3.field0_0x0;
  ((double *)(param_1 + lVar1))[1] = param_3.field1_0x8;
  return;
}


/* -[DLMultiMediaViewController optionTableView] | encoding @16@0:8 */
/* Address: 000bcf58 | Name: instance_DLMultiMediaViewController__optionTableView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewController::instance_DLMultiMediaViewController__optionTableView
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_optionTableView);
}


/* -[DLMultiMediaViewController setOptionTableView:] | encoding v24@0:8@16 */
/* Address: 000bcf68 | Name: instance_DLMultiMediaViewController__setOptionTableView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setOptionTableView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_optionTableView) = param_3;
  return;
}


/* -[DLMultiMediaViewController .cxx_destruct] | encoding v16@0:8 */
/* Address: 000bcf7c | Name: instance_DLMultiMediaViewController___cxx_destruct | Body bytes: 144 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController___cxx_destruct
               (ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_optionTableView) = 0;
  *(undefined8 *)(param_1 + (long)_allSelectedMedia) = 0;
  *(undefined8 *)(param_1 + (long)_titleLabel) = 0;
  *(undefined8 *)(param_1 + (long)_mediaCollectionView) = 0;
  *(undefined8 *)(param_1 + (long)_containerMediaCollectionView) = 0;
  *(undefined8 *)(param_1 + (long)_posts) = 0;
  return;
}

