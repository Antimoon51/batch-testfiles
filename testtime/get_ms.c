#include <time.h>
#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
#include "get_ms.h"

uint64_t get_ms(void){
    long ms;
    time_t s;
    struct timespec spec;

    clock_gettime(CLOCK_REALTIME, &spec);
    s = spec.tv_sec;
    ms = round(spec.tv_nsec / 1.0e6);
    if(ms > 999){
    s++;
    ms = 0;    
    }
    //printf("time: %"PRIdMAX".%03ld seconds since last Epoch\n", (intmax_t)s,ms);
    
    char a[20];
    char b[20];
    sprintf(a, "%ld", s);
    sprintf(b, "%ld", ms);
    strcat(a,b);
    uint64_t c = atoi(a);
    //printf("time :%ld\n",c);
    
    return c;
}
