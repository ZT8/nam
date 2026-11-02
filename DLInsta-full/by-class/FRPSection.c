/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPSection initWithTitle:footer:] | encoding @32@0:8@16@24 */
/* Address: 000afc70 | Name: instance_FRPSection__initWithTitle_footer_ | Body bytes: 220 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPSection::instance_FRPSection__initWithTitle_footer_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::FRPSection;
  local_40 = param_1;
  self = UITableViewCell::init((ID)&local_40,"init");
  if (self != 0) {
    UITableViewCell::setHeaderTitle_(self,"setHeaderTitle:",param_3);
    UITableViewCell::setFooterTitle_(self,"setFooterTitle:",param_4);
    IVar1 = NSMutableArray::new((ID)&_OBJC_CLASS___NSMutableArray,"new");
    UITableViewCell::setCells_(self,"setCells:",IVar1);
  }
  return self;
}


/* -[FRPSection addCell:] | encoding v24@0:8@16 */
/* Address: 000afd4c | Name: instance_FRPSection__addCell_ | Body bytes: 108 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSection::instance_FRPSection__addCell_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = instance_FRPSection__cells(param_1,"cells");
  _objc_msgSend(self,"addObject:",param_3);
  return;
}


/* -[FRPSection removeCell:] | encoding v24@0:8@16 */
/* Address: 000afdb8 | Name: instance_FRPSection__removeCell_ | Body bytes: 108 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSection::instance_FRPSection__removeCell_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = instance_FRPSection__cells(param_1,"cells");
  _objc_msgSend(self,"removeObject:",param_3);
  return;
}


/* -[FRPSection addCells:] | encoding v24@0:8@16 */
/* Address: 000afe24 | Name: instance_FRPSection__addCells_ | Body bytes: 108 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSection::instance_FRPSection__addCells_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = instance_FRPSection__cells(param_1,"cells");
  _objc_msgSend(self,"addObjectsFromArray:",param_3);
  return;
}


/* -[FRPSection headerTitle] | encoding @16@0:8 */
/* Address: 000afe90 | Name: instance_FRPSection__headerTitle | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSection::instance_FRPSection__headerTitle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_headerTitle);
}


/* -[FRPSection setHeaderTitle:] | encoding v24@0:8@16 */
/* Address: 000afea0 | Name: instance_FRPSection__setHeaderTitle_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSection::instance_FRPSection__setHeaderTitle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_headerTitle) = param_3;
  return;
}


/* -[FRPSection footerTitle] | encoding @16@0:8 */
/* Address: 000afeb4 | Name: instance_FRPSection__footerTitle | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSection::instance_FRPSection__footerTitle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_footerTitle);
}


/* -[FRPSection setFooterTitle:] | encoding v24@0:8@16 */
/* Address: 000afec4 | Name: instance_FRPSection__setFooterTitle_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSection::instance_FRPSection__setFooterTitle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_footerTitle) = param_3;
  return;
}


/* -[FRPSection cells] | encoding @16@0:8 */
/* Address: 000afed8 | Name: instance_FRPSection__cells | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSection::instance_FRPSection__cells(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_cells);
}


/* -[FRPSection setCells:] | encoding v24@0:8@16 */
/* Address: 000afee8 | Name: instance_FRPSection__setCells_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSection::instance_FRPSection__setCells_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_cells) = param_3;
  return;
}


/* -[FRPSection tintUIColor] | encoding @16@0:8 */
/* Address: 000afefc | Name: instance_FRPSection__tintUIColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSection::instance_FRPSection__tintUIColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tintUIColor);
}


/* -[FRPSection setTintUIColor:] | encoding v24@0:8@16 */
/* Address: 000aff0c | Name: instance_FRPSection__setTintUIColor_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSection::instance_FRPSection__setTintUIColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_tintUIColor) = param_3;
  return;
}


/* -[FRPSection .cxx_destruct] | encoding v16@0:8 */
/* Address: 000aff20 | Name: instance_FRPSection___cxx_destruct | Body bytes: 104 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSection::instance_FRPSection___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_tintUIColor) = 0;
  *(undefined8 *)(param_1 + (long)_cells) = 0;
  *(undefined8 *)(param_1 + (long)_footerTitle) = 0;
  *(undefined8 *)(param_1 + (long)_headerTitle) = 0;
  return;
}


/* +[FRPSection sectionWithTitle:footer:] | encoding @32@0:8@16@24 */
/* Address: 000afbfc | Name: class_FRPSection__sectionWithTitle_footer_ | Body bytes: 116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPSection::class_FRPSection__sectionWithTitle_footer_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = instance_FRPSection__initWithTitle_footer_(IVar1,"initWithTitle:footer:",param_3,param_4);
  return IVar1;
}

