/* Address: 000a95b4 | Name: instance_DLMaxAlertViewController__applyCustomFontForBodyText | Body bytes: 1348 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__applyCustomFontForBodyText
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar8;
  ID self;
  long lVar9;
  undefined8 uVar10;
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
  IVar1 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  IVar1 = _objc_msgSend(IVar1,"text");
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
  IVar2 = NSMutableAttributedString::initWithString_(IVar2,"initWithString:",IVar1);
  uVar10 = *(undefined8 *)PTR__UIFontWeightBold_000e80a8;
  IVar3 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,uVar10)
  ;
  IVar4 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4030000000000000,uVar10)
  ;
  IVar5 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,
                     *(undefined8 *)PTR__UIFontWeightRegular_000e80c0);
  IVar6 = _objc_msgSend(IVar1,"length");
  uVar10 = *(undefined8 *)PTR__NSFontAttributeName_000e8060;
  NSMutableAttributedString::addAttribute_value_range_
            (IVar2,"addAttribute:value:range:",uVar10,IVar5,0,IVar6);
  IVar5 = _objc_msgSend(IVar1,"rangeOfString:",&cf__);
  if (IVar5 != 0x7fffffffffffffff) {
    lVar9 = extraout_x1;
    do {
      NSMutableAttributedString::addAttribute_value_range_
                (IVar2,"addAttribute:value:range:",uVar10,IVar4,IVar5,lVar9);
      IVar6 = _objc_msgSend(IVar1,"length");
      IVar5 = _objc_msgSend(IVar1,"rangeOfString:options:range:",&cf__,0,IVar5 + lVar9,
                            IVar6 - (IVar5 + lVar9));
      lVar9 = extraout_x1_00;
    } while (IVar5 != 0x7fffffffffffffff);
  }
  IVar4 = _objc_msgSend(IVar1,"componentsSeparatedByString:",&cf_newline_s_);
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,auStack_100,
                        0x10);
  if (IVar5 != 0) {
    lVar9 = *local_130;
    do {
      IVar6 = 0;
      do {
        if (*local_130 != lVar9) {
          _objc_enumerationMutation(IVar4);
        }
        self = *(ID *)(lStack_138 + IVar6 * 8);
        IVar7 = _objc_msgSend(self,"rangeOfString:",&cf__);
        if (IVar7 != 0x7fffffffffffffff) {
          IVar7 = _objc_msgSend(IVar1,"rangeOfString:",self);
          NSMutableAttributedString::addAttribute_value_range_
                    (IVar2,"addAttribute:value:range:",uVar10,IVar3,IVar7,extraout_x1_01);
        }
        IVar6 = IVar6 + 1;
      } while (IVar5 != IVar6);
      IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,
                            auStack_100,0x10);
    } while (IVar5 != 0);
  }
  IVar4 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  IVar4 = _objc_msgSend(IVar4,"text");
  IVar5 = NSRegularExpression::regularExpressionWithPattern_options_error_
                    ((ID)&_OBJC_CLASS___NSRegularExpression,
                     "regularExpressionWithPattern:options:error:",&cf___p_Arabic___,1,0);
  IVar6 = _objc_msgSend(IVar4,"length");
  IVar4 = NSRegularExpression::rangeOfFirstMatchInString_options_range_
                    (IVar5,"rangeOfFirstMatchInString:options:range:",IVar4,0,0,IVar6);
  if (IVar4 != 0x7fffffffffffffff) {
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableParagraphStyle);
    IVar4 = NSMutableParagraphStyle::init(IVar4,"init");
    NSMutableParagraphStyle::setAlignment_(IVar4,"setAlignment:",2);
    uVar8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_000e8080;
    IVar5 = _objc_msgSend(IVar1,"length");
    NSMutableAttributedString::addAttribute_value_range_
              (IVar2,"addAttribute:value:range:",uVar8,IVar4,0,IVar5);
  }
  IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableParagraphStyle);
  IVar4 = NSMutableParagraphStyle::init(IVar4,"init");
  NSMutableParagraphStyle::setAlignment_(IVar4,"setAlignment:",1);
  IVar1 = _objc_msgSend(IVar1,"rangeOfString:",&cf_newline_s_);
  if (IVar1 != 0x7fffffffffffffff) {
    NSMutableAttributedString::addAttribute_value_range_
              (IVar2,"addAttribute:value:range:",uVar10,IVar3,0,IVar1);
  }
  IVar1 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  _objc_msgSend(IVar1,"setAttributedText:",IVar2);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

