#include "../src/HIDEPolicy.h"
#include <assert.h>
#include <stdio.h>

int main(void) {
    HIDELockState state = {0};
    // Cold launch: showing/dismissing a privacy cover cannot authenticate.
    assert(HIDELockRequiresAuthentication(&state, true, 100, 60));
    HIDELockDidBackground(&state, 100);
    HIDELockDidActivate(&state);
    assert(HIDELockRequiresAuthentication(&state, true, 101, 60));
    HIDELockDidAuthenticate(&state, false);
    assert(HIDELockRequiresAuthentication(&state, true, 101, 60));
    HIDELockDidAuthenticate(&state, true);
    assert(!HIDELockRequiresAuthentication(&state, true, 101, 60));
    // Real background/foreground cycles on both sides of the configured delay.
    HIDELockDidBackground(&state, 110);
    assert(!HIDELockRequiresAuthentication(&state, true, 169, 60));
    assert(HIDELockRequiresAuthentication(&state, true, 170, 60));
    HIDELockDidActivate(&state);
    HIDELockDidBackground(&state, 200);
    assert(HIDELockRequiresAuthentication(&state, true, 200, 0));
    // Cancelling the next challenge must keep the application locked.
    HIDELockDidAuthenticate(&state, false);
    HIDELockDidActivate(&state);
    assert(HIDELockRequiresAuthentication(&state, true, 201, 60));
    assert(!HIDELockRequiresAuthentication(&state, false, 201, 60));
    // A clock adjustment backwards must not prolong an unlocked session.
    HIDELockDidAuthenticate(&state, true);
    HIDELockDidBackground(&state, 300);
    assert(HIDELockRequiresAuthentication(&state, true, 299, 60));
    // HTTP error bodies must not be treated as successfully downloaded media.
    assert(HIDEHTTPStatusIsSuccess(200));
    assert(HIDEHTTPStatusIsSuccess(206));
    assert(!HIDEHTTPStatusIsSuccess(302));
    assert(!HIDEHTTPStatusIsSuccess(403));
    assert(!HIDEHTTPStatusIsSuccess(404));
    assert(!HIDEHTTPStatusIsSuccess(500));
    puts("PASS: cold launch, authentication failure, background delay, immediate lock, disabled lock, clock rollback, HTTP error statuses");
    return 0;
}
