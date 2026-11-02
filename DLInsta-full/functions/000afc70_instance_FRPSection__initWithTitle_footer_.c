/* Address: 000afc70 | Name: instance_FRPSection__initWithTitle_footer_ | Body bytes: 220 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPSection::instance_FRPSection__initWithTitle_footer_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::FRPSection;
  local_40 = param_1;
  self = UITableViewCell::init((ID)&local_40,"init");
  if (self != 0) {
    UITableViewCell::setHeaderTitle_(self,"setHeaderTitle:",param_3);
    UITableViewCell::setFooterTitle_(self,"setFooterTitle:",param_4);
    IVar1 = NSMutableArray::new((ID)&_OBJC_CLASS___NSMutableArray,"new");
    UITableViewCell::setCells_(self,"setCells:",IVar1);
  }
  return self;
}

