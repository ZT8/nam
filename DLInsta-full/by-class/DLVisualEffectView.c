/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLVisualEffectView initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 000ad380 | Name: instance_DLVisualEffectView__initWithFrame_ | Body bytes: 404 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID DLVisualEffectView::instance_DLVisualEffectView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ID local_f8;
  class_t *pcStack_f0;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  pcStack_f0 = &objc::class_t::DLVisualEffectView;
  local_f8 = param_1;
  self = UIVisualEffectView::initWithFrame_
                   ((ID)&local_f8,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    IVar1 = UIBlurEffect::effectWithStyle_((ID)&_OBJC_CLASS___UIBlurEffect,"effectWithStyle:",1);
    UIVisualEffectView::setEffect_(self,"setEffect:",IVar1);
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    IVar1 = UIVisualEffectView::subviews(self,"subviews");
    IVar2 = UIVisualEffectView::countByEnumeratingWithState_objects_count_
                      (IVar1,"countByEnumeratingWithState:objects:count:",&local_140,auStack_e8,0x10
                      );
    if (IVar2 != 0) {
      lVar3 = *local_130;
      do {
        IVar4 = 0;
        do {
          if (*local_130 != lVar3) {
            _objc_enumerationMutation(IVar1);
          }
          _objc_msgSend(*(ID *)(lStack_138 + IVar4 * 8),"setBackgroundColor:",0);
          IVar4 = IVar4 + 1;
        } while (IVar2 != IVar4);
        IVar2 = UIVisualEffectView::countByEnumeratingWithState_objects_count_
                          (IVar1,"countByEnumeratingWithState:objects:count:",&local_140,auStack_e8,
                           0x10);
      } while (IVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}

