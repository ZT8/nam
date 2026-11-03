#include "../src/HIDEMediaPolicy.h"
#include <assert.h>
#include <stdio.h>
static int near(double a,double b) { return fabs(a-b)<1e-8; }
int main(void) {
    HIDEFit fit;
    assert(HIDEAspectFit(1080,1920,1080,1920,&fit));
    assert(near(fit.scale,1) && near(fit.x,0) && near(fit.y,0));
    assert(HIDEAspectFit(1920,1080,1080,1920,&fit));
    assert(near(fit.width,1080) && near(fit.height,607.5) && near(fit.y,656.25));
    assert(HIDEAspectFit(512,512,1080,1920,&fit));
    assert(near(fit.width,1080) && near(fit.height,1080) && near(fit.y,420));
    // A rotated 1280x720 track has a 720x1280 display bounding box.
    assert(HIDEAspectFit(720,1280,1080,1920,&fit));
    assert(near(fit.scale,1.5) && near(fit.x,0) && near(fit.y,0));
    for(int w=1;w<2048;w+=71) for(int h=1;h<2048;h+=79) {
        assert(HIDEAspectFit(w,h,1080,1920,&fit));
        assert(fit.x>=-1e-8 && fit.y>=-1e-8 && fit.width<=1080+1e-8 && fit.height<=1920+1e-8);
        assert(near(fit.width/fit.height,(double)w/h));
    }
    assert(!HIDEAspectFit(0,1080,1080,1920,&fit));
    assert(!HIDEAspectFit(-1,1080,1080,1920,&fit));
    assert(!HIDEAspectFit(NAN,1080,1080,1920,&fit));
    assert(!HIDEAspectFit(1080,INFINITY,1080,1920,&fit));
    assert(!HIDEAspectFit(1080,1920,1080,1920,NULL));
    assert(!HIDEVoiceImportDurationAllowed(0));
    assert(!HIDEVoiceImportDurationAllowed(-1));
    assert(!HIDEVoiceImportDurationAllowed(NAN));
    assert(!HIDEVoiceImportDurationAllowed(INFINITY));
    assert(HIDEVoiceImportDurationAllowed(0.01));
    assert(HIDEVoiceImportDurationAllowed(300));
    assert(!HIDEVoiceImportDurationAllowed(300.01));
    puts("PASS: portrait, landscape, square, rotated bounds, 754 aspect-fit combinations, invalid dimensions, voice duration boundaries");
    return 0;
}
