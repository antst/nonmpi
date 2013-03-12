#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Cart_shift(MPI_Comm comm, int direction, int disp, int *rank_source, int *rank_dest) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_CART_SHIFT,mpi_cart_shift,(MPI_Comm *comm,int *direction,int *disp,int **rank_source,int **rank_dest, FTN_INT *ierr),( comm, direction, disp, rank_source, rank_dest,ierr)){

 /* *ierr=MPI_Cart_shift(c_comm,c_direction,c_disp,*c_rank_source,*c_rank_dest);*/

}


