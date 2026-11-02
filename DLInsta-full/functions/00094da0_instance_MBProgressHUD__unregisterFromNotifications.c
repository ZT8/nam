/* Address: 00094da0 | Name: instance_MBProgressHUD__unregisterFromNotifications | Body bytes: 96 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__unregisterFromNotifications(ID param_1,SEL param_2)

{
  ID self;
  
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::removeObserver_name_object_
            (self,"removeObserver:name:object:",param_1,
             *(undefined8 *)PTR__UIApplicationDidChangeStatusBarOrientationNotification_000e8098,0);
  return;
}

