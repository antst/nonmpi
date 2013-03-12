#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
double MPI_Wtime(void) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(double,MPI_WTIME,mpi_wtime,(),()){

 /* *ierr=MPI_Wtime(c_void);*/
return(MPI_Wtime());
}


