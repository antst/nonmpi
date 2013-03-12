#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_free(MPI_Comm *comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_FREE,mpi_comm_free,(MPI_Comm **comm, FTN_INT *ierr),( comm,ierr)){

 /* *ierr=MPI_Comm_free(*c_comm);*/

}


