/* Address: 000a92a4 | Name: instance_DLMaxAlertViewController__presentationControllerForPresentedViewController_presentingViewController_sourceViewController_ | Body bytes: 120 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID DLMaxAlertViewController::
   instance_DLMaxAlertViewController__presentationControllerForPresentedViewController_presentingViewController_sourceViewController_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(&objc::class_t::MyCustomPresentationController);
  IVar1 = _objc_msgSend(IVar1,"initWithPresentedViewController:presentingViewController:",param_3,
                        param_4);
  return IVar1;
}

