/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPDeveloperCell cellWithTitle:detail:image:url:] | encoding @48@0:8@16@24@32@40 */
/* Address: 000ae998 | Name: instance_FRPDeveloperCell__cellWithTitle_detail_image_url_ | Body bytes: 676 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID FRPDeveloperCell::instance_FRPDeveloperCell__cellWithTitle_detail_image_url_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  bool bVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::FRPDeveloperCell;
  local_70 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_70,"initWithTitle:setting:",param_3,0);
  _objc_msgSend(self,"setUrl:",param_6);
  _objc_msgSend(self,"setImage:",param_5);
  IVar2 = _objc_msgSend(self,"detailTextLabel");
  _objc_msgSend(IVar2,"setText:",param_4);
  IVar2 = _objc_msgSend(self,"detailTextLabel");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if ((bVar1 & 1) == 0) {
    uVar4 = 0x3fdbdbdbdbdbdbdc;
    uVar5 = 0x3fdd9d9d9d9d9d9e;
    uVar6 = 0x3fe0101010101010;
  }
  else {
    uVar4 = 0x3fe4545454545454;
    uVar5 = 0x3fe5555555555555;
    uVar6 = 0x3fe6969696969697;
  }
  IVar3 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar4,uVar5,uVar6,
                     0x3ff0000000000000);
  _objc_msgSend(IVar2,"setTextColor:",IVar3);
  IVar2 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4028000000000000,
                     *(undefined8 *)PTR__UIFontWeightRegular_000e80c0);
  IVar3 = _objc_msgSend(self,"detailTextLabel");
  _objc_msgSend(IVar3,"setFont:",IVar2);
  _objc_msgSend(self,"setAccessoryType:",1);
  IVar2 = instance_FRPDeveloperCell__image(param_1,"image");
  IVar3 = _objc_msgSend(self,"imageView");
  _objc_msgSend(IVar3,"setImage:",IVar2);
  return self;
}


/* -[FRPDeveloperCell layoutSubviews] | encoding v16@0:8 */
/* Address: 000aec3c | Name: instance_FRPDeveloperCell__layoutSubviews | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPDeveloperCell::instance_FRPDeveloperCell__layoutSubviews(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::FRPDeveloperCell;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"layoutSubviews");
  self = _objc_msgSend(param_1,"imageView");
  _objc_msgSend(self,"setClipsToBounds:",1);
  return;
}


/* -[FRPDeveloperCell didSelectFromTable:] | encoding v24@0:8@16 */
/* Address: 000aecb0 | Name: instance_FRPDeveloperCell__didSelectFromTable_ | Body bytes: 344 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPDeveloperCell::instance_FRPDeveloperCell__didSelectFromTable_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_msgSend(param_3,"tableView");
  IVar2 = _objc_msgSend(param_3,"tableView");
  IVar2 = _objc_msgSend(IVar2,"indexPathForCell:",param_1);
  _objc_msgSend(IVar1,"deselectRowAtIndexPath:animated:",IVar2,1);
  IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar2 = instance_FRPDeveloperCell__url(param_1,"url");
  IVar2 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:",IVar2);
  UIApplication::openURL_options_completionHandler_
            (IVar1,"openURL:options:completionHandler:",IVar2,
             *(undefined8 *)PTR____NSDictionary0___000e8248,0);
  return;
}


/* -[FRPDeveloperCell url] | encoding @16@0:8 */
/* Address: 000aee08 | Name: instance_FRPDeveloperCell__url | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPDeveloperCell::instance_FRPDeveloperCell__url(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_url);
}


/* -[FRPDeveloperCell setUrl:] | encoding v24@0:8@16 */
/* Address: 000aee18 | Name: instance_FRPDeveloperCell__setUrl_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPDeveloperCell::instance_FRPDeveloperCell__setUrl_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_url) = param_3;
  return;
}


/* -[FRPDeveloperCell image] | encoding @16@0:8 */
/* Address: 000aee2c | Name: instance_FRPDeveloperCell__image | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPDeveloperCell::instance_FRPDeveloperCell__image(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_image);
}


/* -[FRPDeveloperCell setImage:] | encoding v24@0:8@16 */
/* Address: 000aee3c | Name: instance_FRPDeveloperCell__setImage_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPDeveloperCell::instance_FRPDeveloperCell__setImage_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_image) = param_3;
  return;
}


/* -[FRPDeveloperCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000aee50 | Name: instance_FRPDeveloperCell___cxx_destruct | Body bytes: 64 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPDeveloperCell::instance_FRPDeveloperCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_image) = 0;
  *(undefined8 *)(param_1 + (long)_url) = 0;
  return;
}


/* +[FRPDeveloperCell cellWithTitle:detail:image:url:] | encoding @48@0:8@16@24@32@40 */
/* Address: 000ae8d0 | Name: class_FRPDeveloperCell__cellWithTitle_detail_image_url_ | Body bytes: 200 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID FRPDeveloperCell::class_FRPDeveloperCell__cellWithTitle_detail_image_url_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,"cellWithTitle:detail:image:url:",param_3,param_4,param_5,param_6);
  return IVar1;
}

