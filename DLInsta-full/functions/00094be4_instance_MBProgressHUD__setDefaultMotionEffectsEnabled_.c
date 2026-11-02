/* Address: 00094be4 | Name: instance_MBProgressHUD__setDefaultMotionEffectsEnabled_ | Body bytes: 40 */

/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setDefaultMotionEffectsEnabled_
               (ID param_1,SEL param_2,bool param_3)

{
  if (*(byte *)(param_1 + (long)_defaultMotionEffectsEnabled) == param_3) {
    return;
  }
  *(char *)(param_1 + (long)_defaultMotionEffectsEnabled) = (char)param_3;
  instance_MBProgressHUD__updateBezelMotionEffects(param_1,"updateBezelMotionEffects");
  return;
}

