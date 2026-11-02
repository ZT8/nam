/* Address: 000b7214 | Name: instance_DLSSProfileViewController__centerContentInScrollViewIfNeeded | Body bytes: 528 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::
     instance_DLSSProfileViewController__centerContentInScrollViewIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  double in_d1;
  double dVar2;
  double in_d2;
  double in_d3;
  double dVar3;
  double dVar4;
  
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"contentSize");
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"bounds");
  dVar3 = 0.0;
  dVar4 = 0.0;
  if (extraout_d0 < in_d2) {
    IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
    _objc_msgSend(IVar1,"bounds");
    IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
    _objc_msgSend(IVar1,"contentSize");
    in_d1 = 0.5;
    dVar4 = (in_d2 - extraout_d0_00) * 0.5;
  }
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"contentSize");
  dVar2 = in_d1;
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"bounds");
  if (in_d1 < in_d3) {
    IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
    _objc_msgSend(IVar1,"bounds");
    IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
    _objc_msgSend(IVar1,"contentSize");
    dVar3 = (in_d3 - dVar2) * 0.5;
  }
  IVar1 = instance_DLSSProfileViewController__scrollView(param_1,"scrollView");
  _objc_msgSend(IVar1,"setContentInset:",dVar3,dVar4,dVar3,dVar4);
  return;
}

