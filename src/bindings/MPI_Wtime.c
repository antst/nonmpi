#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"
#include <sys/time.h>

/*C Bindings*/
double MPI_Wtime(void) {
    struct timeval time;
    gettimeofday(&time,(struct timezone *)0);
    return(time.tv_sec+time.tv_usec*1.e-6);
}

/* Fortran Bindings */
NOMPI_FORTRAN(double,MPI_WTIME,mpi_wtime,(),()){
return(MPI_Wtime());
}


