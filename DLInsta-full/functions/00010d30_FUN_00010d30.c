/* Address: 00010d30 | Name: FUN_00010d30 | Body bytes: 72 */

void FUN_00010d30(long param_1)

{
  _objc_msgSend(*(ID *)(param_1 + 0x20),"performSelector:withObject:",
                "controlsOverlayControllerDidTapLikeButton:",0);
  return;
}

