/* Address: 0004e798 | Name: FUN_0004e798 | Body bytes: 1392 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004e798(long param_1)

{
  bool bVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ulong uVar7;
  byte *pbVar8;
  ID IVar9;
  long lVar10;
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
  IVar3 = _objc_msgSend(*(ID *)(param_1 + 0x20),"messageMetadata");
  IVar3 = _objc_msgSend(IVar3,"key");
  IVar3 = _objc_msgSend(IVar3,"serverId");
  IVar4 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar4 = _objc_msgSend(IVar4,"objectAtIndex:",0);
  if (((DAT_000ffec0 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffec0), iVar2 != 0)) {
    DAT_000ffeba = '\x01';
    uRam00000000000ffeb0 = 0x820c0947ab515992;
    _DAT_000ffea8 = 0xae090053da504f9a;
    DAT_000ffeb8 = 0x2b87;
    ___cxa_atexit(PTR_FUN_000e8180,&DAT_000ffea8,0);
    ___cxa_guard_release(&DAT_000ffec0);
  }
  if (DAT_000ffeba != '\0') {
    uVar7 = 0;
    pbVar8 = &DAT_000ffea8;
    do {
      *pbVar8 = *pbVar8 ^ (byte)(0xf165653785232bf3 >> (uVar7 & 0x38));
      uVar7 = uVar7 + 8;
      pbVar8 = pbVar8 + 1;
    } while (uVar7 != 0x90);
    DAT_000ffeba = '\0';
  }
  IVar5 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffea8,4);
  IVar4 = _objc_msgSend(IVar4,"stringByAppendingPathComponent:",IVar5);
  IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar4 = NSMutableArray::initWithContentsOfFile_(IVar5,"initWithContentsOfFile:",IVar4);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar5 = NSMutableArray::countByEnumeratingWithState_objects_count_
                    (IVar4,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,0x10);
  if (IVar5 == 0) {
    self = 0;
  }
  else {
    lVar10 = *local_120;
    do {
      IVar9 = 0;
      do {
        if (*local_120 != lVar10) {
          _objc_enumerationMutation(IVar4);
        }
        self = *(ID *)(lStack_128 + IVar9 * 8);
        IVar6 = _objc_msgSend(self,"objectForKeyedSubscript:",&cf_id);
        IVar6 = _objc_msgSend(IVar6,"isEqualToString:",IVar3);
        if ((IVar6 & 1) != 0) goto LAB_0004ea5c;
        IVar9 = IVar9 + 1;
      } while (IVar5 != IVar9);
      IVar5 = NSMutableArray::countByEnumeratingWithState_objects_count_
                        (IVar4,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                         0x10);
    } while (IVar5 != 0);
    self = 0;
  }
LAB_0004ea5c:
  IVar3 = _objc_msgSend(self,"objectForKeyedSubscript:",&cf_date);
  if (IVar3 != 0) {
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSDateFormatter);
    IVar4 = NSDateFormatter::init(IVar4,"init");
    NSDateFormatter::setDateFormat_(IVar4,"setDateFormat:",&cf_EEEE_dMMMMyyyy_h_mma);
    bVar1 = DLHelper::class_DLHelper__isDeviceLanguageArabic
                      ((ID)&objc::class_t::DLHelper,"isDeviceLanguageArabic");
    if (bVar1 != 0) {
      IVar5 = _objc_alloc(&_OBJC_CLASS___NSLocale);
      IVar5 = NSLocale::initWithLocaleIdentifier_(IVar5,"initWithLocaleIdentifier:",&cf_ar);
      NSDateFormatter::setLocale_(IVar4,"setLocale:",IVar5);
    }
    IVar3 = NSDateFormatter::stringFromDate_(IVar4,"stringFromDate:",IVar3);
    IVar4 = _objc_alloc(&objc::class_t::DLInfoSheetViewController);
    IVar5 = FUN_0008c218(&cf_DIRECT_MESSAGE_DELETE_DATE);
    IVar3 = DLInfoSheetViewController::instance_DLInfoSheetViewController__initWithTitle_info_
                      (IVar4,"initWithTitle:info:",IVar5,IVar3);
    IVar4 = _objc_alloc(&objc::class_t::DLInfoSheetControllerDelegate);
    IVar4 = _objc_msgSend(IVar4,"init");
    _objc_msgSend(IVar3,"setModalPresentationStyle:",4);
    _objc_msgSend(IVar3,"setTransitioningDelegate:",IVar4);
    IVar4 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    _objc_msgSend(IVar4,"presentViewController:animated:completion:",IVar3,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

