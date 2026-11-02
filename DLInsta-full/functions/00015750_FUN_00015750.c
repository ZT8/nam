/* Address: 00015750 | Name: FUN_00015750 | Body bytes: 1368 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00015750(ID param_1,undefined8 param_2,undefined8 param_3,ID param_4,undefined8 param_5)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  undefined8 local_98;
  ID local_90;
  undefined8 local_88;
  undefined8 local_80;
  ID IStack_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = UITableViewHeaderFooterView::class((ID)&_OBJC_CLASS___UITableViewHeaderFooterView,"class")
  ;
  IVar2 = _objc_msgSend(param_4,"isKindOfClass:",IVar2);
  if ((int)IVar2 != 0) {
    IVar2 = _objc_msgSend(param_4,"textLabel");
    IVar3 = UIFont::systemFontOfSize_
                      ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:",0x402e000000000000);
    _objc_msgSend(IVar2,"setFont:",IVar3);
    IVar2 = _objc_msgSend(param_1,"classDict");
    IVar2 = _objc_msgSend(IVar2,"allKeys");
    IVar2 = _objc_msgSend(IVar2,"objectAtIndexedSubscript:",param_5);
    IVar3 = _objc_msgSend(param_4,"textLabel");
    _objc_msgSend(IVar3,"setText:",IVar2);
    IVar2 = _objc_msgSend(param_4,"textLabel");
    IVar2 = _objc_msgSend(IVar2,"text");
    IVar2 = _objc_msgSend(IVar2,"rangeOfString:",&cf_C_);
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
    IVar4 = _objc_msgSend(param_4,"textLabel");
    IVar4 = _objc_msgSend(IVar4,"text");
    IVar3 = NSMutableAttributedString::initWithString_(IVar3,"initWithString:",IVar4);
    uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_000e8068;
    local_88 = uVar7;
    IStack_78 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    local_80 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_000e8050;
    local_70 = UIColor::colorWithRed_green_blue_alpha_
                         ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                          0x3fcc1c1c1c1c1c1c,0x3fd5555555555555,0x3fd7d7d7d7d7d7d8,
                          0x3ff0000000000000);
    IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                       &IStack_78,&local_88,2);
    IVar5 = _objc_msgSend(param_4,"textLabel");
    IVar5 = _objc_msgSend(IVar5,"text");
    IVar5 = _objc_msgSend(IVar5,"containsString:",&cf__);
    IVar6 = _objc_msgSend(param_4,"textLabel");
    IVar6 = _objc_msgSend(IVar6,"text");
    pcVar1 = &cf__;
    if ((int)IVar5 == 0) {
      pcVar1 = &cf__;
    }
    IVar6 = _objc_msgSend(IVar6,"rangeOfString:",pcVar1);
    local_98 = uVar7;
    if ((int)IVar5 == 0) {
      local_90 = UIColor::colorWithRed_green_blue_alpha_
                           ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                            0x3fea3a3a3a3a3a3a,0,0,0x3ff0000000000000);
    }
    else {
      local_90 = UIColor::colorWithRed_green_blue_alpha_
                           ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0,
                            0x3fea3a3a3a3a3a3a,0,0x3ff0000000000000);
    }
    IVar5 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                       &local_90,&local_98,1);
    NSMutableAttributedString::addAttributes_range_
              (IVar3,"addAttributes:range:",IVar4,IVar2,extraout_x1);
    NSMutableAttributedString::addAttributes_range_
              (IVar3,"addAttributes:range:",IVar5,IVar6,extraout_x1_00);
    IVar2 = _objc_msgSend(param_4,"textLabel");
    _objc_msgSend(IVar2,"setAttributedText:",IVar3);
    IVar2 = _objc_msgSend(param_4,"textLabel");
    _objc_msgSend(IVar2,"setNumberOfLines:",0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

