#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Barrier(MPI_Comm comm ) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_BARRIER,mpi_barrier,(MPI_Comm *comm , FTN_INT *ierr),( comm ,ierr)){

 /* *ierr=MPI_Barrier(c_comm );*/

}


