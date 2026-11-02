/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPCell initWithTitle:setting:] | encoding @32@0:8@16@24 */
/* Address: 000ae664 | Name: instance_FRPCell__initWithTitle_setting_ | Body bytes: 288 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPCell::instance_FRPCell__initWithTitle_setting_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::FRPCell;
  local_50 = param_1;
  self = UITableViewCell::initWithStyle_reuseIdentifier_
                   ((ID)&local_50,"initWithStyle:reuseIdentifier:",1,0);
  if (self != 0) {
    UITableViewCell::setClipsToBounds_(self,"setClipsToBounds:",1);
    IVar1 = UITableViewCell::textLabel(self,"textLabel");
    UITableViewCell::setText_(IVar1,"setText:",param_3);
    IVar1 = UITableViewCell::textLabel(self,"textLabel");
    UITableViewCell::setNumberOfLines_(IVar1,"setNumberOfLines:",0);
    UITableViewCell::setSetting_(self,"setSetting:",param_4);
  }
  return self;
}


/* -[FRPCell didSelectFromTable:] | encoding v24@0:8@16 */
/* Address: 000ae784 | Name: instance_FRPCell__didSelectFromTable_ | Body bytes: 4 */

/* Function Stack Size: 0x18 bytes */

void FRPCell::instance_FRPCell__didSelectFromTable_(ID param_1,SEL param_2,ID param_3)

{
  return;
}


/* -[FRPCell tintUIColor] | encoding @16@0:8 */
/* Address: 000ae788 | Name: instance_FRPCell__tintUIColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPCell::instance_FRPCell__tintUIColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tintUIColor);
}


/* -[FRPCell setTintUIColor:] | encoding v24@0:8@16 */
/* Address: 000ae798 | Name: instance_FRPCell__setTintUIColor_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPCell::instance_FRPCell__setTintUIColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_tintUIColor) = param_3;
  return;
}


/* -[FRPCell setting] | encoding @16@0:8 */
/* Address: 000ae7ac | Name: instance_FRPCell__setting | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPCell::instance_FRPCell__setting(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_setting);
}


/* -[FRPCell setSetting:] | encoding v24@0:8@16 */
/* Address: 000ae7bc | Name: instance_FRPCell__setSetting_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPCell::instance_FRPCell__setSetting_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_setting) = param_3;
  return;
}


/* -[FRPCell title] | encoding @16@0:8 */
/* Address: 000ae7d0 | Name: instance_FRPCell__title | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPCell::instance_FRPCell__title(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_title);
}


/* -[FRPCell setTitle:] | encoding v24@0:8@16 */
/* Address: 000ae7e0 | Name: instance_FRPCell__setTitle_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPCell::instance_FRPCell__setTitle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_title) = param_3;
  return;
}


/* -[FRPCell postNotification] | encoding @16@0:8 */
/* Address: 000ae7f4 | Name: instance_FRPCell__postNotification | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPCell::instance_FRPCell__postNotification(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_postNotification);
}


/* -[FRPCell setPostNotification:] | encoding v24@0:8@16 */
/* Address: 000ae804 | Name: instance_FRPCell__setPostNotification_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPCell::instance_FRPCell__setPostNotification_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_postNotification) = param_3;
  return;
}


/* -[FRPCell valueChanged] | encoding @?16@0:8 */
/* Address: 000ae818 | Name: instance_FRPCell__valueChanged | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPCell::instance_FRPCell__valueChanged(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_valueChanged);
}


/* -[FRPCell setValueChanged:] | encoding v24@0:8@?16 */
/* Address: 000ae828 | Name: instance_FRPCell__setValueChanged_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPCell::instance_FRPCell__setValueChanged_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_valueChanged) = param_3;
  return;
}


/* -[FRPCell height] | encoding i16@0:8 */
/* Address: 000ae834 | Name: instance_FRPCell__height | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

int FRPCell::instance_FRPCell__height(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_height);
}


/* -[FRPCell setHeight:] | encoding v20@0:8i16 */
/* Address: 000ae844 | Name: instance_FRPCell__setHeight_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void FRPCell::instance_FRPCell__setHeight_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_height) = param_3;
  return;
}


/* -[FRPCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000ae854 | Name: instance_FRPCell___cxx_destruct | Body bytes: 124 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPCell::instance_FRPCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_valueChanged) = 0;
  *(undefined8 *)(param_1 + (long)_postNotification) = 0;
  *(undefined8 *)(param_1 + (long)_title) = 0;
  *(undefined8 *)(param_1 + (long)_setting) = 0;
  *(undefined8 *)(param_1 + (long)_tintUIColor) = 0;
  return;
}


/* +[FRPCell cellWithTitle:setting:] | encoding @32@0:8@16@24 */
/* Address: 000ae5f0 | Name: class_FRPCell__cellWithTitle_setting_ | Body bytes: 116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPCell::class_FRPCell__cellWithTitle_setting_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = instance_FRPCell__initWithTitle_setting_(IVar1,"initWithTitle:setting:",param_3,param_4);
  return IVar1;
}

