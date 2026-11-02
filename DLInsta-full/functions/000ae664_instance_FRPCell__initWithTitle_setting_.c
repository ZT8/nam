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

