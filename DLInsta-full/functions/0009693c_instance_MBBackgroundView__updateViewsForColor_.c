/* Address: 0009693c | Name: instance_MBBackgroundView__updateViewsForColor_ | Body bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBBackgroundView::instance_MBBackgroundView__updateViewsForColor_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  instance_MBBackgroundView__style(param_1,"style");
  IVar1 = instance_MBBackgroundView__color(param_1,"color");
  _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  return;
}

