/* Address: 0009528c | Name: instance_MBProgressHUD___cxx_destruct | Body bytes: 424 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + (long)_progressObjectDisplayLink);
  _objc_destroyWeak(param_1 + (long)_hideDelayTimer);
  _objc_destroyWeak(param_1 + (long)_minShowTimer);
  _objc_destroyWeak(param_1 + (long)_graceTimer);
  *(undefined8 *)(param_1 + (long)_bottomSpacer) = 0;
  *(undefined8 *)(param_1 + (long)_topSpacer) = 0;
  *(undefined8 *)(param_1 + (long)_bezelConstraints) = 0;
  *(undefined8 *)(param_1 + (long)_paddingConstraints) = 0;
  *(undefined8 *)(param_1 + (long)_showStarted) = 0;
  *(undefined8 *)(param_1 + (long)_indicator) = 0;
  *(undefined8 *)(param_1 + (long)_hideButton) = 0;
  *(undefined8 *)(param_1 + (long)_button) = 0;
  *(undefined8 *)(param_1 + (long)_detailsLabel) = 0;
  *(undefined8 *)(param_1 + (long)_label) = 0;
  *(undefined8 *)(param_1 + (long)_customView) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundView) = 0;
  *(undefined8 *)(param_1 + (long)_bezelView) = 0;
  *(undefined8 *)(param_1 + (long)_progressObject) = 0;
  *(undefined8 *)(param_1 + (long)_contentColor) = 0;
  *(undefined8 *)(param_1 + (long)_completionBlock) = 0;
  _objc_destroyWeak(param_1 + (long)_delegate);
  return;
}

