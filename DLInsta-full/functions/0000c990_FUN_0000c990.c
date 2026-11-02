/* Address: 0000c990 | Name: FUN_0000c990 | Body bytes: 1088 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8
FUN_0000c990(ID param_1,undefined8 param_2,undefined8 param_3,ID param_4,undefined8 param_5)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  code *pcVar4;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_ShowLikeViewCount);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      IVar1 = NSNumberFormatter::new((ID)&_OBJC_CLASS___NSNumberFormatter,"new");
      NSNumberFormatter::setNumberStyle_(IVar1,"setNumberStyle:",1);
      IVar3 = _objc_msgSend(param_1,"viewCount");
      IVar3 = _objc_msgSend(IVar3,"integerValue");
      if ((long)IVar3 < 1) {
        IVar3 = _objc_msgSend(param_1,"likeCount");
        if ((long)IVar3 < 1) {
          IVar1 = 0;
        }
        else {
          IVar3 = _objc_msgSend(param_1,"likeCount");
          IVar3 = NSNumber::numberWithInteger_
                            ((ID)&_OBJC_CLASS___NSNumber,"numberWithInteger:",(long)(int)IVar3);
          NSNumberFormatter::stringFromNumber_(IVar1,"stringFromNumber:",IVar3);
          IVar1 = NSString::stringWithFormat_
                            ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___likes);
        }
      }
      else {
        IVar3 = _objc_msgSend(param_1,"viewCount");
        IVar3 = _objc_msgSend(IVar3,"integerValue");
        IVar3 = NSNumber::numberWithInteger_
                          ((ID)&_OBJC_CLASS___NSNumber,"numberWithInteger:",(long)(int)IVar3);
        NSNumberFormatter::stringFromNumber_(IVar1,"stringFromNumber:",IVar3);
        IVar3 = _objc_msgSend(param_1,"likeCount");
        IVar3 = NSNumber::numberWithInteger_
                          ((ID)&_OBJC_CLASS___NSNumber,"numberWithInteger:",(long)(int)IVar3);
        NSNumberFormatter::stringFromNumber_(IVar1,"stringFromNumber:",IVar3);
        IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__);
      }
      pcVar4 = DAT_000ff968;
      if (DAT_000ff968 == (code *)0x0) {
        pcVar4 = (code *)_class_getMethodImplementation
                                   (DAT_000ff960,"buildLikeCellStyledStringWithIcon:andText:style:")
        ;
      }
      if (IVar1 != 0) {
        param_4 = IVar1;
      }
      uVar2 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  pcVar4 = DAT_000ff968;
  if (DAT_000ff968 == (code *)0x0) {
    pcVar4 = (code *)_class_getMethodImplementation
                               (DAT_000ff960,"buildLikeCellStyledStringWithIcon:andText:style:");
  }
  uVar2 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

