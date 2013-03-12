#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_size(MPI_Comm comm, int *size) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_SIZE,mpi_comm_size,(MPI_Comm *comm,int **size, FTN_INT *ierr),( comm, size,ierr)){

 /* *ierr=MPI_Comm_size(c_comm,*c_size);*/

}


