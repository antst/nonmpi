#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Finalize() {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_FINALIZE,mpi_finalize,(FTN_INT *ierr),(ierr)){

*ierr=0;
}


