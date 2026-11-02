/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMultiMediaViewCell initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 000b8094 | Name: instance_DLMultiMediaViewCell__initWithFrame_ | Body bytes: 168 */

/* Function Stack Size: 0x30 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMultiMediaViewCell;
  local_30 = param_1;
  self = UICollectionViewCell::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    UICollectionViewCell::setupContainerViewCell(self,"setupContainerViewCell");
    UICollectionViewCell::setupIndicatorView(self,"setupIndicatorView");
    UICollectionViewCell::setupMediaImageView(self,"setupMediaImageView");
    UICollectionViewCell::setupErrorLabel(self,"setupErrorLabel");
    UICollectionViewCell::setupDurationLabel(self,"setupDurationLabel");
    UICollectionViewCell::setupCheckmarkView(self,"setupCheckmarkView");
  }
  return self;
}


/* -[DLMultiMediaViewCell layoutSubviews] | encoding v16@0:8 */
/* Address: 000b813c | Name: instance_DLMultiMediaViewCell__layoutSubviews | Body bytes: 448 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__layoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::DLMultiMediaViewCell;
  local_50 = param_1;
  UICollectionViewCell::layoutSubviews((ID)&local_50,"layoutSubviews");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa8181818181818,0x3fb0101010101010,0x3fb4141414141414,0x3ff0000000000000);
    IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3fc3333333333333);
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
    IVar3 = _objc_msgSend(IVar3,"layer");
    _objc_msgSend(IVar3,"setBorderColor:",IVar2);
  }
  else {
    IVar2 = UIColor::colorWithWhite_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0x3ff0000000000000,
                       0x3fc3333333333333);
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
    IVar3 = _objc_msgSend(IVar3,"layer");
    _objc_msgSend(IVar3,"setBorderColor:",IVar2);
  }
  return;
}


/* -[DLMultiMediaViewCell prepareForReuse] | encoding v16@0:8 */
/* Address: 000b82fc | Name: instance_DLMultiMediaViewCell__prepareForReuse | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__prepareForReuse(ID param_1,SEL param_2)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMultiMediaViewCell;
  local_30 = param_1;
  UICollectionViewCell::prepareForReuse((ID)&local_30,"prepareForReuse");
  self = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(self,"setImage:",0);
  return;
}


/* -[DLMultiMediaViewCell setupContainerViewCell] | encoding v16@0:8 */
/* Address: 000b8370 | Name: instance_DLMultiMediaViewCell__setupContainerViewCell | Body bytes: 888 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupContainerViewCell
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setContainerViewCell_(param_1,"setContainerViewCell:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = UIColor::darkGrayColor((ID)&_OBJC_CLASS___UIColor,"darkGrayColor");
  IVar1 = UIColor::colorWithAlphaComponent_(IVar1,"colorWithAlphaComponent:",0x3fd3333333333333);
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setCornerRadius:",0x4018000000000000);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setMasksToBounds:",1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setBorderWidth:",0x3fe0000000000000);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  _objc_msgSend(param_1,"addSubview:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar2 = _objc_msgSend(param_1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = _objc_msgSend(param_1,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}


/* -[DLMultiMediaViewCell setupIndicatorView] | encoding v16@0:8 */
/* Address: 000b86e8 | Name: instance_DLMultiMediaViewCell__setupIndicatorView | Body bytes: 632 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupIndicatorView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIActivityIndicatorView);
  IVar1 = UIActivityIndicatorView::initWithActivityIndicatorStyle_
                    (IVar1,"initWithActivityIndicatorStyle:",1);
  instance_DLMultiMediaViewCell__setIndicatorView_(param_1,"setIndicatorView:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__indicatorView(param_1,"indicatorView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = instance_DLMultiMediaViewCell__indicatorView(param_1,"indicatorView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__indicatorView(param_1,"indicatorView");
  IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__indicatorView(param_1,"indicatorView");
  IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}


/* -[DLMultiMediaViewCell setupMediaImageView] | encoding v16@0:8 */
/* Address: 000b8960 | Name: instance_DLMultiMediaViewCell__setupMediaImageView | Body bytes: 724 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupMediaImageView
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIImageView);
  IVar1 = UIImageView::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setMediaImageView_(param_1,"setMediaImageView:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(IVar1,"setContentMode:",1);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(IVar1,"setClipsToBounds:",1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = _objc_msgSend(IVar2,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = _objc_msgSend(IVar2,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}


/* -[DLMultiMediaViewCell setupErrorLabel] | encoding v16@0:8 */
/* Address: 000b8c34 | Name: instance_DLMultiMediaViewCell__setupErrorLabel | Body bytes: 820 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupErrorLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setErrorLabel_(param_1,"setErrorLabel:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4028000000000000,
                     *(undefined8 *)PTR__UIFontWeightSemibold_000e80c8);
  IVar2 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar2,"setFont:",IVar1);
  IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  IVar2 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar2,"setTextColor:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}


/* -[DLMultiMediaViewCell setupDurationLabel] | encoding v16@0:8 */
/* Address: 000b8f68 | Name: instance_DLMultiMediaViewCell__setupDurationLabel | Body bytes: 828 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupDurationLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setDurationLabel_(param_1,"setDurationLabel:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__durationLabel(param_1,"durationLabel");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4028000000000000,
                     *(undefined8 *)PTR__UIFontWeightSemibold_000e80c8);
  IVar2 = instance_DLMultiMediaViewCell__durationLabel(param_1,"durationLabel");
  _objc_msgSend(IVar2,"setFont:",IVar1);
  IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  IVar2 = instance_DLMultiMediaViewCell__durationLabel(param_1,"durationLabel");
  _objc_msgSend(IVar2,"setTextColor:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = instance_DLMultiMediaViewCell__durationLabel(param_1,"durationLabel");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__durationLabel(param_1,"durationLabel");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0xc034000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__durationLabel(param_1,"durationLabel");
  IVar1 = _objc_msgSend(IVar1,"trailingAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0xc024000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}


/* -[DLMultiMediaViewCell setupCheckmarkView] | encoding v16@0:8 */
/* Address: 000b92a4 | Name: instance_DLMultiMediaViewCell__setupCheckmarkView | Body bytes: 1408 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupCheckmarkView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setCheckmarkView_(param_1,"setCheckmarkView:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIImageView);
  IVar1 = UIImageView::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setCheckmarkImageView_(param_1,"setCheckmarkImageView:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar2 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
  IVar2 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
  IVar2 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",0x4038000000000000);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",0x4038000000000000);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}


/* -[DLMultiMediaViewCell containerViewCell] | encoding @16@0:8 */
/* Address: 000b9824 | Name: instance_DLMultiMediaViewCell__containerViewCell | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__containerViewCell(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_containerViewCell);
}


/* -[DLMultiMediaViewCell setContainerViewCell:] | encoding v24@0:8@16 */
/* Address: 000b9834 | Name: instance_DLMultiMediaViewCell__setContainerViewCell_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setContainerViewCell_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_containerViewCell) = param_3;
  return;
}


/* -[DLMultiMediaViewCell indicatorView] | encoding @16@0:8 */
/* Address: 000b9848 | Name: instance_DLMultiMediaViewCell__indicatorView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__indicatorView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_indicatorView);
}


/* -[DLMultiMediaViewCell setIndicatorView:] | encoding v24@0:8@16 */
/* Address: 000b9858 | Name: instance_DLMultiMediaViewCell__setIndicatorView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setIndicatorView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_indicatorView) = param_3;
  return;
}


/* -[DLMultiMediaViewCell mediaImageView] | encoding @16@0:8 */
/* Address: 000b986c | Name: instance_DLMultiMediaViewCell__mediaImageView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__mediaImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_mediaImageView);
}


/* -[DLMultiMediaViewCell setMediaImageView:] | encoding v24@0:8@16 */
/* Address: 000b987c | Name: instance_DLMultiMediaViewCell__setMediaImageView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setMediaImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_mediaImageView) = param_3;
  return;
}


/* -[DLMultiMediaViewCell mediaImage] | encoding @16@0:8 */
/* Address: 000b9890 | Name: instance_DLMultiMediaViewCell__mediaImage | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__mediaImage(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_mediaImage);
}


/* -[DLMultiMediaViewCell setMediaImage:] | encoding v24@0:8@16 */
/* Address: 000b98a0 | Name: instance_DLMultiMediaViewCell__setMediaImage_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setMediaImage_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_mediaImage) = param_3;
  return;
}


/* -[DLMultiMediaViewCell durationLabel] | encoding @16@0:8 */
/* Address: 000b98b4 | Name: instance_DLMultiMediaViewCell__durationLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__durationLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_durationLabel);
}


/* -[DLMultiMediaViewCell setDurationLabel:] | encoding v24@0:8@16 */
/* Address: 000b98c4 | Name: instance_DLMultiMediaViewCell__setDurationLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setDurationLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_durationLabel) = param_3;
  return;
}


/* -[DLMultiMediaViewCell checkmarkView] | encoding @16@0:8 */
/* Address: 000b98d8 | Name: instance_DLMultiMediaViewCell__checkmarkView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__checkmarkView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_checkmarkView);
}


/* -[DLMultiMediaViewCell setCheckmarkView:] | encoding v24@0:8@16 */
/* Address: 000b98e8 | Name: instance_DLMultiMediaViewCell__setCheckmarkView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setCheckmarkView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_checkmarkView) = param_3;
  return;
}


/* -[DLMultiMediaViewCell checkmarkImageView] | encoding @16@0:8 */
/* Address: 000b98fc | Name: instance_DLMultiMediaViewCell__checkmarkImageView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__checkmarkImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_checkmarkImageView);
}


/* -[DLMultiMediaViewCell setCheckmarkImageView:] | encoding v24@0:8@16 */
/* Address: 000b990c | Name: instance_DLMultiMediaViewCell__setCheckmarkImageView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setCheckmarkImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_checkmarkImageView) = param_3;
  return;
}


/* -[DLMultiMediaViewCell errorLabel] | encoding @16@0:8 */
/* Address: 000b9920 | Name: instance_DLMultiMediaViewCell__errorLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__errorLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_errorLabel);
}


/* -[DLMultiMediaViewCell setErrorLabel:] | encoding v24@0:8@16 */
/* Address: 000b9930 | Name: instance_DLMultiMediaViewCell__setErrorLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setErrorLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_errorLabel) = param_3;
  return;
}


/* -[DLMultiMediaViewCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b9944 | Name: instance_DLMultiMediaViewCell___cxx_destruct | Body bytes: 184 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_errorLabel) = 0;
  *(undefined8 *)(param_1 + (long)_checkmarkImageView) = 0;
  *(undefined8 *)(param_1 + (long)_checkmarkView) = 0;
  *(undefined8 *)(param_1 + (long)_durationLabel) = 0;
  *(undefined8 *)(param_1 + (long)_mediaImage) = 0;
  *(undefined8 *)(param_1 + (long)_mediaImageView) = 0;
  *(undefined8 *)(param_1 + (long)_indicatorView) = 0;
  *(undefined8 *)(param_1 + (long)_containerViewCell) = 0;
  return;
}

