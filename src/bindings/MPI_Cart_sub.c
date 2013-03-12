#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Cart_sub(MPI_Comm comm, int *remain_dims, MPI_Comm *newcomm) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_CART_SUB,mpi_cart_sub,(MPI_Comm *comm,int **remain_dims,MPI_Comm **newcomm, FTN_INT *ierr),( comm, remain_dims, newcomm,ierr)){

 /* *ierr=MPI_Cart_sub(c_comm,*c_remain_dims,*c_newcomm);/*

}

