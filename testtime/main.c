#include <time.h>
#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
//#include "get_ms.h"

int64_t get_ms(void){
    struct timespec tms;
    clock_gettime(CLOCK_REALTIME, &tms);
    
    int64_t ms = tms.tv_sec * 1000000;
    ms += tms.tv_nsec / 1000000;

    if(tms.tv_nsec % 1000000 >= 500){
        ++ms;    
    }
    return ms;
}



int64_t get_us(void){
    struct timespec tms;
    clock_gettime(CLOCK_REALTIME, &tms);
    
    int64_t us = tms.tv_sec * 1000000;
    us += tms.tv_nsec / 1000;

    if(tms.tv_nsec % 1000 >= 500){
        ++us;    
    }
    return us;
}


int main(void){
    
    int64_t ms = get_ms();
    int64_t us = get_us();

    printf("time ms: %"PRId64"\n",ms);
    printf("time us: %"PRId64"\n",us);

    return 0;
}
