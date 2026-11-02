/* Address: 00091aa0 | Name: instance_MBProgressHUD__handleMinShowTimer_ | Body bytes: 56 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__handleMinShowTimer_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = instance_MBProgressHUD__useAnimation(param_1,"useAnimation");
  instance_MBProgressHUD__hideUsingAnimation_(param_1,"hideUsingAnimation:",bVar1);
  return;
}

