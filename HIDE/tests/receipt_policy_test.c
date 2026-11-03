#include "../src/HIDEReceiptPolicy.h"
#include <assert.h>
#include <stdio.h>
int main(void){
 uint8_t a[32]={1,2,3},b[32]={1,2,3};
 assert(HIDEReceiptPermitMatches("dm:A","dm:A",a,32,b,32,100,130));
 assert(!HIDEReceiptPermitMatches("dm:A","dm:B",a,32,b,32,100,130));
 assert(!HIDEReceiptPermitMatches("story:1","story:2",a,32,b,32,100,130));
 assert(!HIDEReceiptPermitMatches("story:1","dm:1",a,32,b,32,100,130));
 b[31]=7;assert(!HIDEReceiptPermitMatches("dm:A","dm:A",a,32,b,32,100,130));b[31]=0;
 assert(!HIDEReceiptPermitMatches("dm:A","dm:A",a,31,b,32,100,130));
 assert(!HIDEReceiptPermitMatches("dm:A","dm:A",a,32,b,32,131,130));
 assert(!HIDEReceiptPermitMatches("dm:A","dm:A",a,32,b,32,NAN,130));
 assert(!HIDEReceiptPermitMatches("dm:A","dm:A",a,32,b,32,100,NAN));
 assert(!HIDEReceiptPermitMatches(NULL,"dm:A",a,32,b,32,100,130));
 assert(!HIDEReceiptPermitMatches("dm:A","dm:A",NULL,32,b,32,100,130));
 puts("PASS: receipt target isolation, request-body binding, digest sizes, expiry, invalid clocks and missing grants");
}
