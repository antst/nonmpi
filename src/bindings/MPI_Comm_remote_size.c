#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_remote_size(MPI_Comm comm, int *size) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_REMOTE_SIZE,mpi_comm_remote_size,(MPI_Comm *comm,int **size, FTN_INT *ierr),( comm, size,ierr)){

 /* *ierr=MPI_Comm_remote_size(c_comm,*c_size);/*

}

