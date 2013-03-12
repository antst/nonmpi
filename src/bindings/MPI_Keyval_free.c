#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Keyval_free(int *keyval) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_KEYVAL_FREE,mpi_keyval_free,(int **keyval, FTN_INT *ierr),( keyval,ierr)){

 /* *ierr=MPI_Keyval_free(*c_keyval);/*

}

