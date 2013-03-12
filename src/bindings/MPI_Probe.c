#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status *status) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_PROBE,mpi_probe,(int *source,int *tag,MPI_Comm *comm,MPI_Status **status, FTN_INT *ierr),( source, tag, comm, status,ierr)){

 /* *ierr=MPI_Probe(c_source,c_tag,c_comm,*c_status);*/

}


