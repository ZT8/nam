/* Address: 000b7570 | Name: instance_DLMultiMediaOptionCell__initWithStyle_reuseIdentifier_ | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMultiMediaOptionCell;
  local_30 = param_1;
  self = UITableViewCell::initWithStyle_reuseIdentifier_
                   ((ID)&local_30,"initWithStyle:reuseIdentifier:");
  if (self != 0) {
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
    UITableViewCell::setBackgroundColor_(self,"setBackgroundColor:",IVar1);
    UITableViewCell::setupViews(self,"setupViews");
  }
  return self;
}

