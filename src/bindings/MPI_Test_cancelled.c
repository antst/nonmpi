#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Test_cancelled(MPI_Status *status, int *flag) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TEST_CANCELLED,mpi_test_cancelled,(MPI_Status **status,int **flag, FTN_INT *ierr),( status, flag,ierr)){

 /* *ierr=MPI_Test_cancelled(*c_status,*c_flag);/*

}

