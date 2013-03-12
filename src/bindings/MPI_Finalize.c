#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Finalize(void) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_FINALIZE,mpi_finalize,(*void, FTN_INT *ierr),( void,ierr)){

 /* *ierr=MPI_Finalize(c_void);/*

}

