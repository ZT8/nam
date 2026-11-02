/* Address: 00091a48 | Name: instance_MBProgressHUD__handleGraceTimer_ | Body bytes: 88 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__handleGraceTimer_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = instance_MBProgressHUD__hasFinished(param_1,"hasFinished");
  if ((bVar1 & 1) == 0) {
    bVar1 = instance_MBProgressHUD__useAnimation(param_1,"useAnimation");
    instance_MBProgressHUD__showUsingAnimation_(param_1,"showUsingAnimation:",bVar1);
    return;
  }
  return;
}

