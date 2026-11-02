/* Address: 000830a8 | Name: FUN_000830a8 | Body bytes: 240 */

void FUN_000830a8(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint local_54;
  
  if (param_1 != 0) {
    lVar3 = param_1;
    do {
      pvVar1 = (void *)_class_copyMethodList(lVar3,&local_54);
      if (local_54 != 0) {
        uVar5 = 0;
        do {
          lVar2 = _method_getName(*(undefined8 *)((long)pvVar1 + uVar5 * 8));
          if (lVar2 == param_2) {
            if (lVar3 == param_1) {
              uVar4 = _method_getImplementation(*(undefined8 *)((long)pvVar1 + uVar5 * 8));
              *param_4 = uVar4;
              uVar4 = _method_setImplementation(*(undefined8 *)((long)pvVar1 + uVar5 * 8),param_3);
              *param_4 = uVar4;
            }
            else {
              uVar4 = _method_getTypeEncoding();
              _class_addMethod(param_1,param_2,param_3,uVar4);
            }
            _free(pvVar1);
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_54);
      }
      _free(pvVar1);
      lVar3 = _class_getSuperclass(lVar3);
    } while (lVar3 != 0);
  }
  return;
}

