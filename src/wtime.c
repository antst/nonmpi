#include  "wtime.h"
#include <sys/time.h>
#include "c_ftn_defs.h"
FORTRAN(void ,WTIME,wtime,(double *val),(val))
  {
    struct timeval time;
    gettimeofday(&time,(struct timezone *)0);
    *val=time.tv_sec+time.tv_usec*1.e-6;
  }
