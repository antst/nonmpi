#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int double MPI_Wtime(void) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_WTIME,mpi_wtime,(*void, FTN_INT *ierr),( void,ierr)){

 /* *ierr=MPI_Wtime(c_void);/*

}

