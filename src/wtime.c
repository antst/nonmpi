#include <sys/time.h>
#include "nompi.h"

double NOMPI_Wtime(){
    struct timeval time;
    gettimeofday(&time,(struct timezone *)0);
    return(time.tv_sec+time.tv_usec*1.e-6);
  }
