/* Address: 000b6730 | Name: instance_DLSSProfileViewController__prepareImageToDownload | Body bytes: 88 */

/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__prepareImageToDownload
               (ID param_1,SEL param_2)

{
  undefined4 in_w3;
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_000e80d8;
  local_30 = 0xc2000000;
  local_28 = FUN_000b6788;
  puStack_20 = &DAT_000e9cf8;
  local_18 = param_1;
  instance_DLSSProfileViewController__downloadImage_(param_1,"downloadImage:",(ID)&local_38,in_w3);
  return;
}

