/* Address: 00091098 | Name: instance_MBProgressHUD__commonInit | Body bytes: 360 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__commonInit(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + (long)_animationType) = 0;
  *(undefined8 *)(param_1 + (long)_mode) = 0;
  *(undefined8 *)(param_1 + (long)_margin) = 0x4034000000000000;
  *(undefined1 *)(param_1 + (long)_defaultMotionEffectsEnabled) = 1;
  IVar1 = UIColor::colorWithWhite_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0x3ff0000000000000,
                     0x3fe6666660000000);
  uVar2 = *(undefined8 *)(param_1 + (long)_contentColor);
  *(ID *)(param_1 + (long)_contentColor) = IVar1;
  _objc_msgSend(param_1,"setOpaque:",uVar2,0);
  IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  _objc_msgSend(param_1,"setAlpha:",0);
  _objc_msgSend(param_1,"setAutoresizingMask:",0x12);
  IVar1 = _objc_msgSend(param_1,"layer");
  _objc_msgSend(IVar1,"setAllowsGroupOpacity:",0);
  instance_MBProgressHUD__setupViews(param_1,"setupViews");
  instance_MBProgressHUD__updateIndicators(param_1,"updateIndicators");
  instance_MBProgressHUD__registerForNotifications(param_1,"registerForNotifications");
  return;
}

