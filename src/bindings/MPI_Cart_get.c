#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Cart_get(MPI_Comm comm, int maxdims, int *dims, int *periods, int *coords) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_CART_GET,mpi_cart_get,(MPI_Comm *comm,int *maxdims,int **dims,int **periods,int **coords, FTN_INT *ierr),( comm, maxdims, dims, periods, coords,ierr)){

 /* *ierr=MPI_Cart_get(c_comm,c_maxdims,*c_dims,*c_periods,*c_coords);/*

}

