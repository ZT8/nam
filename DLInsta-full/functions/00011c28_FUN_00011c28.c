/* Address: 00011c28 | Name: FUN_00011c28 | Body bytes: 264 */

void FUN_00011c28(void)

{
  long lVar1;
  void *pvVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_44;
  
  lVar1 = _objc_getClass("IGAppDelegate");
  DAT_000ffb40 = _class_getSuperclass();
  if (lVar1 != 0) {
    lVar4 = lVar1;
    do {
      pvVar2 = (void *)_class_copyMethodList(lVar4,&local_44);
      if (local_44 != 0) {
        uVar6 = 0;
        do {
          pcVar3 = (char *)_method_getName(*(undefined8 *)((long)pvVar2 + uVar6 * 8));
          if (pcVar3 == "application:didFinishLaunchingWithOptions:") {
            if (lVar4 == lVar1) {
              DAT_000ffb48 = _method_getImplementation(*(undefined8 *)((long)pvVar2 + uVar6 * 8));
              DAT_000ffb48 = _method_setImplementation
                                       (*(undefined8 *)((long)pvVar2 + uVar6 * 8),FUN_00011d30);
            }
            else {
              uVar5 = _method_getTypeEncoding();
              _class_addMethod(lVar1,"application:didFinishLaunchingWithOptions:",FUN_00011d30,uVar5
                              );
            }
            _free(pvVar2);
            return;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_44);
      }
      _free(pvVar2);
      lVar4 = _class_getSuperclass(lVar4);
    } while (lVar4 != 0);
  }
  return;
}

