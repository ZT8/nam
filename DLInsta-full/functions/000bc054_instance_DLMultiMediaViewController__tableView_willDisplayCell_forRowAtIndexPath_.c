/* Address: 000bc054 | Name: instance_DLMultiMediaViewController__tableView_willDisplayCell_forRowAtIndexPath_ | Body bytes: 156 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void DLMultiMediaViewController::
     instance_DLMultiMediaViewController__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  
  IVar2 = _objc_msgSend(param_3,"respondsToSelector:","setSeparatorInset:");
  puVar1 = PTR__UIEdgeInsetsZero_000e80a0;
  if ((int)IVar2 != 0) {
    _objc_msgSend(param_3,"setSeparatorInset:",*(undefined8 *)PTR__UIEdgeInsetsZero_000e80a0,
                  *(undefined8 *)(PTR__UIEdgeInsetsZero_000e80a0 + 8),
                  *(undefined8 *)(PTR__UIEdgeInsetsZero_000e80a0 + 0x10),
                  *(undefined8 *)(PTR__UIEdgeInsetsZero_000e80a0 + 0x18));
  }
  IVar2 = _objc_msgSend(param_3,"respondsToSelector:","setLayoutMargins:");
  if ((int)IVar2 != 0) {
    _objc_msgSend(param_3,"setLayoutMargins:",*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),
                  *(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18));
  }
  return;
}

