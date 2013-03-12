#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Iprobe(int source, int tag, MPI_Comm comm, int *flag, MPI_Status *status) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_IPROBE,mpi_iprobe,(int *source,int *tag,MPI_Comm *comm,int **flag,MPI_Status **status, FTN_INT *ierr),( source, tag, comm, flag, status,ierr)){

 /* *ierr=MPI_Iprobe(c_source,c_tag,c_comm,*c_flag,*c_status);*/

}


