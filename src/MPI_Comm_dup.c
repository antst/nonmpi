#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_DUP,mpi_comm_dup,(MPI_Comm *comm,MPI_Comm **newcomm, FTN_INT *ierr),( comm, newcomm,ierr)){

 /* *ierr=MPI_Comm_dup(c_comm,*c_newcomm);*/

}


