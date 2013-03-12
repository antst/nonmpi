#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Cart_create(MPI_Comm comm_old, int ndims, int *dims, int *periods, int reorder, MPI_Comm *comm_cart) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_CART_CREATE,mpi_cart_create,(MPI_Comm *comm_old,int *ndims,int **dims,int **periods,int *reorder,MPI_Comm **comm_cart, FTN_INT *ierr),( comm_old, ndims, dims, periods, reorder, comm_cart,ierr)){

 /* *ierr=MPI_Cart_create(c_comm_old,c_ndims,*c_dims,*c_periods,c_reorder,*c_comm_cart);*/

}


