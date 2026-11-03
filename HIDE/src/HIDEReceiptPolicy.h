#ifndef HIDE_RECEIPT_POLICY_H
#define HIDE_RECEIPT_POLICY_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
// A grant belongs to one target and one immutable request body, for a bounded time.
static inline bool HIDEReceiptPermitMatches(const char *granted,const char *requested,const uint8_t *expected,size_t expectedSize,const uint8_t *actual,size_t actualSize,double now,double expires) {
    return granted && requested && expected && actual && expectedSize==32 && actualSize==32 &&
        isfinite(now) && isfinite(expires) && now>=0 && expires>=now &&
        strcmp(granted,requested)==0 && memcmp(expected,actual,32)==0;
}
#endif
