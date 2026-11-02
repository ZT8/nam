/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPViewCell cellWithHeight:initBlock:layoutBlock:] | encoding @36@0:8i16@?20@?28 */
/* Address: 000b4138 | Name: instance_FRPViewCell__cellWithHeight_initBlock_layoutBlock_ | Body bytes: 260 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID FRPViewCell::instance_FRPViewCell__cellWithHeight_initBlock_layoutBlock_
             (ID param_1,SEL param_2,int param_3,ID param_4,uint param_5,ID param_6,
             undefined4 param_7)

{
  ID self;
  undefined4 uVar1;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::FRPViewCell;
  uVar1 = 0;
  local_50 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_50,"initWithTitle:setting:",0,0);
  if ((ulong)param_5 != 0) {
    instance_FRPViewCell__setLayoutBlock_(param_1,"setLayoutBlock:",(ulong)param_5,uVar1);
  }
  _objc_msgSend(self,"setAccessoryType:",0);
  _objc_msgSend(self,"setSelectionStyle:",0);
  FRPCell::instance_FRPCell__setHeight_(self,"setHeight:",param_3);
  (**(code **)(param_4 + 0x10))(param_4,self);
  return self;
}


/* -[FRPViewCell layoutSubviews] | encoding v16@0:8 */
/* Address: 000b423c | Name: instance_FRPViewCell__layoutSubviews | Body bytes: 156 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPViewCell::instance_FRPViewCell__layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::FRPViewCell;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"layoutSubviews");
  IVar1 = instance_FRPViewCell__layoutBlock(param_1,"layoutBlock");
  if (IVar1 != 0) {
    IVar1 = instance_FRPViewCell__layoutBlock(param_1,"layoutBlock");
    (**(code **)(IVar1 + 0x10))(IVar1,param_1);
  }
  return;
}


/* -[FRPViewCell addSubview:] | encoding v24@0:8@16 */
/* Address: 000b42d8 | Name: instance_FRPViewCell__addSubview_ | Body bytes: 216 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPViewCell::instance_FRPViewCell__addSubview_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID self;
  double dVar2;
  double extraout_d0;
  objc_super local_50;
  
  bVar1 = instance_FRPViewCell__hideSeperators(param_1,"hideSeperators");
  if (bVar1 != 0) {
    _objc_msgSend(param_3,"frame");
    dVar2 = (double)_CGRectGetHeight();
    self = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
    UIScreen::scale(self,"scale");
    if (dVar2 * extraout_d0 == 1.0) {
      return;
    }
  }
  local_50.super_class = &objc::class_t::FRPViewCell;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"addSubview:",param_3);
  return;
}


/* -[FRPViewCell layoutBlock] | encoding @?16@0:8 */
/* Address: 000b43b0 | Name: instance_FRPViewCell__layoutBlock | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPViewCell::instance_FRPViewCell__layoutBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_layoutBlock);
}


/* -[FRPViewCell setLayoutBlock:] | encoding v24@0:8@?16 */
/* Address: 000b43c0 | Name: instance_FRPViewCell__setLayoutBlock_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPViewCell::instance_FRPViewCell__setLayoutBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_layoutBlock) = param_3;
  return;
}


/* -[FRPViewCell hideSeperators] | encoding B16@0:8 */
/* Address: 000b43cc | Name: instance_FRPViewCell__hideSeperators | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool FRPViewCell::instance_FRPViewCell__hideSeperators(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_hideSeperators);
}


/* -[FRPViewCell setHideSeperators:] | encoding v20@0:8B16 */
/* Address: 000b43dc | Name: instance_FRPViewCell__setHideSeperators_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void FRPViewCell::instance_FRPViewCell__setHideSeperators_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_hideSeperators) = (char)param_3;
  return;
}


/* -[FRPViewCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b43ec | Name: instance_FRPViewCell___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPViewCell::instance_FRPViewCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_layoutBlock) = 0;
  return;
}


/* +[FRPViewCell cellWithHeight:initBlock:layoutBlock:] | encoding @36@0:8i16@?20@?28 */
/* Address: 000b40a8 | Name: class_FRPViewCell__cellWithHeight_initBlock_layoutBlock_ | Body bytes: 144 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID FRPViewCell::class_FRPViewCell__cellWithHeight_initBlock_layoutBlock_
             (ID param_1,SEL param_2,int param_3,ID param_4,uint param_5,ID param_6,
             undefined4 param_7)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,"cellWithHeight:initBlock:layoutBlock:",(ulong)param_3,param_4,
                        (ulong)param_5);
  return IVar1;
}

