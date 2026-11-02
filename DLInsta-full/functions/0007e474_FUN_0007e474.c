/* Address: 0007e474 | Name: FUN_0007e474 | Body bytes: 80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007e474(void)

{
  ID self;
  
  self = DLHelper::class_DLHelper__topMostController
                   ((ID)&objc::class_t::DLHelper,"topMostController");
  _objc_msgSend(self,"dismissViewControllerAnimated:completion:",1,0);
  return 0;
}

