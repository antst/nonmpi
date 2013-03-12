#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Cart_map(MPI_Comm comm, int ndims, int *dims, int *periods, int *newrank) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_CART_MAP,mpi_cart_map,(MPI_Comm *comm,int *ndims,int **dims,int **periods,int **newrank, FTN_INT *ierr),( comm, ndims, dims, periods, newrank,ierr)){

 /* *ierr=MPI_Cart_map(c_comm,c_ndims,*c_dims,*c_periods,*c_newrank);/*

}

