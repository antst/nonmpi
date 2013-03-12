#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Cartdim_get(MPI_Comm comm, int *ndims) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_CARTDIM_GET,mpi_cartdim_get,(MPI_Comm *comm,int **ndims, FTN_INT *ierr),( comm, ndims,ierr)){

 /* *ierr=MPI_Cartdim_get(c_comm,*c_ndims);/*

}

