#ifndef HIDE_MEDIA_POLICY_H
#define HIDE_MEDIA_POLICY_H
#include <math.h>
#include <stdbool.h>
typedef struct { double scale, x, y, width, height; } HIDEFit;
static inline bool HIDEAspectFit(double sourceWidth,double sourceHeight,double width,double height,HIDEFit *fit) {
    if (!fit || !isfinite(sourceWidth) || !isfinite(sourceHeight) || !isfinite(width) || !isfinite(height) ||
        sourceWidth<=0 || sourceHeight<=0 || width<=0 || height<=0) return false;
    fit->scale=fmin(width/sourceWidth,height/sourceHeight);
    fit->width=sourceWidth*fit->scale;fit->height=sourceHeight*fit->scale;
    fit->x=(width-fit->width)/2;fit->y=(height-fit->height)/2;return true;
}
static inline bool HIDEVoiceImportDurationAllowed(double seconds) { return isfinite(seconds) && seconds>0 && seconds<=300; }
#endif
