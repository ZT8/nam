/* Address: 000a7b18 | Name: instance_DLMaxAlertViewController__viewWillLayoutSubviews | Body bytes: 764 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__viewWillLayoutSubviews
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  double in_d2;
  double in_d3;
  double dVar2;
  double dVar3;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::DLMaxAlertViewController;
  local_70 = param_1;
  UIViewController::viewWillLayoutSubviews((ID)&local_70,"viewWillLayoutSubviews");
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"bounds");
  dVar3 = in_d3 + -128.0;
  IVar1 = instance_DLMaxAlertViewController__containerViewHeightConstraint
                    (param_1,"containerViewHeightConstraint");
  _objc_msgSend(IVar1,"setActive:",0);
  IVar1 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintLessThanOrEqualToConstant:",dVar3);
  instance_DLMaxAlertViewController__setContainerViewHeightConstraint_
            (param_1,"setContainerViewHeightConstraint:",IVar1);
  IVar1 = instance_DLMaxAlertViewController__containerViewHeightConstraint
                    (param_1,"containerViewHeightConstraint");
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMaxAlertViewController__containerViewWidthConstraint
                    (param_1,"containerViewWidthConstraint");
  _objc_msgSend(IVar1,"setActive:",0);
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"frame");
  dVar2 = in_d3;
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"frame");
  dVar3 = in_d2;
  IVar1 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  self = _objc_msgSend(param_1,"view");
  _objc_msgSend(self,"frame");
  if (in_d3 <= in_d2) {
    dVar3 = dVar2;
  }
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",dVar3 + -64.0);
  instance_DLMaxAlertViewController__setContainerViewWidthConstraint_
            (param_1,"setContainerViewWidthConstraint:",IVar1);
  IVar1 = instance_DLMaxAlertViewController__containerViewWidthConstraint
                    (param_1,"containerViewWidthConstraint");
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

