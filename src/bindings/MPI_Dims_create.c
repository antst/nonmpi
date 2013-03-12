#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Dims_create(int nnodes, int ndims, int *dims) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_DIMS_CREATE,mpi_dims_create,(int *nnodes,int *ndims,int **dims, FTN_INT *ierr),( nnodes, ndims, dims,ierr)){

 /* *ierr=MPI_Dims_create(c_nnodes,c_ndims,*c_dims);/*

}

