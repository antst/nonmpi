#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_test_inter(MPI_Comm comm, int *flag) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_TEST_INTER,mpi_comm_test_inter,(MPI_Comm *comm,int **flag, FTN_INT *ierr),( comm, flag,ierr)){

 /* *ierr=MPI_Comm_test_inter(c_comm,*c_flag);/*

}

