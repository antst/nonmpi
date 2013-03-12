#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Cart_rank(MPI_Comm comm, int *coords, int *rank) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_CART_RANK,mpi_cart_rank,(MPI_Comm *comm,int **coords,int **rank, FTN_INT *ierr),( comm, coords, rank,ierr)){

 /* *ierr=MPI_Cart_rank(c_comm,*c_coords,*c_rank);/*

}

