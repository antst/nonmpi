#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Cart_coords(MPI_Comm comm, int rank, int maxdims, int *coords) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_CART_COORDS,mpi_cart_coords,(MPI_Comm *comm,int *rank,int *maxdims,int **coords, FTN_INT *ierr),( comm, rank, maxdims, coords,ierr)){

 /* *ierr=MPI_Cart_coords(c_comm,c_rank,c_maxdims,*c_coords);/*

}

