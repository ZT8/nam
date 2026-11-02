/* Address: 000b99fc | Name: instance_DLMultiMediaViewController__viewDidLoad | Body bytes: 568 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__viewDidLoad
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  ID IVar4;
  double in_d2;
  double in_d3;
  CGSize CVar5;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLMultiMediaViewController;
  local_40 = param_1;
  DLPopupViewController::instance_DLPopupViewController__viewDidLoad((ID)&local_40,"viewDidLoad");
  IVar2 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  _objc_msgSend(IVar2,"sortUsingComparator:",&PTR___NSConcreteGlobalBlock_000e9d48);
  instance_DLMultiMediaViewController__setupMediaCollectionView(param_1,"setupMediaCollectionView");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  _objc_msgSend(IVar2,"layoutIfNeeded");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  _objc_msgSend(IVar2,"bounds");
  CVar5.field1_0x8 = in_d3;
  CVar5.field0_0x0 = in_d2;
  instance_DLMultiMediaViewController__updateCollectionViewForSize_
            (param_1,"updateCollectionViewForSize:",CVar5);
  instance_DLMultiMediaViewController__setupOptionTableView(param_1,"setupOptionTableView");
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::objectForKey_(IVar2,"objectForKey:",&cf_DLAlertStoriesInfo);
  if (IVar2 == 0) {
    dVar3 = _dispatch_time(0,2000000000);
    puVar1 = PTR___dispatch_main_q_000e8268;
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    _dispatch_after(dVar3,puVar1,&PTR___NSConcreteGlobalBlock_000e9d68);
    IVar2 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar4 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",1);
    NSUserDefaults::setValue_forKey_(IVar2,"setValue:forKey:",IVar4,&cf_DLAlertStoriesInfo);
    IVar2 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    NSUserDefaults::synchronize(IVar2,"synchronize");
  }
  return;
}

