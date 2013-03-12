#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
double MPI_Wtick() {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(double,MPI_WTICK,mpi_wtick,(),()){

 /* *ierr=MPI_Wtick(c_void);*/
return(MPI_Wtick());
}


