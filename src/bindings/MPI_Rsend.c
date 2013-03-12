#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Rsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_RSEND,mpi_rsend,(void **buf,int *count,MPI_Datatype *datatype,int *dest,int *tag,MPI_Comm *comm, FTN_INT *ierr),( buf, count, datatype, dest, tag, comm,ierr)){

 /* *ierr=MPI_Rsend(*c_buf,c_count,c_datatype,c_dest,c_tag,c_comm);*/

}


