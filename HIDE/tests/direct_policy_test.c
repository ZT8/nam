#include "../src/HIDEDirectPolicy.h"
#include <assert.h>
#include <stdio.h>
int main(void) {
    assert(HIDEDirectIdentityMatches("accountA","42","accountA","42"));
    assert(!HIDEDirectIdentityMatches("accountA","42","accountB","42"));
    assert(!HIDEDirectIdentityMatches("accountA","42","accountA","43"));
    assert(!HIDEDirectIdentityMatches("","42","","42"));
    assert(!HIDEDirectIdentityMatches(NULL,"42","accountA","42"));
    assert(HIDEDirectPermitUnexpired(105,100,115));
    assert(!HIDEDirectPermitUnexpired(116,100,115));
    assert(!HIDEDirectPermitUnexpired(99,100,115));
    assert(!HIDEDirectPermitUnexpired(105,100,200));
    assert(!HIDEDirectPermitUnexpired(NAN,100,115));
    assert(!HIDEDirectPermitUnexpired(105,100,INFINITY));
    assert(HIDEDirectPreserveRemoval(true,0,true,100,0));
    assert(!HIDEDirectPreserveRemoval(true,0,true,100,200)); // Own unsend is allowed.
    assert(HIDEDirectPreserveRemoval(true,0,true,200,200)); // Expired exemption.
    assert(!HIDEDirectPreserveRemoval(false,0,true,100,0));
    assert(!HIDEDirectPreserveRemoval(true,0,false,100,0));
    assert(!HIDEDirectPreserveRemoval(true,1,true,100,0)); // Unknown reason passes through.
    assert(!HIDEDirectPreserveRemoval(true,0,true,NAN,0));
    puts("Direct account/thread binding, bounded permits and own-unsend policy: passed");
}
