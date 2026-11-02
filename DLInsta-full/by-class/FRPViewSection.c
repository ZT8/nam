/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPViewSection initWithHeight:initBlock:layoutBlock:] | encoding @36@0:8i16@?20@?28 */
/* Address: 000b447c | Name: instance_FRPViewSection__initWithHeight_initBlock_layoutBlock_ | Body bytes: 404 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

ID FRPViewSection::instance_FRPViewSection__initWithHeight_initBlock_layoutBlock_
             (ID param_1,SEL param_2,int param_3,ID param_4,uint param_5,ID param_6,
             undefined4 param_7)

{
  ID IVar1;
  ID self;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  ulong local_90;
  undefined *puStack_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::FRPViewSection;
  local_60.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_60,"class");
  IVar1 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                    (IVar1,"sectionWithTitle:footer:",0,0);
  puStack_88 = PTR___NSConcreteStackBlock_000e80d8;
  local_80 = 0xc2000000;
  local_78 = FUN_000b4610;
  puStack_70 = &DAT_000e9c68;
  local_b0 = PTR___NSConcreteStackBlock_000e80d8;
  local_a8 = 0xc2000000;
  local_a0 = FUN_000b461c;
  puStack_98 = &DAT_000e9c68;
  local_90 = (ulong)param_5;
  local_68 = param_4;
  self = _objc_msgSend((ID)&objc::class_t::FRPViewCell,"cellWithHeight:initBlock:layoutBlock:",
                       (ulong)param_3,&puStack_88,&local_b0);
  FRPViewCell::instance_FRPViewCell__setHideSeperators_(self,"setHideSeperators:",1);
  _objc_msgSend(self,"setSelectionStyle:",0);
  FRPSection::instance_FRPSection__addCell_(IVar1,"addCell:",self);
  return IVar1;
}


/* -[FRPViewSection cellBlock] | encoding @?16@0:8 */
/* Address: 000b4628 | Name: instance_FRPViewSection__cellBlock | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPViewSection::instance_FRPViewSection__cellBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_cellBlock);
}


/* -[FRPViewSection setCellBlock:] | encoding v24@0:8@?16 */
/* Address: 000b4638 | Name: instance_FRPViewSection__setCellBlock_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPViewSection::instance_FRPViewSection__setCellBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_cellBlock) = param_3;
  return;
}


/* -[FRPViewSection .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b4644 | Name: instance_FRPViewSection___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPViewSection::instance_FRPViewSection___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_cellBlock) = 0;
  return;
}


/* +[FRPViewSection sectionWithHeight:initBlock:layoutBlock:] | encoding @36@0:8i16@?20@?28 */
/* Address: 000b4400 | Name: class_FRPViewSection__sectionWithHeight_initBlock_layoutBlock_ | Body bytes: 124 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID FRPViewSection::class_FRPViewSection__sectionWithHeight_initBlock_layoutBlock_
             (ID param_1,SEL param_2,int param_3,ID param_4,undefined4 param_5,ID param_6,
             undefined4 param_7)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = instance_FRPViewSection__initWithHeight_initBlock_layoutBlock_
                    (IVar1,"initWithHeight:initBlock:layoutBlock:",param_3,param_4,param_5,param_6,
                     param_7);
  return IVar1;
}

