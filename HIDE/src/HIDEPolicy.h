#ifndef HIDE_POLICY_H
#define HIDE_POLICY_H

#include <stdbool.h>

// The privacy cover is presentation state. It must never grant authentication.
typedef struct {
    bool authenticated;
    bool hasBackgroundTime;
    double backgroundTime;
} HIDELockState;

static inline void HIDELockDidAuthenticate(HIDELockState *state, bool success) {
    state->authenticated = success;
}

static inline void HIDELockDidBackground(HIDELockState *state, double now) {
    state->hasBackgroundTime = true;
    state->backgroundTime = now;
}

static inline bool HIDELockRequiresAuthentication(const HIDELockState *state,
                                                 bool enabled, double now,
                                                 double delay) {
    if (!enabled) return false;
    if (!state->authenticated) return true;
    if (!state->hasBackgroundTime) return false;
    double elapsed = now - state->backgroundTime;
    // A backwards wall-clock change must not extend the unlocked interval.
    return elapsed < 0 || elapsed >= (delay > 0 ? delay : 0);
}

static inline void HIDELockDidActivate(HIDELockState *state) {
    state->hasBackgroundTime = false;
}

static inline bool HIDEHTTPStatusIsSuccess(long status) {
    return status >= 200 && status < 300;
}

#endif
