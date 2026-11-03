#ifndef HIDE_DIRECT_POLICY_H
#define HIDE_DIRECT_POLICY_H
#include <stdbool.h>
#include <string.h>
#include <math.h>
// Shared by native Direct hooks and host tests. Empty identities never authorize.
static inline bool HIDEDirectIdentityMatches(const char *account,const char *thread,const char *otherAccount,const char *otherThread) {
    return account && *account && thread && *thread && otherAccount && *otherAccount && otherThread && *otherThread &&
        strcmp(account,otherAccount)==0 && strcmp(thread,otherThread)==0;
}
static inline bool HIDEDirectPermitUnexpired(double now,double issued,double expires) {
    return isfinite(now) && isfinite(issued) && isfinite(expires) && now>=issued && issued>=0 && expires>=now && expires-issued<=15;
}
static inline bool HIDEDirectPreserveRemoval(bool enabled,long long reason,bool identified,double now,double ownUntil) {
    return enabled && reason==0 && identified && isfinite(now) && now>=0 && isfinite(ownUntil) && ownUntil<=now;
}
#endif
