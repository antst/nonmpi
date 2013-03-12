#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int double MPI_Wtick(void) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_WTICK,mpi_wtick,(*void, FTN_INT *ierr),( void,ierr)){

 /* *ierr=MPI_Wtick(c_void);/*

}

