#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_rank(MPI_Comm comm, int *rank) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_RANK,mpi_comm_rank,(MPI_Comm *comm,int **rank, FTN_INT *ierr),( comm, rank,ierr)){

 /* *ierr=MPI_Comm_rank(c_comm,*c_rank);*/

}


