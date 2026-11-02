/* Address: 0009fef8 | Name: instance_DLAuthenticationView__setAuthenticated_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void DLAuthenticationView::instance_DLAuthenticationView__setAuthenticated_
               (ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_authenticated) = (char)param_3;
  return;
}

