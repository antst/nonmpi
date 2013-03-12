#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Topo_test(MPI_Comm comm, int *status) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TOPO_TEST,mpi_topo_test,(MPI_Comm *comm,int **status, FTN_INT *ierr),( comm, status,ierr)){

 /* *ierr=MPI_Topo_test(c_comm,*c_status);/*

}

