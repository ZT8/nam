/* Address: 00094d38 | Name: instance_MBProgressHUD__registerForNotifications | Body bytes: 104 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__registerForNotifications(ID param_1,SEL param_2)

{
  ID self;
  
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::addObserver_selector_name_object_
            (self,"addObserver:selector:name:object:",param_1,"statusBarOrientationDidChange:",
             *(undefined8 *)PTR__UIApplicationDidChangeStatusBarOrientationNotification_000e8098,0);
  return;
}

